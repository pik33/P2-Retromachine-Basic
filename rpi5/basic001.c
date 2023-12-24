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
union $7ARESULT {
	int64 IRESULT;
	uint32 URESULT;
	FBSTRING* SRESULT;
	double FRESULT;
	uint64 ULRESULT;
	uint32 TWOWORDS[2];
};
__FB_STATIC_ASSERT( sizeof( union $7ARESULT ) == 8 );
struct $11EXPR_RESULT {
	union $7ARESULT RESULT;
	uint32 RESULT_TYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $11EXPR_RESULT ) == 16 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $8FBARRAY1IlE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 72 );
struct $4PART {
	FBSTRING PART_;
	int64 TOKEN;
};
__FB_STATIC_ASSERT( sizeof( struct $4PART ) == 32 );
struct $11SDL_version {
	uint8 MAJOR;
	uint8 MINOR;
	uint8 PATCH;
};
__FB_STATIC_ASSERT( sizeof( struct $11SDL_version ) == 3 );
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
struct $8VARIABLE {
	FBSTRING NAME;
	union $7ARESULT VALUE;
	uint32 VARTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $8VARIABLE ) == 40 );
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
int32 fb_ErrorGetNum( void );
int32 fb_ErrorSetNum( int32 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileGetArrayLarge( int32, int64, struct $7FBARRAYIvE* );
double pow( double, double );
void* memset( void*, int32, uint64 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatByref( void*, int64, void*, int64, int32 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_FloatToStr( float );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_TRIM( FBSTRING* );
double fb_VAL( FBSTRING* );
int32 fb_VALINT( FBSTRING* );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
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
void SDLTHREAD( void* );
static void _ZN4PARTC1Ev( struct $4PART* );
static void _ZN4PARTaSERKS_( struct $4PART*, struct $4PART* );
static void _ZN4PARTD1Ev( struct $4PART* );
static void _ZN8VARIABLEC1Ev( struct $8VARIABLE* );
static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE*, struct $8VARIABLE* );
static void _ZN8VARIABLED1Ev( struct $8VARIABLE* );
uint8 ISOPERATOR( FBSTRING* );
uint32 ISCHANNEL( FBSTRING* );
int64 ISCONSTANT( FBSTRING* );
uint32 ISNOTENAME( FBSTRING* );
uint32 ISSEPARATOR( FBSTRING* );
uint8 ISASSIGN( FBSTRING* );
uint8 ISCOMMAND( FBSTRING* );
uint8 ISFUNCTION( FBSTRING* );
boolean ISNAME( FBSTRING* );
boolean ISNUM( FBSTRING* );
boolean ISINT( FBSTRING* );
int64 ISDEC( FBSTRING* );
boolean ISSTRING( FBSTRING* );
float GETNOTEVAL( int64 );
int64 DELETELINE( uint32 );
uint32 COMPILE( uint32, uint32, uint32 );
void PRINTERROR( int64, int64 );
uint32 COMPILE_ASSIGN( uint32, uint32, uint32 );
int64 EXECUTE_LINE( int64 );
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
	uint32 MDPTR;
	int64 VARNUM;
	int64 STEPVAL;
	int64 ENDVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $9FOR_ENTRY ) == 32 );
