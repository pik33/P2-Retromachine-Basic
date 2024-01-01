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
struct $11SPRITE_TYPE {
	uint32 X;
	uint32 Y;
	int64 W;
	int64 H;
	uint32 SPTR;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $11SPRITE_TYPE ) == 32 );
struct $15SDL_DisplayMode {
	uint32 FORMAT;
	int32 W;
	int32 H;
	int32 REFRESH_RATE;
	void* DRIVERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $15SDL_DisplayMode ) == 24 );
struct $8SDL_Rect {
	int32 X;
	int32 Y;
	int32 W;
	int32 H;
};
__FB_STATIC_ASSERT( sizeof( struct $8SDL_Rect ) == 16 );
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
struct $11SDL_version {
	uint8 MAJOR;
	uint8 MINOR;
	uint8 PATCH;
};
__FB_STATIC_ASSERT( sizeof( struct $11SDL_version ) == 3 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 240 );
typedef void (*tmp$1)( void* );
struct $4PART {
	FBSTRING PART_;
	int64 TOKEN;
};
__FB_STATIC_ASSERT( sizeof( struct $4PART ) == 32 );
union $7ARESULT {
	int64 IRESULT;
	uint32 URESULT;
	FBSTRING* SRESULT;
	double FRESULT;
	uint64 ULRESULT;
	uint32 TWOWORDS[2];
};
__FB_STATIC_ASSERT( sizeof( union $7ARESULT ) == 8 );
struct $8VARIABLE {
	FBSTRING NAME;
	union $7ARESULT VALUE;
	uint32 VARTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $8VARIABLE ) == 40 );
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
int32 fb_ErrorGetNum( void );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileGetArrayLarge( int32, int64, struct $7FBARRAYIvE* );
void* memset( void*, int32, uint64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
FBSTRING* fb_CHR( int32, ... );
void fb_Init( int32, uint8**, int32 );
void fb_End( int32 );
int32 fb_SleepEx( int32, int32 );
void* fb_ThreadCreate( tmp$1, void*, int64 );
int32 fb_ChDir( FBSTRING* );
void* memmove( void*, void*, uint64 );
int32 SDL_GetCurrentDisplayMode( int32, struct $15SDL_DisplayMode* );
int32 SDL_SetWindowDisplayMode( void*, struct $15SDL_DisplayMode* );
void* SDL_CreateWindow( uint8*, int32, int32, int32, int32, uint32 );
void SDL_DestroyWindow( void* );
uint32 SDL_GetMouseState( int32*, int32* );
void SDL_WarpMouseInWindow( void*, int32, int32 );
int32 SDL_ShowCursor( int32 );
void SDL_PumpEvents( void );
int32 SDL_PeepEvents( union $9SDL_Event*, int32, int32, uint32, uint32 );
int32 SDL_PollEvent( union $9SDL_Event* );
int32 SDL_SetHint( uint8*, uint8* );
void* SDL_CreateRenderer( void*, int32, uint32 );
void* SDL_CreateTexture( void*, uint32, int32, int32, int32 );
int32 SDL_UpdateTexture( void*, struct $8SDL_Rect*, void*, int32 );
int32 SDL_RenderSetLogicalSize( void*, int32, int32 );
int32 SDL_RenderClear( void* );
int32 SDL_RenderCopy( void*, void*, struct $8SDL_Rect*, struct $8SDL_Rect* );
void SDL_RenderPresent( void* );
void SDL_DestroyTexture( void* );
void SDL_DestroyRenderer( void* );
int32 SDL_Init( uint32 );
void SDL_Quit( void );
void PUTPIXEL( uint32, uint32, uint8 );
uint8 GETPIXEL( uint32, uint32 );
void FASTLINE( int64, int64, int64, uint8 );
void DRAW1( int64, int64, int64, int64, uint8 );
void LINE1( int64, int64, int64, int64, uint8 );
void PUTCHARXYCF( int64, int64, uint8, uint8 );
void PUTCHARXYCG( int64, int64, uint8, uint8, uint8 );
void PUTCHARXYCGF( int64, int64, uint8, uint8, uint8 );
void OUTTEXTXYCG( int64, int64, FBSTRING*, uint8, uint8 );
void FILLPUSH( int64 );
int64 FILLPOP( void );
void SCROLLUP2( void );
void SETSPRITEPOS( int64, int64, int64 );
void SETSPRITESIZE( int64, int64, int64 );
void SETSPRITEPTR( int64, uint32 );
void SETCURSORPOS( int64, int64 );
void POSITION( int64, int64 );
void SETCURSORCOLOR( uint8 );
void SETWRITECOLORS( uint8, uint8 );
void CLS1( uint8, uint8 );
void SETLEADINGSPACES( int64 );
void CRLF( void );
void PUTCHAR2( uint8 );
void WRITE1( FBSTRING* );
void WRITELN( FBSTRING* );
void TRANSLATE_SCREEN( void );
void SPRITE1( void );
uint8 SCANTOCHAR( uint32 );
void SDLTHREAD( void* );
static void _ZN4PARTC1Ev( struct $4PART* );
static void _ZN4PARTaSERKS_( struct $4PART*, struct $4PART* );
static void _ZN4PARTD1Ev( struct $4PART* );
static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE*, struct $8VARIABLE* );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
union $13MACHINE_UNION {
	uint8 BYTES[1073741824];
	uint16 WORDS[536870912];
	uint32 LONGS[268435456];
};
__FB_STATIC_ASSERT( sizeof( union $13MACHINE_UNION ) == 1073741824 );
static union $13MACHINE_UNION MACHINE$;
static uint32 T2$[2073600];
static uint32 BUFPTR$ = 1071668223u;
static uint32 TEXTBUFPTR$ = 1071663487u;
static uint32 CURSORPTR$ = 1071663359u;
static uint32 MEMTOP$ = 1071663487u;
static struct $11SPRITE_TYPE SPRITES$[18];
static int64 FILLSTACK$[257];
static int64 FILLPTR$;
static int64 A$;
static uint32 FRAMES$ = 0u;
static int64 UPDATED$;
static int64 FONT_FAMILY$ = 0ll;
static int64 WRITE_COLOR$ = 154ll;
static int64 WRITE_BACKGROUND$ = 147ll;
static int64 CURSOR_X$ = 0ll;
static int64 CURSOR_Y$ = 0ll;
static int64 CURSORSHAPE$ = 14ll;
static int64 CURSORCOLOR$ = 154ll;
static int64 LEADING_SPACES$ = 2ll;
static int64 ST_LINES$ = 37ll;
static uint8 FONTS$[12288];
static uint8 MYSZ$[1025];
static uint32 ATARIPALETTE$[256];
struct $8FBARRAY1IjE {
	uint32* DATA;
	uint32* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IjE ) == 72 );
