#include "SDL2/SDL.bi"
#define rpi5

'--- basic machne main ram 

union machine_union
  bytes(&h3fffffff) as ubyte
  words(&h1fffffff) as ushort
  longs(&h0fffffff) as ulong
end union  

dim shared machine as machine_union

dim shared t2(1920*1080-1) as ulong                 'the bitmap for video screen
dim shared bufptr as ulong = &h3fffffff-(1920*1080) 'a main framebuffer


dim shared a as integer


'dim shared t3(1920*1080-1) as ubyte 
dim sdlversion as SDL_version
dim as integer i,j 
dim shared as integer updated
dim shared as integer font_family=0

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

dim shared ataripalette(255) as ulong
open "ataripalettep2.def" for input as #3
get #3,0,ataripalette()
close #3
for i=0 to 255 : ataripalette(i)=ataripalette(i) shr 8 : next i ' the p2 palette has been shifted left as rrggbb00

sub cls1(b as ubyte)

dim as integer i

for i=0 to 1920*1080-1 : machine.bytes(bufptr+i)=b : next i
end sub

sub putpixel(x as ulong,y as ulong,c as ubyte)
machine.bytes(bufptr+x+960*y)=c
end sub

sub draw1(x1 as integer,y1 as integer,x2 as integer,y2 as integer,c as ubyte)              	  ' I had to rename the function for BASIC	
dim as integer d,dx,dy,ai,bi,xi,yi,x,y				

'if (y1==y2)
'  fastline(x1,x2,y1,c) ' fastline has to be implemented first
'else

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
end sub  

sub fastline(x1 as integer,x2 as integer,y as integer,c as ubyte)									  ' a fast 8bpp horizontal line, to be replaced by fast asm
draw1(x1,y,x2,y,c)
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
putcharxycg(x,y,achar,f,b) ' to be replaced by fast asm
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
  putcharxycf(x+8*iii,y,asc(mid$(text,iii,1)),f)
next iii  
end sub




/'

 
pub fillpush(val) 
fillstack[fillptr]:=val
fillptr+=1   

    
pub fillpop() : val

fillptr-=1
if fillptr<0
  fillptr:=0
  val:=-12345
else 
  val:=fillstack[fillptr]
return val

      
pub fill(x,y,newcolor,oldcolor) | x1, spanabove, spanbelow, ov

newcolor:=newcolor & 255
oldcolor:=oldcolor & 255

if (oldcolor == newcolor) 
  return

fillptr:=0
fillmax:=0
fillpush(x)
fillpush(y)
y:=fillpop()
x:=fillpop()
'pinhigh(38)
repeat while (x>-1)       
 ' pintoggle(39)
  x1 := x
  repeat while((x1 >= 0) && (getpixel2(x1,y) == oldColor))
    x1--
  x1++
  spanabove := 0
  spanbelow := 0
  repeat while ((x1 < 1024) && getpixel2(x1,y) == oldColor)
    putpixel2 (x1,y, newcolor & 255)
    if ((spanabove == 0) && (y > 0) && (getpixel2(x1,y-1)== oldColor))
      fillpush(x1)
      fillpush(y-1)
      spanabove := 1 
    elseif ((spanabove<>0) && (y > 0) && (getpixel2(x1,y-1)<> oldColor))
      spanabove := 0 
    if((spanbelow == 0 ) && (y < 575) && getpixel2(x1,y+1) == oldColor)
      fillpush(x1)
      fillpush(y + 1)
      spanBelow := 1
    elseif((spanbelow<>0) && (y < 575) && (getpixel2(x1,y + 1)<> oldColor))
      spanbelow := 0
    x1++
  y:=fillpop()
  x:=fillpop()
'pinlow(38)    



    


 




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


pub setcursorpos(x,y)

''---------- Set the (x,y) position of cursor

cursor_x:=x
cursor_y:=y
setspritepos(17,4*cursor_x,16*cursor_y+4 )

pub getcursorx():x
return cursor_x

pub getcursory():y
return cursor_y

pub setcursorx(x)
cursor_x:=x
setspritepos(17,4*cursor_x,16*cursor_y+4 )

pub setcursory(y) 
cursor_y:=y
setspritepos(17,4*cursor_x,16*cursor_y+4)

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


pub cls(fc,bc)   :c,i

c:=bc
ram.fill(s_buf_ptr,c,4*buflen,0,1)  
ram.fill(textbuf_ptr,32,buf_ptr-textbuf_ptr,0,1)
setwritecolors(fc,bc)
cursor_x:=0
cursor_y:=0
setspritepos(17,4*cursor_x,16*cursor_y+4 )
setcursorcolor(fc)

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

''-----------  Scroll the screen one line up

pub scrollup(start=0, end=600 , amount=16) | i
	
repeat i from 0 to 583 
  ram.read1($7E800, s_buf_ptr+(i+16)*4*s_cpl1, 4*s_cpl1)
  ram.write($7E800, s_buf_ptr+i*4*s_cpl1, 4*s_cpl1)