static struct $9FOR_ENTRY FORTABLE$[65];
struct $11GOSUB_ENTRY {
	uint32 LINEPTR;
	uint32 MDPTR;
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

void INTERPRET( void )
{
	int64 TMP$241$1;
	int64 TMP$242$1;
	int64 TMP$243$1;
	int64 TMP$244$1;
	int64 TMP$245$1;
	int64 TMP$246$1;
	int64 TMP$248$1;
	int64 TMP$249$1;
	int64 TMP$276$1;
	int64 TMP$278$1;
	int64 TMP$282$1;
	int64 TMP$284$1;
	int64 TMP$289$1;
	int64 TMP$305$1;
	int64 TMP$307$1;
	int64 TMP$309$1;
	int64 TMP$311$1;
	int64 TMP$313$1;
	int64 TMP$315$1;
	int64 TMP$317$1;
	int64 TMP$319$1;
	int64 TMP$320$1;
	int64 TMP$321$1;
	int64 TMP$324$1;
	int64 TMP$325$1;
	int64 TMP$326$1;
	int64 TMP$328$1;
	int64 TMP$329$1;
	int64 TMP$330$1;
	int64 TMP$331$1;
	int64 TMP$334$1;
	int64 TMP$336$1;
	int64 TMP$339$1;
	int64 TMP$340$1;
	int64 TMP$341$1;
	int64 TMP$342$1;
	int64 TMP$343$1;
	int64 TMP$344$1;
	int64 TMP$345$1;
	int64 TMP$346$1;
	int64 TMP$347$1;
	int64 TMP$348$1;
	label$316:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 K$1;
	__builtin_memset( &K$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 Q$1;
	__builtin_memset( &Q$1, 0, 8ll );
	int64 D$1;
	__builtin_memset( &D$1, 0, 8ll );
	int64 B1$1;
	__builtin_memset( &B1$1, 0, 8ll );
	int64 B2$1;
	__builtin_memset( &B2$1, 0, 8ll );
	int64 B3$1;
	__builtin_memset( &B3$1, 0, 8ll );
	int64 ADDPTR$1;
	__builtin_memset( &ADDPTR$1, 0, 8ll );
	int64 DOT$1;
	__builtin_memset( &DOT$1, 0, 8ll );
	int64 P1$1;
	__builtin_memset( &P1$1, 0, 8ll );
	int64 P2$1;
	__builtin_memset( &P2$1, 0, 8ll );
	struct $11EXPR_RESULT RESULT$1;
	__builtin_memset( &RESULT$1, 0, 16ll );
	int64 ETYPE$1;
	__builtin_memset( &ETYPE$1, 0, 8ll );
	int64 SEPARATORS$1[126];
	__builtin_memset( (int64*)SEPARATORS$1, 0, 1008ll );
	struct $8FBARRAY1IlE tmp$237$1;
	*(int64**)&tmp$237$1 = (int64*)SEPARATORS$1;
	*(int64**)((uint8*)&tmp$237$1 + 8ll) = (int64*)SEPARATORS$1;
	*(int64*)((uint8*)&tmp$237$1 + 16ll) = 1008ll;
	*(int64*)((uint8*)&tmp$237$1 + 24ll) = 8ll;
	*(int64*)((uint8*)&tmp$237$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$237$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$237$1 + 48ll) = 126ll;
	*(int64*)((uint8*)&tmp$237$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$237$1 + 64ll) = 125ll;
	float NOTE_VAL$1;
	__builtin_memset( &NOTE_VAL$1, 0, 4ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	FBSTRING C_$1;
	__builtin_memset( &C_$1, 0, 24ll );
	FBSTRING P_$1;
	__builtin_memset( &P_$1, 0, 24ll );
	FBSTRING S1_$1;
	__builtin_memset( &S1_$1, 0, 24ll );
	FBSTRING S2_$1;
	__builtin_memset( &S2_$1, 0, 24ll );
	FBSTRING LP_$1;
	__builtin_memset( &LP_$1, 0, 24ll );
	FBSTRING D_$1;
	__builtin_memset( &D_$1, 0, 24ll );
	FBSTRING REST_$1;
	__builtin_memset( &REST_$1, 0, 24ll );
	FBSTRING* vr$27 = fb_TRIM( (FBSTRING*)&LINE_$ );
	fb_StrAssign( (void*)&FULLLINE_$, -1ll, (void*)vr$27, -1ll, 0 );
	CONT$ = -1ll;
	LINENUM$ = 0u;
	LINEPTR$ = 0ll;
	ERR_$1 = 0ll;
	label$318:;
	{
		I$1 = 0ll;
		label$322:;
		{
			*(int64*)((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll))) = 0ll;
		}
		label$320:;
		I$1 = I$1 + 1ll;
		label$319:;
		if( I$1 <= 125ll ) goto label$322;
		label$321:;
	}
	{
		I$1 = 0ll;
		label$326:;
		{
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"", 1ll, 0 );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 0ll;
		}
		label$324:;
		I$1 = I$1 + 1ll;
		label$323:;
		if( I$1 <= 125ll ) goto label$326;
		label$325:;
	}
	FBSTRING* vr$34 = fb_TRIM( (FBSTRING*)&LINE_$ );
	fb_StrAssign( (void*)&LINE_$, -1ll, (void*)vr$34, -1ll, 0 );
	fb_StrAssign( (void*)&D_$1, -1ll, (void*)"", 1ll, 0 );
	int64 vr$36 = fb_StrLen( (void*)&LINE_$, -1ll );
	L$1 = vr$36;
	if( L$1 != 0ll ) goto label$328;
	{
		goto label$329;
		label$328:;
	}
	D$1 = 0ll;
	{
		I$1 = 1ll;
		int64 TMP$238$2;
		int64 vr$37 = fb_StrLen( (void*)&LINE_$, -1ll );
		TMP$238$2 = vr$37;
		goto label$330;
		label$333:;
		{
			int64 TMP$239$3;
			int64 TMP$240$3;
			FBSTRING* vr$38 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
			int32 vr$39 = fb_StrCompare( (void*)vr$38, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$39 != 0ll ) goto label$334;
			TMP$239$3 = (int64)-(D$1 == 0ll);
			goto label$628;
			label$334:;
			TMP$239$3 = 0ll;
			label$628:;
			if( TMP$239$3 == 0ll ) goto label$336;
			{
				D$1 = 1ll;
			}
			goto label$335;
			label$336:;
			FBSTRING* vr$42 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
			int32 vr$43 = fb_StrCompare( (void*)vr$42, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$43 != 0ll ) goto label$338;
			TMP$240$3 = (int64)-(D$1 == 1ll);
			goto label$629;
			label$338:;
			TMP$240$3 = 0ll;
			label$629:;
			if( TMP$240$3 == 0ll ) goto label$337;
			{
				D$1 = 0ll;
			}
			label$337:;
			label$335:;
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = D$1;
		}
		label$331:;
		I$1 = I$1 + 1ll;
		label$330:;
		if( I$1 <= TMP$238$2 ) goto label$333;
		label$332:;
	}
	I$1 = 1ll;
	label$339:;
	FBSTRING* vr$48 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
	int32 vr$49 = fb_StrCompare( (void*)vr$48, -1ll, (void*)":", 2ll );
	if( (int64)vr$49 != 0ll ) goto label$341;
	TMP$241$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) == 0ll);
	goto label$630;
	label$341:;
	TMP$241$1 = 0ll;
	label$630:;
	if( TMP$241$1 != 0ll ) goto label$342;
	TMP$242$1 = (int64)-(I$1 >= L$1);
	goto label$631;
	label$342:;
	TMP$242$1 = -1ll;
	label$631:;
	if( TMP$242$1 != 0ll ) goto label$340;
	{
		I$1 = I$1 + 1ll;
	}
	goto label$339;
	label$340:;
	if( I$1 >= L$1 ) goto label$344;
	{
		int64 vr$55 = fb_StrLen( (void*)&LINE_$, -1ll );
		FBSTRING* vr$57 = fb_RIGHT( (FBSTRING*)&LINE_$, vr$55 - I$1 );
		FBSTRING* vr$58 = fb_TRIM( (FBSTRING*)vr$57 );
		fb_StrAssign( (void*)&REST_$1, -1ll, (void*)vr$58, -1ll, 0 );
		FBSTRING* vr$61 = fb_LEFT( (FBSTRING*)&LINE_$, I$1 + -1ll );
		FBSTRING* vr$62 = fb_TRIM( (FBSTRING*)vr$61 );
		fb_StrAssign( (void*)&LINE_$, -1ll, (void*)vr$62, -1ll, 0 );
	}
	goto label$343;
	label$344:;
	{
		fb_StrAssign( (void*)&REST_$1, -1ll, (void*)"", 1ll, 0 );
		label$343:;
	}
	if( CONT$ != -1ll ) goto label$345;
	int32 vr$65 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$243$1 = (int64)-((int64)vr$65 != 0ll);
	goto label$632;
	label$345:;
	TMP$243$1 = 0ll;
	label$632:;
	if( TMP$243$1 == 0ll ) goto label$347;
	{
		CONT$ = 0ll;
		goto label$348;
		label$347:;
	}
	if( CONT$ != -1ll ) goto label$349;
	int32 vr$69 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$244$1 = (int64)-((int64)vr$69 == 0ll);
	goto label$633;
	label$349:;
	TMP$244$1 = 0ll;
	label$633:;
	if( TMP$244$1 == 0ll ) goto label$351;
	{
		CONT$ = 3ll;
		goto label$348;
		label$351:;
	}
	if( CONT$ != 4ll ) goto label$352;
	int32 vr$73 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$245$1 = (int64)-((int64)vr$73 != 0ll);
	goto label$634;
	label$352:;
	TMP$245$1 = 0ll;
	label$634:;
	if( TMP$245$1 == 0ll ) goto label$354;
	{
		CONT$ = 1ll;
		goto label$348;
		label$354:;
	}
	if( CONT$ != 4ll ) goto label$355;
	int32 vr$77 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$246$1 = (int64)-((int64)vr$77 == 0ll);
	goto label$635;
	label$355:;
	TMP$246$1 = 0ll;
	label$635:;
	if( TMP$246$1 == 0ll ) goto label$357;
	{
		CONT$ = 2ll;
		goto label$348;
		label$357:;
	}
	label$348:;
	*(int64*)SEPARATORS$1 = 0ll;
	I$1 = 0ll;
	J$1 = 1ll;
	label$358:;
	{
		I$1 = I$1 + 1ll;
		FBSTRING* vr$81 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
		fb_StrAssign( (void*)&C_$1, -1ll, (void*)vr$81, -1ll, 0 );
		uint32 vr$84 = ISSEPARATOR( &C_$1 );
		if( (int64)vr$84 == 0ll ) goto label$362;
		{
			*(int64*)((int64)(int64*)SEPARATORS$1 + (J$1 << (3ll & 63ll))) = I$1;
			J$1 = J$1 + 1ll;
			label$362:;
		}
	}
	label$360:;
	if( I$1 <= L$1 ) goto label$358;
	label$359:;
	*(int64*)((int64)(int64*)SEPARATORS$1 + (J$1 << (3ll & 63ll))) = I$1;
	K$1 = 0ll;
	{
		I$1 = 0ll;
		int64 TMP$247$2;
		TMP$247$2 = J$1 + -1ll;
		goto label$363;
		label$366:;
		{
			P1$1 = *(int64*)((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll)));
			P2$1 = *(int64*)(((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll))) + 8ll);
			if( P1$1 <= 0ll ) goto label$368;
			{
				FBSTRING* vr$92 = fb_StrMid( (FBSTRING*)&LINE_$, P1$1, 1ll );
				fb_StrAssign( (void*)&P_$1, -1ll, (void*)vr$92, -1ll, 0 );
				int32 vr$95 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"", 1ll );
				if( (int64)vr$95 == 0ll ) goto label$370;
				{
					fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
					K$1 = K$1 + 1ll;
					label$370:;
				}
				label$368:;
			}
			FBSTRING* vr$104 = fb_StrMid( (FBSTRING*)&LINE_$, P1$1 + 1ll, (P2$1 - P1$1) + -1ll );
			fb_StrAssign( (void*)&P_$1, -1ll, (void*)vr$104, -1ll, 0 );
			int32 vr$107 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"", 1ll );
			if( (int64)vr$107 == 0ll ) goto label$372;
			{
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
				K$1 = K$1 + 1ll;
				label$372:;
			}
		}
		label$364:;
		I$1 = I$1 + 1ll;
		label$363:;
		if( I$1 <= TMP$247$2 ) goto label$366;
		label$365:;
	}
	if( CONT$ == 0ll ) goto label$373;
	TMP$248$1 = (int64)-(CONT$ == 3ll);
	goto label$636;
	label$373:;
	TMP$248$1 = -1ll;
	label$636:;
	if( TMP$248$1 == 0ll ) goto label$374;
	int64 vr$116 = ISDEC( (FBSTRING*)LPARTS$ );
	TMP$249$1 = (int64)-(vr$116 == 0ll);
	goto label$637;
	label$374:;
	TMP$249$1 = 0ll;
	label$637:;
	if( TMP$249$1 == 0ll ) goto label$376;
	{
		{
			I$1 = K$1;
			goto label$377;
			label$380:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$378:;
			I$1 = I$1 + -1ll;
			label$377:;
			if( I$1 >= 1ll ) goto label$380;
			label$379:;
		}
		fb_StrAssign( (void*)LPARTS$, -1ll, (void*)"0", 2ll, 0 );
		K$1 = K$1 + 1ll;
		label$376:;
	}
	I$1 = 0ll;
	label$381:;
	{
		int64 TMP$251$2;
		int32 vr$127 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$127 == 0ll ) goto label$385;
		{
			I$1 = I$1 + 1ll;
			goto label$386;
			label$385:;
		}
		Q$1 = I$1;
		label$387:;
		{
			fb_StrAssign( (void*)&P_$1, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll, 0 );
			fb_StrConcatByref( (void*)((int64)(struct $4PART*)LPARTS$ + (Q$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$250$4;
				TMP$250$4 = K$1;
				goto label$390;
				label$393:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$391:;
				J$1 = J$1 + 1ll;
				label$390:;
				if( J$1 <= TMP$250$4 ) goto label$393;
				label$392:;
			}
			K$1 = K$1 + -1ll;
		}
		label$389:;
		int32 vr$144 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$144 == 0ll ) goto label$394;
		TMP$251$2 = (int64)-(I$1 >= K$1);
		goto label$638;
		label$394:;
		TMP$251$2 = -1ll;
		label$638:;
		if( TMP$251$2 == 0ll ) goto label$387;
		label$388:;
		int32 vr$148 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$148 == 0ll ) goto label$396;
		{
			K$1 = K$1 + 1ll;
			I$1 = I$1 + 1ll;
			label$396:;
		}
		label$386:;
	}
	label$383:;
	if( I$1 < K$1 ) goto label$381;
	label$382:;
	I$1 = 0ll;
	label$397:;
	{
		int64 TMP$252$2;
		FBSTRING* vr$154 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 1ll );
		int32 vr$155 = fb_StrCompare( (void*)vr$154, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$155 != 0ll ) goto label$400;
		FBSTRING* vr$159 = fb_LEFT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), 1ll );
		int32 vr$160 = fb_StrCompare( (void*)vr$159, -1ll, (void*)"\x22", 2ll );
		TMP$252$2 = (int64)-((int64)vr$160 == 0ll);
		goto label$639;
		label$400:;
		TMP$252$2 = 0ll;
		label$639:;
		if( TMP$252$2 == 0ll ) goto label$402;
		{
			FBSTRING TMP$253$3;
			int64 vr$165 = fb_StrLen( (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll );
			FBSTRING* vr$169 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), vr$165 + -1ll );
			__builtin_memset( &TMP$253$3, 0, 24ll );
			FBSTRING* vr$174 = fb_StrConcat( &TMP$253$3, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$169, -1ll );
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$174, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$254$4;
				TMP$254$4 = K$1;
				goto label$403;
				label$406:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$404:;
				J$1 = J$1 + 1ll;
				label$403:;
				if( J$1 <= TMP$254$4 ) goto label$406;
				label$405:;
			}
			I$1 = I$1 + -1ll;
			K$1 = K$1 + -1ll;
		}
		label$402:;
		label$401:;
		I$1 = I$1 + 1ll;
	}
	label$399:;
	if( I$1 < K$1 ) goto label$397;
	label$398:;
	I$1 = 0ll;
	label$407:;
	{
		int64 TMP$255$2;
		int64 TMP$256$2;
		int64 TMP$257$2;
		int64 TMP$258$2;
		int64 TMP$259$2;
		int64 TMP$260$2;
		int64 TMP$261$2;
		int64 TMP$262$2;
		int64 TMP$263$2;
		int64 TMP$264$2;
		int64 TMP$265$2;
		int64 TMP$266$2;
		int64 TMP$267$2;
		fb_StrAssign( (void*)&S1_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, 0 );
		fb_StrAssign( (void*)&S2_$1, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll, 0 );
		int32 vr$193 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)">", 2ll );
		if( (int64)vr$193 == 0ll ) goto label$410;
		int32 vr$196 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"<", 2ll );
		TMP$255$2 = (int64)-((int64)vr$196 == 0ll);
		goto label$640;
		label$410:;
		TMP$255$2 = -1ll;
		label$640:;
		if( TMP$255$2 != 0ll ) goto label$411;
		int32 vr$200 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"+", 2ll );
		TMP$256$2 = (int64)-((int64)vr$200 == 0ll);
		goto label$641;
		label$411:;
		TMP$256$2 = -1ll;
		label$641:;
		if( TMP$256$2 != 0ll ) goto label$412;
		int32 vr$204 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"-", 2ll );
		TMP$257$2 = (int64)-((int64)vr$204 == 0ll);
		goto label$642;
		label$412:;
		TMP$257$2 = -1ll;
		label$642:;
		if( TMP$257$2 != 0ll ) goto label$413;
		int32 vr$208 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"*", 2ll );
		TMP$258$2 = (int64)-((int64)vr$208 == 0ll);
		goto label$643;
		label$413:;
		TMP$258$2 = -1ll;
		label$643:;
		if( TMP$258$2 != 0ll ) goto label$414;
		int32 vr$212 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"/", 2ll );
		TMP$259$2 = (int64)-((int64)vr$212 == 0ll);
		goto label$644;
		label$414:;
		TMP$259$2 = -1ll;
		label$644:;
		if( TMP$259$2 != 0ll ) goto label$415;
		int32 vr$216 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"^", 2ll );
		TMP$260$2 = (int64)-((int64)vr$216 == 0ll);
		goto label$645;
		label$415:;
		TMP$260$2 = -1ll;
		label$645:;
		if( TMP$260$2 == 0ll ) goto label$416;
		int32 vr$220 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"=", 2ll );
		TMP$261$2 = (int64)-((int64)vr$220 == 0ll);
		goto label$646;
		label$416:;
		TMP$261$2 = 0ll;
		label$646:;
		if( TMP$261$2 != 0ll ) goto label$418;
		int32 vr$224 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"+", 2ll );
		if( (int64)vr$224 != 0ll ) goto label$417;
		int32 vr$227 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"+", 2ll );
		TMP$262$2 = (int64)-((int64)vr$227 == 0ll);
		goto label$648;
		label$417:;
		TMP$262$2 = 0ll;
		label$648:;
		TMP$263$2 = (int64)-(TMP$262$2 != 0ll);
		goto label$647;
		label$418:;
		TMP$263$2 = -1ll;
		label$647:;
		if( TMP$263$2 != 0ll ) goto label$420;
		int32 vr$232 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"-", 2ll );
		if( (int64)vr$232 != 0ll ) goto label$419;
		int32 vr$235 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"-", 2ll );
		TMP$264$2 = (int64)-((int64)vr$235 == 0ll);
		goto label$650;
		label$419:;
		TMP$264$2 = 0ll;
		label$650:;
		TMP$265$2 = (int64)-(TMP$264$2 != 0ll);
		goto label$649;
		label$420:;
		TMP$265$2 = -1ll;
		label$649:;
		if( TMP$265$2 != 0ll ) goto label$422;
		int32 vr$240 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"<", 2ll );
		if( (int64)vr$240 != 0ll ) goto label$421;
		int32 vr$243 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)">", 2ll );
		TMP$266$2 = (int64)-((int64)vr$243 == 0ll);
		goto label$652;
		label$421:;
		TMP$266$2 = 0ll;
		label$652:;
		TMP$267$2 = (int64)-(TMP$266$2 != 0ll);
		goto label$651;
		label$422:;
		TMP$267$2 = -1ll;
		label$651:;
		if( TMP$267$2 == 0ll ) goto label$424;
		{
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)&S1_$1, -1ll, 0 );
			fb_StrConcatAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)&S2_$1, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$268$4;
				TMP$268$4 = K$1;
				goto label$425;
				label$428:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$426:;
				J$1 = J$1 + 1ll;
				label$425:;
				if( J$1 <= TMP$268$4 ) goto label$428;
				label$427:;
			}
			I$1 = I$1 + -1ll;
			K$1 = K$1 + -1ll;
		}
		label$424:;
		label$423:;
		I$1 = I$1 + 1ll;
	}
	label$409:;
	if( I$1 < K$1 ) goto label$407;
	label$408:;
	{
		I$1 = 0ll;
		int64 TMP$269$2;
		TMP$269$2 = K$1;
		goto label$429;
		label$432:;
		{
			FBSTRING* vr$264 = fb_TRIM( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$264, -1ll, 0 );
		}
		label$430:;
		I$1 = I$1 + 1ll;
		label$429:;
		if( I$1 <= TMP$269$2 ) goto label$432;
		label$431:;
	}
	I$1 = 0ll;
	label$433:;
	{
		int64 vr$270 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
		if( vr$270 != 0ll ) goto label$437;
		{
			if( I$1 != (K$1 + -1ll) ) goto label$439;
			{
				K$1 = K$1 + -1ll;
				goto label$434;
				label$439:;
			}
			if( I$1 >= (K$1 + -1ll) ) goto label$441;
			{
				{
					J$1 = I$1;
					int64 TMP$270$5;
					TMP$270$5 = K$1 + -2ll;
					goto label$442;
					label$445:;
					{
						_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
					}
					label$443:;
					J$1 = J$1 + 1ll;
					label$442:;
					if( J$1 <= TMP$270$5 ) goto label$445;
					label$444:;
				}
				K$1 = K$1 + -1ll;
				if( I$1 <= 0ll ) goto label$447;
				{
					I$1 = I$1 + -1ll;
					label$447:;
				}
			}
			label$441:;
			label$440:;
		}
		label$437:;
		label$436:;
		I$1 = I$1 + 1ll;
	}
	label$435:;
	if( I$1 <= (K$1 + -1ll) ) goto label$433;
	label$434:;
	{
		J$1 = 0ll;
		int64 TMP$271$2;
		TMP$271$2 = K$1 + -1ll;
		goto label$448;
		label$451:;
		{
			int64 TMP$272$3;
			FBSTRING* vr$287 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 1ll );
			int32 vr$288 = fb_StrCompare( (void*)vr$287, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$288 != 0ll ) goto label$452;
			FBSTRING* vr$292 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 1ll );
			int32 vr$293 = fb_StrCompare( (void*)vr$292, -1ll, (void*)"\x22", 2ll );
			TMP$272$3 = (int64)-((int64)vr$293 != 0ll);
			goto label$653;
			label$452:;
			TMP$272$3 = -1ll;
			label$653:;
			if( TMP$272$3 == 0ll ) goto label$454;
			{
				FBSTRING* vr$298 = fb_StrLcase2( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 0 );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), -1ll, (void*)vr$298, -1ll, 0 );
				label$454:;
			}
		}
		label$449:;
		J$1 = J$1 + 1ll;
		label$448:;
		if( J$1 <= TMP$271$2 ) goto label$451;
		label$450:;
	}
	{
		I$1 = 0ll;
		int64 TMP$273$2;
		TMP$273$2 = K$1;
		goto label$455;
		label$458:;
		{
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = -1ll;
		}
		label$456:;
		I$1 = I$1 + 1ll;
		label$455:;
		if( I$1 <= TMP$273$2 ) goto label$458;
		label$457:;
	}
	int64 vr$305 = ISDEC( (FBSTRING*)LPARTS$ );
	if( vr$305 == 0ll ) goto label$460;
	{
		ADDPTR$1 = 1ll;
	}
	goto label$459;
	label$460:;
	{
		ADDPTR$1 = 0ll;
		label$459:;
	}
	int32 vr$307 = fb_StrCompare( (void*)LPARTS$, -1ll, (void*)"else", 5ll );
	if( (int64)vr$307 != 0ll ) goto label$462;
	{
		ADDPTR$1 = 1ll;
		label$462:;
	}
	I$1 = 0ll;
	label$463:;
	{
		int32 vr$311 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"then", 5ll );
		if( (int64)vr$311 != 0ll ) goto label$467;
		{
			goto label$464;
			label$467:;
		}
		I$1 = I$1 + 1ll;
	}
	label$465:;
	if( I$1 <= K$1 ) goto label$463;
	label$464:;
	if( I$1 >= K$1 ) goto label$469;
	{
		ADDPTR$1 = I$1 + 1ll;
		label$469:;
	}
	fb_StrAssign( (void*)&LP_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, 0 );
	FBSTRING* vr$320 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), 1ll );
	int32 vr$321 = fb_StrCompare( (void*)vr$320, -1ll, (void*)"?", 2ll );
	if( (int64)vr$321 != 0ll ) goto label$470;
	int64 vr$325 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
	TMP$276$1 = (int64)-(vr$325 > 1ll);
	goto label$654;
	label$470:;
	TMP$276$1 = 0ll;
	label$654:;
	if( TMP$276$1 == 0ll ) goto label$472;
	{
		K$1 = K$1 + 1ll;
		{
			I$1 = K$1;
			int64 TMP$277$3;
			TMP$277$3 = ADDPTR$1 + 1ll;
			goto label$473;
			label$476:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$474:;
			I$1 = I$1 + -1ll;
			label$473:;
			if( I$1 >= TMP$277$3 ) goto label$476;
			label$475:;
		}
		int64 vr$336 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
		FBSTRING* vr$340 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), vr$336 + -1ll );
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$340, -1ll, 0 );
		fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, (void*)"?", 2ll, 0 );
		goto label$477;
	}
	label$472:;
	label$471:;
	FBSTRING* vr$345 = fb_StrAllocTempDescZEx( (uint8*)".", 1ll );
	int64 vr$348 = fb_StrInstr( 1ll, (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), (FBSTRING*)vr$345 );
	DOT$1 = vr$348;
	if( DOT$1 <= 0ll ) goto label$478;
	int64 vr$351 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
	TMP$278$1 = (int64)-(DOT$1 < vr$351);
	goto label$655;
	label$478:;
	TMP$278$1 = 0ll;
	label$655:;
	if( TMP$278$1 == 0ll ) goto label$480;
	{
		K$1 = K$1 + 1ll;
		{
			I$1 = K$1;
			int64 TMP$279$3;
			TMP$279$3 = ADDPTR$1 + 1ll;
			goto label$481;
			label$484:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$482:;
			I$1 = I$1 + -1ll;
			label$481:;
			if( I$1 >= TMP$279$3 ) goto label$484;
			label$483:;
		}
		int64 vr$362 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
		FBSTRING* vr$366 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), vr$362 - DOT$1 );
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$366, -1ll, 0 );
		FBSTRING* vr$371 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), DOT$1 );
		fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, (void*)vr$371, -1ll, 0 );
	}
	label$480:;
	label$479:;
	label$477:;
	fb_StrAssign( (void*)&LP_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, 0 );
	int32 vr$378 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mouse", 6ll );
	if( (int64)vr$378 == 0ll ) goto label$485;
	int32 vr$381 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cursor", 7ll );
	TMP$282$1 = (int64)-((int64)vr$381 == 0ll);
	goto label$656;
	label$485:;
	TMP$282$1 = -1ll;
	label$656:;
	if( TMP$282$1 != 0ll ) goto label$486;
	int32 vr$385 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"click", 6ll );
	TMP$284$1 = (int64)-((int64)vr$385 == 0ll);
	goto label$657;
	label$486:;
	TMP$284$1 = -1ll;
	label$657:;
	if( TMP$284$1 == 0ll ) goto label$488;
	{
		int32 vr$390 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"on", 3ll );
		if( (int64)vr$390 != 0ll ) goto label$490;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"1", 2ll, 0 );
			*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) = 512ll;
			label$490:;
		}
		int32 vr$396 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"off", 4ll );
		if( (int64)vr$396 != 0ll ) goto label$492;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"0", 2ll, 0 );
			*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) = 512ll;
			label$492:;
		}
	}
	label$488:;
	label$487:;
	int32 vr$401 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mode", 5ll );
	if( (int64)vr$401 == 0ll ) goto label$493;
	int32 vr$404 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"m.", 3ll );
	TMP$289$1 = (int64)-((int64)vr$404 == 0ll);
	goto label$658;
	label$493:;
	TMP$289$1 = -1ll;
	label$658:;
	if( TMP$289$1 == 0ll ) goto label$495;
	{
		int32 vr$409 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"atari", 6ll );
		if( (int64)vr$409 != 0ll ) goto label$497;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"0", 2ll, 0 );
			label$497:;
		}
		int32 vr$415 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_amber", 9ll );
		if( (int64)vr$415 != 0ll ) goto label$499;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"1", 2ll, 0 );
			label$499:;
		}
		int32 vr$421 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_green", 9ll );
		if( (int64)vr$421 != 0ll ) goto label$501;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"2", 2ll, 0 );
			label$501:;
		}
		int32 vr$427 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_white", 9ll );
		if( (int64)vr$427 != 0ll ) goto label$503;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"3", 2ll, 0 );
			label$503:;
		}
		int32 vr$433 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"st", 3ll );
		if( (int64)vr$433 != 0ll ) goto label$505;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"4", 2ll, 0 );
			label$505:;
		}
		int32 vr$439 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"amiga", 6ll );
		if( (int64)vr$439 != 0ll ) goto label$507;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"5", 2ll, 0 );
			label$507:;
		}
	}
	label$495:;
	label$494:;
	{
		I$1 = 0ll;
		int64 TMP$296$2;
		TMP$296$2 = K$1 + -1ll;
		goto label$508;
		label$511:;
		{
			int64 TMP$297$3;
			int64 TMP$298$3;
			int64 TMP$299$3;
			int64 TMP$300$3;
			int64 TMP$301$3;
			int64 TMP$302$3;
			uint32 vr$446 = ISSEPARATOR( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$446;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$513;
			{
				goto label$514;
				label$513:;
			}
			uint8 vr$452 = ISOPERATOR( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$452;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$516;
			{
				goto label$514;
				label$516:;
			}
			uint8 vr$458 = ISASSIGN( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$458;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$518;
			{
				goto label$514;
				label$518:;
			}
			uint8 vr$464 = ISCOMMAND( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$464;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$520;
			{
				goto label$514;
				label$520:;
			}
			uint8 vr$470 = ISFUNCTION( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$470;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$522;
			{
				goto label$514;
				label$522:;
			}
			uint32 vr$476 = ISNOTENAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$476;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$524;
			{
				float vr$481 = GETNOTEVAL( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) );
				NOTE_VAL$1 = vr$481;
				FBSTRING* vr$482 = fb_FloatToStr( NOTE_VAL$1 );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$482, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$514;
			}
			label$524:;
			label$523:;
			uint32 vr$488 = ISCHANNEL( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$488;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$526;
			{
				FBSTRING* vr$494 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 1ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$494, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 44ll;
				goto label$514;
				label$526:;
			}
			int64 vr$500 = ISCONSTANT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = vr$500;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$528;
			{
				FBSTRING* vr$504 = fb_LongintToStr( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$504, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$514;
				label$528:;
			}
			boolean vr$510 = ISNUM( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B1$1 = (int64)-vr$510;
			boolean vr$514 = ISINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B2$1 = (int64)-vr$514;
			int64 vr$518 = ISDEC( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B3$1 = vr$518;
			if( B1$1 == 0ll ) goto label$529;
			TMP$297$3 = (int64)-(B2$1 != 0ll);
			goto label$659;
			label$529:;
			TMP$297$3 = 0ll;
			label$659:;
			if( TMP$297$3 == 0ll ) goto label$530;
			TMP$298$3 = (int64)-(B3$1 != 0ll);
			goto label$660;
			label$530:;
			TMP$298$3 = 0ll;
			label$660:;
			if( TMP$298$3 == 0ll ) goto label$532;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 512ll;
				goto label$514;
				label$532:;
			}
			if( B1$1 == 0ll ) goto label$533;
			TMP$299$3 = (int64)-(B2$1 != 0ll);
			goto label$661;
			label$533:;
			TMP$299$3 = 0ll;
			label$661:;
			if( TMP$299$3 == 0ll ) goto label$534;
			TMP$300$3 = (int64)-(~B3$1 != 0ll);
			goto label$662;
			label$534:;
			TMP$300$3 = 0ll;
			label$662:;
			if( TMP$300$3 == 0ll ) goto label$536;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$514;
				label$536:;
			}
			if( B1$1 == 0ll ) goto label$537;
			TMP$301$3 = (int64)-(~B2$1 != 0ll);
			goto label$663;
			label$537:;
			TMP$301$3 = 0ll;
			label$663:;
			if( TMP$301$3 == 0ll ) goto label$538;
			TMP$302$3 = (int64)-(~B3$1 != 0ll);
			goto label$664;
			label$538:;
			TMP$302$3 = 0ll;
			label$664:;
			if( TMP$302$3 == 0ll ) goto label$540;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$514;
				label$540:;
			}
			boolean vr$533 = ISSTRING( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			if( vr$533 == (boolean)0ll ) goto label$542;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 515ll;
				int64 vr$537 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
				FBSTRING* vr$541 = fb_StrMid( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 2ll, vr$537 + -2ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$541, -1ll, 0 );
				goto label$514;
			}
			label$542:;
			label$541:;
			boolean vr$546 = ISNAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			if( vr$546 == (boolean)0ll ) goto label$544;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 516ll;
				goto label$514;
				label$544:;
			}
			label$514:;
		}
		label$509:;
		I$1 = I$1 + 1ll;
		label$508:;
		if( I$1 <= TMP$296$2 ) goto label$511;
		label$510:;
	}
	*(int64*)(((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))) + 24ll) = 510ll;
	fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)"", 1ll, 0 );
	TOKENNUM$ = K$1;
	int32 vr$553 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"load", 5ll );
	if( (int64)vr$553 == 0ll ) goto label$545;
	int32 vr$556 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"save", 5ll );
	TMP$305$1 = (int64)-((int64)vr$556 == 0ll);
	goto label$665;
	label$545:;
	TMP$305$1 = -1ll;
	label$665:;
	if( TMP$305$1 != 0ll ) goto label$546;
	int32 vr$560 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"brun", 5ll );
	TMP$307$1 = (int64)-((int64)vr$560 == 0ll);
	goto label$666;
	label$546:;
	TMP$307$1 = -1ll;
	label$666:;
	if( TMP$307$1 != 0ll ) goto label$547;
	int32 vr$564 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"run", 4ll );
	TMP$309$1 = (int64)-((int64)vr$564 == 0ll);
	goto label$667;
	label$547:;
	TMP$309$1 = -1ll;
	label$667:;
	if( TMP$309$1 != 0ll ) goto label$548;
	int32 vr$568 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"lo.", 4ll );
	TMP$311$1 = (int64)-((int64)vr$568 == 0ll);
	goto label$668;
	label$548:;
	TMP$311$1 = -1ll;
	label$668:;
	if( TMP$311$1 != 0ll ) goto label$549;
	int32 vr$572 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"s.", 3ll );
	TMP$313$1 = (int64)-((int64)vr$572 == 0ll);
	goto label$669;
	label$549:;
	TMP$313$1 = -1ll;
	label$669:;
	if( TMP$313$1 != 0ll ) goto label$550;
	int32 vr$576 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"br.", 4ll );
	TMP$315$1 = (int64)-((int64)vr$576 == 0ll);
	goto label$670;
	label$550:;
	TMP$315$1 = -1ll;
	label$670:;
	if( TMP$315$1 != 0ll ) goto label$551;
	int32 vr$580 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"enter", 6ll );
	TMP$317$1 = (int64)-((int64)vr$580 == 0ll);
	goto label$671;
	label$551:;
	TMP$317$1 = -1ll;
	label$671:;
	if( TMP$317$1 != 0ll ) goto label$552;
	int32 vr$584 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"e.", 3ll );
	TMP$319$1 = (int64)-((int64)vr$584 == 0ll);
	goto label$672;
	label$552:;
	TMP$319$1 = -1ll;
	label$672:;
	if( TMP$319$1 == 0ll ) goto label$553;
	TMP$320$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$673;
	label$553:;
	TMP$320$1 = 0ll;
	label$673:;
	if( TMP$320$1 == 0ll ) goto label$554;
	FBSTRING* vr$591 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$592 = fb_StrCompare( (void*)vr$591, -1ll, (void*)"$", 2ll );
	TMP$321$1 = (int64)-((int64)vr$592 != 0ll);
	goto label$674;
	label$554:;
	TMP$321$1 = 0ll;
	label$674:;
	if( TMP$321$1 == 0ll ) goto label$556;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$556:;
	}
	int32 vr$597 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"delete", 7ll );
	if( (int64)vr$597 == 0ll ) goto label$557;
	int32 vr$600 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mkdir", 6ll );
	TMP$324$1 = (int64)-((int64)vr$600 == 0ll);
	goto label$675;
	label$557:;
	TMP$324$1 = -1ll;
	label$675:;
	if( TMP$324$1 == 0ll ) goto label$558;
	TMP$325$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$676;
	label$558:;
	TMP$325$1 = 0ll;
	label$676:;
	if( TMP$325$1 == 0ll ) goto label$559;
	FBSTRING* vr$607 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$608 = fb_StrCompare( (void*)vr$607, -1ll, (void*)"$", 2ll );
	TMP$326$1 = (int64)-((int64)vr$608 != 0ll);
	goto label$677;
	label$559:;
	TMP$326$1 = 0ll;
	label$677:;
	if( TMP$326$1 == 0ll ) goto label$561;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$561:;
	}
	int32 vr$613 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"copy", 5ll );
	if( (int64)vr$613 != 0ll ) goto label$562;
	TMP$328$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$678;
	label$562:;
	TMP$328$1 = 0ll;
	label$678:;
	if( TMP$328$1 == 0ll ) goto label$563;
	FBSTRING* vr$619 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$620 = fb_StrCompare( (void*)vr$619, -1ll, (void*)"$", 2ll );
	TMP$329$1 = (int64)-((int64)vr$620 != 0ll);
	goto label$679;
	label$563:;
	TMP$329$1 = 0ll;
	label$679:;
	if( TMP$329$1 == 0ll ) goto label$565;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$565:;
	}
	int32 vr$625 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"copy", 5ll );
	if( (int64)vr$625 != 0ll ) goto label$566;
	TMP$330$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 120ll) == 516ll);
	goto label$680;
	label$566:;
	TMP$330$1 = 0ll;
	label$680:;
	if( TMP$330$1 == 0ll ) goto label$567;
	FBSTRING* vr$631 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 96ll), 1ll );
	int32 vr$632 = fb_StrCompare( (void*)vr$631, -1ll, (void*)"$", 2ll );
	TMP$331$1 = (int64)-((int64)vr$632 != 0ll);
	goto label$681;
	label$567:;
	TMP$331$1 = 0ll;
	label$681:;
	if( TMP$331$1 == 0ll ) goto label$569;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 120ll) = 515ll;
		label$569:;
	}
	int32 vr$637 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd", 3ll );
	if( (int64)vr$637 != 0ll ) goto label$571;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$571:;
	}
	int32 vr$641 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd.", 4ll );
	if( (int64)vr$641 != 0ll ) goto label$572;
	int32 vr$645 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)".", 2ll );
	TMP$334$1 = (int64)-((int64)vr$645 == 0ll);
	goto label$682;
	label$572:;
	TMP$334$1 = 0ll;
	label$682:;
	if( TMP$334$1 == 0ll ) goto label$574;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"..", 3ll, 0 );
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 24ll) = 195ll;
		label$574:;
	}
	int32 vr$653 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd", 3ll );
	if( (int64)vr$653 != 0ll ) goto label$575;
	int32 vr$657 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"/", 2ll );
	TMP$336$1 = (int64)-((int64)vr$657 == 0ll);
	goto label$683;
	label$575:;
	TMP$336$1 = 0ll;
	label$683:;
	if( TMP$336$1 == 0ll ) goto label$577;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		{
			I$1 = ADDPTR$1 + 2ll;
			int64 TMP$337$3;
			TMP$337$3 = K$1;
			goto label$578;
			label$581:;
			{
				FBSTRING TMP$338$4;
				__builtin_memset( &TMP$338$4, 0, 24ll );
				FBSTRING* vr$668 = fb_StrConcat( &TMP$338$4, (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
				fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$668, -1ll, 0 );
			}
			label$579:;
			I$1 = I$1 + 1ll;
			label$578:;
			if( I$1 <= TMP$337$3 ) goto label$581;
			label$580:;
		}
		label$577:;
	}
	int64 vr$673 = ISDEC( (FBSTRING*)LPARTS$ );
	if( vr$673 == 0ll ) goto label$583;
	{
		int32 vr$675 = fb_VALINT( (FBSTRING*)LPARTS$ );
		LINENUM$ = (uint32)vr$675;
		label$583:;
	}
	if( (int64)LINENUM$ <= 0ll ) goto label$584;
	TMP$339$1 = (int64)-(K$1 == 1ll);
	goto label$684;
	label$584:;
	TMP$339$1 = 0ll;
	label$684:;
	if( TMP$339$1 == 0ll ) goto label$585;
	TMP$340$1 = (int64)-(CONT$ == 3ll);
	goto label$685;
	label$585:;
	TMP$340$1 = 0ll;
	label$685:;
	if( TMP$340$1 == 0ll ) goto label$587;
	{
		DELETELINE( LINENUM$ );
		goto label$588;
		label$587:;
	}
	if( CONT$ == 0ll ) goto label$589;
	TMP$341$1 = (int64)-(CONT$ == 3ll);
	goto label$686;
	label$589:;
	TMP$341$1 = -1ll;
	label$686:;
	if( TMP$341$1 == 0ll ) goto label$590;
	TMP$342$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) != 27ll);
	goto label$687;
	label$590:;
	TMP$342$1 = 0ll;
	label$687:;
	if( TMP$342$1 == 0ll ) goto label$592;
	{
		uint32 vr$682 = COMPILE( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$682 );
		int32 vr$683 = fb_ErrorGetNum(  );
		if( (int64)vr$683 == 0ll ) goto label$594;
		{
			int32 vr$686 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$686, (int64)LINENUM$ );
			goto label$329;
			label$594:;
		}
		int32 vr$689 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$689 == 0ll ) goto label$596;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$318;
		}
		goto label$595;
		label$596:;
		{
			goto label$588;
			label$595:;
		}
	}
	label$592:;
	label$591:;
	if( CONT$ == 1ll ) goto label$597;
	TMP$343$1 = (int64)-(CONT$ == 2ll);
	goto label$688;
	label$597:;
	TMP$343$1 = -1ll;
	label$688:;
	if( TMP$343$1 == 0ll ) goto label$598;
	TMP$344$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 56ll) != 27ll);
	goto label$689;
	label$598:;
	TMP$344$1 = 0ll;
	label$689:;
	if( TMP$344$1 == 0ll ) goto label$600;
	{
		uint32 vr$695 = COMPILE( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$695 );
		int32 vr$696 = fb_ErrorGetNum(  );
		if( (int64)vr$696 == 0ll ) goto label$602;
		{
			int32 vr$699 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$699, (int64)LINENUM$ );
			goto label$329;
			label$602:;
		}
		int32 vr$702 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$702 == 0ll ) goto label$604;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$318;
		}
		goto label$603;
		label$604:;
		{
			goto label$588;
			label$603:;
		}
	}
	label$600:;
	label$599:;
	if( CONT$ == 0ll ) goto label$605;
	TMP$345$1 = (int64)-(CONT$ == 3ll);
	goto label$690;
	label$605:;
	TMP$345$1 = -1ll;
	label$690:;
	if( TMP$345$1 == 0ll ) goto label$606;
	TMP$346$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) == 27ll);
	goto label$691;
	label$606:;
	TMP$346$1 = 0ll;
	label$691:;
	if( TMP$346$1 == 0ll ) goto label$608;
	{
		uint32 vr$708 = COMPILE_ASSIGN( LINENUM$, 0u, (uint32)CONT$ );
		ERR_$1 = (int64)vr$708;
		if( ERR_$1 == 0ll ) goto label$610;
		{
			PRINTERROR( ERR_$1, (int64)LINENUM$ );
			goto label$329;
			label$610:;
		}
		int32 vr$712 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$712 == 0ll ) goto label$612;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$318;
		}
		goto label$611;
		label$612:;
		{
			goto label$588;
			label$611:;
		}
	}
	label$608:;
	label$607:;
	if( CONT$ == 1ll ) goto label$613;
	TMP$347$1 = (int64)-(CONT$ == 2ll);
	goto label$692;
	label$613:;
	TMP$347$1 = -1ll;
	label$692:;
	if( TMP$347$1 == 0ll ) goto label$614;
	TMP$348$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 56ll) == 27ll);
	goto label$693;
	label$614:;
	TMP$348$1 = 0ll;
	label$693:;
	if( TMP$348$1 == 0ll ) goto label$616;
	{
		uint32 vr$718 = COMPILE_ASSIGN( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$718 );
		int32 vr$719 = fb_ErrorGetNum(  );
		if( (int64)vr$719 == 0ll ) goto label$618;
		{
			int32 vr$722 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$722, (int64)LINENUM$ );
			goto label$329;
			label$618:;
		}
		int32 vr$725 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$725 == 0ll ) goto label$620;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$318;
		}
		goto label$619;
		label$620:;
		{
			goto label$588;
			label$619:;
		}
	}
	label$616:;
	label$615:;
	label$588:;
	if( (int64)LINENUM$ != 0ll ) goto label$622;
	{
		int64 TMP$351$2;
		EXECUTE_LINE( 2ll );
		label$329:;
		if( INLOAD$ != 0ll ) goto label$624;
		{
			FBSTRING TMP$349$3;
			FBSTRING TMP$350$3;
			__builtin_memset( &TMP$349$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$349$3, -1ll, (void*)"", 1ll, 0 );
			WRITELN( &TMP$349$3 );
			fb_StrDelete( (FBSTRING*)&TMP$349$3 );
			__builtin_memset( &TMP$350$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$350$3, -1ll, (void*)"Ready", 6ll, 0 );
			WRITELN( &TMP$350$3 );
			fb_StrDelete( (FBSTRING*)&TMP$350$3 );
			label$624:;
		}
		if( INLOAD$ != 1ll ) goto label$625;
		int32 vr$737 = fb_ErrorGetNum(  );
		TMP$351$2 = (int64)-((int64)vr$737 > 0ll);
		goto label$694;
		label$625:;
		TMP$351$2 = 0ll;
		label$694:;
		if( TMP$351$2 == 0ll ) goto label$627;
		{
			WRITELN( &FULLLINE_$ );
			label$627:;
		}
	}
	label$622:;
	label$621:;
	fb_StrDelete( (FBSTRING*)&REST_$1 );
	fb_StrDelete( (FBSTRING*)&D_$1 );
	fb_StrDelete( (FBSTRING*)&LP_$1 );
	fb_StrDelete( (FBSTRING*)&S2_$1 );
	fb_StrDelete( (FBSTRING*)&S1_$1 );
	fb_StrDelete( (FBSTRING*)&P_$1 );
	fb_StrDelete( (FBSTRING*)&C_$1 );
	label$317:;
}

