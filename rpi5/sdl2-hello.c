typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int8 boolean;
struct $9SDL_Color {
	uint8 R;
	uint8 G;
	uint8 B;
	uint8 A;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $9SDL_Color ) == 4 );
struct $11SDL_version {
	uint8 MAJOR;
	uint8 MINOR;
	uint8 PATCH;
};
__FB_STATIC_ASSERT( sizeof( struct $11SDL_version ) == 3 );
struct $11SDL_Palette {
	int32 NCOLORS;
	struct $9SDL_Color* COLORS;
	uint32 VERSION;
	int32 REFCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $11SDL_Palette ) == 24 );
struct $15SDL_PixelFormat;
struct $15SDL_PixelFormat {
	uint32 FORMAT;
	struct $11SDL_Palette* PALETTE;
	uint8 BITSPERPIXEL;
	uint8 BYTESPERPIXEL;
	uint8 PADDING[2];
	uint32 RMASK;
	uint32 GMASK;
	uint32 BMASK;
	uint32 AMASK;
	uint8 RLOSS;
	uint8 GLOSS;
	uint8 BLOSS;
	uint8 ALOSS;
	uint8 RSHIFT;
	uint8 GSHIFT;
	uint8 BSHIFT;
	uint8 ASHIFT;
	int32 REFCOUNT;
	struct $15SDL_PixelFormat* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_PixelFormat ) == 56 );
struct $8SDL_Rect {
	int32 X;
	int32 Y;
	int32 W;
	int32 H;
};
__FB_STATIC_ASSERT( sizeof( struct $8SDL_Rect ) == 16 );
struct $11SDL_Surface {
	uint32 FLAGS;
	struct $15SDL_PixelFormat* FORMAT;
	int32 W;
	int32 H;
	int32 PITCH;
	void* PIXELS;
	void* USERDATA;
	int32 LOCKED;
	void* LIST_BLITMAP;
	struct $8SDL_Rect CLIP_RECT;
	void* MAP;
	int32 REFCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $11SDL_Surface ) == 96 );