static struct $8FBARRAY1IjE tmp$178$ = { (uint32*)ATARIPALETTE$, (uint32*)ATARIPALETTE$, 1024ll, 4ll, 1ll, 49ll, { { 256ll, 0ll, 255ll } } };
static uint32 KEYQ$[257];
static int64 KEYQS$ = 0ll;
static int64 KEYQE$ = 0ll;
static uint16 ENVBUF$[8][256];
static uint8 ENVBUF8$[8][513];
static float NOTETABLE$[12];
static int64 NOTEPERIODS$[12];
static uint8 KEYS$[512] = { (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)97u, (uint8)65u, (uint8)23u, (uint8)14u, (uint8)98u, (uint8)66u, (uint8)0u, (uint8)0u, (uint8)99u, (uint8)67u, (uint8)25u, (uint8)16u, (uint8)100u, (uint8)68u, (uint8)0u, (uint8)0u, (uint8)101u, (uint8)69u, (uint8)24u, (uint8)15u, (uint8)102u, (uint8)70u, (uint8)0u, (uint8)0u, (uint8)103u, (uint8)71u, (uint8)0u, (uint8)0u, (uint8)104u, (uint8)72u, (uint8)0u, (uint8)0u, (uint8)105u, (uint8)73u, (uint8)0u, (uint8)0u, (uint8)106u, (uint8)74u, (uint8)0u, (uint8)0u, (uint8)107u, (uint8)75u, (uint8)0u, (uint8)0u, (uint8)108u, (uint8)76u, (uint8)31u, (uint8)22u, (uint8)109u, (uint8)77u, (uint8)0u, (uint8)0u, (uint8)110u, (uint8)78u, (uint8)26u, (uint8)17u, (uint8)111u, (uint8)79u, (uint8)30u, (uint8)21u, (uint8)112u, (uint8)80u, (uint8)0u, (uint8)0u, (uint8)113u, (uint8)81u, (uint8)0u, (uint8)0u, (uint8)114u, (uint8)82u, (uint8)0u, (uint8)0u, (uint8)115u, (uint8)83u, (uint8)27u, (uint8)18u, (uint8)116u, (uint8)84u, (uint8)0u, (uint8)0u, (uint8)117u, (uint8)85u, (uint8)0u, (uint8)0u, (uint8)118u, (uint8)86u, (uint8)0u, (uint8)0u, (uint8)119u, (uint8)87u, (uint8)0u, (uint8)0u, (uint8)120u, (uint8)88u, (uint8)28u, (uint8)19u, (uint8)121u, (uint8)89u, (uint8)0u, (uint8)0u, (uint8)122u, (uint8)90u, (uint8)29u, (uint8)20u, (uint8)49u, (uint8)33u, (uint8)4u, (uint8)0u, (uint8)50u, (uint8)64u, (uint8)5u, (uint8)0u, (uint8)51u, (uint8)35u, (uint8)6u, (uint8)0u, (uint8)52u, (uint8)36u, (uint8)7u, (uint8)0u, (uint8)53u, (uint8)37u, (uint8)8u, (uint8)0u, (uint8)54u, (uint8)94u, (uint8)9u, (uint8)0u, (uint8)55u, (uint8)38u, (uint8)10u, (uint8)0u, (uint8)56u, (uint8)42u, (uint8)11u, (uint8)0u, (uint8)57u, (uint8)40u, (uint8)12u, (uint8)0u, (uint8)48u, (uint8)41u, (uint8)13u, (uint8)0u, (uint8)141u, (uint8)141u, (uint8)0u, (uint8)0u, (uint8)155u, (uint8)155u, (uint8)0u, (uint8)0u, (uint8)136u, (uint8)136u, (uint8)0u, (uint8)0u, (uint8)137u, (uint8)137u, (uint8)0u, (uint8)0u, (uint8)32u, (uint8)32u, (uint8)0u, (uint8)0u, (uint8)45u, (uint8)95u, (uint8)0u, (uint8)0u, (uint8)61u, (uint8)43u, (uint8)0u, (uint8)0u, (uint8)91u, (uint8)123u, (uint8)0u, (uint8)0u, (uint8)93u, (uint8)125u, (uint8)0u, (uint8)0u, (uint8)92u, (uint8)124u, (uint8)0u, (uint8)0u, (uint8)35u, (uint8)126u, (uint8)0u, (uint8)0u, (uint8)59u, (uint8)58u, (uint8)0u, (uint8)0u, (uint8)39u, (uint8)34u, (uint8)0u, (uint8)0u, (uint8)96u, (uint8)126u, (uint8)3u, (uint8)0u, (uint8)44u, (uint8)60u, (uint8)0u, (uint8)0u, (uint8)46u, (uint8)62u, (uint8)0u, (uint8)0u, (uint8)47u, (uint8)63u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)186u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)187u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)188u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)189u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)190u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)191u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)192u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)193u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)194u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)195u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)196u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)197u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)198u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)199u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)200u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)201u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)202u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)203u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)127u, (uint8)127u, (uint8)0u, (uint8)0u, (uint8)204u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)205u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)206u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)207u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)208u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)209u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)47u, (uint8)47u, (uint8)0u, (uint8)0u, (uint8)42u, (uint8)42u, (uint8)0u, (uint8)0u, (uint8)45u, (uint8)45u, (uint8)0u, (uint8)0u, (uint8)43u, (uint8)43u, (uint8)0u, (uint8)0u, (uint8)141u, (uint8)141u, (uint8)0u, (uint8)0u, (uint8)49u, (uint8)49u, (uint8)0u, (uint8)0u, (uint8)50u, (uint8)50u, (uint8)0u, (uint8)0u, (uint8)51u, (uint8)51u, (uint8)0u, (uint8)0u, (uint8)52u, (uint8)52u, (uint8)0u, (uint8)0u, (uint8)53u, (uint8)53u, (uint8)0u, (uint8)0u, (uint8)54u, (uint8)54u, (uint8)0u, (uint8)0u, (uint8)55u, (uint8)55u, (uint8)0u, (uint8)0u, (uint8)56u, (uint8)56u, (uint8)0u, (uint8)0u, (uint8)57u, (uint8)57u, (uint8)0u, (uint8)0u, (uint8)48u, (uint8)48u, (uint8)0u, (uint8)0u, (uint8)46u, (uint8)127u, (uint8)0u, (uint8)0u, (uint8)92u, (uint8)124u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)61u, (uint8)61u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u };
static struct $4PART LPARTS$[126];

void PUTPIXEL( uint32 X$1, uint32 Y$1, uint8 C$1 )
{
	label$39:;
	*(uint8*)((uint8*)&MACHINE$ + (((int64)BUFPTR$ + (int64)X$1) + ((int64)Y$1 << (10ll & 63ll)))) = C$1;
	label$40:;
}

uint8 GETPIXEL( uint32 X$1, uint32 Y$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$41:;
	fb$result$1 = *(uint8*)((uint8*)&MACHINE$ + (((int64)BUFPTR$ + (int64)X$1) + ((int64)Y$1 << (10ll & 63ll))));
	goto label$42;
	label$42:;
	return fb$result$1;
}

void FASTLINE( int64 X1$1, int64 X2$1, int64 Y$1, uint8 C$1 )
{
	label$43:;
	memset( (void*)((uint8*)&MACHINE$ + (((int64)BUFPTR$ + (Y$1 << (10ll & 63ll))) + X1$1)), (int32)C$1, (uint64)((X2$1 - X1$1) + 1ll) );
	label$44:;
}