uint8 ISOPERATOR( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$695:;
	{
		FBSTRING TMP$352$2;
		fb_StrInit( (void*)&TMP$352$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"+", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$698;
		label$699:;
		{
			fb$result$1 = (uint8)1u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$698:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"-", 2ll );
		if( (int64)vr$7 != 0ll ) goto label$700;
		label$701:;
		{
			fb$result$1 = (uint8)2u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$700:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"or", 3ll );
		if( (int64)vr$11 != 0ll ) goto label$702;
		label$703:;
		{
			fb$result$1 = (uint8)3u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$702:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"xor", 4ll );
		if( (int64)vr$15 != 0ll ) goto label$704;
		label$705:;
		{
			fb$result$1 = (uint8)4u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$704:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"*", 2ll );
		if( (int64)vr$19 != 0ll ) goto label$706;
		label$707:;
		{
			fb$result$1 = (uint8)5u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$706:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"/", 2ll );
		if( (int64)vr$23 != 0ll ) goto label$708;
		label$709:;
		{
			fb$result$1 = (uint8)6u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$708:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"and", 4ll );
		if( (int64)vr$27 != 0ll ) goto label$710;
		label$711:;
		{
			fb$result$1 = (uint8)7u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$710:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"div", 4ll );
		if( (int64)vr$31 != 0ll ) goto label$712;
		label$713:;
		{
			fb$result$1 = (uint8)8u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$712:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"mod", 4ll );
		if( (int64)vr$35 != 0ll ) goto label$714;
		label$715:;
		{
			fb$result$1 = (uint8)9u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$714:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"shl", 4ll );
		if( (int64)vr$39 != 0ll ) goto label$716;
		label$717:;
		{
			fb$result$1 = (uint8)10u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$716:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"shr", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$718;
		label$719:;
		{
			fb$result$1 = (uint8)11u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$718:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"^", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$720;
		label$721:;
		{
			fb$result$1 = (uint8)12u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$720:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"not", 4ll );
		if( (int64)vr$51 != 0ll ) goto label$722;
		label$723:;
		{
			fb$result$1 = (uint8)13u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$722:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"@", 2ll );
		if( (int64)vr$55 != 0ll ) goto label$724;
		label$725:;
		{
			fb$result$1 = (uint8)14u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$724:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$726;
		label$727:;
		{
			fb$result$1 = (uint8)27u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$726:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)">=", 3ll );
		if( (int64)vr$63 != 0ll ) goto label$728;
		label$729:;
		{
			fb$result$1 = (uint8)39u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$728:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"<=", 3ll );
		if( (int64)vr$67 != 0ll ) goto label$730;
		label$731:;
		{
			fb$result$1 = (uint8)38u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$730:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"<", 2ll );
		if( (int64)vr$71 != 0ll ) goto label$732;
		label$733:;
		{
			fb$result$1 = (uint8)16u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$732:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)">", 2ll );
		if( (int64)vr$75 != 0ll ) goto label$734;
		label$735:;
		{
			fb$result$1 = (uint8)15u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$734:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"<>", 3ll );
		if( (int64)vr$79 != 0ll ) goto label$736;
		label$737:;
		{
			fb$result$1 = (uint8)42u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$736:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"++", 3ll );
		if( (int64)vr$83 != 0ll ) goto label$738;
		label$739:;
		{
			fb$result$1 = (uint8)40u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$738:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$352$2, -1ll, (void*)"--", 3ll );
		if( (int64)vr$87 != 0ll ) goto label$740;
		label$741:;
		{
			fb$result$1 = (uint8)41u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		goto label$697;
		label$740:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$352$2 );
			goto label$696;
		}
		label$742:;
		label$697:;
		fb_StrDelete( (FBSTRING*)&TMP$352$2 );
	}
	label$696:;
	return fb$result$1;
}

uint32 ISCHANNEL( FBSTRING* S$1 )
{
	int64 TMP$366$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$743:;
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	int64 NN$1;
	__builtin_memset( &NN$1, 0, 8ll );
	int64 TOKEN$1;
	__builtin_memset( &TOKEN$1, 0, 8ll );
	FBSTRING* vr$4 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"#", 2ll );
	if( (int64)vr$5 == 0ll ) goto label$746;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$744;
		label$746:;
	}
	int64 vr$8 = fb_StrLen( (void*)S$1, -1ll );
	if( vr$8 == 2ll ) goto label$748;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$744;
		label$748:;
	}
	FBSTRING* vr$10 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$11 = fb_StrCompare( (void*)vr$10, -1ll, (void*)"0", 2ll );
	if( (int64)vr$11 < 0ll ) goto label$749;
	FBSTRING* vr$13 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$14 = fb_StrCompare( (void*)vr$13, -1ll, (void*)"9", 2ll );
	TMP$366$1 = (int64)-((int64)vr$14 > 0ll);
	goto label$752;
	label$749:;
	TMP$366$1 = -1ll;
	label$752:;
	if( TMP$366$1 == 0ll ) goto label$751;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$744;
		label$751:;
	}
	FBSTRING* vr$18 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	double vr$19 = fb_VAL( (FBSTRING*)vr$18 );
	fb$result$1 = (uint32)fb_D2L( vr$19 + 0x1.6p+5 );
	fb_StrDelete( (FBSTRING*)&S1$1 );
	goto label$744;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$744:;
	return fb$result$1;
}

