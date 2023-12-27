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
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
int32 fb_ErrorGetNum( void );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
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
int32 fb_FileGetArrayLarge( int32, int64, struct $7FBARRAYIvE* );
void* memset( void*, int32, uint64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
void fb_Init( int32, uint8**, int32 );
typedef void (*tmp$1)( void* );
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
void SDLTHREAD( void* );
struct $4PART {
	FBSTRING PART_;
	int64 TOKEN;
};
__FB_STATIC_ASSERT( sizeof( struct $4PART ) == 32 );
static void _ZN4PARTaSERKS_( struct $4PART*, struct $4PART* );
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
static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE*, struct $8VARIABLE* );
void INTERPRET( void );
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
static uint16 ENVBUF$[8][256];
static uint8 ENVBUF8$[8][513];
static float NOTETABLE$[12];
static int64 NOTEPERIODS$[12];
static struct $4PART LPARTS$[126];
struct $12AUDIOCHANNEL {
	float FREQ;
	uint8 WAVE;
	uint8 ENV;
	uint16 DELAY;
	float LENGTH;
	float VOL;
	float PAN;
	uint16 SUS;
	uint16 AMODE;
	float REALFREQ;
};
__FB_STATIC_ASSERT( sizeof( struct $12AUDIOCHANNEL ) == 28 );
static struct $12AUDIOCHANNEL CHANNELS$[8];
static struct $8VARIABLE VARIABLES$[1025];
static int64 VARNUM$;
static int64 AUDIOCOG$;
static int64 VIDEOCOG$;
static int64 USBCOG$;
static int64 PSCOG$;
static int64 PSLOCK$;
static uint32 BASE_$;
static uint32 MBOX$;
static uint8 ANSIBUF$[4];
static FBSTRING LINE_$;
static FBSTRING FULLLINE_$;
static int64 CONT$;
static int64 PLOT_COLOR$;
static int64 PLOT_X$;
static int64 PLOT_Y$;
static int64 EDITOR_SPACES$;
static int64 PAPER$;
static int64 INK$;
static int64 FONT$;
static int64 CT$;
static int64 PROGEND$;
struct $11EXPR_RESULT {
	union $7ARESULT RESULT;
	uint32 RESULT_TYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $11EXPR_RESULT ) == 16 );
static struct $11EXPR_RESULT STACK$[513];
static int64 STACKPOINTER$;
static int64 PROGRAMPTR$;
typedef void (*tmp$168)( void );
static tmp$168 COMMANDS$[256];
static int64 TOKENNUM$;
static int64 COMPILEDSLOT$;
static struct $11EXPR_RESULT TEST$;
static uint32 KEY$;
static uint32 KEY2$;
static FBSTRING ERRORS_$[256];
union $3CLI {
	struct $11EXPR_RESULT COMPILEDLINE[128];
	uint32 UCOMPILEDLINE[384];
};
__FB_STATIC_ASSERT( sizeof( union $3CLI ) == 2048 );
static union $3CLI CL$;
static int64 LINEPTR$;
static int64 LINEPTR_E$;
static int64 ILINEPTR_E$;
static uint32 PROGRAMSTART$;
static uint32 LASTLINE$;
static uint32 LASTLINEPTR$;
static FBSTRING CURRENTDIR_$;
struct $9FOR_ENTRY {
	uint32 LINEPTR;
	uint32 CMDPTR;
	int64 VARNUM;
	int64 STEPVAL;
	int64 ENDVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $9FOR_ENTRY ) == 32 );