void DRAW1( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$45:;
	int64 D$1;
	__builtin_memset( &D$1, 0, 8ll );
	int64 DX$1;
	__builtin_memset( &DX$1, 0, 8ll );
	int64 DY$1;
	__builtin_memset( &DY$1, 0, 8ll );
	int64 AI$1;
	__builtin_memset( &AI$1, 0, 8ll );
	int64 BI$1;
	__builtin_memset( &BI$1, 0, 8ll );
	int64 XI$1;
	__builtin_memset( &XI$1, 0, 8ll );
	int64 YI$1;
	__builtin_memset( &YI$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	if( Y1$1 != Y2$1 ) goto label$48;
	{
		FASTLINE( X1$1, X2$1, Y1$1, C$1 );
	}
	goto label$47;
	label$48:;
	{
		X$1 = X1$1;
		Y$1 = Y1$1;
		if( X1$1 >= X2$1 ) goto label$50;
		{
			XI$1 = 1ll;
			DX$1 = X2$1 - X1$1;
		}
		goto label$49;
		label$50:;
		{
			XI$1 = -1ll;
			DX$1 = X1$1 - X2$1;
		}
		label$49:;
		if( Y1$1 >= Y2$1 ) goto label$52;
		{
			YI$1 = 1ll;
			DY$1 = Y2$1 - Y1$1;
		}
		goto label$51;
		label$52:;
		{
			YI$1 = -1ll;
			DY$1 = Y1$1 - Y2$1;
		}
		label$51:;
		PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
		if( DX$1 <= DY$1 ) goto label$54;
		{
			AI$1 = (DY$1 - DX$1) << (1ll & 63ll);
			BI$1 = DY$1 << (1ll & 63ll);
			D$1 = BI$1 - DX$1;
			label$55:;
			if( X$1 == X2$1 ) goto label$56;
			{
				if( D$1 < 0ll ) goto label$58;
				{
					X$1 = X$1 + XI$1;
					Y$1 = Y$1 + YI$1;
					D$1 = D$1 + AI$1;
				}
				goto label$57;
				label$58:;
				{
					D$1 = D$1 + BI$1;
					X$1 = X$1 + XI$1;
				}
				label$57:;
				PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
			}
			goto label$55;
			label$56:;
		}
		goto label$53;
		label$54:;
		{
			AI$1 = (DX$1 - DY$1) << (1ll & 63ll);
			BI$1 = DX$1 << (1ll & 63ll);
			D$1 = BI$1 - DY$1;
			label$59:;
			if( Y$1 == Y2$1 ) goto label$60;
			{
				if( D$1 < 0ll ) goto label$62;
				{
					X$1 = X$1 + XI$1;
					Y$1 = Y$1 + YI$1;
					D$1 = D$1 + AI$1;
				}
				goto label$61;
				label$62:;
				{
					D$1 = D$1 + BI$1;
					Y$1 = Y$1 + YI$1;
				}
				label$61:;
				PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
			}
			goto label$59;
			label$60:;
		}
		label$53:;
	}
	label$47:;
	label$46:;
}

void LINE1( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$63:;
	DRAW1( X1$1, Y1$1, X2$1, Y2$1, C$1 );
	label$64:;
}

void FCIRCLE( int64 X0$1, int64 Y0$1, int64 R$1, uint8 C$1 )
{
	label$65:;
	int64 D$1;
	__builtin_memset( &D$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	int64 DA$1;
	__builtin_memset( &DA$1, 0, 8ll );
	int64 DB$1;
	__builtin_memset( &DB$1, 0, 8ll );
	D$1 = -(R$1 << (2ll & 63ll)) + 5ll;
	X$1 = 0ll;
	Y$1 = R$1;
	DA$1 = (R$1 * -8ll) + 20ll;
	DB$1 = 12ll;
	label$67:;
	if( X$1 > Y$1 ) goto label$68;
	{
		FASTLINE( X0$1 - X$1, X0$1 + X$1, Y0$1 - Y$1, C$1 );
		FASTLINE( X0$1 - X$1, X0$1 + X$1, Y0$1 + Y$1, C$1 );
		FASTLINE( X0$1 - Y$1, X0$1 + Y$1, Y0$1 - X$1, C$1 );
		FASTLINE( X0$1 - Y$1, X0$1 + Y$1, Y0$1 + X$1, C$1 );
		if( D$1 <= 0ll ) goto label$70;
		{
			D$1 = D$1 + DA$1;
			Y$1 = Y$1 + -1ll;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 16ll;
			DB$1 = DB$1 + 8ll;
		}
		goto label$69;
		label$70:;
		{
			D$1 = D$1 + DB$1;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 8ll;
			DB$1 = DB$1 + 8ll;
		}
		label$69:;
	}
	goto label$67;
	label$68:;
	label$66:;
}

void ECIRCLE( int64 X0$1, int64 Y0$1, int64 R$1, uint8 C$1 )
{
	label$71:;
	int64 D$1;
	__builtin_memset( &D$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	int64 DA$1;
	__builtin_memset( &DA$1, 0, 8ll );
	int64 DB$1;
	__builtin_memset( &DB$1, 0, 8ll );
	D$1 = -(R$1 << (2ll & 63ll)) + 5ll;
	X$1 = 0ll;
	Y$1 = R$1;
	DA$1 = (R$1 * -8ll) + 20ll;
	DB$1 = 12ll;
	label$73:;
	if( X$1 > Y$1 ) goto label$74;
	{
		PUTPIXEL( (uint32)(X0$1 - X$1), (uint32)(Y0$1 - Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - X$1), (uint32)(Y0$1 + Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + X$1), (uint32)(Y0$1 - Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + X$1), (uint32)(Y0$1 + Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - Y$1), (uint32)(Y0$1 - X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - Y$1), (uint32)(Y0$1 + X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + Y$1), (uint32)(Y0$1 - X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + Y$1), (uint32)(Y0$1 + X$1), C$1 );
		if( D$1 <= 0ll ) goto label$76;
		{
			D$1 = D$1 + DA$1;
			Y$1 = Y$1 + -1ll;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 16ll;
			DB$1 = DB$1 + 8ll;
		}
		goto label$75;
		label$76:;
		{
			D$1 = D$1 + DB$1;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 8ll;
			DB$1 = DB$1 + 8ll;
		}
		label$75:;
	}
	goto label$73;
	label$74:;
	label$72:;
}

void FRAME( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$77:;
	FASTLINE( X1$1, X2$1, Y1$1, C$1 );
	FASTLINE( X1$1, X2$1, Y2$1, C$1 );
	LINE1( X1$1, Y1$1, X1$1, Y2$1, C$1 );
	LINE1( X2$1, Y1$1, X2$1, Y2$1, C$1 );
	label$78:;
}

void BOX( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$79:;
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	{
		YY$1 = Y1$1;
		int64 TMP$181$2;
		TMP$181$2 = Y2$1;
		goto label$81;
		label$84:;
		{
			FASTLINE( X1$1, X2$1, YY$1, C$1 );
		}
		label$82:;
		YY$1 = YY$1 + 1ll;
		label$81:;
		if( YY$1 <= TMP$181$2 ) goto label$84;
		label$83:;
	}
	label$80:;
}

void PUTCHARXYCF( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1 )
{
	label$85:;
	int64 XX$1;
	__builtin_memset( &XX$1, 0, 8ll );
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	int64 BB$1;
	__builtin_memset( &BB$1, 0, 8ll );
	{
		YY$1 = 0ll;
		label$90:;
		{
			BB$1 = (int64)*(uint8*)((int64)(uint8*)FONTS$ + (((FONT_FAMILY$ << (12ll & 63ll)) + ((int64)ACHAR$1 << (4ll & 63ll))) + YY$1));
			{
				XX$1 = 0ll;
				label$94:;
				{
					if( (BB$1 & (1ll << (XX$1 & 63ll))) == 0ll ) goto label$96;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), F$1 );
					}
					label$96:;
					label$95:;
				}
				label$92:;
				XX$1 = XX$1 + 1ll;
				label$91:;
				if( XX$1 <= 7ll ) goto label$94;
				label$93:;
			}
		}
		label$88:;
		YY$1 = YY$1 + 1ll;
		label$87:;
		if( YY$1 <= 15ll ) goto label$90;
		label$89:;
	}
	label$86:;
}

void PUTCHARXYCG( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1, uint8 B$1 )
{
	label$97:;
	int64 XX$1;
	__builtin_memset( &XX$1, 0, 8ll );
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	int64 BB$1;
	__builtin_memset( &BB$1, 0, 8ll );
	{
		YY$1 = 0ll;
		label$102:;
		{
			BB$1 = (int64)*(uint8*)((int64)(uint8*)FONTS$ + (((FONT_FAMILY$ << (12ll & 63ll)) + ((int64)ACHAR$1 << (4ll & 63ll))) + YY$1));
			{
				XX$1 = 0ll;
				label$106:;
				{
					if( (BB$1 & (1ll << (XX$1 & 63ll))) == 0ll ) goto label$108;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), F$1 );
					}
					goto label$107;
					label$108:;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), B$1 );
					}
					label$107:;
				}
				label$104:;
				XX$1 = XX$1 + 1ll;
				label$103:;
				if( XX$1 <= 7ll ) goto label$106;
				label$105:;
			}
		}
		label$100:;
		YY$1 = YY$1 + 1ll;
		label$99:;
		if( YY$1 <= 15ll ) goto label$102;
		label$101:;
	}
	label$98:;
}

void PUTCHARXYCGF( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1, uint8 B$1 )
{
	label$109:;
	PUTCHARXYCG( X$1 << (2ll & 63ll), (Y$1 << (4ll & 63ll)) + 4ll, ACHAR$1, F$1, B$1 );
	label$110:;
}

void OUTTEXTXYCG( int64 X$1, int64 Y$1, FBSTRING* TEXT$1, uint8 F$1, uint8 B$1 )
{
	label$111:;
	int64 III$1;
	__builtin_memset( &III$1, 0, 8ll );
	{
		III$1 = 1ll;
		int64 TMP$182$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$182$2 = vr$1;
		goto label$113;
		label$116:;
		{
			FBSTRING* vr$2 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$3 = fb_ASC( (FBSTRING*)vr$2, 1ll );
			PUTCHARXYCG( X$1 + (III$1 << (3ll & 63ll)), Y$1, (uint8)vr$3, F$1, B$1 );
		}
		label$114:;
		III$1 = III$1 + 1ll;
		label$113:;
		if( III$1 <= TMP$182$2 ) goto label$116;
		label$115:;
	}
	label$112:;
}

void OUTTEXTXYCF( int64 X$1, int64 Y$1, FBSTRING* TEXT$1, uint8 F$1 )
{
	label$117:;
	int64 III$1;
	__builtin_memset( &III$1, 0, 8ll );
	{
		III$1 = 1ll;
		int64 TMP$183$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$183$2 = vr$1;
		goto label$119;
		label$122:;
		{
			FBSTRING* vr$2 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$3 = fb_ASC( (FBSTRING*)vr$2, 1ll );
			PUTCHARXYCF( (X$1 + (III$1 << (3ll & 63ll))) + -8ll, Y$1, (uint8)vr$3, F$1 );
		}
		label$120:;
		III$1 = III$1 + 1ll;
		label$119:;
		if( III$1 <= TMP$183$2 ) goto label$122;
		label$121:;
	}
	label$118:;
}

