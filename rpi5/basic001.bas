#include "SDL2/SDL.bi"
#include "SDL2/SDL_image.bi"
#include "SDL2/SDL_ttf.bi"

dim shared a as integer

dim shared t2(1920*1080-1) as ulong 
dim shared t3(1920*1080-1) as ubyte 
dim sdlversion as SDL_version

' read definitions
dim stfont(2047) as ubyte
open "st4font.def" for input as #3
get #3,0,stfont(0),2048
close #3

sub putpixel(x as ulong,y as ulong,c as ulong)
t2(x+1920*y)=c
end sub

dim as integer i,j 

sub translate_screen

dim p2p as any pointer
p2p=@t2(0)
asm
ldr x0,p2p
mov w1,#1920
p1: str w1,[x0]
add x0,x0,#4
subs w1,w1,#1
cmp w1,#0
b.ne p1
end asm

end sub
'---------------------------------------------------------------------------------------------------------------------------------
' the thread for the SDL displaying 8bpp

sub sdlthread(qq as any pointer)
SDL_Init(SDL_INIT_VIDEO)


'SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "best")' // make the scaled rendering look smoother.
var win= SDL_CreateWindow( "The Retromachine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080 , SDL_WINDOW_fullscreen_desktop)
var renderer = SDL_CreateRenderer(win, -1, 14) '  // hardware+vsync+texture   14
var sdlTexture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STreaming,1024,600)  
SDL_RenderSetLogicalSize(renderer,1920,1080)

dim as ulong i,j 
dim q as double
for i=0 to 1079: for j=0 to 1919 : t2(1920*i+j)=256*i+65536*j : next j : next i
do
  SDL_UpdateTexture(sdlTexture, NULL, @t2(0), 1920 * 4)
  SDL_RenderClear(renderer)
  SDL_RenderCopy(renderer, sdltexture, NULL, NULL)
  SDL_RenderPresent(renderer)
  q=timer-q: print q 
  q=timer
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



SDL_GetVersion(@sdlversion)
print "SDL2 version = "; SDL_VERSIONNUM(sdlversion.major, sdlversion.minor, sdlversion.patch)

var sdlimageversion = IMG_Linked_Version()
print "SDL2_image version = "; SDL_VERSIONNUM(sdlimageversion->major, sdlimageversion->minor, sdlimageversion->patch)

var sdlttfversion = TTF_Linked_Version()
print "SDL2_ttf version = "; SDL_VERSIONNUM(sdlttfversion->major, sdlttfversion->minor, sdlttfversion->patch)
a=1
threadcreate(@sdlthread,null,0)
sleep(3000,1)
for j=0 to 200 :for i=1 to 200 : 
putpixel(j,i,&hFFFFFF) 

 next i : next j
 translate_screen
do : loop until a=0
