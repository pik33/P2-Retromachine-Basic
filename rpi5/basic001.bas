#include "SDL2/SDL.bi"
#include "crt.bi"
#define rpi5

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
        if event.key.keysym.sym = SDLK_ESCAPE then exit do
      
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
  mdptr as ulong  		' pointer to a command in this line
  varnum as integer  	' variable to modify and check
  stepval as integer
  endval as integer
end type

type gosub_entry		' gosub stack entry
  lineptr as ulong 		' line that will be executed after next
  mdptr as ulong  		' command# in this line
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

''-----------------------------------------------------------------------------------------
''---------------------------------- Global variables ------------------------------------
''-----------------------------------------------------------------------------------------

dim shared channels(7) as audiochannel
dim shared variables(1024) as variable
dim shared varnum as integer


dim shared as integer audiocog,videocog,usbcog,pscog,pslock 
dim shared base_ as ulong
dim shared mbox as ulong
dim shared ansibuf(3) as ubyte
dim shared line_ as string
dim shared fullline_ as string
dim shared cont as integer

dim shared as integer plot_color,plot_x,plot_y 
dim shared editor_spaces as integer
dim shared as integer paper,ink, font 
dim shared ct as integer
dim shared progend as integer
dim shared stack(maxstack) as expr_result
dim shared stackpointer as integer
dim shared programptr as integer

dim shared commands(255) as asub 'this is a function table
dim shared tokennum as integer
dim shared compiledslot as integer
dim shared test as expr_result 
dim shared as ulong key, key2  
dim shared errors_(255) as string

union cli
  compiledline(127) as expr_result
  ucompiledline(383) as ulong
end union

dim shared cl as cli
  
dim shared lineptr as integer
dim shared as integer lineptr_e, ilineptr_e 
dim shared programstart as ulong
dim shared lastline as ulong
dim shared lastlineptr as ulong

dim shared currentdir_ as string
dim shared fortable(maxfor) as for_entry
dim shared gosubtable(maxgosub) as gosub_entry

dim shared sample(255) as ubyte ' for csave
dim shared block(1023) as ubyte ' for csave and get/put/copy
dim shared blockptr as ulong
dim shared as ulong runptr,runptr2,oldrunptr 
dim shared getres(9) as integer ' det  function result  for channel
dim shared inrun as ulong
dim shared runheader(5) as ulong
dim shared dataheader(8) as ulong
dim shared dataptr as ulong
dim shared as integer fortop,gosubtop  
dim shared free_ as string
dim shared keyclick as integer
dim shared housekeeper_cog as integer
dim shared housekeeper_stack(128) as integer
dim shared as ulong mousex,mousey,mousek, mousew  
dim shared as integer padx(6),pady(6),padz(6),padh(6),padrx(6),padry(6),padrz(6),pads(6),padw(6)
dim shared stick(6) as ulong
dim shared strig(6) as ulong
dim shared sprite(15) as ubyte pointer
dim shared hkcnt as ulong
dim shared as ulong nostalgic_mode, spl_len 
dim shared keyclick_spl as any pointer
dim shared trig_coeff as single
dim shared trig_coeff2 as single
dim shared linenum as ulong
dim shared suspoints(7) as ushort
dim shared loadname as string
dim shared do_insert as integer
dim shared as integer cy,cx 
dim shared as integer inload,err_
dim shared readline as string

declare sub interpret
declare function isoperator(s as string) as ubyte
declare function ischannel(s as string) as ulong
declare function isconstant(s as string) as integer
declare function isnotename(s as string) as ulong
declare function isseparator(s as string) as ulong
declare function isassign(s as string) as ubyte
declare function iscommand(s as string) as ubyte
declare function isfunction(s as string) as ubyte
declare function isname(s as string) as boolean
declare function isnum(s as string) as boolean 
declare function isint(s as string) as boolean
declare function isdec(s as string) as integer
declare function isstring(s as string) as boolean
declare function getnoteval(token as integer) as single
declare function deleteline(aline as ulong) as integer
declare function compile (alinemajor as ulong, alineminor as ulong=0, cont as ulong=0) as ulong
declare sub printerror(err as integer, linenum as integer=0)
declare function compile_immediate_assign(linetype as ulong) as ulong
declare function compile_assign (alinemajor as ulong, alineminor as ulong=0, cont as ulong=0)  as ulong
declare function execute_line (astart as integer=0) as integer



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
if err=0 then line_="run autorun.bas" ': interpret