int64 ISCONSTANT( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$753:;
	{
		FBSTRING TMP$367$2;
		fb_StrInit( (void*)&TMP$367$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$367$2, -1ll, (void*)"#read", 6ll );
		if( (int64)vr$3 != 0ll ) goto label$756;
		label$757:;
		{
			fb$result$1 = 1ll;
			fb_StrDelete( (FBSTRING*)&TMP$367$2 );
			goto label$754;
		}
		goto label$755;
		label$756:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$367$2, -1ll, (void*)"#write", 7ll );
		if( (int64)vr$7 != 0ll ) goto label$758;
		label$759:;
		{
			fb$result$1 = 2ll;
			fb_StrDelete( (FBSTRING*)&TMP$367$2 );
			goto label$754;
		}
		goto label$755;
		label$758:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$367$2, -1ll, (void*)"#append", 8ll );
		if( (int64)vr$11 != 0ll ) goto label$760;
		label$761:;
		{
			fb$result$1 = 4ll;
			fb_StrDelete( (FBSTRING*)&TMP$367$2 );
			goto label$754;
		}
		goto label$755;
		label$760:;
		{
			fb$result$1 = 0ll;
			fb_StrDelete( (FBSTRING*)&TMP$367$2 );
			goto label$754;
		}
		label$762:;
		label$755:;
		fb_StrDelete( (FBSTRING*)&TMP$367$2 );
	}
	label$754:;
	return fb$result$1;
}

uint32 ISNOTENAME( FBSTRING* S$1 )
{
	int64 TMP$371$1;
	int64 TMP$377$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$763:;
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	int64 NN$1;
	__builtin_memset( &NN$1, 0, 8ll );
	int64 TOKEN$1;
	__builtin_memset( &TOKEN$1, 0, 8ll );
	FBSTRING* vr$4 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"#", 2ll );
	if( (int64)vr$5 == 0ll ) goto label$766;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$764;
		label$766:;
	}
	FBSTRING* vr$8 = fb_StrMid( (FBSTRING*)S$1, 3ll, 1ll );
	int32 vr$9 = fb_StrCompare( (void*)vr$8, -1ll, (void*)"#", 2ll );
	if( (int64)vr$9 != 0ll ) goto label$768;
	{
		FBSTRING* vr$11 = fb_StrMid( (FBSTRING*)S$1, 2ll, 2ll );
		fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$11, -1ll, 0 );
	}
	goto label$767;
	label$768:;
	{
		FBSTRING* vr$13 = fb_StrMid( (FBSTRING*)S$1, 2ll, 1ll );
		fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$13, -1ll, 0 );
		label$767:;
	}
	int64 vr$15 = fb_StrLen( (void*)S$1, -1ll );
	FBSTRING* vr$17 = fb_StrMid( (FBSTRING*)S$1, vr$15 + -1ll, 1ll );
	int32 vr$18 = fb_StrCompare( (void*)vr$17, -1ll, (void*)"-", 2ll );
	if( (int64)vr$18 == 0ll ) goto label$770;
	{
		FBSTRING* vr$20 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
		double vr$21 = fb_VAL( (FBSTRING*)vr$20 );
		NN$1 = fb_D2L( vr$21 );
	}
	goto label$769;
	label$770:;
	{
		FBSTRING* vr$23 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
		double vr$24 = fb_VAL( (FBSTRING*)vr$23 );
		NN$1 = fb_D2L( vr$24 * -0x1.p+0 );
		label$769:;
	}
	if( NN$1 != 0ll ) goto label$771;
	FBSTRING* vr$27 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$28 = fb_StrCompare( (void*)vr$27, -1ll, (void*)"0", 2ll );
	TMP$371$1 = (int64)-((int64)vr$28 != 0ll);
	goto label$805;
	label$771:;
	TMP$371$1 = 0ll;
	label$805:;
	if( TMP$371$1 == 0ll ) goto label$773;
	{
		NN$1 = 4ll;
		label$773:;
	}
	{
		int32 vr$32 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"c", 2ll );
		if( (int64)vr$32 != 0ll ) goto label$775;
		label$776:;
		{
			TOKEN$1 = 768ll;
		}
		goto label$774;
		label$775:;
		int32 vr$35 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"c#", 3ll );
		if( (int64)vr$35 != 0ll ) goto label$777;
		label$778:;
		{
			TOKEN$1 = 769ll;
		}
		goto label$774;
		label$777:;
		int32 vr$38 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"d", 2ll );
		if( (int64)vr$38 != 0ll ) goto label$779;
		label$780:;
		{
			TOKEN$1 = 770ll;
		}
		goto label$774;
		label$779:;
		int32 vr$41 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"d#", 3ll );
		if( (int64)vr$41 != 0ll ) goto label$781;
		label$782:;
		{
			TOKEN$1 = 771ll;
		}
		goto label$774;
		label$781:;
		int32 vr$44 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"e", 2ll );
		if( (int64)vr$44 != 0ll ) goto label$783;
		label$784:;
		{
			TOKEN$1 = 772ll;
		}
		goto label$774;
		label$783:;
		int32 vr$47 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"f", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$785;
		label$786:;
		{
			TOKEN$1 = 773ll;
		}
		goto label$774;
		label$785:;
		int32 vr$50 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"f#", 3ll );
		if( (int64)vr$50 != 0ll ) goto label$787;
		label$788:;
		{
			TOKEN$1 = 774ll;
		}
		goto label$774;
		label$787:;
		int32 vr$53 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"g", 2ll );
		if( (int64)vr$53 != 0ll ) goto label$789;
		label$790:;
		{
			TOKEN$1 = 775ll;
		}
		goto label$774;
		label$789:;
		int32 vr$56 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"g#", 3ll );
		if( (int64)vr$56 != 0ll ) goto label$791;
		label$792:;
		{
			TOKEN$1 = 776ll;
		}
		goto label$774;
		label$791:;
		int32 vr$59 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"a", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$793;
		label$794:;
		{
			TOKEN$1 = 777ll;
		}
		goto label$774;
		label$793:;
		int32 vr$62 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"a#", 3ll );
		if( (int64)vr$62 != 0ll ) goto label$795;
		label$796:;
		{
			TOKEN$1 = 778ll;
		}
		goto label$774;
		label$795:;
		int32 vr$65 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"h", 2ll );
		if( (int64)vr$65 != 0ll ) goto label$797;
		label$798:;
		{
			TOKEN$1 = 779ll;
		}
		goto label$774;
		label$797:;
		int32 vr$68 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"b", 2ll );
		if( (int64)vr$68 != 0ll ) goto label$799;
		label$800:;
		{
			TOKEN$1 = 779ll;
		}
		goto label$774;
		label$799:;
		{
			fb$result$1 = 0u;
			fb_StrDelete( (FBSTRING*)&S1$1 );
			goto label$764;
		}
		label$801:;
		label$774:;
	}
	if( NN$1 < -1ll ) goto label$802;
	TMP$377$1 = (int64)-(NN$1 < 10ll);
	goto label$806;
	label$802:;
	TMP$377$1 = 0ll;
	label$806:;
	if( TMP$377$1 == 0ll ) goto label$804;
	{
		TOKEN$1 = TOKEN$1 + (NN$1 * 12ll);
		label$804:;
	}
	fb$result$1 = (uint32)TOKEN$1;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	goto label$764;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$764:;
	return fb$result$1;
}

uint32 ISSEPARATOR( FBSTRING* S$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$807:;
	{
		FBSTRING TMP$378$2;
		fb_StrInit( (void*)&TMP$378$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"+", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$810;
		label$811:;
		{
			fb$result$1 = 1u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$810:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"-", 2ll );
		if( (int64)vr$7 != 0ll ) goto label$812;
		label$813:;
		{
			fb$result$1 = 2u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$812:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$11 != 0ll ) goto label$814;
		label$815:;
		{
			fb$result$1 = 27u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$814:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)",", 2ll );
		if( (int64)vr$15 != 0ll ) goto label$816;
		label$817:;
		{
			fb$result$1 = 17u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$816:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"*", 2ll );
		if( (int64)vr$19 != 0ll ) goto label$818;
		label$819:;
		{
			fb$result$1 = 5u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$818:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"/", 2ll );
		if( (int64)vr$23 != 0ll ) goto label$820;
		label$821:;
		{
			fb$result$1 = 6u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$820:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)";", 2ll );
		if( (int64)vr$27 != 0ll ) goto label$822;
		label$823:;
		{
			fb$result$1 = 18u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$822:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$31 != 0ll ) goto label$824;
		label$825:;
		{
			fb$result$1 = 19u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$824:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"^", 2ll );
		if( (int64)vr$35 != 0ll ) goto label$826;
		label$827:;
		{
			fb$result$1 = 12u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$826:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)")", 2ll );
		if( (int64)vr$39 != 0ll ) goto label$828;
		label$829:;
		{
			fb$result$1 = 20u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$828:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"(", 2ll );
		if( (int64)vr$43 != 0ll ) goto label$830;
		label$831:;
		{
			fb$result$1 = 21u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$830:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)":", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$832;
		label$833:;
		{
			fb$result$1 = 22u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$832:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)" ", 2ll );
		if( (int64)vr$51 != 0ll ) goto label$834;
		label$835:;
		{
			fb$result$1 = 511u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$834:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)">", 2ll );
		if( (int64)vr$55 != 0ll ) goto label$836;
		label$837:;
		{
			fb$result$1 = 15u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$836:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$378$2, -1ll, (void*)"<", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$838;
		label$839:;
		{
			fb$result$1 = 16u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		goto label$809;
		label$838:;
		{
			fb$result$1 = 0u;
			fb_StrDelete( (FBSTRING*)&TMP$378$2 );
			goto label$808;
		}
		label$840:;
		label$809:;
		fb_StrDelete( (FBSTRING*)&TMP$378$2 );
	}
	label$808:;
	return fb$result$1;
}

uint8 ISASSIGN( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$841:;
	{
		FBSTRING TMP$379$2;
		fb_StrInit( (void*)&TMP$379$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$379$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$844;
		label$845:;
		{
			fb$result$1 = (uint8)27u;
			fb_StrDelete( (FBSTRING*)&TMP$379$2 );
			goto label$842;
		}
		goto label$843;
		label$844:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$379$2 );
			goto label$842;
		}
		label$846:;
		label$843:;
		fb_StrDelete( (FBSTRING*)&TMP$379$2 );
	}
	label$842:;
	return fb$result$1;
}

