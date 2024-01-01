#include "SDL2/SDL.bi"
#include "crt.bi"
#include "dir.bi"
#define rpi5
const nil as any ptr = 0
'--- basic machne main ram 

union machine_union
  bytes(&h3fffffff) as ubyte
  words(&h1fffffff) as ushort
  longs(&h0fffffff) as ulong
end union  

type sprite_type
  x as ulong
  y as ulong
  w as integer
  h as integer
  sptr as ulong
end type

type md
    d1 as integer 
    d2 as integer
    c1 as ushort
    c2 as ushort
    b as integer
end type

const ibufptr= &h3fffffff-(1920*1080) 
const tbufptr=ibufptr-37*128
const cbufptr=tbufptr-128

dim shared machine as machine_union

dim shared t2(1920*1080-1) as ulong                 'the bitmap for video screen
dim shared bufptr as ulong = ibufptr 'a main framebuffer
dim shared textbufptr as ulong = tbufptr 'a text buffer for basic editor
dim shared cursorptr as ulong=cbufptr
dim shared memtop as ulong= &h3fffffff-(1920*1080)-(37*128) ' interpreter memtop=textbuf at the start
dim shared sprites(17) as sprite_type
dim shared fillstack(256) as integer
dim shared fillptr as integer
dim shared a as integer
dim shared as integer resy=600,resx=1024
dim shared as ulong frames=0
dim sdlversion as SDL_version
dim as integer i,j 
dim shared as integer updated
dim shared as integer font_family=0
dim shared as integer write_color=154, write_background=147
dim shared as integer cursor_x=0,cursor_y=0, cursorshape=14, cursorcolor=154
dim shared as integer leading_spaces=2, st_lines=37
' read definitions
dim shared fonts(3*4096-1) as ubyte
open "st4font.def" for input as #3
get #3,0,fonts(0),2048
close #3
open "vgafont.def" for input as #3
get #3,0,fonts(4096),4096
close #3
open "amigafont.def" for input as #3
get #3,0,fonts(8192),4096
close #3

dim shared mysz(1024) as ubyte
open "mouse2.def" for input as #3
get #3,0,mysz(0),1024
close #3
for i=0 to 1023: machine.bytes(&h7F000+i)=mysz(i): next i

dim shared ataripalette(255) as ulong
open "ataripalettep2.def" for input as #3
get #3,0,ataripalette()
close #3
for i=0 to 255 : ataripalette(i)=ataripalette(i) shr 8 : next i ' the p2 palette has been shifted left as rrggbb00

dim shared as ulong keyq(256)
dim shared as integer keyqs=0,keyqe=0




sub putpixel(x as ulong,y as ulong,c as ubyte)
machine.bytes(bufptr+x+1024*y)=c
end sub

function getpixel(x as ulong,y as ulong) as ubyte
return machine.bytes(bufptr+x+1024*y)
end function

sub fastline(x1 as integer,x2 as integer,y as integer,c as ubyte)									  ' a fast 8bpp horizontal line, to be replaced by fast asm
clear(machine.bytes(bufptr+1024*y+x1),c,x2-x1+1)
end sub


sub draw1(x1 as integer,y1 as integer,x2 as integer,y2 as integer,c as ubyte)              	  ' I had to rename the function for BASIC	
dim as integer d,dx,dy,ai,bi,xi,yi,x,y				

if (y1=y2) then
  fastline(x1,x2,y1,c) ' fastline has to be implemented first
else

x=x1
y=y1

if (x1<x2) then 
  xi=1
  dx=x2-x1
else
  xi=-1
  dx=x1-x2
endif
  
if (y1<y2) then 
  yi=1
  dy=y2-y1
else
  yi=-1
  dy=y1-y2
endif

putpixel(x,y,c)

if (dx>dy) then
  ai=(dy-dx)*2
  bi=dy*2
  d= bi-dx
  do while (x<>x2) 
    if (d>=0) then
      x+=xi
      y+=yi
      d+=ai
    else
      d+=bi
      x+=xi
    endif 
    putpixel(x,y,c)
  loop  
else
  ai=(dx-dy)*2
  bi=dx*2
  d=bi-dy
  do while (y<>y2)
    if (d>=0) then
      x+=xi
      y+=yi
      d+=ai
    else
      d+=bi
      y+=yi
    endif
  putpixel(x, y,c)
  loop
endif
endif
end sub  


sub line1(x1 as integer,y1 as integer,x2 as integer,y2 as integer,c as ubyte)  								' this is a "draw" alias
draw1(x1,y1,x2,y2,c)
end sub 

sub fcircle(x0 as integer,y0 as integer,r as integer,c as ubyte)

dim as integer d,x,y,da,db

d=5-4*r
x=0
y=r
da=(-2*r+5)*4
db=3*4
do while (x<=y) 
  fastline(x0-x,x0+x,y0-y,c)
  fastline(x0-x,x0+x,y0+y,c)
  fastline(x0-y,x0+y,y0-x,c)
  fastline(x0-y,x0+y,y0+x,c)
  if d>0 then
    d+=da
    y-=1
    x+=1
    da+=4*4
    db+=2*4
  else
    d+=db
    x+=1
    da+=2*4
    db+=2*4
  endif  
loop

end sub


sub ecircle(x0 as integer,y0 as integer,r as integer,c as ubyte)

dim as integer d,x,y,da,db 

d=5-4*r
x=0
y=r
da=(-2*r+5)*4
db=3*4
do while (x<=y) 
  putpixel(x0-x,y0-y,c)
  putpixel(x0-x,y0+y,c)
  putpixel(x0+x,y0-y,c)
  putpixel(x0+x,y0+y,c)
  putpixel(x0-y,y0-x,c)
  putpixel(x0-y,y0+x,c)
  putpixel(x0+y,y0-x,c)
  putpixel(x0+y,y0+x,c)
  if d>0 then 
    d+=da
    y-=1
    x+=1
    da+=4*4
    db+=2*4
  else
    d+=db
    x+=1
    da+=2*4
    db+=2*4
  endif