repeat i from 584 to 599
   fastline(0,1023,i,write_background)   
   
' a version for text scrolling in Basic shifted 4 lines down

pub scrollup2(start=0, end=600 , amount=16) | i
	
repeat i from 4 to 579 
  ram.read1($7E800, s_buf_ptr+(i+16)*4*s_cpl1, 4*s_cpl1)
  ram.write($7E800, s_buf_ptr+i*4*s_cpl1, 4*s_cpl1)

repeat i from 580 to 599
   fastline(0,1023,i,write_background)   
repeat i from 0 to 3
   fastline(0,1023,i,write_background)      

repeat i from 0 to 35
  ram.read1($7E800, textbuf_ptr+(i+1)*timings[7], timings[7])
  ram.write($7E800, textbuf_ptr+i*timings[7], timings[7])
repeat i from 0 to timings[7]-1
  ram.fill(textbuf_ptr+(36*timings[7]+i),32,1,0,1) 
 
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
dim as integer sw

p2p=@t2(0)
p3p=@machine.bytes(bufptr)
pp=@ataripalette(0)
'sw=1920*1080
sw=960*600
#if (defined (__FB_ARM__ )) and  (defined (__FB_64BIT__))

      asm
      ldr x0,p2p          ' main sdl fb
      ldr x1,p3p          ' 8 bpp fb
      ldr x2,pp           ' palette ptr
      
      ldr w3,sw
      
p1:   ldrb w5,[x1],#1
      add x5,x2,x5,lsl #2
      ldr w6,[x5]  
      'mov w6,#255  
      str w6,[x0],#4
            
      subs w3,w3,#1
      cmp w3,#0
      b.ne p1
      end asm
      
#else
print "kwas"
dim as integer i
for i=0 to sw-1 : t2(i)=ataripalette(machine.bytes(bufptr+i)) : next i
#endif

end sub

sub translate_screen_2

dim as any pointer p2p,p3p ,pp
dim as integer sw

p2p=@t2(0)
p3p=@machine.bytes(bufptr)
pp=@ataripalette(0)
sw=1920*1080

      asm
      ldr x0,p2p          ' main sdl fb
      ldr x1,p3p          ' 8 bpp fb
      ldr x2,pp           ' palette ptr
      

       mov w7,#540
p3:    mov w3,#960
       mov x8,#7676
      
p2:   ldrb w5,[x1],#1
      add x5,x2,x5,lsl #2
      ldr w6,[x5]  
      'mov w6,#255  
      str w6,[x0],#4
      str w6,[x0]
      add x0,x0,x8
          
      str w6,[x0],#4
      str w6,[x0]
      sub x0,x0,x8
            
      subs w3,w3,#1
      cmp w3,#0
      b.ne p2
      add x0,x0,x8
      add x0,x0,#4
      subs w7,w7,#1
      cmp w7,#0
      b.ne p3
      end asm

end sub
'---------------------------------------------------------------------------------------------------------------------------------
' the thread for the SDL displaying 8bpp

sub sdlthread(qq as any pointer)
SDL_Init(SDL_INIT_VIDEO)


'SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "best")' // make the scaled rendering look smoother.
var win= SDL_CreateWindow( "The Retromachine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 960,540, SDL_WINDOW_shown)
var renderer = SDL_CreateRenderer(win, -1, 14) '  // hardware+vsync+texture   14
var sdlTexture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STreaming,960,540)  
SDL_RenderSetLogicalSize(renderer,960,540)

dim as ulong i,j 
dim q as double
for i=0 to 599: for j=0 to 1023 : t2(1920*i+j)=256*(i mod 256) +65536*(j mod 256) : next j : next i
do
 ' if updated=1 then
    updated=0
    translate_screen
    SDL_UpdateTexture(sdlTexture, NULL, @t2(0), 960 * 4)
    SDL_RenderClear(renderer)
    SDL_RenderCopy(renderer, sdltexture, NULL, NULL)
    SDL_RenderPresent(renderer)
  
' else
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
' q=timer-q : print q: q=timer
loop

SDL_DestroyTexture(sdltexture)
SDL_DestroyRenderer(renderer)
SDL_DestroyWindow(win)
SDL_Quit()
a=0
end sub


a=1
threadcreate(@sdlthread,null,0)
sleep(1000,1)
for j=0 to 255 :for i=1 to 255 : 
putpixel(j,i,((i+j) mod 256)) 
 next i : next j
 draw1(100,100,300,200,120)
 fcircle (300,300,100,40)
 putcharxycf(300,300,65,200)
 putcharxycg(308,300,98,15,0)
 outtextxycg(300,100,"Hello,World",248,0)
 sleep(3000,1)
 cls1(147)
 outtextxycf(16,16,"Ready",154)
' translate_screen
dim r as string
'do :open pipe ("vcgencmd measure_clock arm") for input as #1
' line input #1,r :close #1 : sleep(1000,1) : loop until a=0
do: sleep(1000,1): loop until a=0