'-------------------------------------------------------------------------------------------------------------
'
'                                     LINE INTERPRETER/TOKENIZER
'
'-------------------------------------------------------------------------------------------------------------


sub interpret
 
dim as integer i,j,k,l,q,d,b1,b2,b3,addptr,dot,p1,p2 
dim result as expr_result
dim etype as integer
dim as integer separators(125)
dim note_val as single
dim err_ as integer
dim as string c_,p_,s1_,s2_,lp_,d_, rest_

' -------------------------    Pass 1: Split the line to parts, strip unneded spaces, lowercase parts, detect and concatenate strings

fullline_=trim$(line_): cont=-1  : linenum=0 : lineptr=0 : err_=0

p108: 
for i=0 to 125: separators(i)=0 :next i
for i=0 to 125: lparts(i).part_="": lparts(i).token=0: next i

' 1a : extract the first command, split the line to first command and the rest

line_=trim$(line_): d_="" :  l=len(line_) 
if l=0 then goto p101					                ' empty line,  nothing to do except print "ready"
d=0							                              ' before we split the line, we have to find colons that are inside a string, 
for i=1 to len(line_)
  if mid$(line_,i,1)="""" andalso d=0 then 		' they are inside a string if there is an odd number of " before :
    d=1
  elseif mid$(line_,i,1)="""" andalso d=1 then 
    d=0
  endif
lparts(i).token=d  
next i 
i=1: do until (mid$(line_,i,1)=":" andalso lparts(i).token=0)  orelse i>=l : i=i+1 : loop 		' find the first : that is not in a string
if i<l then rest_=trim$(right$(line_,len(line_)-i)):line_=trim$(left$(line_,i-1)) else rest_="" 	' and separate the part of the line before the first : from the rest

if cont=-1 andalso rest_<>"" then cont=0 : goto p107       	' this is the first and not the last part
if cont=-1 andalso rest_= "" then cont=3 : goto p107		' this is the first AND the last part
if cont=4  andalso rest_<>"" then cont=1 : goto p107		' this is not the first and not the last part
if cont=4  andalso rest_= "" then cont=2 : goto p107		' this is the last, and not the first, part

' 1b: find separators

p107:
separators(0)=0
i=0: j=1
do: 
  i+=1 : c_=mid$(line_,i,1) : if isseparator(c_) then separators(j)=i: j+=1 
loop until i>l
separators(j)=i

' 1c : split the command to parts

k=0
for i=0 to j-1 
  p1=separators(i) : p2=separators(i+1) ' : print p1,p2
  if p1>0 then p_=mid$(line_,p1,1) : if p_<>"" then lparts(k).part_=p_ : k+=1 
  p_=mid$(line_,p1+1,p2-p1-1) : if p_<>"" then lparts(k).part_=p_ : k+=1 
next i

' 1d  : first part has to have a line number, if not, add 0 for the immediate line

if (cont=0  orelse  cont=3) andalso isdec(lparts(0).part_)=0  then for i=k to 1 step -1: lparts(i)=lparts(i-1) : next i: lparts(0).part_="0" : k+=1

' 1e : find strings