void FILLPUSH( int64 V$1 )
{
	label$123:;
	*(int64*)((int64)(int64*)FILLSTACK$ + (FILLPTR$ << (3ll & 63ll))) = V$1;
	FILLPTR$ = FILLPTR$ + 1ll;
	label$124:;
}

int64 FILLPOP( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$125:;
	int64 V$1;
	__builtin_memset( &V$1, 0, 8ll );
	FILLPTR$ = FILLPTR$ + -1ll;
	if( FILLPTR$ >= 0ll ) goto label$128;
	{
		FILLPTR$ = 0ll;
		V$1 = -12345ll;
	}
	goto label$127;
	label$128:;
	{
		V$1 = *(int64*)((int64)(int64*)FILLSTACK$ + (FILLPTR$ << (3ll & 63ll)));
	}
	label$127:;
	fb$result$1 = V$1;
	goto label$126;
	label$126:;
	return fb$result$1;
}

void FILL( int64 X$1, int64 Y$1, int64 NEWCOLOR$1, int64 OLDCOLOR$1 )
{
	label$129:;
	int64 X1$1;
	__builtin_memset( &X1$1, 0, 8ll );
	int64 SPANABOVE$1;
	__builtin_memset( &SPANABOVE$1, 0, 8ll );
	int64 SPANBELOW$1;
	__builtin_memset( &SPANBELOW$1, 0, 8ll );
	int64 OV$1;
	__builtin_memset( &OV$1, 0, 8ll );
	NEWCOLOR$1 = NEWCOLOR$1 & 255ll;
	OLDCOLOR$1 = OLDCOLOR$1 & 255ll;
	if( OLDCOLOR$1 != NEWCOLOR$1 ) goto label$132;
	{
		goto label$130;
		label$132:;
	}
	FILLPTR$ = 0ll;
	FILLPUSH( X$1 );
	FILLPUSH( Y$1 );
	int64 vr$6 = FILLPOP(  );
	Y$1 = vr$6;
	int64 vr$7 = FILLPOP(  );
	X$1 = vr$7;
	label$133:;
	if( X$1 <= -1ll ) goto label$134;
	{
		X1$1 = X$1;
		label$135:;
		uint8 vr$11 = GETPIXEL( (uint32)X1$1, (uint32)Y$1 );
		if( ((int64)-(X1$1 >= 0ll) & (int64)-((int64)vr$11 == OLDCOLOR$1)) == 0ll ) goto label$136;
		{
			X1$1 = X1$1 + -1ll;
		}
		goto label$135;
		label$136:;
		X1$1 = X1$1 + 1ll;
		SPANABOVE$1 = 0ll;
		SPANBELOW$1 = 0ll;
		label$137:;
		uint8 vr$20 = GETPIXEL( (uint32)X1$1, (uint32)Y$1 );
		if( ((int64)-(X1$1 < 1024ll) & (int64)-((int64)vr$20 == OLDCOLOR$1)) == 0ll ) goto label$138;
		{
			PUTPIXEL( (uint32)X1$1, (uint32)Y$1, (uint8)(NEWCOLOR$1 & 255ll) );
			uint8 vr$34 = GETPIXEL( (uint32)X1$1, (uint32)(Y$1 + -1ll) );
			if( (((int64)-(SPANABOVE$1 == 0ll) & (int64)-(Y$1 > 0ll)) & (int64)-((int64)vr$34 == OLDCOLOR$1)) == 0ll ) goto label$140;
			{
				FILLPUSH( X1$1 );
				FILLPUSH( Y$1 + -1ll );
				SPANABOVE$1 = 1ll;
			}
			goto label$139;
			label$140:;
			uint8 vr$45 = GETPIXEL( (uint32)X1$1, (uint32)(Y$1 + -1ll) );
			if( (((int64)-(SPANABOVE$1 != 0ll) & (int64)-(Y$1 > 0ll)) & (int64)-((int64)vr$45 != OLDCOLOR$1)) == 0ll ) goto label$141;
			{
				SPANABOVE$1 = 0ll;
			}
			label$141:;
			label$139:;
			uint8 vr$55 = GETPIXEL( (uint32)X1$1, (uint32)(Y$1 + 1ll) );
			if( (((int64)-(SPANBELOW$1 == 0ll) & (int64)-(Y$1 < 599ll)) & (int64)-((int64)vr$55 == OLDCOLOR$1)) == 0ll ) goto label$143;
			{
				FILLPUSH( X1$1 );
				FILLPUSH( Y$1 + 1ll );
				SPANBELOW$1 = 1ll;
			}
			goto label$142;
			label$143:;
			uint8 vr$66 = GETPIXEL( (uint32)X1$1, (uint32)(Y$1 + 1ll) );
			if( (((int64)-(SPANBELOW$1 != 0ll) & (int64)-(Y$1 < 599ll)) & (int64)-((int64)vr$66 != OLDCOLOR$1)) == 0ll ) goto label$144;
			{
				SPANBELOW$1 = 0ll;
			}
			label$144:;
			label$142:;
			X1$1 = X1$1 + 1ll;
		}
		goto label$137;
		label$138:;
		int64 vr$71 = FILLPOP(  );
		Y$1 = vr$71;
		int64 vr$72 = FILLPOP(  );
		X$1 = vr$72;
	}
	goto label$133;
	label$134:;
	label$130:;
}

void SCROLLUP( int64 START$1, int64 AEND$1, int64 AMOUNT$1 )
{
	label$145:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	memmove( (void*)((uint8*)&MACHINE$ + ((int64)BUFPTR$ + (START$1 << (10ll & 63ll)))), (void*)((uint8*)&MACHINE$ + ((int64)BUFPTR$ + ((START$1 + AMOUNT$1) << (10ll & 63ll)))), (uint64)(((AEND$1 - START$1) - AMOUNT$1) << (10ll & 63ll)) );
	{
		I$1 = AEND$1 - AMOUNT$1;
		int64 TMP$184$2;
		TMP$184$2 = AEND$1 + -1ll;
		goto label$147;
		label$150:;
		{
			FASTLINE( 0ll, 1023ll, I$1, (uint8)WRITE_BACKGROUND$ );
		}
		label$148:;
		I$1 = I$1 + 1ll;
		label$147:;
		if( I$1 <= TMP$184$2 ) goto label$150;
		label$149:;
	}
	label$146:;
}

void SCROLLUP2( void )
{
	label$151:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	memmove( (void*)((uint8*)((uint8*)&MACHINE$ + (int64)BUFPTR$) + 4096ll), (void*)((uint8*)((uint8*)&MACHINE$ + (int64)BUFPTR$) + 20480ll), 606208ull );
	{
		I$1 = 580ll;
		label$156:;
		{
			FASTLINE( 0ll, 1023ll, I$1, (uint8)WRITE_BACKGROUND$ );
		}
		label$154:;
		I$1 = I$1 + 1ll;
		label$153:;
		if( I$1 <= 599ll ) goto label$156;
		label$155:;
	}
	{
		I$1 = 0ll;
		label$160:;
		{
			FASTLINE( 0ll, 1023ll, I$1, (uint8)WRITE_BACKGROUND$ );
		}
		label$158:;
		I$1 = I$1 + 1ll;
		label$157:;
		if( I$1 <= 3ll ) goto label$160;
		label$159:;
	}
	memmove( (void*)((uint8*)&MACHINE$ + (int64)TEXTBUFPTR$), (void*)((uint8*)((uint8*)&MACHINE$ + (int64)TEXTBUFPTR$) + 128ll), 4608ull );
	memset( (void*)((uint8*)((uint8*)&MACHINE$ + (int64)TEXTBUFPTR$) + 4608ll), 32, 128ull );
	label$152:;
}

void SETSPRITEPOS( int64 S$1, int64 X$1, int64 Y$1 )
{
	label$161:;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) = (uint32)X$1;
	*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 4ll) = (uint32)Y$1;
	label$162:;
}

void SETSPRITESIZE( int64 S$1, int64 W$1, int64 H$1 )
{
	label$163:;
	*(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 8ll) = W$1;
	*(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 16ll) = H$1;
	label$164:;
}

void SETSPRITEPTR( int64 S$1, uint32 SPTR$1 )
{
	label$165:;
	*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 24ll) = SPTR$1;
	label$166:;
}

void SETCURSORPOS( int64 X$1, int64 Y$1 )
{
	label$167:;
	CURSOR_X$ = X$1;
	CURSOR_Y$ = Y$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$168:;
}