loop  
end sub

'-- A frame (an empty rectangle) ---------------------------------------

sub frame(x1 as integer,y1 as integer,x2 as integer,y2 as integer,c as ubyte) 

fastline(x1,x2,y1,c)
fastline(x1,x2,y2,c)
line1(x1,y1,x1,y2,c)
line1(x2,y1,x2,y2,c)
end sub

'-- A box (a filled rectangle) ----------------------------------------

sub box(x1 as integer,y1 as integer,x2 as integer,y2 as integer,c as ubyte) 

dim as integer yy

for yy = y1 to y2
  fastline(x1,x2,yy,c)
next yy
end sub
    
    
' ****************************************************************************************************************
'                                                                       		 			*
'  Characters on graphic screen                                          					*
'                                                                       					*
' ****************************************************************************************************************    

' ------  Transparent character

sub putcharxycf(x as integer,y as integer ,achar as ubyte,f as ubyte) 

dim as integer xx, yy, bb

for yy = 0 to 15
  bb=fonts(4096*font_family+16*achar+yy)
  for xx = 0 to 7
    if (bb and (1 shl xx))<>0 then
      putpixel(xx+x,yy+y,f)
    endif
  next xx
next yy
end sub

' ------  Opaque character  

sub putcharxycg(x as integer,y as integer ,achar as ubyte,f as ubyte, b as ubyte) 

dim as integer xx, yy, bb

for yy = 0 to 15
  bb=fonts(4096*font_family+16*achar+yy)
  for xx = 0 to 7
    if (bb and (1 shl xx))<>0 then
      putpixel(xx+x,yy+y,f)
    else
      putpixel(xx+x,yy+y,b)
    endif
  next xx
next yy
end sub        
        
sub putcharxycgf(x as integer,y as integer ,achar as ubyte,f as ubyte, b as ubyte) 
putcharxycg(4*x,16*y+4,achar,f,b) ' to be replaced by fast asm
end sub     

'' ----- String output using above          

sub outtextxycg(x as integer,y as integer,text as string,f as ubyte,b as ubyte) 

dim as integer iii

for iii = 1 to len(text)
  putcharxycg(x+8*iii,y,asc(mid$(text,iii,1)),f,b)
next iii  
end sub

sub outtextxycf(x as integer,y as integer,text as string,f as ubyte) 

dim as integer iii

for iii = 1 to len(text)
  putcharxycf(x+8*iii-8,y,asc(mid$(text,iii,1)),f)
next iii  
end sub

' ------------------- Flood fill
 
sub fillpush(v as integer) 
fillstack(fillptr)=v
fillptr+=1   
end sub

    
function fillpop() as integer

dim v as integer

fillptr-=1
if fillptr<0 then
  fillptr=0
  v=-12345
else 
  v=fillstack(fillptr)
endif
return v
end function

      
sub fill(x as integer ,y as integer,newcolor as integer,oldcolor as integer)

dim as integer x1, spanabove, spanbelow, ov

newcolor=newcolor and 255
oldcolor=oldcolor and 255

if (oldcolor = newcolor) then return

fillptr=0
fillpush(x)
fillpush(y)
y=fillpop()
x=fillpop()
do while (x>-1)       
  x1 = x
  do while((x1 >= 0) and (getpixel(x1,y) = oldColor))
    x1-=1
  loop  
  x1+=1
  spanabove = 0
  spanbelow = 0
  do while ((x1 < 1024) and getpixel(x1,y) = oldColor)
    putpixel (x1,y, newcolor and 255)
    if ((spanabove = 0) and (y > 0) and (getpixel(x1,y-1) = oldColor)) then
      fillpush(x1)
      fillpush(y-1)
      spanabove = 1 
    elseif ((spanabove<>0) and (y > 0) and (getpixel(x1,y-1)<> oldColor)) then
      spanabove = 0
    endif   
    if((spanbelow = 0 ) and (y < 599) and getpixel(x1,y+1) = oldColor) then
      fillpush(x1)
      fillpush(y + 1)
      spanBelow = 1
    elseif((spanbelow<>0) and (y < 599) and (getpixel(x1,y + 1) <> oldColor)) then
      spanbelow = 0
    endif  
    x1+=1
  loop
  y=fillpop()
  x=fillpop()
loop  
end sub  

''-----------  Scroll the screen one line up

sub scrollup(start as integer=0, aend as integer=600 , amount as integer=16)  

dim i as integer	
memmove(@machine.bytes(bufptr+start*1024),@machine.bytes(bufptr+(start+amount)*1024),(aend-start-amount)*1024)  
for i = aend-amount to aend-1
  fastline(0,1023,i,write_background)   
next i

end sub    
' a version for text scrolling in Basic shifted 4 lines down

sub scrollup2() 
	
dim i as integer	
memmove(@machine.bytes(bufptr+4*1024),@machine.bytes(bufptr+20*1024),592*1024)    

for i = 580 to 599
  fastline(0,1023,i,write_background)   
next i
for i = 0 to 3
  fastline(0,1023,i,write_background)   
next i 
 
memmove(@machine.bytes(textbufptr),@machine.bytes(textbufptr+128),36*128)
clear(machine.bytes(textbufptr+(36*128)),32,128) 
end sub


'*************************************************************************
'                                                                        *
'  Cursor functions                                                      *
'                                                                        *
'*************************************************************************
sub setspritepos(s as integer, x as integer, y as integer)

sprites(s).x=x
sprites(s).y=y
end sub

sub setspritesize(s as integer, w as integer, h as integer)

sprites(s).w=w
sprites(s).h=h
end sub

sub setspriteptr(s as integer, sptr as ulong)

sprites(s).sptr=sptr
end sub

sub setcursorpos(x as integer,y as integer)

''---------- Set the (x,y) position of cursor