i=0
do
  if lparts(i).part_<>"""" then i+=1 : goto p109
  q=i: do: p_=lparts(i+1).part_ : lparts(q).part_=lparts(q).part_+p_: for j=i+1 to k: lparts(j)=lparts(j+1) : next j: k-=1 :  loop until p_="""" orelse i>=k  
  if p_<>"""" then k+=1:i+=1
p109: loop until i>=k

' 1f : concatenate strings if "" detected between
 
i=0
do
  if right$(lparts(i).part_,1)="""" andalso left$(lparts(i+1).part_,1)=""""  then 
    lparts(i).part_=lparts(i).part_+right$(lparts(i+1).part_,len(lparts(i+1).part_)-1)
    for j=i+1 to k: lparts(j)=lparts(j+1): next j  
    i-=1 : k-=1 ' do not move i if concatenated
  endif
  i+=1 
loop until i>=k 
 
' 1g: concatenate >=, <=, ++, --, +=, *=, -=, /=, ^=, <>
 
i=0 
do
  s1_=lparts(i).part_ : s2_=lparts(i+1).part_
  if ((s1_=">" orelse s1_="<" orelse s1_="+" orelse s1_="-" orelse s1_="*" orelse s1_="/" orelse s1_="^") andalso s2_="=") orelse (s1_="+" andalso s2_="+") orelse (s1_="-" andalso s2_="-") orelse (s1_="<" andalso s2_=">") then
    lparts(i).part_=s1_+s2_
    for j=i+1 to k : lparts(j)=lparts(j+1) : next j
    i-=1 : k-=1 	' do not move i if concatenated
  endif
  i+=1 
loop until i>=k  
 
' 1h : now remove parts that are spaces

for i=0 to k: lparts(i).part_=trim$(lparts(i).part_): next i
i=0
do 
  if len(lparts(i).part_)=0 then 
    if i=k-1 then k-=1 :  exit do
    if i<k-1 then 
      for j=i to k-2 : lparts(j)=lparts(j+1): next j: k-=1  
      if i>0 then i-=1 
    endif  
  endif
  i+=1
loop until i>k-1

' 1i: lowercase all that is not a string

for j=0 to k-1
  if left$(lparts(j).part_,1)<>"""" orelse right$(lparts(j).part_,1)<>"""" then lparts(j).part_=lcase$(lparts(j).part_) 
next j

'-------------------------------------------------------- Pass 2: Tokenize the line

for i=0 to k: lparts(i).token=-1: next i					' initialize all tokens to -1=invalid

if isdec(lparts(0).part_) then addptr=1 else addptr=0				' check if the abbreviated command are on the line start, or after linenum, 'then' or 'else'
if lparts(0).part_="else" then addptr=1 					' else is always the first
i=0 : do 
  if lparts(i).part_="then" then exit do 					' try to find 'then'
  i=i+1 
loop until i>k
if i<k then addptr=i+1	 							' then found
lp_=lparts(addptr).part_ 

if left$(lparts(addptr).part_,1)="?" andalso len(lparts(addptr).part_)>1 then ' ? is abbreviation of print, but it has no dots, so it has to be treated here
  k+=1
  for i=k to addptr+1 step -1 : lparts(i)=lparts(i-1) : next i
  lparts(addptr+1).part_=right$(lparts(addptr).part_,len(lparts(addptr).part_)-1)
  lparts(addptr).part_="?"
  goto p825
endif  

dot=instr(1,lparts(addptr).part_,".")						' find a dot	
if dot>0 andalso dot<len(lparts(addptr).part_) then 				' split the part
  k+=1
  for i=k to addptr+1 step -1 : lparts(i)=lparts(i-1) : next i
  lparts(addptr+1).part_=right$(lparts(addptr).part_,len(lparts(addptr).part_)-dot)
  lparts(addptr).part_=left$(lparts(addptr).part_,dot)
endif  

p825:
lp_=lparts(addptr).part_ 

' process mouse/cursor/click on/off

if (lp_="mouse" orelse lp_="cursor" orelse lp_="click") then 
  if lparts(addptr+1).part_="on" then lparts(addptr+1).part_="1" :lparts(2).token=token_decimal
  if lparts(addptr+1).part_="off" then lparts(addptr+1).part_="0" :lparts(2).token=token_decimal
endif		
		
' process text constant for 'mode' - TO DO all predefined constants should have # before				

if (lp_="mode" orelse lp_="m.") then 
  if lparts(addptr+1).part_="atari" then lparts(addptr+1).part_="0"       
  if lparts(addptr+1).part_="pc_amber" then lparts(addptr+1).part_="1"  
  if lparts(addptr+1).part_="pc_green" then lparts(addptr+1).part_="2"  
  if lparts(addptr+1).part_="pc_white" then lparts(addptr+1).part_="3"  
  if lparts(addptr+1).part_="st" then lparts(addptr+1).part_="4"  
  if lparts(addptr+1).part_="amiga" then lparts(addptr+1).part_="5"  
endif

' find part types 

for i=0 to k-1
lparts(i).token=isseparator(lparts(i).part_)	: if lparts(i).token>0 then goto p102
lparts(i).token=isoperator(lparts(i).part_)	: if lparts(i).token>0 then goto p102
lparts(i).token=isassign(lparts(i).part_) 	: if lparts(i).token>0 then goto p102
lparts(i).token=iscommand(lparts(i).part_)	: if lparts(i).token>0 then goto p102
lparts(i).token=isfunction(lparts(i).part_)	: if lparts(i).token>0 then goto p102
lparts(i).token=isnotename(lparts(i).part_) 
if lparts(i).token>0 then 
  note_val=getnoteval(lparts(i).token)
  lparts(i).part_=str$(note_val) 
  lparts(i).token=token_float
  goto p102
endif

' if it is #channel, make it a number from 0 to 9 while setting a token_channel

lparts(i).token=ischannel(lparts(i).part_) : if lparts(i).token>0 then lparts(i).part_=right$(lparts(i).part_,1) : lparts(i).token=token_channel : goto p102
lparts(i).token=isconstant(lparts(i).part_) : if lparts(i).token>0 then lparts(i).part_=str$(lparts(i).token) : lparts(i).token=token_integer : goto p102

b1=isnum(lparts(i).part_) : b2=isint(lparts(i).part_) : b3=isdec(lparts(i).part_)
if b1 andalso b2 andalso b3 then lparts(i).token=token_decimal 			: goto p102 	' pure decimal for line num
if b1 andalso b2 andalso (not b3) then lparts(i).token=token_integer 		: goto p102 	' integer
if b1 andalso (not b2) andalso (not b3) then lparts(i).token=token_float 	: goto p102 	' float

if isstring(lparts(i).part_) then 
  lparts(i).token=token_string : lparts(i).part_=mid$(lparts(i).part_,2,len(lparts(i).part_)-2) :goto p102	' string, get rid of ""!
endif
if isname(lparts(i).part_) then lparts(i).token=token_name : goto p102						' name
p102: next i 

lparts(k).token=token_end : lparts(k).part_="": tokennum=k

' process the case when simple load or save is called without "". This cannot be done earlier, as tokens has to be known                                    					 
 
if (lp_="load" orelse lp_="save" orelse lp_="brun" orelse lp_="run" orelse lp_="lo." orelse lp_="s." orelse lp_="br." orelse lp_="enter" orelse lp_="e.") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part_,1)<>"$" then lparts(addptr+1).token=token_string
if (lp_="delete" orelse lp_="mkdir") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part_,1)<>"$" then lparts(addptr+1).token=token_string
if (lp_="copy") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part_,1)<>"$" then lparts(addptr+1).token=token_string
if (lp_="copy") andalso lparts(addptr+3).token=token_name andalso right$(lparts(addptr+3).part_,1)<>"$" then lparts(addptr+3).token=token_string

' cd needs special treatment..

if lp_="cd" then lparts(addptr+1).token=token_string
if lp_="cd." andalso lparts(addptr+1).part_="." then lparts(addptr+1).token=token_string : lparts(addptr+1).part_=".." : lparts(addptr).token=token_cd
if lp_="cd" andalso lparts(addptr+1).part_="/" then lparts(addptr+1).token=token_string : for i=(addptr+2) to k: lparts(addptr+1).part_+=lparts(i).part_ : next i

' determine a type of the line and compile it

if isdec(lparts(0).part_) then linenum=valint(lparts(0).part_)
if linenum>0 andalso k=1 andalso cont=3 then deleteline(linenum) : goto p104   ' this was an empty numbered line, delete it

if (cont=0 orelse cont=3) andalso lparts(2).token<>token_eq  then  		' first part, commans
  err=compile(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto p101
  if rest_<>"" then  line_=rest_ : cont=4 : goto p108 else goto p104
endif
      							
if (cont=1 orelse cont=2) andalso lparts(1).token<>token_eq  then 		' not a first part, command
  err=compile(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto p101
  if rest_<>"" then line_=rest_: cont=4 : goto p108 else goto p104  	
endif
							 
if (cont=0 orelse cont=3) andalso lparts(2).token=token_eq then  		' first part, assign
  err_=compile_assign(linenum,0,cont)
  if err_<>0 then printerror(err_,linenum): goto p101
  if rest_<>"" then line_=rest_: cont=4 : goto p108 else goto p104
endif
    							 
if (cont=1 orelse cont=2) andalso lparts(1).token=token_eq then 		' not a first part, assign
  err=compile_assign(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto p101
  if rest_<>"" then line_=rest_: cont=4 : goto p108 else goto p104  								 
endif

p104: if linenum=0 then 								' line 0 is for immediate execution
  execute_line(2)
p101: if inload=0 then writeln("") : writeln("Ready") 
    if inload=1 andalso err>0 then writeln fullline_
endif

end sub

'---------------------------------------------------------------------------------------------------------------------
'
'                          END OF TOKENIZER MAIN CODE
'
'---------------------------------------------------------------------------------------------------------------------

'---------------------------------------------------------------------------------------------------------------------
'-------------------- Helper functions for the tokenizer -------------------------------------------------------------
'---------------------------------------------------------------------------------------------------------------------

' Check if the part is an operator, return a token or 0 if not found

function isoperator(s as string) as ubyte

select case s
  case "+"   : return token_plus
  case "-"   : return token_minus
  case "or"  : return token_or
  case "xor" : return token_xor
  case "*"   : return token_mul
  case "/"   : return token_fdiv
  case "and" : return token_and
  case "div" : return token_div
  case "mod" : return token_mod
  case "shl" : return token_shl
  case "shr" : return token_shr
  case "^"   : return token_power
  case "not" : return token_not
  case "@"   : return token_at
  case "="   : return token_eq 
  case ">="  : return token_ge   
  case "<="  : return token_le  
  case "<"   : return token_lt   
  case ">"   : return token_gt 
  case "<>"   : return token_ne 
  case "++"   : return token_inc 
  case "--"   : return token_dec 
  case else  : return 0 
end select
end function

' Check if the part is a channel#, return a token or 0 if not found

function ischannel(s as string) as ulong

dim s1 as string
dim as integer nn,token 
if left$(s,1)<>"#" then return 0
if len(s)<>2 then return 0
if right$(s,1)<"0" orelse right$(s,1)>"9" then return 0
return token_channel+val(right$(s,1))
end function

' Check if the part is a predefined constant, return a constant or 0 if not found
' todo: add spin2/pasm constants for pin control

function isconstant(s as string) as integer

select case s
  case "#read" 		: return 1
  case "#write" 	: return 2
  case "#append"	: return 4
  case else		: return 0
end select
end function  

' Check if the part is a predefined music note name, return a token or 0 if not found

function isnotename(s as string) as ulong

dim s1 as string
dim as integer nn,token 
if left$(s,1)<>"#" then return 0
if mid$(s,3,1)="#" then s1=mid$(s,2,2) else s1=mid$(s,2,1)
if mid$(s,len(s)-1,1)<>"-" then nn=val(right$(s,1)) else nn=-1*val(right$(s,1))

if nn=0 andalso right$(s,1)<>"0" then nn=4

select case s1
  case "c"   : token=token_notename+0
  case "c#"  : token=token_notename+1
  case "d"   : token=token_notename+2
  case "d#"  : token=token_notename+3
  case "e"   : token=token_notename+4
  case "f"   : token=token_notename+5
  case "f#"  : token=token_notename+6
  case "g"   : token=token_notename+7
  case "g#"  : token=token_notename+8
  case "a"   : token=token_notename+9
  case "a#"  : token=token_notename+10
  case "h"   : token=token_notename+11
  case "b"   : token=token_notename+11
  case else  : return 0 
end select
if nn>=-1 andalso nn<10 then token=token+12*nn
return token

end function

' Check if the part is a separator, return a token or 0 if not found

function isseparator(s as string) as ulong

select case s
  case "+"   : return token_plus
  case "-"   : return token_minus
  case "="   : return token_eq 
  case ","   : return token_comma
  case "*"   : return token_mul
  case "/"   : return token_fdiv
  case ";"   : return token_semicolon
  case """"  : return token_ear
  case "^"   : return token_power
  case ")"   : return token_rpar
  case "("   : return token_lpar
  case ":"   : return token_colon
  case " "   : return token_space
  case ">"   : return token_gt
  case "<"   : return token_lt
  case else  : return 0