void POSITION( int64 X$1, int64 Y$1 )
{
	label$169:;
	SETCURSORPOS( X$1, Y$1 );
	label$170:;
}

int64 GETCURSORX( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$171:;
	fb$result$1 = CURSOR_X$;
	goto label$172;
	label$172:;
	return fb$result$1;
}

int64 GETCURSORY( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$173:;
	fb$result$1 = CURSOR_Y$;
	goto label$174;
	label$174:;
	return fb$result$1;
}

void SETCURSORX( int64 X$1 )
{
	label$175:;
	CURSOR_X$ = X$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$176:;
}

void SETCURSORY( int64 Y$1 )
{
	label$177:;
	CURSOR_Y$ = Y$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$178:;
}

void SETCURSORSHAPE( int64 SHAPE$1 )
{
	label$179:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSORSHAPE$ = SHAPE$1;
	{
		I$1 = 0ll;
		int64 TMP$185$2;
		TMP$185$2 = (CURSORSHAPE$ << (3ll & 63ll)) + -1ll;
		goto label$181;
		label$184:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$182:;
		I$1 = I$1 + 1ll;
		label$181:;
		if( I$1 <= TMP$185$2 ) goto label$184;
		label$183:;
	}
	{
		I$1 = CURSORSHAPE$ << (3ll & 63ll);
		goto label$185;
		label$188:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)CURSORCOLOR$;
		}
		label$186:;
		I$1 = I$1 + 1ll;
		label$185:;
		if( I$1 <= 127ll ) goto label$188;
		label$187:;
	}
	label$180:;
}

void SETCURSORCOLOR( uint8 ACOLOR$1 )
{
	label$189:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSORCOLOR$ = (int64)ACOLOR$1;
	{
		I$1 = 0ll;
		int64 TMP$186$2;
		TMP$186$2 = (CURSORSHAPE$ << (3ll & 63ll)) + -1ll;
		goto label$191;
		label$194:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$192:;
		I$1 = I$1 + 1ll;
		label$191:;
		if( I$1 <= TMP$186$2 ) goto label$194;
		label$193:;
	}
	{
		I$1 = CURSORSHAPE$ << (3ll & 63ll);
		goto label$195;
		label$198:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)CURSORCOLOR$;
		}
		label$196:;
		I$1 = I$1 + 1ll;
		label$195:;
		if( I$1 <= 127ll ) goto label$198;
		label$197:;
	}
	label$190:;
}

void INITCURSOR( uint8 ACOLOR$1 )
{
	label$199:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSOR_X$ = 0ll;
	CURSOR_Y$ = 0ll;
	{
		I$1 = 0ll;
		label$204:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$202:;
		I$1 = I$1 + 1ll;
		label$201:;
		if( I$1 <= 111ll ) goto label$204;
		label$203:;
	}
	{
		I$1 = 112ll;
		label$208:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = ACOLOR$1;
		}
		label$206:;
		I$1 = I$1 + 1ll;
		label$205:;
		if( I$1 <= 127ll ) goto label$208;
		label$207:;
	}
	SETSPRITEPTR( 17ll, CURSORPTR$ );
	SETSPRITESIZE( 17ll, 8ll, 16ll );
	SETSPRITEPOS( 17ll, 0ll, 0ll );
	CURSORSHAPE$ = 14ll;
	CURSORCOLOR$ = (int64)ACOLOR$1;
	label$200:;
}

void SETWRITECOLORS( uint8 FF$1, uint8 BB$1 )
{
	label$209:;
	WRITE_COLOR$ = (int64)FF$1;
	WRITE_BACKGROUND$ = (int64)BB$1;
	label$210:;
}

void CLS1( uint8 FC$1, uint8 BC$1 )
{
	label$211:;
	memset( (void*)((uint8*)&MACHINE$ + (int64)BUFPTR$), (int32)BC$1, 2073599ull );
	memset( (void*)((uint8*)&MACHINE$ + (int64)TEXTBUFPTR$), 32, (uint64)((int64)BUFPTR$ - (int64)TEXTBUFPTR$) );
	SETWRITECOLORS( FC$1, BC$1 );
	CURSOR_X$ = 0ll;
	CURSOR_Y$ = 0ll;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	SETCURSORCOLOR( FC$1 );
	label$212:;
}

void SETLEADINGSPACES( int64 AMOUNT$1 )
{
	label$213:;
	LEADING_SPACES$ = AMOUNT$1;
	label$214:;
}

void CRLF( void )
{
	label$215:;
	CURSOR_X$ = LEADING_SPACES$ << (1ll & 63ll);
	CURSOR_Y$ = CURSOR_Y$ + 1ll;
	if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$218;
	{
		SCROLLUP2(  );
		CURSOR_Y$ = ST_LINES$ + -1ll;
	}
	label$218:;
	label$217:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$216:;
}

void BKSP( void )
{
	FBSTRING TMP$187$1;
	label$219:;
	CURSOR_X$ = CURSOR_X$ + -1ll;
	if( CURSOR_X$ != -1ll ) goto label$222;
	{
		CURSOR_X$ = 255ll;
		CURSOR_Y$ = CURSOR_Y$ + -1ll;
		if( CURSOR_Y$ != -1ll ) goto label$224;
		{
			CURSOR_Y$ = 0ll;
			SCROLLUP2(  );
		}
		label$224:;
		label$223:;
	}
	label$222:;
	label$221:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), CURSOR_Y$ << (4ll & 63ll) );
	__builtin_memset( &TMP$187$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$187$1, -1ll, (void*)" ", 2ll, 0 );
	OUTTEXTXYCG( CURSOR_X$, CURSOR_Y$, &TMP$187$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
	fb_StrDelete( (FBSTRING*)&TMP$187$1 );
	label$220:;
}

void PUTCHAR1( uint8 ACHAR$1 )
{
	label$225:;
	int64 C$1;
	__builtin_memset( &C$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 NEWCPL$1;
	__builtin_memset( &NEWCPL$1, 0, 8ll );
	if( (int64)ACHAR$1 != 10ll ) goto label$228;
	{
		CRLF(  );
		label$228:;
	}
	if( (int64)ACHAR$1 != 9ll ) goto label$230;
	{
		CURSOR_X$ = (CURSOR_X$ & 240ll) + 16ll;
		label$230:;
	}
	if( ((int64)-((int64)ACHAR$1 != 9ll) & (int64)-((int64)ACHAR$1 != 10ll)) == 0ll ) goto label$232;
	{
		PUTCHARXYCGF( CURSOR_X$, CURSOR_Y$, ACHAR$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
		*(uint8*)((uint8*)&MACHINE$ + fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) )) = ACHAR$1;
		CURSOR_X$ = CURSOR_X$ + 2ll;
	}
	label$232:;
	label$231:;
	if( CURSOR_X$ < 256ll ) goto label$234;
	{
		CURSOR_X$ = 0ll;
		CURSOR_Y$ = CURSOR_Y$ + 1ll;
		if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$236;
		{
			SCROLLUP2(  );
			CURSOR_Y$ = ST_LINES$ + -1ll;
		}
		label$236:;
		label$235:;
	}
	label$234:;
	label$233:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$226:;
}

void PUTCHAR2( uint8 ACHAR$1 )
{
	label$237:;
	int64 C$1;
	__builtin_memset( &C$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 NEWCPL$1;
	__builtin_memset( &NEWCPL$1, 0, 8ll );
	PUTCHARXYCGF( CURSOR_X$, CURSOR_Y$, ACHAR$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
	*(uint8*)((uint8*)&MACHINE$ + fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) )) = ACHAR$1;
	CURSOR_X$ = CURSOR_X$ + 2ll;
	if( CURSOR_X$ < 256ll ) goto label$240;
	{
		CURSOR_X$ = 0ll;
		CURSOR_Y$ = CURSOR_Y$ + 1ll;
		if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$242;
		{
			SCROLLUP2(  );
			CURSOR_Y$ = ST_LINES$ + -1ll;
		}
		label$242:;
		label$241:;
	}
	label$240:;
	label$239:;
	SETCURSORPOS( CURSOR_X$, CURSOR_Y$ );
	label$238:;
}

void WRITE1( FBSTRING* TEXT$1 )
{
	label$243:;
	int64 III$1;
	__builtin_memset( &III$1, 0, 8ll );
	int64 C$1;
	__builtin_memset( &C$1, 0, 8ll );
	int64 NCX$1;
	__builtin_memset( &NCX$1, 0, 8ll );
	int64 NCY$1;
	__builtin_memset( &NCY$1, 0, 8ll );
	{
		III$1 = 1ll;
		int64 TMP$188$2;
		int64 vr$4 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$188$2 = vr$4;
		goto label$245;
		label$248:;
		{
			FBSTRING* vr$5 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$6 = fb_ASC( (FBSTRING*)vr$5, 1ll );
			PUTCHAR2( (uint8)vr$6 );
		}
		label$246:;
		III$1 = III$1 + 1ll;
		label$245:;
		if( III$1 <= TMP$188$2 ) goto label$248;
		label$247:;
	}
	label$244:;
}