uint8 ISCOMMAND( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$847:;
	{
		FBSTRING TMP$380$2;
		fb_StrInit( (void*)&TMP$380$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"beep", 5ll );
		if( (int64)vr$3 != 0ll ) goto label$850;
		label$851:;
		{
			fb$result$1 = (uint8)92u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$850:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"b.", 3ll );
		if( (int64)vr$7 != 0ll ) goto label$852;
		label$853:;
		{
			fb$result$1 = (uint8)92u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$852:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"blit", 5ll );
		if( (int64)vr$11 != 0ll ) goto label$854;
		label$855:;
		{
			fb$result$1 = (uint8)185u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$854:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"box", 4ll );
		if( (int64)vr$15 != 0ll ) goto label$856;
		label$857:;
		{
			fb$result$1 = (uint8)71u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$856:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"brun", 5ll );
		if( (int64)vr$19 != 0ll ) goto label$858;
		label$859:;
		{
			fb$result$1 = (uint8)89u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$858:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"br.", 4ll );
		if( (int64)vr$23 != 0ll ) goto label$860;
		label$861:;
		{
			fb$result$1 = (uint8)89u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$860:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cd", 3ll );
		if( (int64)vr$27 != 0ll ) goto label$862;
		label$863:;
		{
			fb$result$1 = (uint8)195u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$862:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"changefreq", 11ll );
		if( (int64)vr$31 != 0ll ) goto label$864;
		label$865:;
		{
			fb$result$1 = (uint8)174u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$864:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cf.", 4ll );
		if( (int64)vr$35 != 0ll ) goto label$866;
		label$867:;
		{
			fb$result$1 = (uint8)174u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$866:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"changepan", 10ll );
		if( (int64)vr$39 != 0ll ) goto label$868;
		label$869:;
		{
			fb$result$1 = (uint8)177u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$868:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cp.", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$870;
		label$871:;
		{
			fb$result$1 = (uint8)177u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$870:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"changevol", 10ll );
		if( (int64)vr$47 != 0ll ) goto label$872;
		label$873:;
		{
			fb$result$1 = (uint8)175u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$872:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cv.", 4ll );
		if( (int64)vr$51 != 0ll ) goto label$874;
		label$875:;
		{
			fb$result$1 = (uint8)175u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$874:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"changewave", 11ll );
		if( (int64)vr$55 != 0ll ) goto label$876;
		label$877:;
		{
			fb$result$1 = (uint8)176u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$876:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cw.", 4ll );
		if( (int64)vr$59 != 0ll ) goto label$878;
		label$879:;
		{
			fb$result$1 = (uint8)176u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$878:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"circle", 7ll );
		if( (int64)vr$63 != 0ll ) goto label$880;
		label$881:;
		{
			fb$result$1 = (uint8)69u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$880:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"ci.", 4ll );
		if( (int64)vr$67 != 0ll ) goto label$882;
		label$883:;
		{
			fb$result$1 = (uint8)69u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$882:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"click", 6ll );
		if( (int64)vr$71 != 0ll ) goto label$884;
		label$885:;
		{
			fb$result$1 = (uint8)105u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$884:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"close", 6ll );
		if( (int64)vr$75 != 0ll ) goto label$886;
		label$887:;
		{
			fb$result$1 = (uint8)180u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$886:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cls", 4ll );
		if( (int64)vr$79 != 0ll ) goto label$888;
		label$889:;
		{
			fb$result$1 = (uint8)64u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$888:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cogstop", 8ll );
		if( (int64)vr$83 != 0ll ) goto label$890;
		label$891:;
		{
			fb$result$1 = (uint8)207u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$890:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"color", 6ll );
		if( (int64)vr$87 != 0ll ) goto label$892;
		label$893:;
		{
			fb$result$1 = (uint8)73u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$892:;
		int32 vr$91 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"c.", 3ll );
		if( (int64)vr$91 != 0ll ) goto label$894;
		label$895:;
		{
			fb$result$1 = (uint8)73u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$894:;
		int32 vr$95 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"copy", 5ll );
		if( (int64)vr$95 != 0ll ) goto label$896;
		label$897:;
		{
			fb$result$1 = (uint8)196u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$896:;
		int32 vr$99 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"cursor", 7ll );
		if( (int64)vr$99 != 0ll ) goto label$898;
		label$899:;
		{
			fb$result$1 = (uint8)104u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$898:;
		int32 vr$103 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"data", 5ll );
		if( (int64)vr$103 != 0ll ) goto label$900;
		label$901:;
		{
			fb$result$1 = (uint8)183u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$900:;
		int32 vr$107 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"defchar", 8ll );
		if( (int64)vr$107 != 0ll ) goto label$902;
		label$903:;
		{
			fb$result$1 = (uint8)217u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$902:;
		int32 vr$111 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"defsnd", 7ll );
		if( (int64)vr$111 != 0ll ) goto label$904;
		label$905:;
		{
			fb$result$1 = (uint8)115u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$904:;
		int32 vr$115 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"defenv", 7ll );
		if( (int64)vr$115 != 0ll ) goto label$906;
		label$907:;
		{
			fb$result$1 = (uint8)116u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$906:;
		int32 vr$119 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"defsprite", 10ll );
		if( (int64)vr$119 != 0ll ) goto label$908;
		label$909:;
		{
			fb$result$1 = (uint8)108u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$908:;
		int32 vr$123 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"ds.", 4ll );
		if( (int64)vr$123 != 0ll ) goto label$910;
		label$911:;
		{
			fb$result$1 = (uint8)108u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$910:;
		int32 vr$127 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"deg", 4ll );
		if( (int64)vr$127 != 0ll ) goto label$912;
		label$913:;
		{
			fb$result$1 = (uint8)137u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$912:;
		int32 vr$131 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"delete", 7ll );
		if( (int64)vr$131 != 0ll ) goto label$914;
		label$915:;
		{
			fb$result$1 = (uint8)194u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$914:;
		int32 vr$135 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"dim", 4ll );
		if( (int64)vr$135 != 0ll ) goto label$916;
		label$917:;
		{
			fb$result$1 = (uint8)114u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$916:;
		int32 vr$139 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"dir", 4ll );
		if( (int64)vr$139 != 0ll ) goto label$918;
		label$919:;
		{
			fb$result$1 = (uint8)93u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$918:;
		int32 vr$143 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"dpoke", 6ll );
		if( (int64)vr$143 != 0ll ) goto label$920;
		label$921:;
		{
			fb$result$1 = (uint8)150u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$920:;
		int32 vr$147 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"draw", 5ll );
		if( (int64)vr$147 != 0ll ) goto label$922;
		label$923:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$922:;
		int32 vr$151 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"drawto", 7ll );
		if( (int64)vr$151 != 0ll ) goto label$924;
		label$925:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$924:;
		int32 vr$155 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"dr.", 4ll );
		if( (int64)vr$155 != 0ll ) goto label$926;
		label$927:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$926:;
		int32 vr$159 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"else", 5ll );
		if( (int64)vr$159 != 0ll ) goto label$928;
		label$929:;
		{
			fb$result$1 = (uint8)90u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$928:;
		int32 vr$163 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"end", 4ll );
		if( (int64)vr$163 != 0ll ) goto label$930;
		label$931:;
		{
			fb$result$1 = (uint8)171u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$930:;
		int32 vr$167 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"enter", 6ll );
		if( (int64)vr$167 != 0ll ) goto label$932;
		label$933:;
		{
			fb$result$1 = (uint8)189u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$932:;
		int32 vr$171 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"e.", 3ll );
		if( (int64)vr$171 != 0ll ) goto label$934;
		label$935:;
		{
			fb$result$1 = (uint8)189u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$934:;
		int32 vr$175 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"fcircle", 8ll );
		if( (int64)vr$175 != 0ll ) goto label$936;
		label$937:;
		{
			fb$result$1 = (uint8)70u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$936:;
		int32 vr$179 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"fc.", 4ll );
		if( (int64)vr$179 != 0ll ) goto label$938;
		label$939:;
		{
			fb$result$1 = (uint8)70u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$938:;
		int32 vr$183 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"fill", 5ll );
		if( (int64)vr$183 != 0ll ) goto label$940;
		label$941:;
		{
			fb$result$1 = (uint8)113u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$940:;
		int32 vr$187 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"fi.", 4ll );
		if( (int64)vr$187 != 0ll ) goto label$942;
		label$943:;
		{
			fb$result$1 = (uint8)113u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$942:;
		int32 vr$191 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"font", 5ll );
		if( (int64)vr$191 != 0ll ) goto label$944;
		label$945:;
		{
			fb$result$1 = (uint8)96u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$944:;
		int32 vr$195 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"for", 4ll );
		if( (int64)vr$195 != 0ll ) goto label$946;
		label$947:;
		{
			fb$result$1 = (uint8)74u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$946:;
		int32 vr$199 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"f.", 3ll );
		if( (int64)vr$199 != 0ll ) goto label$948;
		label$949:;
		{
			fb$result$1 = (uint8)74u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$948:;
		int32 vr$203 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"frame", 6ll );
		if( (int64)vr$203 != 0ll ) goto label$950;
		label$951:;
		{
			fb$result$1 = (uint8)72u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$950:;
		int32 vr$207 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"fr.", 4ll );
		if( (int64)vr$207 != 0ll ) goto label$952;
		label$953:;
		{
			fb$result$1 = (uint8)72u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$952:;
		int32 vr$211 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"get", 4ll );
		if( (int64)vr$211 != 0ll ) goto label$954;
		label$955:;
		{
			fb$result$1 = (uint8)187u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$954:;
		int32 vr$215 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"gosub", 6ll );
		if( (int64)vr$215 != 0ll ) goto label$956;
		label$957:;
		{
			fb$result$1 = (uint8)169u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$956:;
		int32 vr$219 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"goto", 5ll );
		if( (int64)vr$219 != 0ll ) goto label$958;
		label$959:;
		{
			fb$result$1 = (uint8)78u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$958:;
		int32 vr$223 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"g.", 3ll );
		if( (int64)vr$223 != 0ll ) goto label$960;
		label$961:;
		{
			fb$result$1 = (uint8)78u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$960:;
		int32 vr$227 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"if", 3ll );
		if( (int64)vr$227 != 0ll ) goto label$962;
		label$963:;
		{
			fb$result$1 = (uint8)88u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$962:;
		int32 vr$231 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"ink", 4ll );
		if( (int64)vr$231 != 0ll ) goto label$964;
		label$965:;
		{
			fb$result$1 = (uint8)95u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$964:;
		int32 vr$235 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"i.", 3ll );
		if( (int64)vr$235 != 0ll ) goto label$966;
		label$967:;
		{
			fb$result$1 = (uint8)95u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$966:;
		int32 vr$239 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"input", 6ll );
		if( (int64)vr$239 != 0ll ) goto label$968;
		label$969:;
		{
			fb$result$1 = (uint8)181u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$968:;
		int32 vr$243 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"list", 5ll );
		if( (int64)vr$243 != 0ll ) goto label$970;
		label$971:;
		{
			fb$result$1 = (uint8)76u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$970:;
		int32 vr$247 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"l.", 3ll );
		if( (int64)vr$247 != 0ll ) goto label$972;
		label$973:;
		{
			fb$result$1 = (uint8)76u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$972:;
		int32 vr$251 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"load", 5ll );
		if( (int64)vr$251 != 0ll ) goto label$974;
		label$975:;
		{
			fb$result$1 = (uint8)82u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$974:;
		int32 vr$255 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"lo.", 4ll );
		if( (int64)vr$255 != 0ll ) goto label$976;
		label$977:;
		{
			fb$result$1 = (uint8)82u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$976:;
		int32 vr$259 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"lpoke", 6ll );
		if( (int64)vr$259 != 0ll ) goto label$978;
		label$979:;
		{
			fb$result$1 = (uint8)151u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$978:;
		int32 vr$263 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"mkdir", 6ll );
		if( (int64)vr$263 != 0ll ) goto label$980;
		label$981:;
		{
			fb$result$1 = (uint8)198u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$980:;
		int32 vr$267 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"mode", 5ll );
		if( (int64)vr$267 != 0ll ) goto label$982;
		label$983:;
		{
			fb$result$1 = (uint8)97u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$982:;
		int32 vr$271 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"m.", 3ll );
		if( (int64)vr$271 != 0ll ) goto label$984;
		label$985:;
		{
			fb$result$1 = (uint8)97u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$984:;
		int32 vr$275 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"mouse", 6ll );
		if( (int64)vr$275 != 0ll ) goto label$986;
		label$987:;
		{
			fb$result$1 = (uint8)99u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$986:;
		int32 vr$279 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"new", 4ll );
		if( (int64)vr$279 != 0ll ) goto label$988;
		label$989:;
		{
			fb$result$1 = (uint8)65u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$988:;
		int32 vr$283 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"next", 5ll );
		if( (int64)vr$283 != 0ll ) goto label$990;
		label$991:;
		{
			fb$result$1 = (uint8)75u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$990:;
		int32 vr$287 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"n.", 3ll );
		if( (int64)vr$287 != 0ll ) goto label$992;
		label$993:;
		{
			fb$result$1 = (uint8)75u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$992:;
		int32 vr$291 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"on", 3ll );
		if( (int64)vr$291 != 0ll ) goto label$994;
		label$995:;
		{
			fb$result$1 = (uint8)193u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$994:;
		int32 vr$295 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"open", 5ll );
		if( (int64)vr$295 != 0ll ) goto label$996;
		label$997:;
		{
			fb$result$1 = (uint8)179u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$996:;
		int32 vr$299 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"paper", 6ll );
		if( (int64)vr$299 != 0ll ) goto label$998;
		label$999:;
		{
			fb$result$1 = (uint8)94u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$998:;
		int32 vr$303 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pa.", 4ll );
		if( (int64)vr$303 != 0ll ) goto label$1000;
		label$1001:;
		{
			fb$result$1 = (uint8)94u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1000:;
		int32 vr$307 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pinfloat", 9ll );
		if( (int64)vr$307 != 0ll ) goto label$1002;
		label$1003:;
		{
			fb$result$1 = (uint8)124u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1002:;
		int32 vr$311 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pinhi", 6ll );
		if( (int64)vr$311 != 0ll ) goto label$1004;
		label$1005:;
		{
			fb$result$1 = (uint8)126u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1004:;
		int32 vr$315 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pinlo", 6ll );
		if( (int64)vr$315 != 0ll ) goto label$1006;
		label$1007:;
		{
			fb$result$1 = (uint8)125u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1006:;
		int32 vr$319 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pinstart", 9ll );
		if( (int64)vr$319 != 0ll ) goto label$1008;
		label$1009:;
		{
			fb$result$1 = (uint8)127u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1008:;
		int32 vr$323 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pintoggle", 10ll );
		if( (int64)vr$323 != 0ll ) goto label$1010;
		label$1011:;
		{
			fb$result$1 = (uint8)128u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1010:;
		int32 vr$327 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pinwrite", 9ll );
		if( (int64)vr$327 != 0ll ) goto label$1012;
		label$1013:;
		{
			fb$result$1 = (uint8)85u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1012:;
		int32 vr$331 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"play", 5ll );
		if( (int64)vr$331 != 0ll ) goto label$1014;
		label$1015:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1014:;
		int32 vr$335 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"p.", 3ll );
		if( (int64)vr$335 != 0ll ) goto label$1016;
		label$1017:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1016:;
		int32 vr$339 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"plot", 5ll );
		if( (int64)vr$339 != 0ll ) goto label$1018;
		label$1019:;
		{
			fb$result$1 = (uint8)66u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1018:;
		int32 vr$343 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pl.", 4ll );
		if( (int64)vr$343 != 0ll ) goto label$1020;
		label$1021:;
		{
			fb$result$1 = (uint8)66u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1020:;
		int32 vr$347 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"poke", 5ll );
		if( (int64)vr$347 != 0ll ) goto label$1022;
		label$1023:;
		{
			fb$result$1 = (uint8)149u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1022:;
		int32 vr$351 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pop", 4ll );
		if( (int64)vr$351 != 0ll ) goto label$1024;
		label$1025:;
		{
			fb$result$1 = (uint8)172u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1024:;
		int32 vr$355 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"position", 9ll );
		if( (int64)vr$355 != 0ll ) goto label$1026;
		label$1027:;
		{
			fb$result$1 = (uint8)129u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1026:;
		int32 vr$359 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"pos.", 5ll );
		if( (int64)vr$359 != 0ll ) goto label$1028;
		label$1029:;
		{
			fb$result$1 = (uint8)129u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1028:;
		int32 vr$363 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"print", 6ll );
		if( (int64)vr$363 != 0ll ) goto label$1030;
		label$1031:;
		{
			fb$result$1 = (uint8)68u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1030:;
		int32 vr$367 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"?", 2ll );
		if( (int64)vr$367 != 0ll ) goto label$1032;
		label$1033:;
		{
			fb$result$1 = (uint8)68u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1032:;
		int32 vr$371 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"put", 4ll );
		if( (int64)vr$371 != 0ll ) goto label$1034;
		label$1035:;
		{
			fb$result$1 = (uint8)188u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1034:;
		int32 vr$375 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"rad", 4ll );
		if( (int64)vr$375 != 0ll ) goto label$1036;
		label$1037:;
		{
			fb$result$1 = (uint8)136u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1036:;
		int32 vr$379 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"read", 5ll );
		if( (int64)vr$379 != 0ll ) goto label$1038;
		label$1039:;
		{
			fb$result$1 = (uint8)182u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1038:;
		int32 vr$383 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"release", 8ll );
		if( (int64)vr$383 != 0ll ) goto label$1040;
		label$1041:;
		{
			fb$result$1 = (uint8)146u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1040:;
		int32 vr$387 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"rem", 4ll );
		if( (int64)vr$387 != 0ll ) goto label$1042;
		label$1043:;
		{
			fb$result$1 = (uint8)190u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1042:;
		int32 vr$391 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"'", 2ll );
		if( (int64)vr$391 != 0ll ) goto label$1044;
		label$1045:;
		{
			fb$result$1 = (uint8)190u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1044:;
		int32 vr$395 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"restore", 8ll );
		if( (int64)vr$395 != 0ll ) goto label$1046;
		label$1047:;
		{
			fb$result$1 = (uint8)199u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1046:;
		int32 vr$399 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"restorepalette", 15ll );
		if( (int64)vr$399 != 0ll ) goto label$1048;
		label$1049:;
		{
			fb$result$1 = (uint8)212u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1048:;
		int32 vr$403 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"rp.", 4ll );
		if( (int64)vr$403 != 0ll ) goto label$1050;
		label$1051:;
		{
			fb$result$1 = (uint8)212u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1050:;
		int32 vr$407 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"return", 7ll );
		if( (int64)vr$407 != 0ll ) goto label$1052;
		label$1053:;
		{
			fb$result$1 = (uint8)170u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1052:;
		int32 vr$411 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"run", 4ll );
		if( (int64)vr$411 != 0ll ) goto label$1054;
		label$1055:;
		{
			fb$result$1 = (uint8)77u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1054:;
		int32 vr$415 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"save", 5ll );
		if( (int64)vr$415 != 0ll ) goto label$1056;
		label$1057:;
		{
			fb$result$1 = (uint8)81u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1056:;
		int32 vr$419 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"s.", 3ll );
		if( (int64)vr$419 != 0ll ) goto label$1058;
		label$1059:;
		{
			fb$result$1 = (uint8)81u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1058:;
		int32 vr$423 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setcolor", 9ll );
		if( (int64)vr$423 != 0ll ) goto label$1060;
		label$1061:;
		{
			fb$result$1 = (uint8)210u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1060:;
		int32 vr$427 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sc.", 4ll );
		if( (int64)vr$427 != 0ll ) goto label$1062;
		label$1063:;
		{
			fb$result$1 = (uint8)210u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1062:;
		int32 vr$431 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setdelay", 9ll );
		if( (int64)vr$431 != 0ll ) goto label$1064;
		label$1065:;
		{
			fb$result$1 = (uint8)142u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1064:;
		int32 vr$435 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sd.", 4ll );
		if( (int64)vr$435 != 0ll ) goto label$1066;
		label$1067:;
		{
			fb$result$1 = (uint8)142u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1066:;
		int32 vr$439 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setenv", 7ll );
		if( (int64)vr$439 != 0ll ) goto label$1068;
		label$1069:;
		{
			fb$result$1 = (uint8)144u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1068:;
		int32 vr$443 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"se.", 4ll );
		if( (int64)vr$443 != 0ll ) goto label$1070;
		label$1071:;
		{
			fb$result$1 = (uint8)144u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1070:;
		int32 vr$447 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setlen", 7ll );
		if( (int64)vr$447 != 0ll ) goto label$1072;
		label$1073:;
		{
			fb$result$1 = (uint8)141u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1072:;
		int32 vr$451 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sl.", 4ll );
		if( (int64)vr$451 != 0ll ) goto label$1074;
		label$1075:;
		{
			fb$result$1 = (uint8)141u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1074:;
		int32 vr$455 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setpan", 7ll );
		if( (int64)vr$455 != 0ll ) goto label$1076;
		label$1077:;
		{
			fb$result$1 = (uint8)140u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1076:;
		int32 vr$459 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sp.", 4ll );
		if( (int64)vr$459 != 0ll ) goto label$1078;
		label$1079:;
		{
			fb$result$1 = (uint8)140u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1078:;
		int32 vr$463 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setsustain", 11ll );
		if( (int64)vr$463 != 0ll ) goto label$1080;
		label$1081:;
		{
			fb$result$1 = (uint8)145u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1080:;
		int32 vr$467 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"ss.", 4ll );
		if( (int64)vr$467 != 0ll ) goto label$1082;
		label$1083:;
		{
			fb$result$1 = (uint8)145u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1082:;
		int32 vr$471 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setvol", 7ll );
		if( (int64)vr$471 != 0ll ) goto label$1084;
		label$1085:;
		{
			fb$result$1 = (uint8)139u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1084:;
		int32 vr$475 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sv.", 4ll );
		if( (int64)vr$475 != 0ll ) goto label$1086;
		label$1087:;
		{
			fb$result$1 = (uint8)139u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1086:;
		int32 vr$479 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setwave", 8ll );
		if( (int64)vr$479 != 0ll ) goto label$1088;
		label$1089:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1088:;
		int32 vr$483 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sw.", 4ll );
		if( (int64)vr$483 != 0ll ) goto label$1090;
		label$1091:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1090:;
		int32 vr$487 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"setwav", 7ll );
		if( (int64)vr$487 != 0ll ) goto label$1092;
		label$1093:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1092:;
		int32 vr$491 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"shutup", 7ll );
		if( (int64)vr$491 != 0ll ) goto label$1094;
		label$1095:;
		{
			fb$result$1 = (uint8)178u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1094:;
		int32 vr$495 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sh.", 4ll );
		if( (int64)vr$495 != 0ll ) goto label$1096;
		label$1097:;
		{
			fb$result$1 = (uint8)178u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1096:;
		int32 vr$499 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sound", 6ll );
		if( (int64)vr$499 != 0ll ) goto label$1098;
		label$1099:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1098:;
		int32 vr$503 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"so.", 4ll );
		if( (int64)vr$503 != 0ll ) goto label$1100;
		label$1101:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1100:;
		int32 vr$507 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"sprite", 7ll );
		if( (int64)vr$507 != 0ll ) goto label$1102;
		label$1103:;
		{
			fb$result$1 = (uint8)109u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1102:;
		int32 vr$511 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"spr.", 5ll );
		if( (int64)vr$511 != 0ll ) goto label$1104;
		label$1105:;
		{
			fb$result$1 = (uint8)109u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1104:;
		int32 vr$515 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"then", 5ll );
		if( (int64)vr$515 != 0ll ) goto label$1106;
		label$1107:;
		{
			fb$result$1 = (uint8)91u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1106:;
		int32 vr$519 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"waitms", 7ll );
		if( (int64)vr$519 != 0ll ) goto label$1108;
		label$1109:;
		{
			fb$result$1 = (uint8)86u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1108:;
		int32 vr$523 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"w.", 3ll );
		if( (int64)vr$523 != 0ll ) goto label$1110;
		label$1111:;
		{
			fb$result$1 = (uint8)86u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1110:;
		int32 vr$527 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"waitclock", 10ll );
		if( (int64)vr$527 != 0ll ) goto label$1112;
		label$1113:;
		{
			fb$result$1 = (uint8)112u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1112:;
		int32 vr$531 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"wc.", 4ll );
		if( (int64)vr$531 != 0ll ) goto label$1114;
		label$1115:;
		{
			fb$result$1 = (uint8)112u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1114:;
		int32 vr$535 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"waitvbl", 8ll );
		if( (int64)vr$535 != 0ll ) goto label$1116;
		label$1117:;
		{
			fb$result$1 = (uint8)87u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1116:;
		int32 vr$539 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"wv.", 4ll );
		if( (int64)vr$539 != 0ll ) goto label$1118;
		label$1119:;
		{
			fb$result$1 = (uint8)87u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1118:;
		int32 vr$543 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"wrpin", 6ll );
		if( (int64)vr$543 != 0ll ) goto label$1120;
		label$1121:;
		{
			fb$result$1 = (uint8)121u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1120:;
		int32 vr$547 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"wxpin", 6ll );
		if( (int64)vr$547 != 0ll ) goto label$1122;
		label$1123:;
		{
			fb$result$1 = (uint8)119u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1122:;
		int32 vr$551 = fb_StrCompare( (void*)&TMP$380$2, -1ll, (void*)"wypin", 6ll );
		if( (int64)vr$551 != 0ll ) goto label$1124;
		label$1125:;
		{
			fb$result$1 = (uint8)120u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		goto label$849;
		label$1124:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$380$2 );
			goto label$848;
		}
		label$1126:;
		label$849:;
		fb_StrDelete( (FBSTRING*)&TMP$380$2 );
	}
	label$848:;
	return fb$result$1;
}

uint8 ISFUNCTION( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1127:;
	{
		FBSTRING TMP$496$2;
		fb_StrInit( (void*)&TMP$496$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"abs", 4ll );
		if( (int64)vr$3 != 0ll ) goto label$1130;
		label$1131:;
		{
			fb$result$1 = (uint8)158u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1130:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"acos", 5ll );
		if( (int64)vr$7 != 0ll ) goto label$1132;
		label$1133:;
		{
			fb$result$1 = (uint8)133u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1132:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"adr", 4ll );
		if( (int64)vr$11 != 0ll ) goto label$1134;
		label$1135:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1134:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"addr", 5ll );
		if( (int64)vr$15 != 0ll ) goto label$1136;
		label$1137:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1136:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"asc", 4ll );
		if( (int64)vr$19 != 0ll ) goto label$1138;
		label$1139:;
		{
			fb$result$1 = (uint8)167u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1138:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"asin", 5ll );
		if( (int64)vr$23 != 0ll ) goto label$1140;
		label$1141:;
		{
			fb$result$1 = (uint8)132u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1140:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"atn", 4ll );
		if( (int64)vr$27 != 0ll ) goto label$1142;
		label$1143:;
		{
			fb$result$1 = (uint8)134u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1142:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"bin$", 5ll );
		if( (int64)vr$31 != 0ll ) goto label$1144;
		label$1145:;
		{
			fb$result$1 = (uint8)162u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1144:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"chr$", 5ll );
		if( (int64)vr$35 != 0ll ) goto label$1146;
		label$1147:;
		{
			fb$result$1 = (uint8)159u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1146:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"coginit", 8ll );
		if( (int64)vr$39 != 0ll ) goto label$1148;
		label$1149:;
		{
			fb$result$1 = (uint8)192u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1148:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"cos", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$1150;
		label$1151:;
		{
			fb$result$1 = (uint8)130u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1150:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"dpeek", 6ll );
		if( (int64)vr$47 != 0ll ) goto label$1152;
		label$1153:;
		{
			fb$result$1 = (uint8)153u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1152:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"findfirst", 10ll );
		if( (int64)vr$51 != 0ll ) goto label$1154;
		label$1155:;
		{
			fb$result$1 = (uint8)215u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1154:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"findnext", 9ll );
		if( (int64)vr$55 != 0ll ) goto label$1156;
		label$1157:;
		{
			fb$result$1 = (uint8)216u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1156:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"framebuf", 9ll );
		if( (int64)vr$59 != 0ll ) goto label$1158;
		label$1159:;
		{
			fb$result$1 = (uint8)197u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1158:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"fb.", 4ll );
		if( (int64)vr$63 != 0ll ) goto label$1160;
		label$1161:;
		{
			fb$result$1 = (uint8)197u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1160:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"fre", 4ll );
		if( (int64)vr$67 != 0ll ) goto label$1162;
		label$1163:;
		{
			fb$result$1 = (uint8)156u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1162:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"gc.", 4ll );
		if( (int64)vr$71 != 0ll ) goto label$1164;
		label$1165:;
		{
			fb$result$1 = (uint8)211u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1164:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"getcolor", 9ll );
		if( (int64)vr$75 != 0ll ) goto label$1166;
		label$1167:;
		{
			fb$result$1 = (uint8)211u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1166:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"getpixel", 9ll );
		if( (int64)vr$79 != 0ll ) goto label$1168;
		label$1169:;
		{
			fb$result$1 = (uint8)111u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1168:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"ge.", 4ll );
		if( (int64)vr$83 != 0ll ) goto label$1170;
		label$1171:;
		{
			fb$result$1 = (uint8)111u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1170:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"getenvsustain", 14ll );
		if( (int64)vr$87 != 0ll ) goto label$1172;
		label$1173:;
		{
			fb$result$1 = (uint8)147u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1172:;
		int32 vr$91 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"getnotevalue", 13ll );
		if( (int64)vr$91 != 0ll ) goto label$1174;
		label$1175:;
		{
			fb$result$1 = (uint8)148u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1174:;
		int32 vr$95 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"gettime", 8ll );
		if( (int64)vr$95 != 0ll ) goto label$1176;
		label$1177:;
		{
			fb$result$1 = (uint8)98u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1176:;
		int32 vr$99 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"gt.", 4ll );
		if( (int64)vr$99 != 0ll ) goto label$1178;
		label$1179:;
		{
			fb$result$1 = (uint8)98u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1178:;
		int32 vr$103 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"hex$", 5ll );
		if( (int64)vr$103 != 0ll ) goto label$1180;
		label$1181:;
		{
			fb$result$1 = (uint8)163u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1180:;
		int32 vr$107 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"inkey$", 7ll );
		if( (int64)vr$107 != 0ll ) goto label$1182;
		label$1183:;
		{
			fb$result$1 = (uint8)157u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1182:;
		int32 vr$111 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"int", 4ll );
		if( (int64)vr$111 != 0ll ) goto label$1184;
		label$1185:;
		{
			fb$result$1 = (uint8)138u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1184:;
		int32 vr$115 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"left$", 6ll );
		if( (int64)vr$115 != 0ll ) goto label$1186;
		label$1187:;
		{
			fb$result$1 = (uint8)164u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1186:;
		int32 vr$119 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"len", 4ll );
		if( (int64)vr$119 != 0ll ) goto label$1188;
		label$1189:;
		{
			fb$result$1 = (uint8)168u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1188:;
		int32 vr$123 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"log", 4ll );
		if( (int64)vr$123 != 0ll ) goto label$1190;
		label$1191:;
		{
			fb$result$1 = (uint8)173u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1190:;
		int32 vr$127 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"lpeek", 6ll );
		if( (int64)vr$127 != 0ll ) goto label$1192;
		label$1193:;
		{
			fb$result$1 = (uint8)154u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1192:;
		int32 vr$131 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"memtop", 7ll );
		if( (int64)vr$131 != 0ll ) goto label$1194;
		label$1195:;
		{
			fb$result$1 = (uint8)209u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1194:;
		int32 vr$135 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"memlo", 6ll );
		if( (int64)vr$135 != 0ll ) goto label$1196;
		label$1197:;
		{
			fb$result$1 = (uint8)208u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1196:;
		int32 vr$139 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"mid$", 5ll );
		if( (int64)vr$139 != 0ll ) goto label$1198;
		label$1199:;
		{
			fb$result$1 = (uint8)166u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1198:;
		int32 vr$143 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"mousek", 7ll );
		if( (int64)vr$143 != 0ll ) goto label$1200;
		label$1201:;
		{
			fb$result$1 = (uint8)102u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1200:;
		int32 vr$147 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"mousew", 7ll );
		if( (int64)vr$147 != 0ll ) goto label$1202;
		label$1203:;
		{
			fb$result$1 = (uint8)103u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1202:;
		int32 vr$151 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"mousex", 7ll );
		if( (int64)vr$151 != 0ll ) goto label$1204;
		label$1205:;
		{
			fb$result$1 = (uint8)100u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1204:;
		int32 vr$155 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"mousey", 7ll );
		if( (int64)vr$155 != 0ll ) goto label$1206;
		label$1207:;
		{
			fb$result$1 = (uint8)101u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1206:;
		int32 vr$159 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"pads", 5ll );
		if( (int64)vr$159 != 0ll ) goto label$1208;
		label$1209:;
		{
			fb$result$1 = (uint8)213u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1208:;
		int32 vr$163 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padw", 5ll );
		if( (int64)vr$163 != 0ll ) goto label$1210;
		label$1211:;
		{
			fb$result$1 = (uint8)214u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1210:;
		int32 vr$167 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padx", 5ll );
		if( (int64)vr$167 != 0ll ) goto label$1212;
		label$1213:;
		{
			fb$result$1 = (uint8)200u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1212:;
		int32 vr$171 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"pady", 5ll );
		if( (int64)vr$171 != 0ll ) goto label$1214;
		label$1215:;
		{
			fb$result$1 = (uint8)201u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1214:;
		int32 vr$175 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padz", 5ll );
		if( (int64)vr$175 != 0ll ) goto label$1216;
		label$1217:;
		{
			fb$result$1 = (uint8)202u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1216:;
		int32 vr$179 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padrx", 6ll );
		if( (int64)vr$179 != 0ll ) goto label$1218;
		label$1219:;
		{
			fb$result$1 = (uint8)204u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1218:;
		int32 vr$183 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padry", 6ll );
		if( (int64)vr$183 != 0ll ) goto label$1220;
		label$1221:;
		{
			fb$result$1 = (uint8)205u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1220:;
		int32 vr$187 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padrz", 6ll );
		if( (int64)vr$187 != 0ll ) goto label$1222;
		label$1223:;
		{
			fb$result$1 = (uint8)206u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1222:;
		int32 vr$191 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"padh", 5ll );
		if( (int64)vr$191 != 0ll ) goto label$1224;
		label$1225:;
		{
			fb$result$1 = (uint8)203u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1224:;
		int32 vr$195 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"peek", 5ll );
		if( (int64)vr$195 != 0ll ) goto label$1226;
		label$1227:;
		{
			fb$result$1 = (uint8)152u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1226:;
		int32 vr$199 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"pinread", 8ll );
		if( (int64)vr$199 != 0ll ) goto label$1228;
		label$1229:;
		{
			fb$result$1 = (uint8)123u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1228:;
		int32 vr$203 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"rdpin", 6ll );
		if( (int64)vr$203 != 0ll ) goto label$1230;
		label$1231:;
		{
			fb$result$1 = (uint8)118u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1230:;
		int32 vr$207 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"right$", 7ll );
		if( (int64)vr$207 != 0ll ) goto label$1232;
		label$1233:;
		{
			fb$result$1 = (uint8)165u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1232:;
		int32 vr$211 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"rqpin", 6ll );
		if( (int64)vr$211 != 0ll ) goto label$1234;
		label$1235:;
		{
			fb$result$1 = (uint8)122u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1234:;
		int32 vr$215 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"round", 6ll );
		if( (int64)vr$215 != 0ll ) goto label$1236;
		label$1237:;
		{
			fb$result$1 = (uint8)191u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1236:;
		int32 vr$219 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"rnd", 4ll );
		if( (int64)vr$219 != 0ll ) goto label$1238;
		label$1239:;
		{
			fb$result$1 = (uint8)84u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1238:;
		int32 vr$223 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"sin", 4ll );
		if( (int64)vr$223 != 0ll ) goto label$1240;
		label$1241:;
		{
			fb$result$1 = (uint8)107u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1240:;
		int32 vr$227 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"sqr", 4ll );
		if( (int64)vr$227 != 0ll ) goto label$1242;
		label$1243:;
		{
			fb$result$1 = (uint8)135u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1242:;
		int32 vr$231 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"stick", 6ll );
		if( (int64)vr$231 != 0ll ) goto label$1244;
		label$1245:;
		{
			fb$result$1 = (uint8)106u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1244:;
		int32 vr$235 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"strig", 6ll );
		if( (int64)vr$235 != 0ll ) goto label$1246;
		label$1247:;
		{
			fb$result$1 = (uint8)110u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1246:;
		int32 vr$239 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"str$", 5ll );
		if( (int64)vr$239 != 0ll ) goto label$1248;
		label$1249:;
		{
			fb$result$1 = (uint8)161u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1248:;
		int32 vr$243 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"tan", 4ll );
		if( (int64)vr$243 != 0ll ) goto label$1250;
		label$1251:;
		{
			fb$result$1 = (uint8)131u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1250:;
		int32 vr$247 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"val", 4ll );
		if( (int64)vr$247 != 0ll ) goto label$1252;
		label$1253:;
		{
			fb$result$1 = (uint8)160u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1252:;
		int32 vr$251 = fb_StrCompare( (void*)&TMP$496$2, -1ll, (void*)"varptr", 7ll );
		if( (int64)vr$251 != 0ll ) goto label$1254;
		label$1255:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		goto label$1129;
		label$1254:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$496$2 );
			goto label$1128;
		}
		label$1256:;
		label$1129:;
		fb_StrDelete( (FBSTRING*)&TMP$496$2 );
	}
	label$1128:;
	return fb$result$1;
}

boolean ISNAME( FBSTRING* S$1 )
{
	int64 TMP$560$1;
	int64 TMP$561$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1257:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	int64 vr$4 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$4;
	if( L$1 != 0ll ) goto label$1260;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1258;
		label$1260:;
	}
	FBSTRING* vr$6 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$6, -1ll, 0 );
	int32 vr$9 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
	if( (int64)vr$9 < 0ll ) goto label$1261;
	int32 vr$12 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
	TMP$560$1 = (int64)-((int64)vr$12 > 0ll);
	goto label$1289;
	label$1261:;
	TMP$560$1 = -1ll;
	label$1289:;
	if( TMP$560$1 == 0ll ) goto label$1262;
	int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
	TMP$561$1 = (int64)-((int64)vr$16 != 0ll);
	goto label$1290;
	label$1262:;
	TMP$561$1 = 0ll;
	label$1290:;
	if( TMP$561$1 == 0ll ) goto label$1264;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1258;
		label$1264:;
	}
	if( L$1 <= 2ll ) goto label$1266;
	{
		{
			I$1 = 2ll;
			int64 TMP$562$3;
			TMP$562$3 = L$1;
			goto label$1267;
			label$1270:;
			{
				int64 TMP$563$4;
				int64 TMP$564$4;
				int64 TMP$565$4;
				int64 TMP$566$4;
				int64 TMP$567$4;
				int64 TMP$568$4;
				int64 TMP$569$4;
				int64 TMP$570$4;
				int64 TMP$571$4;
				int64 TMP$572$4;
				int64 TMP$573$4;
				int64 TMP$574$4;
				int64 TMP$575$4;
				int64 TMP$576$4;
				FBSTRING* vr$20 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$20, -1ll, 0 );
				if( I$1 >= L$1 ) goto label$1272;
				int32 vr$23 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$23 < 0ll ) goto label$1271;
				int32 vr$26 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
				TMP$563$4 = (int64)-((int64)vr$26 > 0ll);
				goto label$1292;
				label$1271:;
				TMP$563$4 = -1ll;
				label$1292:;
				TMP$564$4 = (int64)-(TMP$563$4 != 0ll);
				goto label$1291;
				label$1272:;
				TMP$564$4 = 0ll;
				label$1291:;
				if( TMP$564$4 == 0ll ) goto label$1274;
				int32 vr$31 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$31 < 0ll ) goto label$1273;
				int32 vr$34 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$565$4 = (int64)-((int64)vr$34 > 0ll);
				goto label$1294;
				label$1273:;
				TMP$565$4 = -1ll;
				label$1294:;
				TMP$566$4 = (int64)-(TMP$565$4 != 0ll);
				goto label$1293;
				label$1274:;
				TMP$566$4 = 0ll;
				label$1293:;
				if( TMP$566$4 == 0ll ) goto label$1275;
				int32 vr$39 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$567$4 = (int64)-((int64)vr$39 != 0ll);
				goto label$1295;
				label$1275:;
				TMP$567$4 = 0ll;
				label$1295:;
				if( TMP$567$4 == 0ll ) goto label$1276;
				int32 vr$43 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				TMP$568$4 = (int64)-((int64)vr$43 != 0ll);
				goto label$1296;
				label$1276:;
				TMP$568$4 = 0ll;
				label$1296:;
				if( TMP$568$4 == 0ll ) goto label$1278;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1258;
					label$1278:;
				}
				if( I$1 != L$1 ) goto label$1280;
				int32 vr$48 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$48 < 0ll ) goto label$1279;
				int32 vr$51 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
				TMP$569$4 = (int64)-((int64)vr$51 > 0ll);
				goto label$1298;
				label$1279:;
				TMP$569$4 = -1ll;
				label$1298:;
				TMP$570$4 = (int64)-(TMP$569$4 != 0ll);
				goto label$1297;
				label$1280:;
				TMP$570$4 = 0ll;
				label$1297:;
				if( TMP$570$4 == 0ll ) goto label$1282;
				int32 vr$56 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$56 < 0ll ) goto label$1281;
				int32 vr$59 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$571$4 = (int64)-((int64)vr$59 > 0ll);
				goto label$1300;
				label$1281:;
				TMP$571$4 = -1ll;
				label$1300:;
				TMP$572$4 = (int64)-(TMP$571$4 != 0ll);
				goto label$1299;
				label$1282:;
				TMP$572$4 = 0ll;
				label$1299:;
				if( TMP$572$4 == 0ll ) goto label$1283;
				int32 vr$64 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$573$4 = (int64)-((int64)vr$64 != 0ll);
				goto label$1301;
				label$1283:;
				TMP$573$4 = 0ll;
				label$1301:;
				if( TMP$573$4 == 0ll ) goto label$1284;
				int32 vr$68 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
				TMP$574$4 = (int64)-((int64)vr$68 != 0ll);
				goto label$1302;
				label$1284:;
				TMP$574$4 = 0ll;
				label$1302:;
				if( TMP$574$4 == 0ll ) goto label$1285;
				int32 vr$72 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
				TMP$575$4 = (int64)-((int64)vr$72 != 0ll);
				goto label$1303;
				label$1285:;
				TMP$575$4 = 0ll;
				label$1303:;
				if( TMP$575$4 == 0ll ) goto label$1286;
				int32 vr$76 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"!", 2ll );
				TMP$576$4 = (int64)-((int64)vr$76 != 0ll);
				goto label$1304;
				label$1286:;
				TMP$576$4 = 0ll;
				label$1304:;
				if( TMP$576$4 == 0ll ) goto label$1288;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1258;
					label$1288:;
				}
			}
			label$1268:;
			I$1 = I$1 + 1ll;
			label$1267:;
			if( I$1 <= TMP$562$3 ) goto label$1270;
			label$1269:;
		}
	}
	label$1266:;
	label$1265:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1258;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1258:;
	return fb$result$1;
}

boolean ISNUM( FBSTRING* S$1 )
{
	int64 TMP$577$1;
	int64 TMP$578$1;
	int64 TMP$579$1;
	int64 TMP$580$1;
	int64 TMP$581$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1305:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 DS$1;
	__builtin_memset( &DS$1, 0, 8ll );
	int64 ES$1;
	__builtin_memset( &ES$1, 0, 8ll );
	int64 HEX_$1;
	__builtin_memset( &HEX_$1, 0, 8ll );
	int64 BIN_$1;
	__builtin_memset( &BIN_$1, 0, 8ll );
	int64 B$1;
	__builtin_memset( &B$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	DS$1 = 0ll;
	ES$1 = 0ll;
	int64 vr$9 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$9;
	if( L$1 != 0ll ) goto label$1308;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1306;
		label$1308:;
	}
	FBSTRING* vr$11 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$11, -1ll, 0 );
	int32 vr$14 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
	if( (int64)vr$14 < 0ll ) goto label$1309;
	int32 vr$17 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
	TMP$577$1 = (int64)-((int64)vr$17 > 0ll);
	goto label$1361;
	label$1309:;
	TMP$577$1 = -1ll;
	label$1361:;
	if( TMP$577$1 == 0ll ) goto label$1310;
	int32 vr$21 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
	TMP$578$1 = (int64)-((int64)vr$21 != 0ll);
	goto label$1362;
	label$1310:;
	TMP$578$1 = 0ll;
	label$1362:;
	if( TMP$578$1 == 0ll ) goto label$1311;
	int32 vr$25 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	TMP$579$1 = (int64)-((int64)vr$25 != 0ll);
	goto label$1363;
	label$1311:;
	TMP$579$1 = 0ll;
	label$1363:;
	if( TMP$579$1 == 0ll ) goto label$1312;
	int32 vr$29 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	TMP$580$1 = (int64)-((int64)vr$29 != 0ll);
	goto label$1364;
	label$1312:;
	TMP$580$1 = 0ll;
	label$1364:;
	if( TMP$580$1 == 0ll ) goto label$1313;
	int32 vr$33 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
	TMP$581$1 = (int64)-((int64)vr$33 != 0ll);
	goto label$1365;
	label$1313:;
	TMP$581$1 = 0ll;
	label$1365:;
	if( TMP$581$1 == 0ll ) goto label$1315;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1306;
		label$1315:;
	}
	int32 vr$38 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
	if( (int64)vr$38 != 0ll ) goto label$1317;
	{
		DS$1 = 1ll;
		label$1317:;
	}
	int32 vr$41 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	if( (int64)vr$41 != 0ll ) goto label$1319;
	{
		HEX_$1 = 1ll;
	}
	goto label$1318;
	label$1319:;
	{
		HEX_$1 = 0ll;
		label$1318:;
	}
	int32 vr$44 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	if( (int64)vr$44 != 0ll ) goto label$1321;
	{
		BIN_$1 = 1ll;
	}
	goto label$1320;
	label$1321:;
	{
		BIN_$1 = 0ll;
		label$1320:;
	}
	if( L$1 <= 1ll ) goto label$1323;
	{
		{
			I$1 = 2ll;
			int64 TMP$582$3;
			TMP$582$3 = L$1;
			goto label$1324;
			label$1327:;
			{
				int64 TMP$583$4;
				int64 TMP$584$4;
				int64 TMP$585$4;
				int64 TMP$586$4;
				int64 TMP$587$4;
				int64 TMP$588$4;
				int64 TMP$589$4;
				int64 TMP$590$4;
				int64 TMP$591$4;
				int64 TMP$592$4;
				int64 TMP$593$4;
				int64 TMP$594$4;
				FBSTRING* vr$46 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$46, -1ll, 0 );
				B$1 = 0ll;
				int32 vr$49 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$49 < 0ll ) goto label$1328;
				int32 vr$52 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$583$4 = (int64)-((int64)vr$52 <= 0ll);
				goto label$1366;
				label$1328:;
				TMP$583$4 = 0ll;
				label$1366:;
				if( TMP$583$4 == 0ll ) goto label$1330;
				{
					B$1 = -1ll;
					label$1330:;
				}
				int32 vr$56 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				if( (int64)vr$56 == 0ll ) goto label$1331;
				int32 vr$59 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				TMP$584$4 = (int64)-((int64)vr$59 == 0ll);
				goto label$1367;
				label$1331:;
				TMP$584$4 = -1ll;
				label$1367:;
				if( TMP$584$4 != 0ll ) goto label$1332;
				int32 vr$63 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"E", 2ll );
				TMP$585$4 = (int64)-((int64)vr$63 == 0ll);
				goto label$1368;
				label$1332:;
				TMP$585$4 = -1ll;
				label$1368:;
				if( TMP$585$4 != 0ll ) goto label$1333;
				int32 vr$67 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"e", 2ll );
				TMP$586$4 = (int64)-((int64)vr$67 == 0ll);
				goto label$1369;
				label$1333:;
				TMP$586$4 = -1ll;
				label$1369:;
				if( TMP$586$4 != 0ll ) goto label$1334;
				int32 vr$71 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
				TMP$587$4 = (int64)-((int64)vr$71 == 0ll);
				goto label$1370;
				label$1334:;
				TMP$587$4 = -1ll;
				label$1370:;
				if( TMP$587$4 == 0ll ) goto label$1336;
				{
					B$1 = -1ll;
					label$1336:;
				}
				if( HEX_$1 != 1ll ) goto label$1337;
				int32 vr$75 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				TMP$588$4 = (int64)-((int64)vr$75 >= 0ll);
				goto label$1371;
				label$1337:;
				TMP$588$4 = 0ll;
				label$1371:;
				if( TMP$588$4 == 0ll ) goto label$1338;
				int32 vr$79 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"f", 2ll );
				TMP$589$4 = (int64)-((int64)vr$79 <= 0ll);
				goto label$1372;
				label$1338:;
				TMP$589$4 = 0ll;
				label$1372:;
				if( TMP$589$4 == 0ll ) goto label$1340;
				{
					B$1 = -1ll;
					label$1340:;
				}
				if( BIN_$1 != 1ll ) goto label$1342;
				int32 vr$83 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$83 < 0ll ) goto label$1341;
				int32 vr$86 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"1", 2ll );
				TMP$590$4 = (int64)-((int64)vr$86 > 0ll);
				goto label$1374;
				label$1341:;
				TMP$590$4 = -1ll;
				label$1374:;
				TMP$591$4 = (int64)-(TMP$590$4 != 0ll);
				goto label$1373;
				label$1342:;
				TMP$591$4 = 0ll;
				label$1373:;
				if( TMP$591$4 == 0ll ) goto label$1343;
				int32 vr$91 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$592$4 = (int64)-((int64)vr$91 != 0ll);
				goto label$1375;
				label$1343:;
				TMP$592$4 = 0ll;
				label$1375:;
				if( TMP$592$4 == 0ll ) goto label$1345;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1306;
					label$1345:;
				}
				if( ~B$1 == 0ll ) goto label$1347;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1306;
					label$1347:;
				}
				int32 vr$98 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
				if( (int64)vr$98 != 0ll ) goto label$1348;
				FBSTRING* vr$101 = fb_StrMid( (FBSTRING*)S$1, I$1 + -1ll, 1ll );
				FBSTRING* vr$102 = fb_StrLcase2( (FBSTRING*)vr$101, 0 );
				int32 vr$103 = fb_StrCompare( (void*)vr$102, -1ll, (void*)"e", 2ll );
				TMP$593$4 = (int64)-((int64)vr$103 != 0ll);
				goto label$1376;
				label$1348:;
				TMP$593$4 = 0ll;
				label$1376:;
				if( TMP$593$4 == 0ll ) goto label$1350;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1306;
					label$1350:;
				}
				int32 vr$108 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				if( (int64)vr$108 != 0ll ) goto label$1352;
				{
					DS$1 = DS$1 + 1ll;
					if( DS$1 <= 1ll ) goto label$1354;
					{
						fb$result$1 = (boolean)0ll;
						fb_StrDelete( (FBSTRING*)&M_$1 );
						goto label$1306;
						label$1354:;
					}
					label$1352:;
				}
				int32 vr$113 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"E", 2ll );
				if( (int64)vr$113 == 0ll ) goto label$1355;
				int32 vr$116 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"e", 2ll );
				TMP$594$4 = (int64)-((int64)vr$116 == 0ll);
				goto label$1377;
				label$1355:;
				TMP$594$4 = -1ll;
				label$1377:;
				if( TMP$594$4 == 0ll ) goto label$1357;
				{
					int64 TMP$595$5;
					ES$1 = ES$1 + 1ll;
					if( HEX_$1 != 0ll ) goto label$1358;
					TMP$595$5 = (int64)-(ES$1 > 1ll);
					goto label$1378;
					label$1358:;
					TMP$595$5 = 0ll;
					label$1378:;
					if( TMP$595$5 == 0ll ) goto label$1360;
					{
						fb$result$1 = (boolean)0ll;
						fb_StrDelete( (FBSTRING*)&M_$1 );
						goto label$1306;
						label$1360:;
					}
					label$1357:;
				}
			}
			label$1325:;
			I$1 = I$1 + 1ll;
			label$1324:;
			if( I$1 <= TMP$582$3 ) goto label$1327;
			label$1326:;
		}
	}
	label$1323:;
	label$1322:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1306;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1306:;
	return fb$result$1;
}

boolean ISINT( FBSTRING* S$1 )
{
	int64 TMP$596$1;
	int64 TMP$597$1;
	int64 TMP$598$1;
	int64 TMP$599$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1379:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 DS$1;
	__builtin_memset( &DS$1, 0, 8ll );
	int64 ES$1;
	__builtin_memset( &ES$1, 0, 8ll );
	int64 HEX_$1;
	__builtin_memset( &HEX_$1, 0, 8ll );
	int64 BIN_$1;
	__builtin_memset( &BIN_$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	int64 vr$8 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$8;
	if( L$1 != 0ll ) goto label$1382;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1380;
		label$1382:;
	}
	FBSTRING* vr$10 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$10, -1ll, 0 );
	int32 vr$13 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
	if( (int64)vr$13 < 0ll ) goto label$1383;
	int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
	TMP$596$1 = (int64)-((int64)vr$16 > 0ll);
	goto label$1416;
	label$1383:;
	TMP$596$1 = -1ll;
	label$1416:;
	if( TMP$596$1 == 0ll ) goto label$1384;
	int32 vr$20 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	TMP$597$1 = (int64)-((int64)vr$20 != 0ll);
	goto label$1417;
	label$1384:;
	TMP$597$1 = 0ll;
	label$1417:;
	if( TMP$597$1 == 0ll ) goto label$1385;
	int32 vr$24 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	TMP$598$1 = (int64)-((int64)vr$24 != 0ll);
	goto label$1418;
	label$1385:;
	TMP$598$1 = 0ll;
	label$1418:;
	if( TMP$598$1 == 0ll ) goto label$1386;
	int32 vr$28 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
	TMP$599$1 = (int64)-((int64)vr$28 != 0ll);
	goto label$1419;
	label$1386:;
	TMP$599$1 = 0ll;
	label$1419:;
	if( TMP$599$1 == 0ll ) goto label$1388;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1380;
		label$1388:;
	}
	int32 vr$33 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	if( (int64)vr$33 != 0ll ) goto label$1390;
	{
		HEX_$1 = 1ll;
	}
	goto label$1389;
	label$1390:;
	{
		HEX_$1 = 0ll;
		label$1389:;
	}
	int32 vr$36 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	if( (int64)vr$36 != 0ll ) goto label$1392;
	{
		BIN_$1 = 1ll;
	}
	goto label$1391;
	label$1392:;
	{
		BIN_$1 = 0ll;
		label$1391:;
	}
	if( L$1 <= 1ll ) goto label$1394;
	{
		{
			I$1 = 2ll;
			int64 TMP$600$3;
			TMP$600$3 = L$1;
			goto label$1395;
			label$1398:;
			{
				int64 TMP$601$4;
				int64 TMP$602$4;
				int64 TMP$603$4;
				int64 TMP$604$4;
				int64 TMP$605$4;
				int64 TMP$606$4;
				int64 TMP$607$4;
				int64 TMP$608$4;
				int64 TMP$609$4;
				int64 TMP$610$4;
				int64 TMP$611$4;
				FBSTRING* vr$38 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$38, -1ll, 0 );
				if( HEX_$1 != 0ll ) goto label$1400;
				int32 vr$41 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$41 < 0ll ) goto label$1399;
				int32 vr$44 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$601$4 = (int64)-((int64)vr$44 > 0ll);
				goto label$1421;
				label$1399:;
				TMP$601$4 = -1ll;
				label$1421:;
				TMP$602$4 = (int64)-(TMP$601$4 != 0ll);
				goto label$1420;
				label$1400:;
				TMP$602$4 = 0ll;
				label$1420:;
				if( TMP$602$4 == 0ll ) goto label$1401;
				int32 vr$49 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$603$4 = (int64)-((int64)vr$49 != 0ll);
				goto label$1422;
				label$1401:;
				TMP$603$4 = 0ll;
				label$1422:;
				if( TMP$603$4 == 0ll ) goto label$1403;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1380;
					label$1403:;
				}
				if( HEX_$1 != 1ll ) goto label$1405;
				int32 vr$54 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$54 < 0ll ) goto label$1404;
				int32 vr$57 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$604$4 = (int64)-((int64)vr$57 > 0ll);
				goto label$1424;
				label$1404:;
				TMP$604$4 = -1ll;
				label$1424:;
				TMP$605$4 = (int64)-(TMP$604$4 != 0ll);
				goto label$1423;
				label$1405:;
				TMP$605$4 = 0ll;
				label$1423:;
				if( TMP$605$4 == 0ll ) goto label$1407;
				int32 vr$62 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$62 < 0ll ) goto label$1406;
				int32 vr$65 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"f", 2ll );
				TMP$606$4 = (int64)-((int64)vr$65 > 0ll);
				goto label$1426;
				label$1406:;
				TMP$606$4 = -1ll;
				label$1426:;
				TMP$607$4 = (int64)-(TMP$606$4 != 0ll);
				goto label$1425;
				label$1407:;
				TMP$607$4 = 0ll;
				label$1425:;
				if( TMP$607$4 == 0ll ) goto label$1408;
				int32 vr$70 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$608$4 = (int64)-((int64)vr$70 != 0ll);
				goto label$1427;
				label$1408:;
				TMP$608$4 = 0ll;
				label$1427:;
				if( TMP$608$4 == 0ll ) goto label$1410;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1380;
					label$1410:;
				}
				if( BIN_$1 != 1ll ) goto label$1412;
				int32 vr$75 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$75 < 0ll ) goto label$1411;
				int32 vr$78 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"1", 2ll );
				TMP$609$4 = (int64)-((int64)vr$78 > 0ll);
				goto label$1429;
				label$1411:;
				TMP$609$4 = -1ll;
				label$1429:;
				TMP$610$4 = (int64)-(TMP$609$4 != 0ll);
				goto label$1428;
				label$1412:;
				TMP$610$4 = 0ll;
				label$1428:;
				if( TMP$610$4 == 0ll ) goto label$1413;
				int32 vr$83 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$611$4 = (int64)-((int64)vr$83 != 0ll);
				goto label$1430;
				label$1413:;
				TMP$611$4 = 0ll;
				label$1430:;
				if( TMP$611$4 == 0ll ) goto label$1415;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1380;
					label$1415:;
				}
			}
			label$1396:;
			I$1 = I$1 + 1ll;
			label$1395:;
			if( I$1 <= TMP$600$3 ) goto label$1398;
			label$1397:;
		}
	}
	label$1394:;
	label$1393:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1380;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1380:;
	return fb$result$1;
}