end select
end function

' Check if the part is an assign, return a token or 0 if not found
' TO DO - add -=, +=, *=, /=, ++, --

function isassign(s as string) as ubyte

select case s
  case "="   : return token_eq
'  case "-="  : return token_assign_sub
'  case "+="  : return token_assign_add
'  case "*="  : return token_assign_mul
'  case "/="  : return token_assign_div
  case else  : return 0  
end select
end function

' Check if the part is a command than doesn't return a value, return a token or 0 if not found

function iscommand(s as string) as ubyte

select case s
  case "beep"	     	: return token_beep
  case "b."	     	: return token_beep
  case "blit"		: return token_blit
  case "box"         	: return token_box
  case "brun"	     	: return token_brun
  case "br."	     	: return token_brun
  case "cd"		: return token_cd
  case "changefreq"	: return token_changefreq
  case "cf."		: return token_changefreq
  case "changepan"	: return token_changepan
  case "cp."		: return token_changepan
  case "changevol"	: return token_changevol
  case "cv."		: return token_changevol
  case "changewave"	: return token_changewave
  case "cw."		: return token_changewave
  case "circle"      	: return token_circle
  case "ci."      	: return token_circle
  case "click"	     	: return token_click
  case "close"		: return token_close
  case "cls"         	: return token_cls
  case "cogstop"	: return token_cogstop
  case "color"       	: return token_color
  case "c."       	: return token_color
  case "copy"		: return token_copy
  case "cursor"	     	: return token_cursor
  case "data"		: return token_data
  case "defchar"	: return token_defchar
  case "defsnd"	     	: return token_defsnd
  case "defenv"	     	: return token_defenv
  case "defsprite"   	: return token_defsprite
  case "ds."   		: return token_defsprite
  case "deg"		: return token_deg
  case "delete"		: return token_delete
  case "dim"	     	: return token_dim
  case "dir"	     	: return token_dir
  case "dpoke"		: return token_dpoke
  case "draw"        	: return token_draw
  case "drawto"        	: return token_draw
  case "dr."        	: return token_draw
  case "else"	     	: return token_else
  case "end"		: return token_progend
  case "enter"		: return token_enter
  case "e."		: return token_enter
  case "fcircle"     	: return token_fcircle
  case "fc."     	: return token_fcircle
  case "fill"        	: return token_fill
  case "fi."        	: return token_fill
  case "font"	     	: return token_font
  case "for"	     	: return token_for
  case "f."	     	: return token_for  
  case "frame"       	: return token_frame
  case "fr."       	: return token_frame
  case "get"		: return token_get
  case "gosub"		: return token_gosub
  case "goto"	     	: return token_fast_goto
  case "g."	     	: return token_fast_goto
  case "if"	     	: return token_if
  case "ink"	     	: return token_ink
  case "i."	     	: return token_ink
  case "input"		: return token_input
  case "list"	     	: return token_list
  case "l."	     	: return token_list
  case "load"	     	: return token_load
  case "lo."	     	: return token_load
  case "lpoke"		: return token_lpoke
  case "mkdir"		: return token_mkdir
  case "mode"	     	: return token_mode
  case "m."	     	: return token_mode
  case "mouse"	     	: return token_mouse
  case "new"         	: return token_new
  case "next"	     	: return token_next
  case "n."	     	: return token_next
  case "on"		: return token_on
  case "open"		: return token_open
  case "paper"	     	: return token_paper
  case "pa."	     	: return token_paper
  case "pinfloat"	: return token_pinfloat
  case "pinhi"		: return token_pinhi
  case "pinlo"		: return token_pinlo
  case "pinstart"	: return token_pinstart
  case "pintoggle"	: return token_pintoggle
  case "pinwrite"    	: return token_pinwrite
  case "play"	     	: return token_play
  case "p."	     	: return token_play