struct $15SDL_CommonEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_CommonEvent ) == 8 );
struct $16SDL_DisplayEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 DISPLAY;
	uint8 EVENT;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
	int32 DATA1;
};
__FB_STATIC_ASSERT( sizeof( struct $16SDL_DisplayEvent ) == 20 );
struct $15SDL_WindowEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint8 EVENT;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
	int32 DATA1;
	int32 DATA2;
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_WindowEvent ) == 24 );
struct $10SDL_Keysym {
	int32 SCANCODE;
	int32 SYM;
	uint16 MOD_;
	uint32 UNUSED;
};
__FB_STATIC_ASSERT( sizeof( struct $10SDL_Keysym ) == 16 );
struct $17SDL_KeyboardEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint8 STATE;
	uint8 REPEAT;
	uint8 PADDING2;
	uint8 PADDING3;
	struct $10SDL_Keysym KEYSYM;
};
__FB_STATIC_ASSERT( sizeof( struct $17SDL_KeyboardEvent ) == 32 );
struct $20SDL_TextEditingEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint8 TEXT[32];
	int32 START;
	int32 LENGTH;
};
__FB_STATIC_ASSERT( sizeof( struct $20SDL_TextEditingEvent ) == 52 );
struct $18SDL_TextInputEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint8 TEXT[32];
};
__FB_STATIC_ASSERT( sizeof( struct $18SDL_TextInputEvent ) == 44 );
struct $20SDL_MouseMotionEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint32 WHICH;
	uint32 STATE;
	int32 X;
	int32 Y;
	int32 XREL;
	int32 YREL;
};
__FB_STATIC_ASSERT( sizeof( struct $20SDL_MouseMotionEvent ) == 36 );
struct $20SDL_MouseButtonEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint32 WHICH;
	uint8 BUTTON;
	uint8 STATE;
	uint8 CLICKS;
	uint8 PADDING1;
	int32 X;
	int32 Y;
};
__FB_STATIC_ASSERT( sizeof( struct $20SDL_MouseButtonEvent ) == 28 );
struct $19SDL_MouseWheelEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	uint32 WHICH;
	int32 X;
	int32 Y;
	uint32 DIRECTION;
};
__FB_STATIC_ASSERT( sizeof( struct $19SDL_MouseWheelEvent ) == 28 );
struct $16SDL_JoyAxisEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 AXIS;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
	int16 VALUE;
	uint16 PADDING4;
};
__FB_STATIC_ASSERT( sizeof( struct $16SDL_JoyAxisEvent ) == 20 );
struct $16SDL_JoyBallEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 BALL;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
	int16 XREL;
	int16 YREL;
};
__FB_STATIC_ASSERT( sizeof( struct $16SDL_JoyBallEvent ) == 20 );
struct $15SDL_JoyHatEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 HAT;
	uint8 VALUE;
	uint8 PADDING1;
	uint8 PADDING2;
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_JoyHatEvent ) == 16 );
struct $18SDL_JoyButtonEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 BUTTON;
	uint8 STATE;
	uint8 PADDING1;
	uint8 PADDING2;
};
__FB_STATIC_ASSERT( sizeof( struct $18SDL_JoyButtonEvent ) == 16 );
struct $18SDL_JoyDeviceEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
};
__FB_STATIC_ASSERT( sizeof( struct $18SDL_JoyDeviceEvent ) == 12 );
struct $23SDL_ControllerAxisEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 AXIS;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
	int16 VALUE;
	uint16 PADDING4;
};
__FB_STATIC_ASSERT( sizeof( struct $23SDL_ControllerAxisEvent ) == 20 );
struct $25SDL_ControllerButtonEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	uint8 BUTTON;
	uint8 STATE;
	uint8 PADDING1;
	uint8 PADDING2;
};
__FB_STATIC_ASSERT( sizeof( struct $25SDL_ControllerButtonEvent ) == 16 );
struct $25SDL_ControllerDeviceEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
};
__FB_STATIC_ASSERT( sizeof( struct $25SDL_ControllerDeviceEvent ) == 12 );
struct $27SDL_ControllerTouchpadEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	int32 TOUCHPAD;
	int32 FINGER;
	float X;
	float Y;
	float PRESSURE;
};
__FB_STATIC_ASSERT( sizeof( struct $27SDL_ControllerTouchpadEvent ) == 32 );
struct $25SDL_ControllerSensorEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	int32 SENSOR;
	float DATA[3];
};
__FB_STATIC_ASSERT( sizeof( struct $25SDL_ControllerSensorEvent ) == 28 );
struct $20SDL_AudioDeviceEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WHICH;
	uint8 ISCAPTURE;
	uint8 PADDING1;
	uint8 PADDING2;
	uint8 PADDING3;
};
__FB_STATIC_ASSERT( sizeof( struct $20SDL_AudioDeviceEvent ) == 16 );
struct $15SDL_SensorEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int32 WHICH;
	float DATA[6];
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_SensorEvent ) == 36 );
struct $13SDL_QuitEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
};
__FB_STATIC_ASSERT( sizeof( struct $13SDL_QuitEvent ) == 8 );
struct $13SDL_UserEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint32 WINDOWID;
	int32 CODE;
	void* DATA1;
	void* DATA2;
};
__FB_STATIC_ASSERT( sizeof( struct $13SDL_UserEvent ) == 32 );
struct $14SDL_SysWMEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	void* MSG;
};
__FB_STATIC_ASSERT( sizeof( struct $14SDL_SysWMEvent ) == 16 );
struct $20SDL_TouchFingerEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int64 TOUCHID;
	int64 FINGERID;
	float X;
	float Y;
	float DX;
	float DY;
	float PRESSURE;
	uint32 WINDOWID;
};
__FB_STATIC_ASSERT( sizeof( struct $20SDL_TouchFingerEvent ) == 48 );
struct $21SDL_MultiGestureEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int64 TOUCHID;
	float DTHETA;
	float DDIST;
	float X;
	float Y;
	uint16 NUMFINGERS;
	uint16 PADDING;
};
__FB_STATIC_ASSERT( sizeof( struct $21SDL_MultiGestureEvent ) == 40 );
struct $22SDL_DollarGestureEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	int64 TOUCHID;
	int64 GESTUREID;
	uint32 NUMFINGERS;
	float ERROR;
	float X;
	float Y;
};
__FB_STATIC_ASSERT( sizeof( struct $22SDL_DollarGestureEvent ) == 40 );
struct $13SDL_DropEvent {
	uint32 TYPE;
	uint32 TIMESTAMP;
	uint8* FILE;
	uint32 WINDOWID;
};
__FB_STATIC_ASSERT( sizeof( struct $13SDL_DropEvent ) == 24 );
union $9SDL_Event {
	uint32 TYPE;
	struct $15SDL_CommonEvent COMMON;
	struct $16SDL_DisplayEvent DISPLAY;
	struct $15SDL_WindowEvent WINDOW;
	struct $17SDL_KeyboardEvent KEY;
	struct $20SDL_TextEditingEvent EDIT;
	struct $18SDL_TextInputEvent TEXT;
	struct $20SDL_MouseMotionEvent MOTION;
	struct $20SDL_MouseButtonEvent BUTTON;
	struct $19SDL_MouseWheelEvent WHEEL;
	struct $16SDL_JoyAxisEvent JAXIS;
	struct $16SDL_JoyBallEvent JBALL;
	struct $15SDL_JoyHatEvent JHAT;
	struct $18SDL_JoyButtonEvent JBUTTON;
	struct $18SDL_JoyDeviceEvent JDEVICE;
	struct $23SDL_ControllerAxisEvent CAXIS;
	struct $25SDL_ControllerButtonEvent CBUTTON;
	struct $25SDL_ControllerDeviceEvent CDEVICE;
	struct $27SDL_ControllerTouchpadEvent CTOUCHPAD;
	struct $25SDL_ControllerSensorEvent CSENSOR;
	struct $20SDL_AudioDeviceEvent ADEVICE;
	struct $15SDL_SensorEvent SENSOR;
	struct $13SDL_QuitEvent QUIT;
	struct $13SDL_UserEvent USER;
	struct $14SDL_SysWMEvent SYSWM;
	struct $20SDL_TouchFingerEvent TFINGER;
	struct $21SDL_MultiGestureEvent MGESTURE;
	struct $22SDL_DollarGestureEvent DGESTURE;
	struct $13SDL_DropEvent DROP;
	uint8 PADDING[56];
};
__FB_STATIC_ASSERT( sizeof( union $9SDL_Event ) == 56 );
void fb_PrintLongint( int32, int64, int32 );
void fb_PrintDouble( int32, double, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
void fb_Init( int32, uint8**, int32 );
void fb_End( int32 );
double fb_Timer( void );
void SDL_FreeSurface( struct $11SDL_Surface* );
void* SDL_CreateWindow( uint8*, int32, int32, int32, int32, uint32 );
void SDL_DestroyWindow( void* );
void SDL_PumpEvents( void );
int32 SDL_PeepEvents( union $9SDL_Event*, int32, int32, uint32, uint32 );
int32 SDL_PollEvent( union $9SDL_Event* );
int32 SDL_SetHint( uint8*, uint8* );
void* SDL_CreateRenderer( void*, int32, uint32 );
void* SDL_CreateTexture( void*, uint32, int32, int32, int32 );
void* SDL_CreateTextureFromSurface( void*, struct $11SDL_Surface* );
int32 SDL_UpdateTexture( void*, struct $8SDL_Rect*, void*, int32 );
int32 SDL_RenderSetLogicalSize( void*, int32, int32 );
int32 SDL_RenderClear( void* );
int32 SDL_RenderCopy( void*, void*, struct $8SDL_Rect*, struct $8SDL_Rect* );
void SDL_RenderPresent( void* );
void SDL_DestroyTexture( void* );
void SDL_DestroyRenderer( void* );
void SDL_GetVersion( struct $11SDL_version* );
int32 SDL_Init( uint32 );
void SDL_Quit( void );
struct $11SDL_version* IMG_Linked_Version( void );
int32 IMG_Init( int32 );
struct $11SDL_Surface* IMG_Load( uint8* );
struct $11SDL_version* TTF_Linked_Version( void );
int32 TTF_Init( void );
void* TTF_OpenFont( uint8*, int32 );
int32 TTF_SizeText( void*, uint8*, int32*, int32* );
struct $11SDL_Surface* TTF_RenderText_Solid( void*, uint8*, struct $9SDL_Color );
static uint32 T2$[2073600];
static uint8 T3$[2073600];

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	struct $9SDL_Color TMP$181$0;
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (uint8**)__FB_ARGV__$0, 0 );
	label$0:;
	struct $11SDL_version SDLVERSION$0;
	__builtin_memset( &SDLVERSION$0, 0, 3ll );
	SDL_GetVersion( &SDLVERSION$0 );
	FBSTRING* vr$3 = fb_StrAllocTempDescZEx( (uint8*)"SDL2 version = ", 15ll );
	fb_PrintString( 0, (FBSTRING*)vr$3, 0 );
	fb_PrintLongint( 0, (((int64)*(uint8*)&SDLVERSION$0 * 1000ll) + ((int64)*(uint8*)((uint8*)&SDLVERSION$0 + 1ll) * 100ll)) + (int64)*(uint8*)((uint8*)&SDLVERSION$0 + 2ll), 1 );
	struct $11SDL_version* SDLIMAGEVERSION$0;
	struct $11SDL_version* vr$11 = IMG_Linked_Version(  );
	SDLIMAGEVERSION$0 = vr$11;
	FBSTRING* vr$12 = fb_StrAllocTempDescZEx( (uint8*)"SDL2_image version = ", 21ll );
	fb_PrintString( 0, (FBSTRING*)vr$12, 0 );
	fb_PrintLongint( 0, (((int64)*(uint8*)SDLIMAGEVERSION$0 * 1000ll) + ((int64)*(uint8*)((uint8*)SDLIMAGEVERSION$0 + 1ll) * 100ll)) + (int64)*(uint8*)((uint8*)SDLIMAGEVERSION$0 + 2ll), 1 );
	struct $11SDL_version* SDLTTFVERSION$0;
	struct $11SDL_version* vr$23 = TTF_Linked_Version(  );
	SDLTTFVERSION$0 = vr$23;
	FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (uint8*)"SDL2_ttf version = ", 19ll );
	fb_PrintString( 0, (FBSTRING*)vr$24, 0 );
	fb_PrintLongint( 0, (((int64)*(uint8*)SDLTTFVERSION$0 * 1000ll) + ((int64)*(uint8*)((uint8*)SDLTTFVERSION$0 + 1ll) * 100ll)) + (int64)*(uint8*)((uint8*)SDLTTFVERSION$0 + 2ll), 1 );
	SDL_Init( 32u );
	IMG_Init( 0 );
	TTF_Init(  );
	SDL_SetHint( (uint8*)"SDL_RENDER_SCALE_QUALITY", (uint8*)"best" );
	void* WIN$0;
	void* vr$35 = SDL_CreateWindow( (uint8*)"The Retromachine", 536805376, 536805376, 1920, 1080, 4097u );
	WIN$0 = vr$35;
	void* RENDERER$0;
	void* vr$36 = SDL_CreateRenderer( WIN$0, -1, 14u );
	RENDERER$0 = vr$36;
	void* SDLTEXTURE$0;
	void* vr$37 = SDL_CreateTexture( RENDERER$0, 372645892u, 1, 1920, 1080 );
	SDLTEXTURE$0 = vr$37;
	SDL_RenderSetLogicalSize( RENDERER$0, 1920, 1080 );
	struct $11SDL_Surface* SURFACEHORSE$0;
	struct $11SDL_Surface* vr$38 = IMG_Load( (uint8*)"data/horse.tga" );
	SURFACEHORSE$0 = vr$38;
	void* TEXTUREHORSE$0;
	void* vr$39 = SDL_CreateTextureFromSurface( RENDERER$0, SURFACEHORSE$0 );
	TEXTUREHORSE$0 = vr$39;
	SDL_FreeSurface( SURFACEHORSE$0 );
	SURFACEHORSE$0 = (struct $11SDL_Surface*)0ull;
	struct $8SDL_Rect RCHORSE$0;
	*(int32*)&RCHORSE$0 = 0;
	*(int32*)((uint8*)&RCHORSE$0 + 4ll) = 0;
	*(int32*)((uint8*)&RCHORSE$0 + 8ll) = 93;
	*(int32*)((uint8*)&RCHORSE$0 + 12ll) = 72;
	void* FONT$0;
	void* vr$40 = TTF_OpenFont( (uint8*)"data/Vera.ttf", 36 );
	FONT$0 = vr$40;
	*(uint8*)&TMP$181$0 = (uint8)255u;
	*(uint8*)((uint8*)&TMP$181$0 + 1ll) = (uint8)0u;
	*(uint8*)((uint8*)&TMP$181$0 + 2ll) = (uint8)0u;
	__builtin_memset( (void*)((uint8*)&TMP$181$0 + 3ll), 0, 1ll );
	struct $11SDL_Surface* SURFACEHELLO$0;
	struct $11SDL_Surface* vr$42 = TTF_RenderText_Solid( FONT$0, (uint8*)"Hello!", TMP$181$0 );
	SURFACEHELLO$0 = vr$42;
	void* TEXTUREHELLO$0;
	void* vr$43 = SDL_CreateTextureFromSurface( RENDERER$0, SURFACEHELLO$0 );
	TEXTUREHELLO$0 = vr$43;
	SDL_FreeSurface( SURFACEHELLO$0 );
	SURFACEHELLO$0 = (struct $11SDL_Surface*)0ull;
	struct $8SDL_Rect RCHELLO$0;
	__builtin_memset( &RCHELLO$0, 0, 16ll );
	TTF_SizeText( FONT$0, (uint8*)"Hello!", (int32*)((uint8*)&RCHELLO$0 + 8ll), (int32*)((uint8*)&RCHELLO$0 + 12ll) );
	*(int32*)&RCHELLO$0 = 100;
	*(int32*)((uint8*)&RCHELLO$0 + 4ll) = 100;
	uint32 I$0;
	__builtin_memset( &I$0, 0, 4ll );
	uint32 J$0;
	__builtin_memset( &J$0, 0, 4ll );
	double Q$0;
	__builtin_memset( &Q$0, 0, 8ll );
	{
		I$0 = 0u;
		label$34:;
		{
			{
				J$0 = 0u;
				label$38:;
				{
					*(uint32*)((int64)(uint32*)T2$ + ((((int64)I$0 * 1920ll) + (int64)J$0) << (2ll & 63ll))) = (uint32)((int64)I$0 + ((int64)J$0 << (8ll & 63ll)));
				}
				label$36:;
				J$0 = (uint32)((int64)J$0 + 1ll);
				label$35:;
				if( (int64)J$0 <= 1919ll ) goto label$38;
				label$37:;
			}
		}
		label$32:;
		I$0 = (uint32)((int64)I$0 + 1ll);
		label$31:;
		if( (int64)I$0 <= 1079ll ) goto label$34;
		label$33:;
	}
	label$39:;
	{
		I$0 = (uint32)((int64)I$0 + 1ll);
		*(int32*)&RCHORSE$0 = (int32)((int64)I$0 % 1920ll);
		*(int32*)((uint8*)&RCHORSE$0 + 4ll) = (int32)((int64)I$0 % 1080ll);
		SDL_UpdateTexture( SDLTEXTURE$0, (struct $8SDL_Rect*)0ull, (void*)T2$, 7680 );
		SDL_RenderClear( RENDERER$0 );
		SDL_RenderCopy( RENDERER$0, SDLTEXTURE$0, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)0ull );
		SDL_RenderCopy( RENDERER$0, TEXTUREHORSE$0, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)&RCHORSE$0 );
		SDL_RenderCopy( RENDERER$0, TEXTUREHELLO$0, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)&RCHELLO$0 );
		SDL_RenderPresent( RENDERER$0 );
		double vr$79 = fb_Timer(  );
		Q$0 = vr$79 - Q$0;
		fb_PrintDouble( 0, Q$0, 1 );
		double vr$81 = fb_Timer(  );
		Q$0 = vr$81;
		union $9SDL_Event EVENT$1;
		__builtin_memset( &EVENT$1, 0, 56ll );
		label$42:;
		int32 vr$84 = SDL_PollEvent( &EVENT$1 );
		if( (int64)vr$84 == 0ll ) goto label$43;
		{
			{
				uint32 TMP$182$3;
				TMP$182$3 = *(uint32*)&EVENT$1;
				if( (int64)TMP$182$3 != 256ll ) goto label$45;
				label$46:;
				{
					goto label$40;
				}
				goto label$44;
				label$45:;
				if( (int64)TMP$182$3 != 768ll ) goto label$47;
				label$48:;
				{
					if( (int64)*(int32*)((uint8*)&EVENT$1 + 20ll) != 27ll ) goto label$50;
					{
						goto label$40;
					}
					label$50:;
					label$49:;
				}
				label$47:;
				label$44:;
			}
		}
		goto label$42;
		label$43:;
	}
	label$41:;
	goto label$39;
	label$40:;
	SDL_DestroyTexture( TEXTUREHELLO$0 );
	SDL_DestroyTexture( TEXTUREHORSE$0 );
	SDL_DestroyRenderer( RENDERER$0 );
	SDL_DestroyWindow( WIN$0 );
	SDL_Quit(  );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}