void WRITELN( FBSTRING* TEXT$1 )
{
	label$249:;
	WRITE1( TEXT$1 );
	CRLF(  );
	label$250:;
}

void TRANSLATE_SCREEN( void )
{
	label$251:;
	void* P2P$1;
	__builtin_memset( &P2P$1, 0, 8ll );
	void* P3P$1;
	__builtin_memset( &P3P$1, 0, 8ll );
	void* PP$1;
	__builtin_memset( &PP$1, 0, 8ll );
	int64 SW$1;
	__builtin_memset( &SW$1, 0, 8ll );
	int64 SH$1;
	__builtin_memset( &SH$1, 0, 8ll );
	int64 BW$1;
	__builtin_memset( &BW$1, 0, 8ll );
	int64 BHE$1;
	__builtin_memset( &BHE$1, 0, 8ll );
	int64 BC$1;
	__builtin_memset( &BC$1, 0, 8ll );
	P2P$1 = (void*)T2$;
	P3P$1 = (void*)((uint8*)&MACHINE$ + (int64)BUFPTR$);
	PP$1 = (void*)ATARIPALETTE$;
	SW$1 = 1024ll;
	SH$1 = 600ll;
	BC$1 = 64ll;
	BW$1 = 128ll;
	BHE$1 = 76800ll;
	__asm__ __volatile__( "ldr x0,%0          " : "+m" (P2P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x1,%0          " : "+m" (P3P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x2,%0           " : "+m" (PP$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w9,%0" : "+m" (BC$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w4,%0" : "+m" (SH$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w3,%0" : "+m" (BHE$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p5:   str w9,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs x3,x3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz x3,p5" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p2:   ldr w3,%0" : "+m" (SW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w8,%0" : "+m" (BW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p3:   str w9,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs x8,x8,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz x8,p3" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p1:   ldrb w5,[x1],#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x5,x2,x5,lsl #2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w6,[x5] " :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs w3,w3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz w3,p1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x8,%0 " : "+m" (BW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p4:   str w9,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs x8,x8,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz x8,p4      " :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs x4,x4,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz x4,p2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w3,%0" : "+m" (BHE$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p6:   str w9,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs x3,x3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cbnz x3,p6" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	label$252:;
}

void SPRITE1( void )
{
	label$253:;
	void* P2P$1;
	__builtin_memset( &P2P$1, 0, 8ll );
	void* P3P$1;
	__builtin_memset( &P3P$1, 0, 8ll );
	void* PP$1;
	__builtin_memset( &PP$1, 0, 8ll );
	int64 SY$1;
	__builtin_memset( &SY$1, 0, 8ll );
	int64 SX$1;
	__builtin_memset( &SX$1, 0, 8ll );
	int64 SPT$1;
	__builtin_memset( &SPT$1, 0, 8ll );
	int64 SW$1;
	__builtin_memset( &SW$1, 0, 8ll );
	int64 SH$1;
	__builtin_memset( &SH$1, 0, 8ll );
	int64 SO$1;
	__builtin_memset( &SO$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	P2P$1 = (void*)T2$;
	P3P$1 = (void*)&MACHINE$;
	PP$1 = (void*)ATARIPALETTE$;
	{
		I$1 = 0ll;
		int64 TMP$189$2;
		TMP$189$2 = -(fb_D2L( (double)(int64)FRAMES$ / 0x1.p+4 ) % 2ll) + 17ll;
		goto label$255;
		label$258:;
		{
			SX$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll)));
			SY$1 = (int64)*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 4ll);
			SW$1 = *(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 8ll);
			SH$1 = *(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 16ll);
			SPT$1 = (int64)*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 24ll);
			SO$1 = ((SY$1 * 5120ll) + (SX$1 << (2ll & 63ll))) + 307712ll;
			if( SX$1 < 1024ll ) goto label$260;
			{
				goto label$261;
				label$260:;
			}
			if( SY$1 < 600ll ) goto label$263;
			{
				goto label$261;
				label$263:;
			}
			__asm__ __volatile__( "ldr x0,%0          " : "+m" (P2P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w1,%0           " : "+m" (SPT$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr x2,%0" : "+m" (P3P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "add x1,x1,x2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr x2,%0           " : "+m" (PP$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w4,%0" : "+m" (SO$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "add x0,x0,x4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w7,%0" : "+m" (SH$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w3,%0" : "+m" (SW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "a102: ldrb w5,[x1],#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "cbz w5,a103" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "add x5,x2,x5,lsl #2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w6,[x5] " :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "str w6,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "b a104" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "a103: add x0,x0,#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "a104: subs w3,w3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "cmp w3,#0" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "b.ne a102" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "add x0,x0,#4096" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "add x0,x0,#1024" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "ldr w3,%0" : "+m" (SW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "sub x0,x0,x3,lsl #2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "subs w7,w7,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "cmp w7,#0" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			__asm__ __volatile__( "b.ne a102" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
			label$261:;
		}
		label$256:;
		I$1 = I$1 + 1ll;
		label$255:;
		if( I$1 <= TMP$189$2 ) goto label$258;
		label$257:;
	}
	label$254:;
}

void SDLTHREAD( void* QQ$1 )
{
	label$264:;
	SDL_Init( 32u );
	SDL_SetHint( (uint8*)"SDL_RENDER_SCALE_QUALITY", (uint8*)"best" );
	SDL_SetHint( (uint8*)"SDL_RENDER_OPENGL_SHADERS", (uint8*)"1" );
	void* WIN$1;
	void* vr$0 = SDL_CreateWindow( (uint8*)"The Retromachine", 536805376, 536805376, 1280, 720, 4u );
	WIN$1 = vr$0;
	struct $15SDL_DisplayMode DISPLAYMODE$1;
	__builtin_memset( &DISPLAYMODE$1, 0, 24ll );
	SDL_GetCurrentDisplayMode( 0, &DISPLAYMODE$1 );
	*(int32*)((uint8*)&DISPLAYMODE$1 + 12ll) = 50;
	*(int32*)((uint8*)&DISPLAYMODE$1 + 4ll) = 1280;
	*(int32*)((uint8*)&DISPLAYMODE$1 + 8ll) = 720;
	SDL_SetWindowDisplayMode( WIN$1, (struct $15SDL_DisplayMode*)&DISPLAYMODE$1 );
	void* RENDERER$1;
	void* vr$4 = SDL_CreateRenderer( WIN$1, -1, 14u );
	RENDERER$1 = vr$4;
	void* SDLTEXTURE$1;
	void* vr$5 = SDL_CreateTexture( RENDERER$1, 372645892u, 1, 1280, 720 );
	SDLTEXTURE$1 = vr$5;
	SDL_RenderSetLogicalSize( RENDERER$1, 1280, 720 );
	SDL_WarpMouseInWindow( WIN$1, 512, 300 );
	SDL_ShowCursor( 0 );
	uint32 I$1;
	__builtin_memset( &I$1, 0, 4ll );
	uint32 J$1;
	__builtin_memset( &J$1, 0, 4ll );
	uint32 MX$1;
	__builtin_memset( &MX$1, 0, 4ll );
	uint32 MY$1;
	__builtin_memset( &MY$1, 0, 4ll );
	double Q$1;
	__builtin_memset( &Q$1, 0, 8ll );
	{
		I$1 = 0u;
		label$269:;
		{
			{
				J$1 = 0u;
				label$273:;
				{
					*(uint32*)((int64)(uint32*)T2$ + ((((int64)I$1 << (10ll & 63ll)) + (int64)J$1) << (2ll & 63ll))) = 0u;
				}
				label$271:;
				J$1 = (uint32)((int64)J$1 + 1ll);
				label$270:;
				if( (int64)J$1 <= 1023ll ) goto label$273;
				label$272:;
			}
		}
		label$267:;
		I$1 = (uint32)((int64)I$1 + 1ll);
		label$266:;
		if( (int64)I$1 <= 599ll ) goto label$269;
		label$268:;
	}
	label$274:;
	{
		UPDATED$ = 0ll;
		FRAMES$ = (uint32)((int64)FRAMES$ + 1ll);
		TRANSLATE_SCREEN(  );
		SDL_GetMouseState( (int32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 512ll), (int32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 516ll) );
		SPRITE1(  );
		SDL_UpdateTexture( SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (void*)T2$, 5120 );
		SDL_RenderClear( RENDERER$1 );
		SDL_RenderCopy( RENDERER$1, SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)0ull );
		SDL_RenderPresent( RENDERER$1 );
		union $9SDL_Event EVENT$2;
		__builtin_memset( &EVENT$2, 0, 56ll );
		label$277:;
		int32 vr$31 = SDL_PollEvent( &EVENT$2 );
		if( (int64)vr$31 == 0ll ) goto label$278;
		{
			{
				uint32 TMP$194$4;
				TMP$194$4 = *(uint32*)&EVENT$2;
				if( (int64)TMP$194$4 != 256ll ) goto label$280;
				label$281:;
				{
					goto label$275;
				}
				goto label$279;
				label$280:;
				if( (int64)TMP$194$4 != 768ll ) goto label$282;
				label$283:;
				{
					if( (int64)*(int32*)((uint8*)&EVENT$2 + 20ll) != 27ll ) goto label$285;
					{
						goto label$275;
					}
					goto label$284;
					label$285:;
					{
						int64 TMP$195$6;
						int64 TMP$196$6;
						uint8 CH$6;
						uint8 vr$41 = SCANTOCHAR( (uint32)((int64)*(int32*)((uint8*)&EVENT$2 + 16ll) + ((int64)*(uint16*)((uint8*)&EVENT$2 + 24ll) << (16ll & 63ll))) );
						CH$6 = vr$41;
						if( (KEYQE$ - KEYQS$) == -1ll ) goto label$286;
						TMP$195$6 = (int64)-((KEYQE$ - KEYQS$) != 255ll);
						goto label$290;
						label$286:;
						TMP$195$6 = 0ll;
						label$290:;
						if( TMP$195$6 == 0ll ) goto label$287;
						TMP$196$6 = (int64)-((int64)CH$6 > 0ll);
						goto label$291;
						label$287:;
						TMP$196$6 = 0ll;
						label$291:;
						if( TMP$196$6 == 0ll ) goto label$289;
						{
							*(uint32*)((int64)(uint32*)KEYQ$ + (KEYQE$ << (2ll & 63ll))) = (uint32)CH$6;
							KEYQE$ = (KEYQE$ + 1ll) % 256ll;
						}
						label$289:;
						label$288:;
					}
					label$284:;
				}
				label$282:;
				label$279:;
			}
		}
		goto label$277;
		label$278:;
	}
	label$276:;
	goto label$274;
	label$275:;
	SDL_DestroyTexture( SDLTEXTURE$1 );
	SDL_DestroyRenderer( RENDERER$1 );
	SDL_DestroyWindow( WIN$1 );
	SDL_Quit(  );
	A$ = 0ll;
	label$265:;
}

uint8 SCANTOCHAR( uint32 KEYCODE$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$292:;
	int64 MODIFIER$1;
	MODIFIER$1 = (int64)KEYCODE$1 >> (16ll & 63ll);
	KEYCODE$1 = (uint32)((int64)KEYCODE$1 & 255ll);
	if( (int64)KEYCODE$1 >= 128ll ) goto label$295;
	{
		{
			if( MODIFIER$1 == 0ll ) goto label$298;
			label$299:;
			if( MODIFIER$1 != 8193ll ) goto label$297;
			label$298:;
			{
				fb$result$1 = *(uint8*)((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll)));
				goto label$293;
			}
			goto label$296;
			label$297:;
			if( MODIFIER$1 == 1ll ) goto label$301;
			label$302:;
			if( MODIFIER$1 == 2ll ) goto label$301;
			label$303:;
			if( MODIFIER$1 != 8192ll ) goto label$300;
			label$301:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 1ll);
				goto label$293;
			}
			goto label$296;
			label$300:;
			if( MODIFIER$1 != 512ll ) goto label$304;
			label$305:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 2ll);
				goto label$293;
			}
			goto label$296;
			label$304:;
			if( MODIFIER$1 == 513ll ) goto label$307;
			label$308:;
			if( MODIFIER$1 == 514ll ) goto label$307;
			label$309:;
			if( MODIFIER$1 != 8704ll ) goto label$306;
			label$307:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 3ll);
				goto label$293;
			}
			label$306:;
			label$296:;
		}
	}
	goto label$294;
	label$295:;
	{
		fb$result$1 = (uint8)0u;
		goto label$293;
	}
	label$294:;
	label$293:;
	return fb$result$1;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	FBSTRING TMP$207$0;
	FBSTRING TMP$210$0;
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (uint8**)__FB_ARGV__$0, 0 );
	label$0:;
	struct $11SDL_version SDLVERSION$0;
	__builtin_memset( &SDLVERSION$0, 0, 3ll );
	int64 I$0;
	__builtin_memset( &I$0, 0, 8ll );
	int64 J$0;
	__builtin_memset( &J$0, 0, 8ll );
	FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (uint8*)"st4font.def", 11ll );
	fb_FileOpen( (FBSTRING*)vr$4, 2u, 0u, 0u, 3, 0 );
	fb_FileGetLarge( 3, 0ll, (void*)FONTS$, 2048ull );
	fb_FileClose( 3 );
	FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"vgafont.def", 11ll );
	fb_FileOpen( (FBSTRING*)vr$5, 2u, 0u, 0u, 3, 0 );
	fb_FileGetLarge( 3, 0ll, (void*)((uint8*)FONTS$ + 4096ll), 4096ull );
	fb_FileClose( 3 );
	FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (uint8*)"amigafont.def", 13ll );
	fb_FileOpen( (FBSTRING*)vr$6, 2u, 0u, 0u, 3, 0 );
	fb_FileGetLarge( 3, 0ll, (void*)((uint8*)FONTS$ + 8192ll), 4096ull );
	fb_FileClose( 3 );
	FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"mouse2.def", 10ll );
	fb_FileOpen( (FBSTRING*)vr$7, 2u, 0u, 0u, 3, 0 );
	fb_FileGetLarge( 3, 0ll, (void*)MYSZ$, 1024ull );
	fb_FileClose( 3 );
	{
		I$0 = 0ll;
		label$34:;
		{
			*(uint8*)((uint8*)((uint8*)&MACHINE$ + I$0) + 520192ll) = *(uint8*)((int64)(uint8*)MYSZ$ + I$0);
		}
		label$32:;
		I$0 = I$0 + 1ll;
		label$31:;
		if( I$0 <= 1023ll ) goto label$34;
		label$33:;
	}
	FBSTRING* vr$10 = fb_StrAllocTempDescZEx( (uint8*)"ataripalettep2.def", 18ll );
	fb_FileOpen( (FBSTRING*)vr$10, 2u, 0u, 0u, 3, 0 );
	fb_FileGetArrayLarge( 3, 0ll, (struct $7FBARRAYIvE*)&tmp$178$ );
	fb_FileClose( 3 );
	{
		I$0 = 0ll;
		label$38:;
		{
			*(uint32*)((int64)(uint32*)ATARIPALETTE$ + (I$0 << (2ll & 63ll))) = (uint32)((int64)*(uint32*)((int64)(uint32*)ATARIPALETTE$ + (I$0 << (2ll & 63ll))) >> (8ll & 63ll));
		}
		label$36:;
		I$0 = I$0 + 1ll;
		label$35:;
		if( I$0 <= 255ll ) goto label$38;
		label$37:;
	}
	int64 EDITOR_SPACES$0;
	__builtin_memset( &EDITOR_SPACES$0, 0, 8ll );
	int64 PAPER$0;
	__builtin_memset( &PAPER$0, 0, 8ll );
	int64 INK$0;
	__builtin_memset( &INK$0, 0, 8ll );
	int64 PLOT_COLOR$0;
	__builtin_memset( &PLOT_COLOR$0, 0, 8ll );
	int64 PLOT_X$0;
	__builtin_memset( &PLOT_X$0, 0, 8ll );
	int64 PLOT_Y$0;
	__builtin_memset( &PLOT_Y$0, 0, 8ll );
	int64 KEYCLICK$0;
	__builtin_memset( &KEYCLICK$0, 0, 8ll );
	int64 NOSTALGIC_MODE$0;
	__builtin_memset( &NOSTALGIC_MODE$0, 0, 8ll );
	int64 COMPILEDSLOT$0;
	__builtin_memset( &COMPILEDSLOT$0, 0, 8ll );
	int64 FONT$0;
	__builtin_memset( &FONT$0, 0, 8ll );
	int64 TEST$0;
	__builtin_memset( &TEST$0, 0, 8ll );
	int64 INLOAD$0;
	__builtin_memset( &INLOAD$0, 0, 8ll );
	int64 PROGRAMPTR$0;
	__builtin_memset( &PROGRAMPTR$0, 0, 8ll );
	int64 DO_INSERT$0;
	__builtin_memset( &DO_INSERT$0, 0, 8ll );
	FBSTRING CURRENTDIR_$0;
	__builtin_memset( &CURRENTDIR_$0, 0, 24ll );
	FBSTRING FREE_$0;
	__builtin_memset( &FREE_$0, 0, 24ll );
	FBSTRING LINE_$0;
	__builtin_memset( &LINE_$0, 0, 24ll );
	FBSTRING LOADNAME$0;
	__builtin_memset( &LOADNAME$0, 0, 24ll );
	{
		I$0 = 0ll;
		label$329:;
		{
			*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$0 << (5ll & 63ll))) + 4ll) = 2048u;
		}
		label$327:;
		I$0 = I$0 + 1ll;
		label$326:;
		if( I$0 <= 17ll ) goto label$329;
		label$328:;
	}
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 512ll) = 300u;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 516ll) = 200u;
	*(int64*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 520ll) = 32ll;
	*(int64*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 528ll) = 32ll;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 536ll) = 520192u;
	*(int64*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 552ll) = 8ll;
	*(int64*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 560ll) = 16ll;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 544ll) = 16u;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 548ll) = 80u;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) = 521216u;
	{
		I$0 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll);
		int64 TMP$204$1;
		TMP$204$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 111ll;
		goto label$330;
		label$333:;
		{
			*(uint8*)((uint8*)&MACHINE$ + I$0) = (uint8)0u;
		}
		label$331:;
		I$0 = I$0 + 1ll;
		label$330:;
		if( I$0 <= TMP$204$1 ) goto label$333;
		label$332:;
	}
	{
		I$0 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 112ll;
		int64 TMP$205$1;
		TMP$205$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 127ll;
		goto label$334;
		label$337:;
		{
			*(uint8*)((uint8*)&MACHINE$ + I$0) = (uint8)154u;
		}
		label$335:;
		I$0 = I$0 + 1ll;
		label$334:;
		if( I$0 <= TMP$205$1 ) goto label$337;
		label$336:;
	}
	SETSPRITEPTR( 16ll, 520192u );
	SETSPRITESIZE( 16ll, 32ll, 32ll );
	fb_ThreadCreate( (tmp$1)&SDLTHREAD, (void*)0ull, 0ll );
	EDITOR_SPACES$0 = 2ll;
	PAPER$0 = 147ll;
	INK$0 = 154ll;
	FONT$0 = 4ll;
	PLOT_COLOR$0 = INK$0;
	PLOT_X$0 = 0ll;
	PLOT_Y$0 = 0ll;
	KEYCLICK$0 = 1ll;
	NOSTALGIC_MODE$0 = 0ll;
	COMPILEDSLOT$0 = 8ll;
	CLS1( (uint8)INK$0, (uint8)PAPER$0 );
	SETLEADINGSPACES( 2ll );
	FBSTRING* vr$50 = fb_StrAllocTempDescZEx( (uint8*)"~/bas", 5ll );
	fb_ChDir( (FBSTRING*)vr$50 );
	fb_StrAssign( (void*)&CURRENTDIR_$0, -1ll, (void*)"~/bas", 6ll, 0 );
	POSITION( EDITOR_SPACES$0 << (1ll & 63ll), 1ll );
	__builtin_memset( &TMP$207$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$207$0, -1ll, (void*)"RPi5 Retromachine BASIC version 0.01", 37ll, 0 );
	WRITELN( &TMP$207$0 );
	fb_StrDelete( (FBSTRING*)&TMP$207$0 );
	FBSTRING* vr$59 = fb_LongintToStr( (int64)MEMTOP$ - PROGRAMPTR$0 );
	fb_StrAssign( (void*)&FREE_$0, -1ll, (void*)vr$59, -1ll, 0 );
	fb_StrConcatAssign( (void*)&FREE_$0, -1ll, (void*)" BASIC bytes free", 18ll, 0 );
	WRITELN( &FREE_$0 );
	POSITION( EDITOR_SPACES$0 << (1ll & 63ll), 4ll );
	__builtin_memset( &TMP$210$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$210$0, -1ll, (void*)"Ready", 6ll, 0 );
	WRITELN( &TMP$210$0 );
	fb_StrDelete( (FBSTRING*)&TMP$210$0 );
	fb_StrAssign( (void*)&LOADNAME$0, -1ll, (void*)"noname.bas", 11ll, 0 );
	DO_INSERT$0 = -1ll;
	INLOAD$0 = 0ll;
	FBSTRING* vr$69 = fb_StrAllocTempDescZEx( (uint8*)"/sd/bas/autorun.bas", 19ll );
	fb_FileOpen( (FBSTRING*)vr$69, 2u, 0u, 0u, 9, 0 );
	fb_FileClose( 9 );
	int32 vr$70 = fb_ErrorGetNum(  );
	if( (int64)vr$70 != 0ll ) goto label$339;
	{
		fb_StrAssign( (void*)&LINE_$0, -1ll, (void*)"run autorun.bas", 16ll, 0 );
		label$339:;
	}
	A$ = 1ll;
	CLS1( (uint8)154u, (uint8)147u );
	label$340:;
	{
		if( KEYQE$ == KEYQS$ ) goto label$344;
		{
			FBSTRING TMP$214$2;
			__builtin_memset( &TMP$214$2, 0, 24ll );
			FBSTRING* vr$76 = fb_CHR( 1, (int64)*(uint32*)((int64)(uint32*)KEYQ$ + (KEYQS$ << (2ll & 63ll))) );
			fb_StrAssign( (void*)&TMP$214$2, -1ll, (void*)vr$76, -1ll, 0 );
			WRITE1( &TMP$214$2 );
			fb_StrDelete( (FBSTRING*)&TMP$214$2 );
			KEYQS$ = (KEYQS$ + 1ll) % 256ll;
		}
		label$344:;
		label$343:;
		fb_SleepEx( 10, 1 );
	}
	label$342:;
	if( A$ != 0ll ) goto label$340;
	label$341:;
	fb_StrDelete( (FBSTRING*)&LOADNAME$0 );
	fb_StrDelete( (FBSTRING*)&LINE_$0 );
	fb_StrDelete( (FBSTRING*)&FREE_$0 );
	fb_StrDelete( (FBSTRING*)&CURRENTDIR_$0 );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN4PARTC1Ev( struct $4PART* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	label$310:;
	label$311:;
}