''  case "playsample"	: return token_playsample
  case "plot"        	: return token_plot
  case "pl."        	: return token_plot
  case "poke"		: return token_poke
  case "pop"		: return token_pop
  case "position"	: return token_position
  case "pos."   	: return token_position
  case "print"       	: return token_print
  case "?"       	: return token_print
  case "put"		: return token_put
  case "rad"		: return token_rad
  case "read"		: return token_read
  case "release"	: return token_release
  case "rem"		: return token_rem
  case "'"		: return token_rem
  case "restore"	: return token_restore
  case "restorepalette" : return token_restorepalette
  case "rp."		: return token_restorepalette
  case "return"		: return token_return
  case "run"	     	: return token_run
  case "save"	     	: return token_save
  case "s."	     	: return token_save
  case "setcolor"	: return token_setcolor
  case "sc."		: return token_setcolor
  case "setdelay"	: return token_setdelay 
  case "sd."		: return token_setdelay 
  case "setenv"		: return token_setenv
  case "se."		: return token_setenv
  case "setlen"		: return token_setlen  
  case "sl."		: return token_setlen  
  case "setpan"		: return token_setpan
  case "sp."		: return token_setpan
  case "setsustain"	: return token_setsustain
  case "ss."		: return token_setsustain
  case "setvol" 	: return token_setvol
  case "sv." 		: return token_setvol
  case "setwave"	: return token_setwave
  case "sw."		: return token_setwave
  case "setwav"	        : return token_setwave
  case "shutup"		: return token_shutup
  case "sh."		: return token_shutup
  case "sound"	     	: return token_play 
  case "so."	     	: return token_play 
  case "sprite"	     	: return token_sprite  
  case "spr."	     	: return token_sprite  
  case "then"	     	: return token_then
  case "waitms"	     	: return token_waitms
  case "w."	     	: return token_waitms
  case "waitclock"   	: return token_waitclock
  case "wc."   		: return token_waitclock
  case "waitvbl"     	: return token_waitvbl
  case "wv."     	: return token_waitvbl
  case "wrpin"	     	: return token_wrpin
  case "wxpin"	     	: return token_wxpin
  case "wypin"	     	: return token_wypin
  case else         	 : return 0  