int64 ISDEC( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1431:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	int64 vr$4 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$4;
	if( L$1 != 0ll ) goto label$1434;
	{
		fb$result$1 = 0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1432;
		label$1434:;
	}
	{
		I$1 = 1ll;
		int64 TMP$612$2;
		TMP$612$2 = L$1;
		goto label$1435;
		label$1438:;
		{
			int64 TMP$613$3;
			int64 TMP$614$3;
			FBSTRING* vr$6 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
			fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$6, -1ll, 0 );
			int32 vr$9 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
			if( (int64)vr$9 < 0ll ) goto label$1439;
			int32 vr$12 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
			TMP$613$3 = (int64)-((int64)vr$12 > 0ll);
			goto label$1443;
			label$1439:;
			TMP$613$3 = -1ll;
			label$1443:;
			if( TMP$613$3 == 0ll ) goto label$1440;
			int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
			TMP$614$3 = (int64)-((int64)vr$16 != 0ll);
			goto label$1444;
			label$1440:;
			TMP$614$3 = 0ll;
			label$1444:;
			if( TMP$614$3 == 0ll ) goto label$1442;
			{
				fb$result$1 = 0ll;
				fb_StrDelete( (FBSTRING*)&M_$1 );
				goto label$1432;
				label$1442:;
			}
		}
		label$1436:;
		I$1 = I$1 + 1ll;
		label$1435:;
		if( I$1 <= TMP$612$2 ) goto label$1438;
		label$1437:;
	}
	fb$result$1 = 1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1432;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1432:;
	return fb$result$1;
}