static struct $9FOR_ENTRY FORTABLE$[65];
struct $11GOSUB_ENTRY {
	uint32 LINEPTR;
	uint32 CMDPTR;
};
__FB_STATIC_ASSERT( sizeof( struct $11GOSUB_ENTRY ) == 8 );
static struct $11GOSUB_ENTRY GOSUBTABLE$[65];
static uint8 SAMPLE$[256];
static uint8 BLOCK$[1024];
static uint32 BLOCKPTR$;
static uint32 RUNPTR$;
static uint32 RUNPTR2$;
static uint32 OLDRUNPTR$;
static int64 GETRES$[10];
static uint32 INRUN$;
static uint32 RUNHEADER$[6];
static uint32 DATAHEADER$[9];
static uint32 DATAPTR$;
static int64 FORTOP$;
static int64 GOSUBTOP$;
static FBSTRING FREE_$;
static int64 KEYCLICK$;
static int64 HOUSEKEEPER_COG$;
static int64 HOUSEKEEPER_STACK$[129];
static uint32 MOUSEX$;
static uint32 MOUSEY$;
static uint32 MOUSEK$;
static uint32 MOUSEW$;
static int64 PADX$[7];
static int64 PADY$[7];
static int64 PADZ$[7];
static int64 PADH$[7];
static int64 PADRX$[7];
static int64 PADRY$[7];
static int64 PADRZ$[7];
static int64 PADS$[7];
static int64 PADW$[7];
static uint32 STICK$[7];
static uint32 STRIG$[7];
static uint8* SPRITE$[16];
static uint32 HKCNT$;
static uint32 NOSTALGIC_MODE$;
static uint32 SPL_LEN$;
static void* KEYCLICK_SPL$;
static float TRIG_COEFF$;
static float TRIG_COEFF2$;
static uint32 LINENUM$;
static uint16 SUSPOINTS$[8];
static FBSTRING LOADNAME$;
static int64 DO_INSERT$;
static int64 CY$;
static int64 CX$;
static int64 INLOAD$;
static int64 ERR_$;
static FBSTRING READLINE$;

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
		int64 TMP$180$2;
		TMP$180$2 = Y2$1;
		goto label$81;
		label$84:;
		{
			FASTLINE( X1$1, X2$1, YY$1, C$1 );
		}
		label$82:;
		YY$1 = YY$1 + 1ll;
		label$81:;
		if( YY$1 <= TMP$180$2 ) goto label$84;
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
		int64 TMP$181$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$181$2 = vr$1;
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
		if( III$1 <= TMP$181$2 ) goto label$116;
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
		int64 TMP$182$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$182$2 = vr$1;
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
		if( III$1 <= TMP$182$2 ) goto label$122;
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
		int64 TMP$183$2;
		TMP$183$2 = AEND$1 + -1ll;
		goto label$147;
		label$150:;
		{
			FASTLINE( 0ll, 1023ll, I$1, (uint8)WRITE_BACKGROUND$ );
		}
		label$148:;
		I$1 = I$1 + 1ll;
		label$147:;
		if( I$1 <= TMP$183$2 ) goto label$150;
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
		int64 TMP$184$2;
		TMP$184$2 = (CURSORSHAPE$ << (3ll & 63ll)) + -1ll;
		goto label$181;
		label$184:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$182:;
		I$1 = I$1 + 1ll;
		label$181:;
		if( I$1 <= TMP$184$2 ) goto label$184;
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
		int64 TMP$185$2;
		TMP$185$2 = (CURSORSHAPE$ << (3ll & 63ll)) + -1ll;
		goto label$191;
		label$194:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$192:;
		I$1 = I$1 + 1ll;
		label$191:;
		if( I$1 <= TMP$185$2 ) goto label$194;
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
	FBSTRING TMP$186$1;
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
	__builtin_memset( &TMP$186$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$186$1, -1ll, (void*)" ", 2ll, 0 );
	OUTTEXTXYCG( CURSOR_X$, CURSOR_Y$, &TMP$186$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
	fb_StrDelete( (FBSTRING*)&TMP$186$1 );
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
		int64 TMP$187$2;
		int64 vr$4 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$187$2 = vr$4;
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
		if( III$1 <= TMP$187$2 ) goto label$248;
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
		int64 TMP$188$2;
		TMP$188$2 = -(fb_D2L( (double)(int64)FRAMES$ / 0x1.p+4 ) % 2ll) + 17ll;
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
		if( I$1 <= TMP$188$2 ) goto label$258;
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
				uint32 TMP$193$4;
				TMP$193$4 = *(uint32*)&EVENT$2;
				if( (int64)TMP$193$4 != 256ll ) goto label$280;
				label$281:;
				{
					goto label$275;
				}
				goto label$279;
				label$280:;
				if( (int64)TMP$193$4 != 768ll ) goto label$282;
				label$283:;
				{
					if( (int64)*(int32*)((uint8*)&EVENT$2 + 20ll) != 27ll ) goto label$285;
					{
						goto label$275;
						label$285:;
					}
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
