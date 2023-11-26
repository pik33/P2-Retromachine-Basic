#include "SDL2/SDL.bi"
#include "SDL2/SDL_image.bi"
#include "SDL2/SDL_ttf.bi"


dim shared t2(1920*1080-1) as ulong 
dim shared t3(1920*1080-1) as ubyte 
dim sdlversion as SDL_version
SDL_GetVersion(@sdlversion)
print "SDL2 version = "; SDL_VERSIONNUM(sdlversion.major, sdlversion.minor, sdlversion.patch)

var sdlimageversion = IMG_Linked_Version()
print "SDL2_image version = "; SDL_VERSIONNUM(sdlimageversion->major, sdlimageversion->minor, sdlimageversion->patch)

var sdlttfversion = TTF_Linked_Version()
print "SDL2_ttf version = "; SDL_VERSIONNUM(sdlttfversion->major, sdlttfversion->minor, sdlttfversion->patch)

SDL_Init(SDL_INIT_VIDEO)
IMG_Init(0)
TTF_Init()
'SDL_SetHint(SDL_HINT_RENDER_opengl_shaders, "1")
SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "best")' // make the scaled rendering look smoother.
var win= SDL_CreateWindow( "The Retromachine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920,1080 , SDL_WINDOW_fullscreen_desktop)
var renderer = SDL_CreateRenderer(win, -1, 14) '  // hardware+vsync+texture   14
var sdlTexture = SDL_CreateTexture(renderer,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STreaming,1920,1080)  
SDL_RenderSetLogicalSize(renderer,1920,1080)



'var win = SDL_CreateWindow("SDL2 test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0)
'var renderer = SDL_CreateRenderer(win, -1, 0)

'' Load image into SDL texture
var surfaceHorse = IMG_Load("data/horse.tga")
var textureHorse = SDL_CreateTextureFromSurface(renderer, surfaceHorse)
SDL_FreeSurface(surfaceHorse) : surfaceHorse = NULL

'' The image's exact size, used with SDL_RenderCopy() to draw it without scaling
dim rcHorse as SDL_Rect = (0, 0, 93, 72)

'' Draw text into SDL texture
const TEXT = "Hello!"
var font = TTF_OpenFont("data/Vera.ttf", 36)
var surfaceHello = TTF_RenderText_Solid(font, TEXT, type<SDL_Color>(255, 0, 0))
var textureHello = SDL_CreateTextureFromSurface(renderer, surfaceHello)
SDL_FreeSurface(surfaceHello) : surfaceHello = NULL

'' Measure the text, used with SDL_RenderCopy() to draw it without scaling
dim rcHello as SDL_Rect
TTF_SizeText(font, TEXT, @rcHello.w, @rcHello.h)
rcHello.x = 100
rcHello.y = 100
dim as ulong i,j 
dim q as double
for i=0 to 1079: for j=0 to 1919 : t2(1920*i+j)=i+256*j : next j : next i
do

    i=i+1 : rchorse.x=i mod 1920: rchorse.y=i mod 1080

    SDL_UpdateTexture(sdlTexture, NULL, @t2(0), 1920 * 4)
   	SDL_RenderClear(renderer)
	SDL_RenderCopy(renderer, sdltexture, NULL, NULL)
 	SDL_RenderCopy(renderer, textureHorse, NULL, @rcHorse)
 	SDL_RenderCopy(renderer, textureHello, NULL, @rcHello)
	SDL_RenderPresent(renderer)
  q=timer-q: print q 
      q=timer
	dim event as SDL_Event
	while SDL_PollEvent(@event)
		select case event.type
		case SDL_QUIT_
			exit do
		case SDL_KEYDOWN
			if event.key.keysym.sym = SDLK_ESCAPE then
				exit do
			end if
		end select
	wend '/
loop

SDL_DestroyTexture(textureHello)
SDL_DestroyTexture(textureHorse)
SDL_DestroyRenderer(renderer)
SDL_DestroyWindow(win)
SDL_Quit()