end select
end function

' Check if the part is a function than returns a value, return a token or 0 if not found

function isfunction(s as string) as ubyte

select case s
  case "abs"		: return token_abs
  case "acos"		: return token_acos
  case "adr"		: return token_adr
  case "addr"		: return token_adr
  case "asc"		: return token_asc
  case "asin"		: return token_asin
  case "atn"		: return token_atn
  case "bin$"		: return token_bin
  case "chr$"		: return token_chr
  case "coginit"	: return token_coginit
  case "cos"		: return token_cos
  case "dpeek"		: return token_dpeek
  case "findfirst"	: return token_findfirst
  case "findnext"	: return token_findnext
  case "framebuf"	: return token_framebuf
  case "fb."		: return token_framebuf
  case "fre"		: return token_fre
  case "gc."		: return token_getcolor
  case "getcolor"	: return token_getcolor
  case "getpixel"     	: return token_getpixel
  case "ge."     	: return token_getpixel
  case "getenvsustain"	: return token_getenvsustain
  case "getnotevalue"	: return token_getnotevalue
  case "gettime"       	: return token_gettime
  case "gt."		: return token_gettime
  case "hex$"		: return token_hex
  case "inkey$"		: return token_inkey
  case "int"		: return token_int
  case "left$"		: return token_left
  case "len"		: return token_len
  case "log"		: return token_log
  case "lpeek"		: return token_lpeek
  case "memtop"		: return token_memtop
  case "memlo"		: return token_memlo
  case "mid$"		: return token_mid
  case "mousek"        	: return token_mousek
  case "mousew"        	: return token_mousew
  case "mousex"        	: return token_mousex
  case "mousey"        	: return token_mousey
  case "pads"		: return token_pads
  case "padw"		: return token_padw
  case "padx"		: return token_padx
  case "pady"		: return token_pady
  case "padz"		: return token_padz
  case "padrx"		: return token_padrx
  case "padry"		: return token_padry
  case "padrz"		: return token_padrz
  case "padh"		: return token_padh
  case "peek"		: return token_peek
  case "pinread"      	: return token_pinread
  case "rdpin"	    	: return token_rdpin
  case "right$"		: return token_right
  case "rqpin"	     	: return token_rqpin
  case "round"		: return token_round
  case "rnd"           	: return token_rnd
  case "sin"       	: return token_sin
  case "sqr"		: return token_sqr
  case "stick"       	: return token_stick
  case "strig"       	: return token_strig
  case "str$"		: return token_str
  case "tan"		: return token_tan
  case "val"		: return token_val
  case "varptr"		: return token_adr
  case else		: return 0