cursor_x=x
cursor_y=y
setspritepos(17,4*cursor_x,16*cursor_y+4 )
end sub

sub position(x as integer,y as integer)
setcursorpos(x,y)
end sub

function getcursorx() as integer
return cursor_x
end function

function getcursory() as integer
return cursor_y
end function

sub setcursorx(x as integer)
cursor_x=x
setspritepos(17,4*cursor_x,16*cursor_y+4 )
end sub

sub setcursory(y as integer) 
cursor_y=y
setspritepos(17,4*cursor_x,16*cursor_y+4)
end sub

sub setcursorshape(shape as integer)

dim i as integer

cursorshape=shape
for i=0 to (8*cursorshape)-1
  machine.bytes(cursorptr+i)=0
next i
for i= 8*cursorshape to 127
  machine.bytes(cursorptr+i)=cursorcolor
next i
end sub

sub setcursorcolor(acolor as ubyte) 

dim i as integer

cursorcolor=acolor
for i=0 to (8*cursorshape)-1
  machine.bytes(cursorptr+i)=0
next i
for i= 8*cursorshape to 127
  machine.bytes(cursorptr+i)=cursorcolor
next i
end sub

'---------------------------- initialize a cursor (MSDOS type)

sub initcursor(acolor as ubyte)

dim i as integer

cursor_x=0							' place the cursor at 0:0
cursor_y=0
for i = 0 to 111
  machine.bytes(cursorptr+i)=0
next i  
for i = 112 to 127
  machine.bytes(cursorptr+i)=acolor
next i    

setspriteptr(17,cursorptr)
setspritesize(17,8,16)
setspritepos(17,0,0)
cursorshape=14
cursorcolor=acolor
end sub

sub setwritecolors(ff as ubyte,bb as ubyte)

write_color=ff
write_background=bb
end sub

sub cls1(fc as ubyte,bc as ubyte)

clear(machine.bytes(bufptr),bc, 1920*1080-1 )
clear(machine.bytes(textbufptr),32, bufptr-textbufptr)
setwritecolors(fc,bc)
cursor_x=0
cursor_y=0
setspritepos(17,4*cursor_x,16*cursor_y+4 )
setcursorcolor(fc)
end sub
  

sub setleadingspaces(amount as integer)

leading_spaces=amount
end sub

''----------- Set cursor at the first character in a new line, scroll if needed 

sub crlf()

cursor_x=leading_spaces*2
cursor_y+=1
if cursor_y>st_lines-1 then
  scrollup2()
  cursor_y=st_lines-1
endif
setspritepos(17,4*cursor_x,16*cursor_y+4 )  
end sub

''---------- Backspace. Move the cursor back, clear a character

sub bksp()

cursor_x-=1
if cursor_x=-1 then
  cursor_x=255
  cursor_y-=1
  if cursor_y=-1 then
    cursor_y=0
    scrollup2()
  endif
endif    
setspritepos(17,4*cursor_x,16*cursor_y )  
outtextxycg(cursor_x,cursor_y," ",write_color,write_background)

end sub


''---------- Output a char at the cursor position, move the cursor 

sub putchar1(achar as ubyte) 

dim as integer c,x,y,l,newcpl

if achar=10 then crlf()
if achar=9 then cursor_x=(cursor_x and &b11110000)+16
  
if (achar<>9) and (achar<>10) then
  putcharxycgf(cursor_x,cursor_y,achar,write_color,write_background)
  machine.bytes(textbufptr+128*cursor_y+cursor_x/2)=achar
  cursor_x+=2
endif
if cursor_x>=256 then
  cursor_x=0
  cursor_y+=1
  if cursor_y>st_lines-1 then
    scrollup2()
    cursor_y=st_lines-1
  endif
endif    
setspritepos(17,4*cursor_x,16*cursor_y+4 )
end sub
    
    
''---------- Output a char at the cursor position, move the cursor, don't react for tab or lf 

sub putchar2(achar as ubyte)

dim as integer c,x,y,l,newcpl 

putcharxycgf(cursor_x,cursor_y,achar,write_color,write_background)
machine.bytes(textbufptr+128*cursor_y+(cursor_x/2))=achar
cursor_x+=2
if cursor_x>=256 then
  cursor_x=0
  cursor_y+=1
  if cursor_y>st_lines-1 then
    scrollup2()
    cursor_y=st_lines-1
  endif
endif    
setcursorpos(cursor_x,cursor_y)
end sub
 
''--------- Output a string at the cursor position, move the cursor  

sub write1(text as string) 

dim  as integer iii,c,ncx,ncy

for iii=1 to len(text)  : putchar2(asc(mid$(text,iii,1))) : next iii
end sub

'--------- Output a string at the cursor position x,y, move the cursor to the next line -

sub writeln(text as string)

write1(text)
crlf
end sub

/'    


 




'**********************************************************************r***
'                                                                        *
' Font related functions                                                 *
'                                                                        *
'*************************************************************************

''--------- Set a font offset. TODO: remove, use byte#1 instead

pub setfontfamily(afontnum)

font_family:=afontnum
'if afontnum==8
'  font_ptr:=@amiga_font

if afontnum==4
  font_ptr:=@st_font
if afontnum==0
  font_ptr:=@vga_font
  

''--------- Get a pointer to a font definition

pub getfontaddr(num)

if num==1
  return @vga_font
if num==2
  return @st_font
if num==3
  return @a8_font  

''--------- Redefine a character

pub defchar(ch,ptr) | s,i ' 

s:=font_ptr+ch*16
repeat i from 0 to 15
  byte[s+i]:=byte[ptr+i]


'*************************************************************************
'                                                                        *
'  Cursor functions                                                      *
'                                                                        *
'*************************************************************************



'*************************************************************************
'                                                                        *
'  VBlank functions                                                      *
'                                                                        *
'*************************************************************************

pub waitvbl(amount) | i

''---------- Wait for start of vblank. Amount=delay in frames