boolean ISSTRING( FBSTRING* S$1 )
{
	int64 TMP$615$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1445:;
	FBSTRING* vr$1 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)"\x22", 2ll );
	if( (int64)vr$2 != 0ll ) goto label$1447;
	FBSTRING* vr$4 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"\x22", 2ll );
	TMP$615$1 = (int64)-((int64)vr$5 == 0ll);
	goto label$1450;
	label$1447:;
	TMP$615$1 = 0ll;
	label$1450:;
	if( TMP$615$1 == 0ll ) goto label$1449;
	{
		fb$result$1 = (boolean)1ll;
		goto label$1446;
	}
	goto label$1448;
	label$1449:;
	{
		fb$result$1 = (boolean)0ll;
		goto label$1446;
		label$1448:;
	}
	label$1446:;
	return fb$result$1;
}

float GETNOTEVAL( int64 TOKEN$1 )
{
	float fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1451:;
	int64 NOTE$1;
	__builtin_memset( &NOTE$1, 0, 8ll );
	int64 NOTEEXP$1;
	__builtin_memset( &NOTEEXP$1, 0, 8ll );
	float NOTEBASE$1;
	__builtin_memset( &NOTEBASE$1, 0, 4ll );
	float A$1;
	__builtin_memset( &A$1, 0, 4ll );
	NOTE$1 = TOKEN$1 + -768ll;
	NOTEBASE$1 = *(float*)((int64)(float*)NOTETABLE$ + ((NOTE$1 % 12ll) << (2ll & 63ll)));
	NOTEEXP$1 = fb_D2L( ((double)NOTE$1 / 0x1.8p+3) + 0x1.p+0 );
	double vr$13 = pow( 0x1.p+1, (double)NOTEEXP$1 );
	fb$result$1 = (float)(vr$13 * (double)NOTEBASE$1);
	goto label$1452;
	label$1452:;
	return fb$result$1;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	FBSTRING TMP$230$0;
	FBSTRING TMP$233$0;
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
	{
		I$0 = 0ll;
		label$305:;
		{
			*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$0 << (5ll & 63ll))) + 4ll) = 2048u;
		}
		label$303:;
		I$0 = I$0 + 1ll;
		label$302:;
		if( I$0 <= 17ll ) goto label$305;
		label$304:;
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
		int64 TMP$227$1;
		TMP$227$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 111ll;
		goto label$306;
		label$309:;
		{
			*(uint8*)((uint8*)&MACHINE$ + I$0) = (uint8)0u;
		}
		label$307:;
		I$0 = I$0 + 1ll;
		label$306:;
		if( I$0 <= TMP$227$1 ) goto label$309;
		label$308:;
	}
	{
		I$0 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 112ll;
		int64 TMP$228$1;
		TMP$228$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 568ll) + 127ll;
		goto label$310;
		label$313:;
		{
			*(uint8*)((uint8*)&MACHINE$ + I$0) = (uint8)154u;
		}
		label$311:;
		I$0 = I$0 + 1ll;
		label$310:;
		if( I$0 <= TMP$228$1 ) goto label$313;
		label$312:;
	}
	SETSPRITEPTR( 16ll, 520192u );
	SETSPRITESIZE( 16ll, 32ll, 32ll );
	fb_ThreadCreate( (tmp$1)&SDLTHREAD, (void*)0ull, 0ll );
	EDITOR_SPACES$ = 2ll;
	PAPER$ = 147ll;
	INK$ = 154ll;
	FONT$ = 4ll;
	PLOT_COLOR$ = INK$;
	PLOT_X$ = 0ll;
	PLOT_Y$ = 0ll;
	KEYCLICK$ = 1ll;
	NOSTALGIC_MODE$ = 0u;
	COMPILEDSLOT$ = 16ll;
	CLS1( (uint8)INK$, (uint8)PAPER$ );
	SETLEADINGSPACES( 2ll );
	FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (uint8*)"~/bas", 5ll );
	fb_ChDir( (FBSTRING*)vr$32 );
	fb_StrAssign( (void*)&CURRENTDIR_$, -1ll, (void*)"~/bas", 6ll, 0 );
	POSITION( EDITOR_SPACES$ << (1ll & 63ll), 1ll );
	__builtin_memset( &TMP$230$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$230$0, -1ll, (void*)"RPi5 Retromachine BASIC version 0.01", 37ll, 0 );
	WRITELN( &TMP$230$0 );
	fb_StrDelete( (FBSTRING*)&TMP$230$0 );
	FBSTRING* vr$40 = fb_LongintToStr( (int64)MEMTOP$ - PROGRAMPTR$ );
	fb_StrAssign( (void*)&FREE_$, -1ll, (void*)vr$40, -1ll, 0 );
	fb_StrConcatAssign( (void*)&FREE_$, -1ll, (void*)" BASIC bytes free", 18ll, 0 );
	WRITELN( &FREE_$ );
	POSITION( EDITOR_SPACES$ << (1ll & 63ll), 4ll );
	__builtin_memset( &TMP$233$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$233$0, -1ll, (void*)"Ready", 6ll, 0 );
	WRITELN( &TMP$233$0 );
	fb_StrDelete( (FBSTRING*)&TMP$233$0 );
	fb_StrAssign( (void*)&LOADNAME$, -1ll, (void*)"noname.bas", 11ll, 0 );
	DO_INSERT$ = -1ll;
	INLOAD$ = 0ll;
	FBSTRING* vr$46 = fb_StrAllocTempDescZEx( (uint8*)"/sd/bas/autorun.bas", 19ll );
	fb_FileOpen( (FBSTRING*)vr$46, 2u, 0u, 0u, 9, 0 );
	fb_FileClose( 9 );
	int32 vr$47 = fb_ErrorGetNum(  );
	if( (int64)vr$47 != 0ll ) goto label$315;
	{
		fb_StrAssign( (void*)&LINE_$, -1ll, (void*)"run autorun.bas", 16ll, 0 );
		label$315:;
	}
	A$ = 1ll;
	label$1453:;
	{
		fb_SleepEx( 500, 1 );
	}
	label$1455:;
	if( A$ != 0ll ) goto label$1453;
	label$1454:;
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN4PARTC1Ev( struct $4PART* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	label$286:;
	label$287:;
}