static void _ZN4PARTaSERKS_( struct $4PART* THIS$1, struct $4PART* __FB_RHS__$1 )
{
	label$312:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	label$313:;
}

static void _ZN4PARTD1Ev( struct $4PART* THIS$1 )
{
	label$316:;
	label$317:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE* THIS$1, struct $8VARIABLE* __FB_RHS__$1 )
{
	label$320:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	__builtin_memcpy( (union $7ARESULT*)((uint8*)THIS$1 + 24ll), (union $7ARESULT*)((uint8*)__FB_RHS__$1 + 24ll), 8 );
	*(uint32*)((uint8*)THIS$1 + 32ll) = *(uint32*)((uint8*)__FB_RHS__$1 + 32ll);
	label$321:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	int64 TMP$215$1;
	struct $4PART* TMP$216$1;
	label$346:;
	TMP$216$1 = (struct $4PART*)LPARTS$;
	TMP$215$1 = 0ll;
	label$348:;
	_ZN4PARTC1Ev( TMP$216$1 );
	TMP$216$1 = (struct $4PART*)((uint8*)TMP$216$1 + 32ll);
	TMP$215$1 = TMP$215$1 + 1ll;
	if( TMP$215$1 != 126ll ) goto label$348;
	label$347:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	int64 TMP$217$1;
	struct $4PART* TMP$218$1;
	label$350:;
	TMP$218$1 = (struct $4PART*)((uint8*)LPARTS$ + 4000ll);
	TMP$217$1 = 0ll;
	label$352:;
	_ZN4PARTD1Ev( TMP$218$1 );
	TMP$218$1 = (struct $4PART*)((uint8*)TMP$218$1 + -32ll);
	TMP$217$1 = TMP$217$1 + 1ll;
	if( TMP$217$1 != 126ll ) goto label$352;
	label$351:;
}