repeat i from 1 to amount
  repeat until vblank==0
    waitus(100)
  repeat until vblank==1
    waitus(100)


pub waitvblend(amount) | i

''---------- Wait for end of vblank. Amount=delay in frames

repeat i from 1 to amount
  repeat until vblank==1
    waitus(100)
  repeat until vblank==0
    waitus(100)

'*************************************************************************
'                                                                        *
'  Color functions                                                       *
'                                                                        *
'*************************************************************************

''---------- Get a VGA color code

pub getvgacolor(color):r

return colors[color]

pub getpalettecolor(color):r

return long[palette_ptr+4*color]



''---------- Set the border color

pub setbordercolor(r,g,b) | color

color:=r<<24+g<<16+b<<8
bordercolor:=color

pub setbordercolor2(color) 

bordercolor:=color


''---------- Set colors for putchar, write and writeln

pub setwritecolors(ff,bb)

write_color:=ff
write_background:=bb

''---------- Set color #c in palette to r,g,b

pub setcolor(c,r,g,b)  |cc

cc:=r<<24+g<<16+b<<8
long[palette_ptr+4*c]:=cc

pub getcolor(c) :r
return long[@ataripalette+4*c]

'*************************************************************************
'                                                                        *
'  Text functions                                                        *
'                                                                        *
'*************************************************************************

''---------- Clear the screen, set its foreground/background color  

pub setleadingspaces(amount)

leading_spaces:=amount



''---------- Output a char at the cursor position, move the cursor 

pub putchar(achar) | c,x,y,l,newcpl

if achar==10
  crlf()
if achar==9
  cursor_x:=(cursor_x& %11110000)+16
  
if (achar<>9) && (achar<>10) 
  putcharxycgf(cursor_x,16*cursor_y+4,achar,write_color,write_background)
  ram.fill(textbuf_ptr+(timings[7]*cursor_y+(cursor_x>>1)),achar,1,0,1)
  cursor_x+=2

if cursor_x>=256
  cursor_x:=0
  cursor_y+=1
  if cursor_y>st_lines-1
    scrollup2()
    cursor_y:=st_lines-1
setspritepos(17,4*cursor_x,16*cursor_y+4 )
    
''---------- Output a char at the cursor position, move the cursor, don't react for tab or lf 

pub putchar2(achar) | c,x,y,l,newcpl

putcharxycgf(cursor_x,16*cursor_y+4,achar,write_color,write_background)
ram.fill(textbuf_ptr+(timings[7]*cursor_y+(cursor_x>>1)),achar,1,0,1)

cursor_x+=2
if cursor_x>=256
  cursor_x:=0
  cursor_y+=1
  if cursor_y>st_lines-1
    scrollup2()
    cursor_y:=st_lines-1
setspritepos(17,4*cursor_x,16*cursor_y+4 ) 
''--------- Output a string at the cursor position, move the cursor  

pub write(text) | iii,c,ncx,ncy

repeat iii from 0 to strsize(text)-1
  putchar2(byte[text+iii])

'--------- Output a string at the cursor position x,y, move the cursor to the next line -

pub writeln(text)

write(text)
crlf

 
 
''----------- Scroll the screen one line down 

pub scrolldown(start=0) | i

repeat i from 579 to (start*16)+4
  ram.read1($7E800, s_buf_ptr+i*4*s_cpl1, 4*s_cpl1)
  ram.write($7E800, s_buf_ptr+(i+16)*4*s_cpl1, 4*s_cpl1)

repeat i from (start*16)+4 to (start*16)+19
   fastline(0,1023,i,write_background)    
   
repeat i from 35 to start
  ram.read1($7E800, textbuf_ptr+(i*128), 128)
  ram.write($7E800, textbuf_ptr+(i+1)*128,128)
repeat i from 0 to 127
  ram.fill((textbuf_ptr+start*128+i),32,1,0,1)      

''----------- Set cursor at the first character in a new line, scroll if needed 

pub crlf()

cursor_x:=leading_spaces*2
cursor_y+=1
if cursor_y>st_lines-1
  scrollup2()
  cursor_y:=st_lines-1
setspritepos(17,4*cursor_x,16*cursor_y+4 )  
''---------- Backspace. Move the cursor back, clear a character

pub bksp()

cursor_x-=1
if cursor_x==255
  cursor_x:=s_cpl-1
  cursor_y-=1
  if cursor_y==255
    cursor_y:=0
    scrollup2()
setspritepos(17,4*cursor_x,16*cursor_y )  

outtextxycg(cursor_x,cursor_y,string(" "),write_color,write_background)


'*************************************************************************
'                                                                        *
'  Conversions                                                           *
'                                                                        *
'*************************************************************************

''---------- Convert a integer to dec string, return a pointer

pub inttostr(i):result |q,pos,k,j

j:=i
pos:=10
k:=0

if (j==0)
  n_string[0]:=48
  n_string[1]:=0

else
  if (j<0)
    j:=0-j
    k:=45

  n_string[11]:=0
  repeat while (pos>-1)
    q:=j//10
    q:=48+q
    n_string[pos]:=q
    j:=j/10
    pos-=1
  repeat while n_string[0]==48
    bytemove(@n_string,@n_string+1,12)

  if k==45
     bytemove(@n_string+1,@n_string,12)
     n_string[0]:=k

q:=@n_string
return q

''---------- Convert a integer to dec string using d digits, return a pointer

pub inttostr2(i,d):result |q,pos,k,j

j:=i
pos:=d-1
k:=0

n_string[d]:=0
repeat k from 0 to d-1
  n_string[k]:=48

if (j<>0)

  repeat while (pos>-1)
    q:=j+//10
    q:=48+q
    n_string[pos]:=q
    j:=j+/10
    pos-=1


q:=@n_string
return q

''----------  Convert unsigned integer to hex string with d digits, return a pointer

pub inttohex(i,d):result |q,pos,k,j