end select
end function  

' Check if the part is a name

function isname(s as string) as boolean

dim as integer i,l
dim m_ as string
 
l=len(s): if l=0 then return false
m_=mid$(s,1,1) : if (m_<"a" orelse m_>"z")  andalso m_<>"_" then return false
if l>2 then 
  for i=2 to l
    m_=mid$(s,i,1) : if (i<l) andalso (m_<"a" orelse m_>"z") andalso (m_<"0" orelse m_>"9") andalso m_<>"_" andalso m_<>"." then return false 
    if (i=l) andalso (m_<"a" orelse m_>"z") andalso (m_<"0" orelse m_>"9") andalso m_<>"_" andalso m_<>"$" andalso m_<>"%" andalso m_<>"!" then return false
  next i
endif
return true
end function  

' Check if the part is a number.  

function isnum(s as string) as boolean 

dim as integer i,l,ds,es,hex_,bin_,b  
dim m_ as string

ds=0: es=0
l=len(s): if l=0 then return false
m_=mid$(s,1,1) : if (m_<"0" orelse m_>"9") andalso m_<>"." andalso m_<>"$" andalso m_<>"%" andalso m_<>"-" then return false
if m_="." then ds=1
if m_="$" then hex_=1 else hex_=0
if m_="%" then bin_=1 else bin_=0
if l>1 then 
  for i=2 to l
    m_=mid$(s,i,1) : b=false
    if m_>="0" andalso m_<="9" then b=true  
    if m_="_" orelse m_="." orelse m_="E" orelse m_="e" orelse m_="-" then b=true 
    if hex_=1 andalso m_>="a" andalso m_<="f" then b=true
    if bin_=1 andalso (m_<"0" orelse m_>"1") andalso m_<>"_" then return false
    if not b then return false
    if m_="-" andalso lcase$(mid$(s,i-1,1))<>"e" then return false
    if m_="." then ds+=1: if ds>1 then return false
    if m_="E" orelse m_="e" then es+=1: if hex_=0 andalso es>1 then return false
  next i