static void _ZN4PARTaSERKS_( struct $4PART* THIS$1, struct $4PART* __FB_RHS__$1 )
{
	label$288:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	label$289:;
}

static void _ZN4PARTD1Ev( struct $4PART* THIS$1 )
{
	label$292:;
	label$293:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN8VARIABLEC1Ev( struct $8VARIABLE* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (union $7ARESULT*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	__builtin_memset( (uint32*)((uint8*)THIS$1 + 32ll), 0, 4ll );
	label$294:;
	label$295:;
}

static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE* THIS$1, struct $8VARIABLE* __FB_RHS__$1 )
{
	label$296:;
	fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	__builtin_memcpy( (union $7ARESULT*)((uint8*)THIS$1 + 24ll), (union $7ARESULT*)((uint8*)__FB_RHS__$1 + 24ll), 8 );
	*(uint32*)((uint8*)THIS$1 + 32ll) = *(uint32*)((uint8*)__FB_RHS__$1 + 32ll);
	label$297:;
}

static void _ZN8VARIABLED1Ev( struct $8VARIABLE* THIS$1 )
{
	label$300:;
	label$301:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	int64 TMP$616$1;
	struct $4PART* TMP$617$1;
	int64 TMP$618$1;
	struct $8VARIABLE* TMP$619$1;
	label$1457:;
	TMP$617$1 = (struct $4PART*)LPARTS$;
	TMP$616$1 = 0ll;
	label$1459:;
	_ZN4PARTC1Ev( TMP$617$1 );
	TMP$617$1 = (struct $4PART*)((uint8*)TMP$617$1 + 32ll);
	TMP$616$1 = TMP$616$1 + 1ll;
	if( TMP$616$1 != 126ll ) goto label$1459;
	TMP$619$1 = (struct $8VARIABLE*)VARIABLES$;
	TMP$618$1 = 0ll;
	label$1460:;
	_ZN8VARIABLEC1Ev( TMP$619$1 );
	TMP$619$1 = (struct $8VARIABLE*)((uint8*)TMP$619$1 + 40ll);
	TMP$618$1 = TMP$618$1 + 1ll;
	if( TMP$618$1 != 1025ll ) goto label$1460;
	label$1458:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	int64 TMP$620$1;
	struct $8VARIABLE* TMP$621$1;
	int64 TMP$622$1;
	struct $4PART* TMP$623$1;
	label$1462:;
	TMP$621$1 = (struct $8VARIABLE*)((uint8*)VARIABLES$ + 40960ll);
	TMP$620$1 = 0ll;
	label$1464:;
	_ZN8VARIABLED1Ev( TMP$621$1 );
	TMP$621$1 = (struct $8VARIABLE*)((uint8*)TMP$621$1 + -40ll);
	TMP$620$1 = TMP$620$1 + 1ll;
	if( TMP$620$1 != 1025ll ) goto label$1464;
	TMP$623$1 = (struct $4PART*)((uint8*)LPARTS$ + 4000ll);
	TMP$622$1 = 0ll;
	label$1465:;
	_ZN4PARTD1Ev( TMP$623$1 );
	TMP$623$1 = (struct $4PART*)((uint8*)TMP$623$1 + -32ll);
	TMP$622$1 = TMP$622$1 + 1ll;
	if( TMP$622$1 != 126ll ) goto label$1465;
	label$1463:;
}