j:=i
pos:=d-1
k:=0
n_string[d]:=0
repeat k from 0 to d-1
  n_string[k]:=48
if (j<>0)

  repeat while (pos>-1)
    q:=j+//16
    if (q>9)
      q:=q+7
    q:=48+q
    n_string[pos]:=q
    j:=j+/16
    pos-=1

q:=@n_string
return q


pub setpalette(colors)

if colors==256 
  palette_ptr:=@ataripalette

'**********************************************************************************
'
'        Blitting
'
'**********************************************************************************

pub blit(f,x1a,y1a,x2a,y2a,s1,t,x1b,y1b,s2) | y

if ((f>=$80000) && (t>=$80000)) ' todo: check if the fields overlap and reorder the move
  if x1a>x2a
    x1a,x2a:=x2a,x1a
  if y1a>y2a
    y1a,y2a:=y2a,y1a  
  if x2a-x1a>1023 
    x2a:=x1a+1023 ' limit the line to 1024
  if t+x1a+y1a*s1>f+x1b+y1b*s2
    repeat y from y1a to y2a
  '    writeln(string("I am here"))
      ram.read1($7E800, f+(y)*s1+x1a, x2a-x1a+1)
      ram.write($7E800, t+(y1b-y1a+y)*s2+x1b, x2a-x1a+1)
  else
    repeat y from y2a to y1a
 '     writeln(string("I am there"))
      ram.read1($7E800, f+(y)*s1+x1a, x2a-x1a+1)
      ram.write($7E800, t+(y1b-y1a+y)*s2+x1b, x2a-x1a+1)     
    
if ((f>=$80000) && (t<$80000)) 
  repeat y from y1a to y2a
    ram.read1(t+(y1b-y1a+y)*s2+x1b,f+(y)*s1+x1a,x2a-x1a+1)
    
if ((f<$80000) && (t>=$80000)) 
  t:=t & $FFFFFFF
  repeat y from y1a to y2a
    ram.write(f+(y)*s1+x1a,t+(y1b-y1a+y)*s2+x1b,x2a-x1a+1)
    
if ((f<$80000) && (t<$80000)) 
  repeat y from y1a to y2a
    bytemove (f+(y)*s1+x1a,t+(y1b-y1a+y)*s2+x1b,x2a-x1a+1)
 '/




sub translate_screen

dim as any pointer p2p,p3p ,pp
dim as integer sw,sh,bw,bhe,bc
p2p=@t2(0)
p3p=@machine.bytes(bufptr)
pp=@ataripalette(0)
'sw=1920*1080
sw=1024
sh=600
bc=64
bw=128
bhe=60*1280

#if (defined (__FB_ARM__ )) and  (defined (__FB_64BIT__))

      asm
      ldr x0,p2p          ' main sdl fb
      ldr x1,p3p          ' 8 bpp fb
      ldr x2,pp           ' palette ptr
      ldr w9,bc
      ldr w4,sh

      ldr w3,bhe
p5:   str w9,[x0],#4
      subs x3,x3,#1
      cbnz x3,p5

p2:   ldr w3,sw
      ldr w8,bw
     
p3:   str w9,[x0],#4
      subs x8,x8,#1
      cbnz x8,p3
      
p1:   ldrb w5,[x1],#1
      add x5,x2,x5,lsl #2
      ldr w6,[x5] 
      str w6,[x0],#4
      subs w3,w3,#1
      cbnz w3,p1
      
      ldr x8,bw 
p4:   str w9,[x0],#4
      subs x8,x8,#1
      cbnz x8,p4      
      
      subs x4,x4,#1
      cbnz x4,p2
      
      ldr w3,bhe
p6:   str w9,[x0],#4
      subs x3,x3,#1
      cbnz x3,p6
      
      end asm
      
      
#else
dim as integer i
for i=0 to sw-1 : t2(i)=ataripalette(machine.bytes(bufptr+i)) : next i
#endif

end sub

sub sprite1

dim as any pointer p2p,p3p ,pp
dim as integer sy,sx,spt,sw,sh,so,i

p2p=@t2(0)
p3p=@machine.bytes(0)
pp=@ataripalette(0)
for i=0 to 17-((frames/16) mod 2)
  sx=sprites(i).x
  sy=sprites(i).y

  sw=sprites(i).w
  sh=sprites(i).h
  spt=sprites(i).sptr
  so=5120*sy+4*sx+512+60*5120
  if sx>=1024 then goto a201
  if sy>=600 then goto a201 
  ' correct the y and the rest of coordinates to not draw outside the screen

      asm
      ldr x0,p2p          ' main sdl fb
      ldr w1,spt           ' sprite pointer
      ldr x2,p3p
      add x1,x1,x2
      ldr x2,pp           ' palette ptr
      ldr w4,so
      add x0,x0,x4
      ldr w7,sh
       ldr w3,sw
      
a102: ldrb w5,[x1],#1
      cbz w5,a103
      add x5,x2,x5,lsl #2
      ldr w6,[x5] 
      str w6,[x0],#4
      b a104
a103: add x0,x0,#4

a104: subs w3,w3,#1
      cmp w3,#0
      b.ne a102

      add x0,x0,#4096
      add x0,x0,#1024
      ldr w3,sw
      sub x0,x0,x3,lsl #2

      subs w7,w7,#1
      cmp w7,#0
      b.ne a102
      end asm
a201: next i
end sub




'---------------------------------------------------------------------------------------------------------------------------------
' the thread for the SDL displaying 8bpp

declare function scantochar(keycode as ulong) as ubyte
sub sdlthread(qq as any pointer)
SDL_Init(SDL_INIT_VIDEO)


SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "best")' // make the scaled rendering look smoother.
SDL_SetHint(SDL_HINT_RENDER_OPENGL_SHADERS, "1")' // make the scaled rendering look smoother.
var win= SDL_CreateWindow( "The Retromachine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280,720 , SDL_WINDOW_shown)
dim displaymode as sdl_displaymode
sdl_getcurrentdisplaymode(0,@displaymode)
displaymode.refresh_rate=50
displaymode.w=1280
displaymode.h=720
sdl_setwindowdisplaymode(win,@displaymode)
var renderer = SDL_CreateRenderer(win, -1, 14) '  // hardware+vsync+texture   14
var sdlTexture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STreaming,1280,720)  
SDL_RenderSetLogicalSize(renderer,1280,720)
sdl_warpmouseinwindow(win,512,300)
 sdl_showcursor(sdl_disable)
dim as ulong i,j ,mx,my
dim q as double
for i=0 to 599: for j=0 to 1023 : t2(1024*i+j)=0: next j : next i
do
 ' if updated=1 then
    updated=0
    frames+=1
    translate_screen
    sdl_getmousestate(@sprites(16).x,@sprites(16).y)
    sprite1
    SDL_UpdateTexture(sdlTexture, NULL, @t2(0), 1280 * 4)
    SDL_RenderClear(renderer)
    SDL_RenderCopy(renderer, sdltexture, NULL, NULL)
    SDL_RenderPresent(renderer)

 '   sleep(200,1)
 '    SDL_RenderPresent(renderer)
 'endif
  dim event as SDL_Event
  while SDL_PollEvent(@event)
    select case event.type
      case SDL_QUIT_
	      exit do
      case SDL_KEYDOWN
        if event.key.keysym.sym = SDLK_ESCAPE then 
          exit do
        else
          var ch=scantochar(event.key.keysym.scancode+(event.key.keysym.mod_ shl 16))
          if (keyqe-keyqs)<>-1 andalso (keyqe-keyqs)<>255 andalso ch>0 then 
            keyq(keyqe)=ch
            keyqe=(keyqe+1) mod 256
          endif
        endif  
    end select
  wend 

loop

SDL_DestroyTexture(sdltexture)
SDL_DestroyRenderer(renderer)
SDL_DestroyWindow(win)
SDL_Quit()
a=0
end sub





' ------------------------- interpreter start

const ver_="RPi5 Retromachine BASIC version 0.01"
const ver=1

'' ------------------------------- Keyboard constants

const   key_enter=141    
const   key_escape=155    
const   key_backspace=136 
const   key_tab=137       
const   key_f1=186        
const   key_f2=187        
const   key_f3=188        
const   key_f4=189        
const   key_f5=190        
const   key_f6=191       
const   key_f7=192       
const   key_f8=193     
const   key_f9=194      
const   key_f10=195     
const   key_f11=196       
const   key_f12=197        
const   key_rightarrow=206 
const   key_leftarrow=207  
const   key_downarrow=208  
const   key_uparrow=209    

' ---------------------------------- Tokens 

const token_plus=1
const token_minus=2
const token_or=3
const token_xor=4
const token_mul=5
const token_fdiv=6
const token_and=7
const token_div=8
const token_mod=9
const token_shl=10
const token_shr=11
const token_power=12
const token_not=13
const token_at=14
const token_gt=15
const token_lt=16
const token_comma=17
const token_semicolon=18
const token_ear=19
const token_rpar=20
const token_lpar=21
const token_colon=22
const fun_getvar=17  		' at runtime, reuse non-function tokens with functions that have no compile time tokens
const fun_getaddr=18
const fun_getfvar=19
const fun_getsvar=20
const fun_negative=21
const fun_converttoint=22
const fun_assign=23
const fun_assign_i=23
const fun_assign_u=24
const fun_assign_f=25
const fun_assign_s=26
const token_eq=27
const fun_pushi=28
const fun_pushu=29
const fun_pushf=30
const fun_pushs=31
const print_mod_empty=32
const print_mod_comma=33
const print_mod_semicolon=34
const token_linenum_major=35
const token_linenum_minor=36
const token_nextline_ptr=37
const token_le=38
const token_ge=39
const token_inc=40
const token_dec=41
const token_ne=42
const fun_pushs2=43
const token_channel=44
const token_skip=45

const token_cls=64
const token_new=65
const token_plot=66
const token_draw=67
const token_print=68
const token_circle=69
const token_fcircle=70
const token_box=71
const token_frame=72
const token_color=73
const token_for=74
const token_next=75
const token_list=76
const token_run=77
const token_fast_goto=78
const token_slow_goto=79
''const token_csave=80 to reimplement in 1.1
const token_save=81
const token_load=82
const token_find_goto=83
const token_rnd=84
const token_pinwrite=85
const token_waitms=86
const token_waitvbl=87
const token_if=88
const token_brun=89
const token_else=90
const token_then=91
const token_beep=92
const token_dir=93
const token_paper=94
const token_ink=95
const token_font=96
const token_mode=97
const token_gettime=98
const token_mouse=99
const token_mousex=100
const token_mousey=101
const token_mousek=102
const token_mousew=103
const token_cursor=104
const token_click=105
const token_stick=106
const token_sin=107
const token_defsprite=108
const token_sprite=109
const token_strig=110
const token_getpixel=111
const token_waitclock=112
const token_fill=113
const token_dim=114
const token_defsnd=115
const token_defenv=116
const token_play=117
const token_rdpin=118
const token_wxpin=119
const token_wypin=120
const token_wrpin=121
const token_rqpin=122
const token_pinread=123
const token_pinfloat=124
const token_pinlo=125
const token_pinhi=126
const token_pinstart=127
const token_pintoggle=128
const token_position=129
const token_cos=130
const token_tan=131
const token_asin=132
const token_acos=133
const token_atn=134
const token_sqr=135
const token_rad=136
const token_deg=137
const token_int=138
const token_setvol=139
const token_setpan=140
const token_setlen=141
const token_setdelay=142
const token_setwave=143
const token_setenv=144
const token_setsustain=145
const token_release=146
const token_getenvsustain=147
const token_getnotevalue=148
const token_poke=149
const token_dpoke=150
const token_lpoke=151
const token_peek=152
const token_dpeek=153
const token_lpeek=154
const token_adr=155
const token_fre=156
const token_inkey=157
const token_abs=158
const token_chr=159
const token_val=160
const token_str=161
const token_bin=162
const token_hex=163
const token_left=164
const token_right=165
const token_mid=166
const token_asc=167
const token_len=168
const token_gosub=169
const token_return=170
const token_progend=171
const token_pop=172
const token_log=173
const token_changefreq=174
const token_changevol=175
const token_changewave=176
const token_changepan=177
const token_shutup=178
const token_open=179	
const token_close=180
const token_input=181	 
const token_read=182	
const token_data=183	
'' const token_cload=184	'to implement in 1.1
const token_blit=185	
'' const token_playsample=186   'to implement before 1.0, after a new audio driver is ready. ps. channel,pointer,freq,vol,lstart,lend
const token_get=187	 
const token_put=188	 
const token_enter=189	 
const token_rem=190	
const token_round=191	
const token_coginit=192  
const token_on=193	
const token_delete=194  
const token_cd=195     
const token_copy=196    
const token_framebuf=197'
const token_mkdir=198
const token_restore=199
const token_padx=200    
const token_pady=201
const token_padz=202
const token_padh=203
const token_padrx=204     
const token_padry=205
const token_padrz=206
const token_cogstop=207
const token_memlo=208
const token_memtop=209
const token_setcolor=210
const token_getcolor=211
const token_restorepalette=212
const token_pads=213
const token_padw=214
const token_findfirst=215
const token_findnext=216
const token_defchar=217