endif
return true
end function    
  
' Check if the part is an integer number.    
  
function isint(s as string) as boolean

dim as integer i,l,ds,es,hex_,bin_ 
dim m_ as string

l=len(s): if l=0 then return false
m_=mid$(s,1,1) : if (m_<"0" orelse m_>"9") andalso m_<>"$" andalso m_<>"%" andalso m_<>"-" then return false
if m_="$" then hex_=1 else hex_=0
if m_="%" then bin_=1 else bin_=0
if l>1 then 
  for i=2 to l
    m_=mid$(s,i,1) 
    if hex_=0 andalso (m_<"0" orelse m_>"9") andalso m_<>"_"  then return false
    if hex_=1 andalso (m_<"0" orelse m_>"9") andalso (m_<"a" orelse m_>"f") andalso m_<>"_"  then return false
    if bin_=1 andalso (m_<"0" orelse m_>"1") andalso m_<>"_"  then return false
  next i
endif
return true
end function  

' Check if the part is a positive decimal number.  

function isdec(s as string) as integer

dim as integer i,l
dim as string m_

l=len(s): if l=0 then return false
for i=1 to l
    m_=mid$(s,i,1) : if (m_<"0" orelse m_>"9") andalso m_<>"_"  then return 0
  next i
return 1
end function 

' Check if the part is a string.  

function isstring(s as string) as boolean
if left$(s,1)="""" andalso right$(s,1)="""" then return true else return false
end function

' getnoteval. Returns the frequency of note token

function getnoteval(token as integer) as single

dim as integer note,noteexp 
dim as single notebase,a 

note = token-token_notename 
notebase=notetable(note mod 12) 
noteexp=1+(note/12) 
return (2.0^noteexp)*notebase
end function

'---------------------------------------------------------------------------------------------------------------------------------------
'--------------------- The end of interpreter/tokenizer functions ----------------------------------------------------------------------
'---------------------------------------------------------------------------------------------------------------------------------------














'mousefilename= dir("/dev/input/by-id/*event-mouse",&hff)
'print mousefilename

'name:='/dev/input/by-id/'+name;
a=1



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
do : sleep(500,1): loop until a=0