const token_error=255
const token_end=510
const token_space=511
const token_decimal=512
const token_integer=513
const token_float=514
const token_string=515
const token_name=516
const token_notename=768

 
' ----------------------------- Expression results/variable types. Variable type encodes its own push function in the compiled line

const result_int=fun_pushi      	
const result_uint=fun_pushu
const result_float=fun_pushf
const result_string=fun_pushs
const result_string2=fun_pushs2
const result_array=token_dim
const result_error=token_error
const result_channel=token_channel

' ---------------------------- Arrays

const array_no_type=0+256
const array_byte=1+256
const array_ubyte=2+256
const array_short=3+256
const array_ushort=4+256
const array_long=5+256
const array_ulong=6+256
const array_int64=7+256
const array_uint64=8+256
const array_float=9+256
const array_double=10+256
const array_string=11+256

' ----------------------------  max number of variables and stack depth
const maxvars=1024       
const maxstack=512
const maxfor=64
const maxgosub=64

'----------------------------- Basic program starts here
const memlo=&h80000

'----------------------------- Audio stuff

dim shared envbuf(7,255) as ushort			' envelope buffer
dim shared envbuf8(7,512) as ubyte ' the same for 8-bit access
dim shared notetable(11) as single			' one octave note frequencies		' 
dim shared noteperiods(11) as integer			' Paula periods for notes, one octave

dim shared as ubyte keys(511)={_
 0,0,0,0,_ 			 
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 97,65,23,14,_
 98,66,0,0,_
 99,67,25,16,_
 100,68,0,0,_
 101,69,24,15,_
 102,70,0,0,_
 103,71,0,0,_
 104,72,0,0,_
 105,73,0,0,_
 106,74,0,0,_
 107,75,0,0,_
 108,76,31,22,_
 _
 109,77,0,0,_
 110,78,26,17,_
 111,79,30,21,_
 112,80,0,0,_
 113,81,0,0,_
 114,82,0,0,_
 115,83,27,18,_
 116,84,0,0,_
 117,85,0,0,_
 118,86,0,0,_
 119,87,0,0,_
 120,88,28,19,_
 121,89,0,0,_
 122,90,29,20,_
 49,33,4,0,_
 50,64,5,0,_
 _
 51,35,6,0,_
 52,36,7,0,_
 53,37,8,0,_
 54,94,9,0,_
 55,38,10,0,_
 56,42,11,0,_
 57,40,12,0,_
 48,41,13,0,_
 141,141,0,0,_
 155,155,0,0,_
 136,136,0,0,_
 137,137,0,0,_
 32,32,0,0,_
 45,95,0,0,_
 61,43,0,0,_
 91,123,0,0,_
 _
 93,125,0,0,_
 92,124,0,0,_
 35,126,0,0,_
 59,58,0,0,_
 39,34,0,0,_
 96,126,3,0,_
 44,60,0,0,_
 46,62,0,0,_
 47,63,0,0,_
 0,0,0,0,_
 186,0,0,0,_
 187,0,0,0,_
 188,0,0,0,_
 189,0,0,0,_
 190,0,0,0,_
 191,0,0,0,_
_
 192,0,0,0,_
 193,0,0,0,_
 194,0,0,0,_
 195,0,0,0,_
 196,0,0,0,_
 197,0,0,0,_
 198,0,0,0,_
 199,0,0,0,_
 200,0,0,0,_
 201,0,0,0,_
 202,0,0,0,_
 203,0,0,0,_
 127,127,0,0,_
 204,0,0,0,_
 205,0,0,0,_
 206,0,0,0,_
 207,0,0,0,_
 208,0,0,0,_
 209,0,0,0,_
 0,0,0,0,_
 47,47,0,0,_
 42,42,0,0,_
 45,45,0,0,_
 43,43,0,0,_
 141,141,0,0,_
 49,49,0,0,_
 50,50,0,0,_
 51,51,0,0,_
 52,52,0,0,_
 53,53,0,0,_
 54,54,0,0,_
 55,55,0,0,_
 56,56,0,0,_
 57,57,0,0,_
 48,48,0,0,_
 46,127,0,0,_
 92,124,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 61,61,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0}

function scantochar(keycode as ulong) as ubyte

var modifier=keycode shr  16
keycode=keycode and 255 

if keycode<128 then
select case (modifier) 'Rs=2 Ls=1 Ra=200 La=100 Rc=80 Lc=40 Win=400 CL=2000 NL=1000 SL=8000
case 0,&h2001            : return keys(4*(keycode and 127)) ' nothing or shift+caps
case 1,2,&h2000         : return keys(4*(keycode and 127)+1) ' shift
case &h200 	            : return keys(4*(keycode and 127)+2) ' RAlt
case &h201,&h202,&h2200 : return keys(4*(keycode and 127)+3) ' RAlt+shift
end select
else
return 0
endif
end function



''-----------------------------------------------------------------------------------------
''---------------------------------- Classes and types ------------------------------------
''-----------------------------------------------------------------------------------------
type part                       ' source code line part
  part_ as string
  token as integer
end type

union aresult			' one long for all result types (until I implement double and int64)
  iresult as integer
  uresult as ulong
  sresult as string ptr
  fresult as double
  ulresult as ulongint     	' make an 8 byte placeholder for in64 and double
  twowords(1) as ulong 	' and allow single word access to it
end union
  
type expr_result		' general variable, not only expression result :) 
  result as aresult
  result_type as ulong  
end type

type variable		' variable table enttry
  name as string
  value as aresult
  vartype as ulong
end type 

type for_entry			' for-next loop table entry
  lineptr as ulong 		' line that will be executed after next
  cmdptr as ulong  		' pointer to a command in this line
  varnum as integer  	' variable to modify and check
  stepval as integer
  endval as integer
end type

type gosub_entry		' gosub stack entry
  lineptr as ulong 		' line that will be executed after next
  cmdptr as ulong  		' command# in this line
end type 

type audiochannel		' a set of predefined values for audio channels
  freq as single		' frequency
  wave as ubyte		' waveform #
  env as ubyte		' envelope #
  delay as ushort		' delay in ms
  length as single		' length in seconds
  vol as single		' volume (1/1000, 0.0..16.384)
  pan as single		' -1.0 left, 1.0 right
  sus as ushort		' sustain point on the envelope
  amode as ushort		' freq/skip computing mode
  realfreq as single
end type

dim shared lparts(125) as part         ' parts to split the line into, line has 125 chars max
type asub as sub()		' sub type to make a sub table


dim editor_spaces as integer
dim as integer paper,ink,plot_color,plot_x,plot_y,keyclick,nostalgic_mode,compiledslot,font,test,inload,programptr,do_insert
dim as string currentdir_, free_,line_,loadname

'----------------------------------------------------------------------------
'-----------------------------Program start ---------------------------------
'----------------------------------------------------------------------------

for i=0 to 17 : sprites(i).y=2048 : next i
 sprites(16).x=300
 sprites(16).y=200
 sprites(16).w=32
 sprites(16).h=32
 sprites(16).sptr=&h7F000
 sprites(17).w=8
 sprites(17).h=16
 sprites(17).x=16
 sprites(17).y=80
 sprites(17).sptr=&h7f400
 for i=sprites(17).sptr to sprites(17).sptr+111 : machine.bytes(i)=0 : next i
 for i=sprites(17).sptr+112 to sprites(17).sptr+127 : machine.bytes(i)=154 : next i

setspriteptr(16,&h7F000)
setspritesize(16,32,32) 
threadcreate(@sdlthread,null,0) ' start video
''housekeeper_cog=cpu(housekeeper(),@housekeeper_stack(0)) : hkcnt=0
editor_spaces=2
paper=147: ink=154 : font=4
plot_color=ink : plot_x=0: plot_y=0
keyclick=1 : nostalgic_mode=0 : 
'keyclick_spl=@atari_spl : spl_len=1694
compiledslot=sizeof(test)
'init_commands
'init_error_strings
'init_audio
'do_new
cls1(ink, paper)
'setfontfamily(font) 				' use ST Mono font
setleadingspaces(2)
chdir "~/bas"
currentdir_="~/bas"
position 2*editor_spaces,1 : writeln ver_
free_=str$(memtop-programptr)+" BASIC bytes free" : writeln free_
position 2*editor_spaces,4 : writeln "Ready"
'pinwrite 38,0 : pinwrite 39,0 ' LEDs off
loadname="noname.bas"
do_insert=-1
inload=0

open "/sd/bas/autorun.bas" for input as #9
close #9
if err=0 then line_="run autorun.bas"' : interpret



a=1

cls1(154,147)

'sleep(1000,1)
'for j=0 to 255 :for i=1 to 255 : 
'putpixel(j,i,((i+j) mod 256)) 
' next i : next j

 'draw1(100,100,300,200,120)
 'fcircle (300,300,100,40)
 'ecircle(500,500,99,200)
 'fill(500,500,120,0)
 'putcharxycf(300,300,65,200)
 'putcharxycg(308,300,98,15,0)
 'outtextxycg(300,100,"Hello,World",248,0)
 'sleep(3000,1)
' cls1(154,147)
' outtextxycf(16,16,"RPi5 Retromachine Basic v. 0.01",154)
' outtextxycf(16,32,"1073741824 basic bytes free",154)
' outtextxycf(16,64,"Ready",154)
' fcircle(300,300,100,40)
' translate_screen
'dim r as string
'do :open pipe ("vcgencmd measure_clock arm") for input as #1
' line input #1,r :close #1 : sleep(1000,1) : loop until a=0
'dim errr as integer
' errr=open("/dev/input/by-id/"+mousefilename for input as #4) : print errr
'   dim il as integer
' get #4,0,mouserecord.m(0),16,il
' do
' if il<>0 then print mouserecord.m2.d1, mouserecord.m2.d2 else print il
' loop until a=0
'dim as integer mx,my
'screen 21
'getmouse(mx,my)
'scrollup2
'setcursorpos(128,20)
'writeln("dupakwas")
do 
  if keyqe<>keyqs then
    write1(chr$(keyq(keyqs)))
    keyqs=(keyqs+1) mod 256
  endif  
  sleep(10,1): loop until a=0
