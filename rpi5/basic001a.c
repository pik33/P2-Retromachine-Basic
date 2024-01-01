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
struct $8C_RESULT {
	int64 VARS;
	int64 ERR_;
};
__FB_STATIC_ASSERT( sizeof( struct $8C_RESULT ) == 16 );
struct $8VARIABLE {
	FBSTRING NAME;
	union $7ARESULT VALUE;
	uint32 VARTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $8VARIABLE ) == 40 );
typedef void (*tmp$168)( void );
struct $8FBARRAY1IhE {
	uint8* DATA;
	uint8* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IhE ) == 72 );
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
struct $8FBARRAY1IfE {
	float* DATA;
	float* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IfE ) == 72 );
struct $9FOR_ENTRY {
	uint32 LINEPTR;
	uint32 CMDPTR;
	int64 VARNUM;
	int64 STEPVAL;
	int64 ENDVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $9FOR_ENTRY ) == 32 );
struct $11GOSUB_ENTRY {
	uint32 LINEPTR;
	uint32 CMDPTR;
};
__FB_STATIC_ASSERT( sizeof( struct $11GOSUB_ENTRY ) == 8 );
struct $8FBARRAY1I8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I8FBSTRINGE ) == 72 );
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
#define fb_D2I( value ) ((int32)__builtin_nearbyint( value ))
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
void fb_ArrayDestructStr( struct $7FBARRAYIvE* );
int32 fb_GetX( void );
int32 fb_ErrorGetNum( void );
int32 fb_ErrorSetNum( int32 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FilePutLarge( int32, int64, void*, uint64 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileGetArrayLarge( int32, int64, struct $7FBARRAYIvE* );
int32 fb_FileGetLargeIOB( int32, int64, void*, uint64, uint64* );
int32 fb_FileLineInput( int32, void*, int64, int32 );
int32 fb_FileKill( FBSTRING* );
double pow( double, double );
void* malloc( uint64 );
void free( void* );
void* memset( void*, int32, uint64 );
void fb_PrintVoid( int32, int32 );
void fb_PrintUInt( int32, uint32, int32 );
void fb_PrintLongint( int32, int64, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatByref( void*, int64, void*, int64, int32 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_FloatToStr( float );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
FBSTRING* fb_CHR( int32, ... );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
int64 fb_StrInstrRev( FBSTRING*, FBSTRING*, int64 );
FBSTRING* fb_TRIM( FBSTRING* );
double fb_VAL( FBSTRING* );
int32 fb_VALINT( FBSTRING* );
FBSTRING* fb_HEXEx_i( uint32, int32 );
FBSTRING* fb_BINEx_i( uint32, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
void fb_Init( int32, uint8**, int32 );
int32 fb_SleepEx( int32, int32 );
FBSTRING* fb_DirNext( int32* );
FBSTRING* fb_Dir( FBSTRING*, int32, int32* );
typedef void (*tmp$1)( void* );
void* fb_ThreadCreate( tmp$1, void*, int64 );
int32 fb_MkDir( FBSTRING* );
int32 fb_ChDir( FBSTRING* );
int32 putchar( int32 );
void* memmove( void*, void*, uint64 );
double round( double );
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
void FCIRCLE( int64, int64, int64, uint8 );
void ECIRCLE( int64, int64, int64, uint8 );
void FRAME( int64, int64, int64, int64, uint8 );
void BOX( int64, int64, int64, int64, uint8 );
void PUTCHARXYCF( int64, int64, uint8, uint8 );
void PUTCHARXYCG( int64, int64, uint8, uint8, uint8 );
void PUTCHARXYCGF( int64, int64, uint8, uint8, uint8 );
void OUTTEXTXYCG( int64, int64, FBSTRING*, uint8, uint8 );
void FILLPUSH( int64 );
int64 FILLPOP( void );
void FILL( int64, int64, int64, int64 );
void SCROLLUP2( void );
void SCROLLDOWN( int64 );
void SETSPRITEPOS( int64, int64, int64 );
void SETSPRITESIZE( int64, int64, int64 );
void SETSPRITEPTR( int64, uint32 );
void SETCURSORPOS( int64, int64 );
void POSITION( int64, int64 );
int64 GETCURSORX( void );
int64 GETCURSORY( void );
void SETCURSORX( int64 );
void SETCURSORY( int64 );
void SETCURSORSHAPE( int64 );
void SETCURSORCOLOR( uint8 );
void SETWRITECOLORS( uint8, uint8 );
void CLS1( uint8, uint8 );
void SETLEADINGSPACES( int64 );
void CRLF( void );
void PUTCHAR2( uint8 );
void WRITE1( FBSTRING* );
void WRITELN( FBSTRING* );
void SETFONTFAMILY( int64 );
void TRANSLATE_SCREEN( void );
void SPRITE1( void );
uint8 SCANTOCHAR( uint32 );
void SDLTHREAD( void* );
static void _ZN4PARTaSERKS_( struct $4PART*, struct $4PART* );
static void _ZN8VARIABLEaSERKS_( struct $8VARIABLE*, struct $8VARIABLE* );
void INTERPRET( void );
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
uint32 COMPILE_IMMEDIATE_ASSIGN( uint32 );
uint32 COMPILE_ASSIGN( uint32, uint32, uint32 );
int64 COMPILE_IMMEDIATE( uint32, uint32 );
int64 EXECUTE_LINE( int64 );
uint32 EXPR( void );
uint32 GETADDR( void );
void PSLPOKE( uint32, uint32 );
uint32 PSLPEEK( uint32 );
void PSDPOKE( uint32, uint16 );
uint16 PSDPEEK( uint32 );
void PSPOKE( uint32, uint8 );
uint8 PSPEEK( uint32 );
uint32 GET_KEY( void );
FBSTRING* EDIT( void );
void SAVE_LINE( void );
int64 INSERTLINE( uint32 );
void ADD_LINE_AT_END( int64 );
void COMPILE_NOTHING( void );
uint32 COMPILE_UNKNOWN( void );
uint32 COMPILE_FUN_1P( void );
uint32 COMPILE_FUN_2P( void );
uint32 COMPILE_FUN_3P( void );
uint32 COMPILE_FUN_4P( void );
struct $8C_RESULT COMPILE_FUN_VARP( void );
struct $8C_RESULT COMPILE_READ( void );
struct $8C_RESULT COMPILE_INPUT( void );
uint32 COMPILE_ARRAY_ASSIGN( void );
uint32 COMPILE_PRINT( void );
uint32 COMPILE_IF( uint32 );
uint32 COMPILE_ELSE( uint32 );
uint32 COMPILE_DIM( void );
uint32 COMPILE_FOR( void );
uint32 COMPILE_NEXT( void );
uint32 COMPILE_GOTO( void );
uint32 COMPILE_GOSUB( void );
uint32 COMPILE_ON( void );
uint32 GETFUN( int64 );
uint32 GETVAR( int64 );
uint32 GETVALUE( void );
uint32 MULDIV( void );
uint32 ADDSUB( void );
struct $11EXPR_RESULT POP( void );
void PUSH( struct $11EXPR_RESULT* );
FBSTRING* CONVERTSTRING( uint32 );
int64 CONVERTTOINT( struct $11EXPR_RESULT* );
float CONVERTTOFLOAT( struct $11EXPR_RESULT* );
void DO_LOAD( int64 );
void DO_FIND_GOTO( void );
void DO_FAST_GOTO( void );
void DO_NEW( void );
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
static int64 VBLANK$ = 0ll;
static uint8 FONTS$[12288];
static uint8 MYSZ$[1025];
static uint32 ATARIPALETTE$[256];
static struct $8FBARRAY1IjE tmp$178$ = { (uint32*)ATARIPALETTE$, (uint32*)ATARIPALETTE$, 1024ll, 4ll, 1ll, 49ll, { { 256ll, 0ll, 255ll } } };
static uint32 KEYQ$[257];
static int64 KEYQS$ = 0ll;
static int64 KEYQE$ = 0ll;
static uint8 KEYS$[512] = { (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)97u, (uint8)65u, (uint8)23u, (uint8)14u, (uint8)98u, (uint8)66u, (uint8)0u, (uint8)0u, (uint8)99u, (uint8)67u, (uint8)25u, (uint8)16u, (uint8)100u, (uint8)68u, (uint8)0u, (uint8)0u, (uint8)101u, (uint8)69u, (uint8)24u, (uint8)15u, (uint8)102u, (uint8)70u, (uint8)0u, (uint8)0u, (uint8)103u, (uint8)71u, (uint8)0u, (uint8)0u, (uint8)104u, (uint8)72u, (uint8)0u, (uint8)0u, (uint8)105u, (uint8)73u, (uint8)0u, (uint8)0u, (uint8)106u, (uint8)74u, (uint8)0u, (uint8)0u, (uint8)107u, (uint8)75u, (uint8)0u, (uint8)0u, (uint8)108u, (uint8)76u, (uint8)31u, (uint8)22u, (uint8)109u, (uint8)77u, (uint8)0u, (uint8)0u, (uint8)110u, (uint8)78u, (uint8)26u, (uint8)17u, (uint8)111u, (uint8)79u, (uint8)30u, (uint8)21u, (uint8)112u, (uint8)80u, (uint8)0u, (uint8)0u, (uint8)113u, (uint8)81u, (uint8)0u, (uint8)0u, (uint8)114u, (uint8)82u, (uint8)0u, (uint8)0u, (uint8)115u, (uint8)83u, (uint8)27u, (uint8)18u, (uint8)116u, (uint8)84u, (uint8)0u, (uint8)0u, (uint8)117u, (uint8)85u, (uint8)0u, (uint8)0u, (uint8)118u, (uint8)86u, (uint8)0u, (uint8)0u, (uint8)119u, (uint8)87u, (uint8)0u, (uint8)0u, (uint8)120u, (uint8)88u, (uint8)28u, (uint8)19u, (uint8)121u, (uint8)89u, (uint8)0u, (uint8)0u, (uint8)122u, (uint8)90u, (uint8)29u, (uint8)20u, (uint8)49u, (uint8)33u, (uint8)4u, (uint8)0u, (uint8)50u, (uint8)64u, (uint8)5u, (uint8)0u, (uint8)51u, (uint8)35u, (uint8)6u, (uint8)0u, (uint8)52u, (uint8)36u, (uint8)7u, (uint8)0u, (uint8)53u, (uint8)37u, (uint8)8u, (uint8)0u, (uint8)54u, (uint8)94u, (uint8)9u, (uint8)0u, (uint8)55u, (uint8)38u, (uint8)10u, (uint8)0u, (uint8)56u, (uint8)42u, (uint8)11u, (uint8)0u, (uint8)57u, (uint8)40u, (uint8)12u, (uint8)0u, (uint8)48u, (uint8)41u, (uint8)13u, (uint8)0u, (uint8)141u, (uint8)141u, (uint8)0u, (uint8)0u, (uint8)155u, (uint8)155u, (uint8)0u, (uint8)0u, (uint8)136u, (uint8)136u, (uint8)0u, (uint8)0u, (uint8)137u, (uint8)137u, (uint8)0u, (uint8)0u, (uint8)32u, (uint8)32u, (uint8)0u, (uint8)0u, (uint8)45u, (uint8)95u, (uint8)0u, (uint8)0u, (uint8)61u, (uint8)43u, (uint8)0u, (uint8)0u, (uint8)91u, (uint8)123u, (uint8)0u, (uint8)0u, (uint8)93u, (uint8)125u, (uint8)0u, (uint8)0u, (uint8)92u, (uint8)124u, (uint8)0u, (uint8)0u, (uint8)35u, (uint8)126u, (uint8)0u, (uint8)0u, (uint8)59u, (uint8)58u, (uint8)0u, (uint8)0u, (uint8)39u, (uint8)34u, (uint8)0u, (uint8)0u, (uint8)96u, (uint8)126u, (uint8)3u, (uint8)0u, (uint8)44u, (uint8)60u, (uint8)0u, (uint8)0u, (uint8)46u, (uint8)62u, (uint8)0u, (uint8)0u, (uint8)47u, (uint8)63u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)186u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)187u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)188u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)189u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)190u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)191u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)192u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)193u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)194u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)195u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)196u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)197u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)198u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)199u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)200u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)201u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)202u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)203u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)127u, (uint8)127u, (uint8)0u, (uint8)0u, (uint8)204u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)205u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)206u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)207u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)208u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)209u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)47u, (uint8)47u, (uint8)0u, (uint8)0u, (uint8)42u, (uint8)42u, (uint8)0u, (uint8)0u, (uint8)45u, (uint8)45u, (uint8)0u, (uint8)0u, (uint8)43u, (uint8)43u, (uint8)0u, (uint8)0u, (uint8)141u, (uint8)141u, (uint8)0u, (uint8)0u, (uint8)49u, (uint8)49u, (uint8)0u, (uint8)0u, (uint8)50u, (uint8)50u, (uint8)0u, (uint8)0u, (uint8)51u, (uint8)51u, (uint8)0u, (uint8)0u, (uint8)52u, (uint8)52u, (uint8)0u, (uint8)0u, (uint8)53u, (uint8)53u, (uint8)0u, (uint8)0u, (uint8)54u, (uint8)54u, (uint8)0u, (uint8)0u, (uint8)55u, (uint8)55u, (uint8)0u, (uint8)0u, (uint8)56u, (uint8)56u, (uint8)0u, (uint8)0u, (uint8)57u, (uint8)57u, (uint8)0u, (uint8)0u, (uint8)48u, (uint8)48u, (uint8)0u, (uint8)0u, (uint8)46u, (uint8)127u, (uint8)0u, (uint8)0u, (uint8)92u, (uint8)124u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)61u, (uint8)61u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u };
static uint16 ENVBUF$[8][256];
static uint8 ENVBUF8$[8][513];
static float NOTETABLE$[12];
static int64 NOTEPERIODS$[12];
static struct $4PART LPARTS$[126];
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
static struct $9FOR_ENTRY FORTABLE$[65];
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

void SCROLLDOWN( int64 START$1 )
{
	label$161:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	memmove( (void*)((uint8*)((uint8*)&MACHINE$ + ((int64)BUFPTR$ + (START$1 << (14ll & 63ll)))) + 20480ll), (void*)((uint8*)((uint8*)&MACHINE$ + ((int64)BUFPTR$ + (START$1 << (4ll & 63ll)))) + 4ll), (uint64)((-START$1 << (10ll & 63ll)) + 593920ll) );
	memmove( (void*)((uint8*)((uint8*)&MACHINE$ + ((int64)TEXTBUFPTR$ + (START$1 << (7ll & 63ll)))) + 128ll), (void*)((uint8*)&MACHINE$ + ((int64)TEXTBUFPTR$ + (START$1 << (7ll & 63ll)))), (uint64)((-START$1 << (7ll & 63ll)) + 4608ll) );
	{
		I$1 = (START$1 << (4ll & 63ll)) + 4ll;
		int64 TMP$185$2;
		TMP$185$2 = (START$1 << (4ll & 63ll)) + 19ll;
		goto label$163;
		label$166:;
		{
			FASTLINE( 0ll, 1023ll, I$1, (uint8)WRITE_BACKGROUND$ );
		}
		label$164:;
		I$1 = I$1 + 1ll;
		label$163:;
		if( I$1 <= TMP$185$2 ) goto label$166;
		label$165:;
	}
	{
		I$1 = 0ll;
		label$170:;
		{
			*(uint8*)((uint8*)&MACHINE$ + (((int64)TEXTBUFPTR$ + (START$1 << (7ll & 63ll))) + I$1)) = (uint8)32u;
		}
		label$168:;
		I$1 = I$1 + 1ll;
		label$167:;
		if( I$1 <= 127ll ) goto label$170;
		label$169:;
	}
	label$162:;
}

void SETSPRITEPOS( int64 S$1, int64 X$1, int64 Y$1 )
{
	label$171:;
	*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) = (uint32)X$1;
	*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 4ll) = (uint32)Y$1;
	label$172:;
}

void SETSPRITESIZE( int64 S$1, int64 W$1, int64 H$1 )
{
	label$173:;
	*(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 8ll) = W$1;
	*(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 16ll) = H$1;
	label$174:;
}

void SETSPRITEPTR( int64 S$1, uint32 SPTR$1 )
{
	label$175:;
	*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (S$1 << (5ll & 63ll))) + 24ll) = SPTR$1;
	label$176:;
}

void SETCURSORPOS( int64 X$1, int64 Y$1 )
{
	label$177:;
	CURSOR_X$ = X$1;
	CURSOR_Y$ = Y$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$178:;
}

void POSITION( int64 X$1, int64 Y$1 )
{
	label$179:;
	SETCURSORPOS( X$1, Y$1 );
	label$180:;
}

int64 GETCURSORX( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	fb$result$1 = CURSOR_X$;
	goto label$182;
	label$182:;
	return fb$result$1;
}

int64 GETCURSORY( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$183:;
	fb$result$1 = CURSOR_Y$;
	goto label$184;
	label$184:;
	return fb$result$1;
}

void SETCURSORX( int64 X$1 )
{
	label$185:;
	CURSOR_X$ = X$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$186:;
}

void SETCURSORY( int64 Y$1 )
{
	label$187:;
	CURSOR_Y$ = Y$1;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$188:;
}

void SETCURSORSHAPE( int64 SHAPE$1 )
{
	label$189:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSORSHAPE$ = SHAPE$1;
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

void SETCURSORCOLOR( uint8 ACOLOR$1 )
{
	label$199:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSORCOLOR$ = (int64)ACOLOR$1;
	{
		I$1 = 0ll;
		int64 TMP$187$2;
		TMP$187$2 = (CURSORSHAPE$ << (3ll & 63ll)) + -1ll;
		goto label$201;
		label$204:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$202:;
		I$1 = I$1 + 1ll;
		label$201:;
		if( I$1 <= TMP$187$2 ) goto label$204;
		label$203:;
	}
	{
		I$1 = CURSORSHAPE$ << (3ll & 63ll);
		goto label$205;
		label$208:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)CURSORCOLOR$;
		}
		label$206:;
		I$1 = I$1 + 1ll;
		label$205:;
		if( I$1 <= 127ll ) goto label$208;
		label$207:;
	}
	label$200:;
}

void INITCURSOR( uint8 ACOLOR$1 )
{
	label$209:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	CURSOR_X$ = 0ll;
	CURSOR_Y$ = 0ll;
	{
		I$1 = 0ll;
		label$214:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = (uint8)0u;
		}
		label$212:;
		I$1 = I$1 + 1ll;
		label$211:;
		if( I$1 <= 111ll ) goto label$214;
		label$213:;
	}
	{
		I$1 = 112ll;
		label$218:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)CURSORPTR$ + I$1)) = ACOLOR$1;
		}
		label$216:;
		I$1 = I$1 + 1ll;
		label$215:;
		if( I$1 <= 127ll ) goto label$218;
		label$217:;
	}
	SETSPRITEPTR( 17ll, CURSORPTR$ );
	SETSPRITESIZE( 17ll, 8ll, 16ll );
	SETSPRITEPOS( 17ll, 0ll, 0ll );
	CURSORSHAPE$ = 14ll;
	CURSORCOLOR$ = (int64)ACOLOR$1;
	label$210:;
}

void SETWRITECOLORS( uint8 FF$1, uint8 BB$1 )
{
	label$219:;
	WRITE_COLOR$ = (int64)FF$1;
	WRITE_BACKGROUND$ = (int64)BB$1;
	label$220:;
}

void CLS1( uint8 FC$1, uint8 BC$1 )
{
	label$221:;
	memset( (void*)((uint8*)&MACHINE$ + (int64)BUFPTR$), (int32)BC$1, 2073599ull );
	memset( (void*)((uint8*)&MACHINE$ + (int64)TEXTBUFPTR$), 32, (uint64)((int64)BUFPTR$ - (int64)TEXTBUFPTR$) );
	SETWRITECOLORS( FC$1, BC$1 );
	CURSOR_X$ = 0ll;
	CURSOR_Y$ = 0ll;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	SETCURSORCOLOR( FC$1 );
	label$222:;
}

void SETLEADINGSPACES( int64 AMOUNT$1 )
{
	label$223:;
	LEADING_SPACES$ = AMOUNT$1;
	label$224:;
}

void CRLF( void )
{
	label$225:;
	CURSOR_X$ = LEADING_SPACES$ << (1ll & 63ll);
	CURSOR_Y$ = CURSOR_Y$ + 1ll;
	if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$228;
	{
		SCROLLUP2(  );
		CURSOR_Y$ = ST_LINES$ + -1ll;
	}
	label$228:;
	label$227:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$226:;
}

void BKSP( void )
{
	FBSTRING TMP$188$1;
	label$229:;
	CURSOR_X$ = CURSOR_X$ + -1ll;
	if( CURSOR_X$ != -1ll ) goto label$232;
	{
		CURSOR_X$ = 255ll;
		CURSOR_Y$ = CURSOR_Y$ + -1ll;
		if( CURSOR_Y$ != -1ll ) goto label$234;
		{
			CURSOR_Y$ = 0ll;
			SCROLLUP2(  );
		}
		label$234:;
		label$233:;
	}
	label$232:;
	label$231:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), CURSOR_Y$ << (4ll & 63ll) );
	__builtin_memset( &TMP$188$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$188$1, -1ll, (void*)" ", 2ll, 0 );
	OUTTEXTXYCG( CURSOR_X$, CURSOR_Y$, &TMP$188$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
	fb_StrDelete( (FBSTRING*)&TMP$188$1 );
	label$230:;
}

void PUTCHAR1( uint8 ACHAR$1 )
{
	label$235:;
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
	if( (int64)ACHAR$1 != 10ll ) goto label$238;
	{
		CRLF(  );
		label$238:;
	}
	if( (int64)ACHAR$1 != 9ll ) goto label$240;
	{
		CURSOR_X$ = (CURSOR_X$ & 240ll) + 16ll;
		label$240:;
	}
	if( ((int64)-((int64)ACHAR$1 != 9ll) & (int64)-((int64)ACHAR$1 != 10ll)) == 0ll ) goto label$242;
	{
		PUTCHARXYCGF( CURSOR_X$, CURSOR_Y$, ACHAR$1, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
		*(uint8*)((uint8*)&MACHINE$ + fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) )) = ACHAR$1;
		CURSOR_X$ = CURSOR_X$ + 2ll;
	}
	label$242:;
	label$241:;
	if( CURSOR_X$ < 256ll ) goto label$244;
	{
		CURSOR_X$ = 0ll;
		CURSOR_Y$ = CURSOR_Y$ + 1ll;
		if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$246;
		{
			SCROLLUP2(  );
			CURSOR_Y$ = ST_LINES$ + -1ll;
		}
		label$246:;
		label$245:;
	}
	label$244:;
	label$243:;
	SETSPRITEPOS( 17ll, CURSOR_X$ << (2ll & 63ll), (CURSOR_Y$ << (4ll & 63ll)) + 4ll );
	label$236:;
}

void PUTCHAR2( uint8 ACHAR$1 )
{
	label$247:;
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
	if( CURSOR_X$ < 256ll ) goto label$250;
	{
		CURSOR_X$ = 0ll;
		CURSOR_Y$ = CURSOR_Y$ + 1ll;
		if( CURSOR_Y$ <= (ST_LINES$ + -1ll) ) goto label$252;
		{
			SCROLLUP2(  );
			CURSOR_Y$ = ST_LINES$ + -1ll;
		}
		label$252:;
		label$251:;
	}
	label$250:;
	label$249:;
	SETCURSORPOS( CURSOR_X$, CURSOR_Y$ );
	label$248:;
}

void WRITE1( FBSTRING* TEXT$1 )
{
	label$253:;
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
		int64 TMP$189$2;
		int64 vr$4 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$189$2 = vr$4;
		goto label$255;
		label$258:;
		{
			FBSTRING* vr$5 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$6 = fb_ASC( (FBSTRING*)vr$5, 1ll );
			PUTCHAR2( (uint8)vr$6 );
		}
		label$256:;
		III$1 = III$1 + 1ll;
		label$255:;
		if( III$1 <= TMP$189$2 ) goto label$258;
		label$257:;
	}
	label$254:;
}

void WRITELN( FBSTRING* TEXT$1 )
{
	label$259:;
	WRITE1( TEXT$1 );
	CRLF(  );
	label$260:;
}

void SETFONTFAMILY( int64 AFONTNUM$1 )
{
	label$261:;
	FONT_FAMILY$ = AFONTNUM$1;
	label$262:;
}

void WAITVBL( int64 AMOUNT$1 )
{
	label$263:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	{
		I$1 = 1ll;
		int64 TMP$190$2;
		TMP$190$2 = AMOUNT$1;
		goto label$265;
		label$268:;
		{
			label$269:;
			{
				fb_SleepEx( 1, 1 );
			}
			label$271:;
			if( VBLANK$ != 0ll ) goto label$269;
			label$270:;
			label$272:;
			{
				fb_SleepEx( 1, 1 );
			}
			label$274:;
			if( VBLANK$ != 1ll ) goto label$272;
			label$273:;
		}
		label$266:;
		I$1 = I$1 + 1ll;
		label$265:;
		if( I$1 <= TMP$190$2 ) goto label$268;
		label$267:;
	}
	label$264:;
}

void WAITVBLEND( int64 AMOUNT$1 )
{
	label$275:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	{
		I$1 = 1ll;
		int64 TMP$191$2;
		TMP$191$2 = AMOUNT$1;
		goto label$277;
		label$280:;
		{
			label$281:;
			{
				fb_SleepEx( 1, 1 );
			}
			label$283:;
			if( VBLANK$ != 0ll ) goto label$281;
			label$282:;
			label$284:;
			{
				fb_SleepEx( 1, 1 );
			}
			label$286:;
			if( VBLANK$ != 1ll ) goto label$284;
			label$285:;
		}
		label$278:;
		I$1 = I$1 + 1ll;
		label$277:;
		if( I$1 <= TMP$191$2 ) goto label$280;
		label$279:;
	}
	label$276:;
}

void TRANSLATE_SCREEN( void )
{
	label$287:;
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
	label$288:;
}

void SPRITE1( void )
{
	label$289:;
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
		int64 TMP$192$2;
		TMP$192$2 = -(fb_D2L( (double)(int64)FRAMES$ / 0x1.p+4 ) % 2ll) + 17ll;
		goto label$291;
		label$294:;
		{
			SX$1 = (int64)*(uint32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll)));
			SY$1 = (int64)*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 4ll);
			SW$1 = *(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 8ll);
			SH$1 = *(int64*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 16ll);
			SPT$1 = (int64)*(uint32*)(((int64)(struct $11SPRITE_TYPE*)SPRITES$ + (I$1 << (5ll & 63ll))) + 24ll);
			SO$1 = ((SY$1 * 5120ll) + (SX$1 << (2ll & 63ll))) + 307712ll;
			if( SX$1 < 1024ll ) goto label$296;
			{
				goto label$297;
				label$296:;
			}
			if( SY$1 < 600ll ) goto label$299;
			{
				goto label$297;
				label$299:;
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
			label$297:;
		}
		label$292:;
		I$1 = I$1 + 1ll;
		label$291:;
		if( I$1 <= TMP$192$2 ) goto label$294;
		label$293:;
	}
	label$290:;
}

uint8 SCANTOCHAR( uint32 KEYCODE$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$300:;
	int64 MODIFIER$1;
	MODIFIER$1 = (int64)KEYCODE$1 >> (16ll & 63ll);
	KEYCODE$1 = (uint32)((int64)KEYCODE$1 & 255ll);
	if( (int64)KEYCODE$1 >= 128ll ) goto label$303;
	{
		{
			if( MODIFIER$1 == 0ll ) goto label$306;
			label$307:;
			if( MODIFIER$1 != 8193ll ) goto label$305;
			label$306:;
			{
				fb$result$1 = *(uint8*)((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll)));
				goto label$301;
			}
			goto label$304;
			label$305:;
			if( MODIFIER$1 == 1ll ) goto label$309;
			label$310:;
			if( MODIFIER$1 == 2ll ) goto label$309;
			label$311:;
			if( MODIFIER$1 != 8192ll ) goto label$308;
			label$309:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 1ll);
				goto label$301;
			}
			goto label$304;
			label$308:;
			if( MODIFIER$1 != 512ll ) goto label$312;
			label$313:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 2ll);
				goto label$301;
			}
			goto label$304;
			label$312:;
			if( MODIFIER$1 == 513ll ) goto label$315;
			label$316:;
			if( MODIFIER$1 == 514ll ) goto label$315;
			label$317:;
			if( MODIFIER$1 != 8704ll ) goto label$314;
			label$315:;
			{
				fb$result$1 = *(uint8*)(((int64)(uint8*)KEYS$ + (((int64)KEYCODE$1 & 127ll) << (2ll & 63ll))) + 3ll);
				goto label$301;
			}
			label$314:;
			label$304:;
		}
	}
	goto label$302;
	label$303:;
	{
		fb$result$1 = (uint8)0u;
		goto label$301;
	}
	label$302:;
	label$301:;
	return fb$result$1;
}

void SDLTHREAD( void* QQ$1 )
{
	label$318:;
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
		label$323:;
		{
			{
				J$1 = 0u;
				label$327:;
				{
					*(uint32*)((int64)(uint32*)T2$ + ((((int64)I$1 << (10ll & 63ll)) + (int64)J$1) << (2ll & 63ll))) = 0u;
				}
				label$325:;
				J$1 = (uint32)((int64)J$1 + 1ll);
				label$324:;
				if( (int64)J$1 <= 1023ll ) goto label$327;
				label$326:;
			}
		}
		label$321:;
		I$1 = (uint32)((int64)I$1 + 1ll);
		label$320:;
		if( (int64)I$1 <= 599ll ) goto label$323;
		label$322:;
	}
	label$328:;
	{
		UPDATED$ = 0ll;
		FRAMES$ = (uint32)((int64)FRAMES$ + 1ll);
		VBLANK$ = 0ll;
		TRANSLATE_SCREEN(  );
		SDL_GetMouseState( (int32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 512ll), (int32*)((int64)(struct $11SPRITE_TYPE*)SPRITES$ + 516ll) );
		SPRITE1(  );
		SDL_UpdateTexture( SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (void*)T2$, 5120 );
		VBLANK$ = 1ll;
		SDL_RenderClear( RENDERER$1 );
		SDL_RenderCopy( RENDERER$1, SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)0ull );
		SDL_RenderPresent( RENDERER$1 );
		union $9SDL_Event EVENT$2;
		__builtin_memset( &EVENT$2, 0, 56ll );
		label$331:;
		int32 vr$31 = SDL_PollEvent( &EVENT$2 );
		if( (int64)vr$31 == 0ll ) goto label$332;
		{
			{
				uint32 TMP$198$4;
				TMP$198$4 = *(uint32*)&EVENT$2;
				if( (int64)TMP$198$4 != 256ll ) goto label$334;
				label$335:;
				{
					goto label$329;
				}
				goto label$333;
				label$334:;
				if( (int64)TMP$198$4 != 768ll ) goto label$336;
				label$337:;
				{
					if( (int64)*(int32*)((uint8*)&EVENT$2 + 20ll) != 27ll ) goto label$339;
					{
						goto label$329;
					}
					goto label$338;
					label$339:;
					{
						int64 TMP$199$6;
						int64 TMP$200$6;
						int64 CH$6;
						CH$6 = (int64)*(int32*)((uint8*)&EVENT$2 + 16ll) + ((int64)*(uint16*)((uint8*)&EVENT$2 + 24ll) << (16ll & 63ll));
						if( (KEYQE$ - KEYQS$) == -1ll ) goto label$340;
						TMP$199$6 = (int64)-((KEYQE$ - KEYQS$) != 255ll);
						goto label$344;
						label$340:;
						TMP$199$6 = 0ll;
						label$344:;
						if( TMP$199$6 == 0ll ) goto label$341;
						TMP$200$6 = (int64)-(CH$6 > 0ll);
						goto label$345;
						label$341:;
						TMP$200$6 = 0ll;
						label$345:;
						if( TMP$200$6 == 0ll ) goto label$343;
						{
							*(uint32*)((int64)(uint32*)KEYQ$ + (KEYQE$ << (2ll & 63ll))) = (uint32)CH$6;
							KEYQE$ = (KEYQE$ + 1ll) % 256ll;
						}
						label$343:;
						label$342:;
					}
					label$338:;
				}
				label$336:;
				label$333:;
			}
		}
		goto label$331;
		label$332:;
	}
	label$330:;
	goto label$328;
	label$329:;
	SDL_DestroyTexture( SDLTEXTURE$1 );
	SDL_DestroyRenderer( RENDERER$1 );
	SDL_DestroyWindow( WIN$1 );
	SDL_Quit(  );
	A$ = 0ll;
	label$319:;
}

uint32 GET_KEY( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$376:;
	uint32 R$1;
	__builtin_memset( &R$1, 0, 4ll );
	if( KEYQE$ == KEYQS$ ) goto label$379;
	{
		R$1 = *(uint32*)((int64)(uint32*)KEYQ$ + (KEYQS$ << (2ll & 63ll)));
		KEYQS$ = (KEYQS$ + 1ll) % 256ll;
		fb$result$1 = R$1;
		goto label$377;
	}
	goto label$378;
	label$379:;
	{
		fb$result$1 = 0u;
		goto label$377;
	}
	label$378:;
	label$377:;
	return fb$result$1;
}

FBSTRING* EDIT( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$380:;
	uint32 KEY$1;
	__builtin_memset( &KEY$1, 0, 4ll );
	uint32 KEY2$1;
	__builtin_memset( &KEY2$1, 0, 4ll );
	uint32 KEY3$1;
	__builtin_memset( &KEY3$1, 0, 4ll );
	uint32 KEY4$1;
	__builtin_memset( &KEY4$1, 0, 4ll );
	uint32 RPT$1;
	__builtin_memset( &RPT$1, 0, 4ll );
	uint32 RPTCNT$1;
	__builtin_memset( &RPTCNT$1, 0, 4ll );
	uint32 CH$1;
	__builtin_memset( &CH$1, 0, 4ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	FBSTRING LINE_$1;
	__builtin_memset( &LINE_$1, 0, 24ll );
	RPT$1 = 0u;
	RPTCNT$1 = 0u;
	KEY$1 = 0u;
	KEY2$1 = 0u;
	KEY3$1 = 0u;
	KEY4$1 = 0u;
	label$382:;
	{
		int64 TMP$244$2;
		int64 TMP$245$2;
		uint32 vr$11 = GET_KEY(  );
		KEY3$1 = vr$11;
		if( (int64)KEY3$1 == 0ll ) goto label$386;
		{
			uint8 vr$13 = SCANTOCHAR( KEY3$1 );
			KEY4$1 = (uint32)vr$13;
		}
		label$386:;
		label$385:;
		if( (int64)KEY4$1 <= 0ll ) goto label$387;
		TMP$244$2 = (int64)-((int64)KEY4$1 < 127ll);
		goto label$469;
		label$387:;
		TMP$244$2 = 0ll;
		label$469:;
		if( TMP$244$2 == 0ll ) goto label$388;
		TMP$245$2 = (int64)-(CURSOR_X$ < 254ll);
		goto label$470;
		label$388:;
		TMP$245$2 = 0ll;
		label$470:;
		if( TMP$245$2 == 0ll ) goto label$390;
		{
			if( DO_INSERT$ == 0ll ) goto label$392;
			{
				{
					I$1 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
					int64 TMP$246$5;
					TMP$246$5 = fb_D2L( ((double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1)) + 0x1.p+0 );
					goto label$393;
					label$396:;
					{
						uint8 vr$34 = PSPEEK( (uint32)(I$1 + -1ll) );
						PSPOKE( (uint32)I$1, vr$34 );
					}
					label$394:;
					I$1 = I$1 + -1ll;
					label$393:;
					if( I$1 >= TMP$246$5 ) goto label$396;
					label$395:;
				}
				J$1 = 0ll;
				{
					I$1 = fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) );
					int64 TMP$247$5;
					TMP$247$5 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
					goto label$397;
					label$400:;
					{
						uint8 vr$52 = PSPEEK( (uint32)I$1 );
						PUTCHARXYCGF( CURSOR_X$ + (J$1 << (1ll & 63ll)), (CURSOR_Y$ << (4ll & 63ll)) + 4ll, vr$52, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
						J$1 = J$1 + 1ll;
					}
					label$398:;
					I$1 = I$1 + 1ll;
					label$397:;
					if( I$1 <= TMP$247$5 ) goto label$400;
					label$399:;
				}
			}
			label$392:;
			label$391:;
			putchar( (int32)KEY4$1 );
		}
		label$390:;
		label$389:;
		if( (int64)KEY4$1 != 141ll ) goto label$402;
		{
			int64 TMP$248$3;
			fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)"", 1ll, 0 );
			{
				I$1 = EDITOR_SPACES$;
				goto label$403;
				label$406:;
				{
					uint8 vr$66 = PSPEEK( (uint32)(((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + I$1) );
					CH$1 = (uint32)vr$66;
					FBSTRING* vr$69 = fb_CHR( 1, (int64)CH$1 );
					fb_StrConcatAssign( (void*)&LINE_$1, -1ll, (void*)vr$69, -1ll, 0 );
				}
				label$404:;
				I$1 = I$1 + 1ll;
				label$403:;
				if( I$1 <= 127ll ) goto label$406;
				label$405:;
			}
			if( DO_INSERT$ == 0ll ) goto label$407;
			TMP$248$3 = (int64)-(CURSOR_Y$ < 35ll);
			goto label$471;
			label$407:;
			TMP$248$3 = 0ll;
			label$471:;
			if( TMP$248$3 == 0ll ) goto label$409;
			{
				SCROLLDOWN( CURSOR_Y$ + 1ll );
				label$409:;
			}
			CRLF(  );
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&LINE_$1, -1ll, 0 );
			fb_StrDelete( (FBSTRING*)&LINE_$1 );
			goto label$381;
		}
		label$402:;
		label$401:;
		KEY4$1 = (uint32)((int64)KEY3$1 & 255ll);
		if( (int64)KEY4$1 != 77ll ) goto label$411;
		{
			I$1 = 127ll;
			label$412:;
			{
				uint8 vr$86 = PSPEEK( (uint32)(((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + I$1) );
				if( (int64)vr$86 == 32ll ) goto label$416;
				{
					if( I$1 >= 127ll ) goto label$418;
					{
						SETCURSORX( (I$1 << (1ll & 63ll)) + 2ll );
					}
					goto label$417;
					label$418:;
					{
						SETCURSORX( 254ll );
						label$417:;
					}
					goto label$413;
				}
				label$416:;
				label$415:;
				I$1 = I$1 + -1ll;
			}
			label$414:;
			if( I$1 != EDITOR_SPACES$ ) goto label$412;
			label$413:;
			if( I$1 != EDITOR_SPACES$ ) goto label$420;
			{
				SETCURSORX( EDITOR_SPACES$ << (1ll & 63ll) );
				label$420:;
			}
			if( (int64)KEY4$1 != 74ll ) goto label$422;
			{
				SETCURSORX( EDITOR_SPACES$ << (1ll & 63ll) );
				label$422:;
			}
			if( (int64)KEY4$1 != 75ll ) goto label$424;
			{
				SETCURSORY( 0ll );
				label$424:;
			}
			if( (int64)KEY4$1 != 78ll ) goto label$426;
			{
				SETCURSORY( 36ll );
				label$426:;
			}
			if( (int64)KEY4$1 != 76ll ) goto label$428;
			{
				{
					I$1 = fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) );
					int64 TMP$249$5;
					TMP$249$5 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
					goto label$429;
					label$432:;
					{
						uint8 vr$111 = PSPEEK( (uint32)(I$1 + 1ll) );
						PSPOKE( (uint32)I$1, vr$111 );
					}
					label$430:;
					I$1 = I$1 + 1ll;
					label$429:;
					if( I$1 <= TMP$249$5 ) goto label$432;
					label$431:;
				}
				PSPOKE( (uint32)(((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll), (uint8)32u );
				J$1 = 0ll;
				{
					I$1 = fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) );
					int64 TMP$250$5;
					TMP$250$5 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
					goto label$433;
					label$436:;
					{
						uint8 vr$134 = PSPEEK( (uint32)I$1 );
						PUTCHARXYCGF( CURSOR_X$ + (J$1 << (1ll & 63ll)), (CURSOR_Y$ << (4ll & 63ll)) + 4ll, vr$134, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
						J$1 = J$1 + 1ll;
					}
					label$434:;
					I$1 = I$1 + 1ll;
					label$433:;
					if( I$1 <= TMP$250$5 ) goto label$436;
					label$435:;
				}
			}
			label$428:;
			label$427:;
			if( (int64)KEY4$1 != 42ll ) goto label$438;
			{
				if( CURSOR_X$ <= (EDITOR_SPACES$ << (1ll & 63ll)) ) goto label$440;
				{
					POSITION( CURSOR_X$ + -2ll, CURSOR_Y$ );
					{
						I$1 = fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) );
						int64 TMP$251$6;
						TMP$251$6 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
						goto label$441;
						label$444:;
						{
							uint8 vr$158 = PSPEEK( (uint32)(I$1 + 1ll) );
							PSPOKE( (uint32)I$1, vr$158 );
						}
						label$442:;
						I$1 = I$1 + 1ll;
						label$441:;
						if( I$1 <= TMP$251$6 ) goto label$444;
						label$443:;
					}
					PSPOKE( (uint32)(((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll), (uint8)32u );
					J$1 = 0ll;
					{
						I$1 = fb_D2L( (double)((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + ((double)CURSOR_X$ / 0x1.p+1) );
						int64 TMP$252$6;
						TMP$252$6 = ((int64)TEXTBUFPTR$ + (CURSOR_Y$ << (7ll & 63ll))) + 127ll;
						goto label$445;
						label$448:;
						{
							uint8 vr$181 = PSPEEK( (uint32)I$1 );
							PUTCHARXYCGF( CURSOR_X$ + (J$1 << (1ll & 63ll)), (CURSOR_Y$ << (4ll & 63ll)) + 4ll, vr$181, (uint8)WRITE_COLOR$, (uint8)WRITE_BACKGROUND$ );
							J$1 = J$1 + 1ll;
						}
						label$446:;
						I$1 = I$1 + 1ll;
						label$445:;
						if( I$1 <= TMP$252$6 ) goto label$448;
						label$447:;
					}
				}
				goto label$439;
				label$440:;
				{
					fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)"", 1ll, 0 );
					CURSOR_X$ = 4ll;
				}
				label$439:;
			}
			label$438:;
			label$437:;
			if( (int64)KEY4$1 != 82ll ) goto label$450;
			{
				int64 vr$190 = GETCURSORY(  );
				CY$ = vr$190 + -1ll;
				if( CY$ >= 0ll ) goto label$452;
				{
					CY$ = 0ll;
					label$452:;
				}
				SETCURSORY( CY$ );
			}
			label$450:;
			label$449:;
			if( (int64)KEY4$1 != 81ll ) goto label$454;
			{
				int64 vr$193 = GETCURSORY(  );
				CY$ = vr$193 + 1ll;
				if( CY$ <= 36ll ) goto label$456;
				{
					CY$ = 36ll;
					label$456:;
				}
				SETCURSORY( CY$ );
			}
			label$454:;
			label$453:;
			if( (int64)KEY4$1 != 80ll ) goto label$458;
			{
				int64 vr$196 = GETCURSORX(  );
				CX$ = vr$196 + -2ll;
				if( CX$ >= EDITOR_SPACES$ ) goto label$460;
				{
					CX$ = EDITOR_SPACES$;
					label$460:;
				}
				SETCURSORX( CX$ );
			}
			label$458:;
			label$457:;
			if( (int64)KEY4$1 != 79ll ) goto label$462;
			{
				int64 vr$199 = GETCURSORX(  );
				CX$ = vr$199 + 2ll;
				if( CX$ <= 254ll ) goto label$464;
				{
					CX$ = 254ll;
					label$464:;
				}
				SETCURSORX( CX$ );
			}
			label$462:;
			label$461:;
			if( (int64)KEY4$1 != 73ll ) goto label$466;
			{
				DO_INSERT$ = ~DO_INSERT$;
				if( DO_INSERT$ == 0ll ) goto label$468;
				{
					SETCURSORSHAPE( 14ll );
				}
				goto label$467;
				label$468:;
				{
					SETCURSORSHAPE( 0ll );
					label$467:;
				}
			}
			label$466:;
			label$465:;
			KEY3$1 = 0u;
		}
		label$411:;
		label$410:;
	}
	label$384:;
	goto label$382;
	label$383:;
	fb_StrDelete( (FBSTRING*)&LINE_$1 );
	label$381:;
	FBSTRING* vr$205 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$205;
}

void INTERPRET( void )
{
	int64 TMP$257$1;
	int64 TMP$258$1;
	int64 TMP$259$1;
	int64 TMP$260$1;
	int64 TMP$261$1;
	int64 TMP$262$1;
	int64 TMP$264$1;
	int64 TMP$265$1;
	int64 TMP$292$1;
	int64 TMP$294$1;
	int64 TMP$298$1;
	int64 TMP$300$1;
	int64 TMP$305$1;
	int64 TMP$321$1;
	int64 TMP$323$1;
	int64 TMP$325$1;
	int64 TMP$327$1;
	int64 TMP$329$1;
	int64 TMP$331$1;
	int64 TMP$333$1;
	int64 TMP$335$1;
	int64 TMP$336$1;
	int64 TMP$337$1;
	int64 TMP$340$1;
	int64 TMP$341$1;
	int64 TMP$342$1;
	int64 TMP$344$1;
	int64 TMP$345$1;
	int64 TMP$346$1;
	int64 TMP$347$1;
	int64 TMP$350$1;
	int64 TMP$352$1;
	int64 TMP$355$1;
	int64 TMP$356$1;
	int64 TMP$357$1;
	int64 TMP$358$1;
	int64 TMP$359$1;
	int64 TMP$360$1;
	int64 TMP$361$1;
	int64 TMP$362$1;
	int64 TMP$363$1;
	int64 TMP$364$1;
	label$472:;
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
	struct $8FBARRAY1IlE tmp$253$1;
	*(int64**)&tmp$253$1 = (int64*)SEPARATORS$1;
	*(int64**)((uint8*)&tmp$253$1 + 8ll) = (int64*)SEPARATORS$1;
	*(int64*)((uint8*)&tmp$253$1 + 16ll) = 1008ll;
	*(int64*)((uint8*)&tmp$253$1 + 24ll) = 8ll;
	*(int64*)((uint8*)&tmp$253$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$253$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$253$1 + 48ll) = 126ll;
	*(int64*)((uint8*)&tmp$253$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$253$1 + 64ll) = 125ll;
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
	label$474:;
	{
		I$1 = 0ll;
		label$478:;
		{
			*(int64*)((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll))) = 0ll;
		}
		label$476:;
		I$1 = I$1 + 1ll;
		label$475:;
		if( I$1 <= 125ll ) goto label$478;
		label$477:;
	}
	{
		I$1 = 0ll;
		label$482:;
		{
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"", 1ll, 0 );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 0ll;
		}
		label$480:;
		I$1 = I$1 + 1ll;
		label$479:;
		if( I$1 <= 125ll ) goto label$482;
		label$481:;
	}
	FBSTRING* vr$34 = fb_TRIM( (FBSTRING*)&LINE_$ );
	fb_StrAssign( (void*)&LINE_$, -1ll, (void*)vr$34, -1ll, 0 );
	fb_StrAssign( (void*)&D_$1, -1ll, (void*)"", 1ll, 0 );
	int64 vr$36 = fb_StrLen( (void*)&LINE_$, -1ll );
	L$1 = vr$36;
	if( L$1 != 0ll ) goto label$484;
	{
		goto label$485;
		label$484:;
	}
	D$1 = 0ll;
	{
		I$1 = 1ll;
		int64 TMP$254$2;
		int64 vr$37 = fb_StrLen( (void*)&LINE_$, -1ll );
		TMP$254$2 = vr$37;
		goto label$486;
		label$489:;
		{
			int64 TMP$255$3;
			int64 TMP$256$3;
			FBSTRING* vr$38 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
			int32 vr$39 = fb_StrCompare( (void*)vr$38, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$39 != 0ll ) goto label$490;
			TMP$255$3 = (int64)-(D$1 == 0ll);
			goto label$784;
			label$490:;
			TMP$255$3 = 0ll;
			label$784:;
			if( TMP$255$3 == 0ll ) goto label$492;
			{
				D$1 = 1ll;
			}
			goto label$491;
			label$492:;
			FBSTRING* vr$42 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
			int32 vr$43 = fb_StrCompare( (void*)vr$42, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$43 != 0ll ) goto label$494;
			TMP$256$3 = (int64)-(D$1 == 1ll);
			goto label$785;
			label$494:;
			TMP$256$3 = 0ll;
			label$785:;
			if( TMP$256$3 == 0ll ) goto label$493;
			{
				D$1 = 0ll;
			}
			label$493:;
			label$491:;
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = D$1;
		}
		label$487:;
		I$1 = I$1 + 1ll;
		label$486:;
		if( I$1 <= TMP$254$2 ) goto label$489;
		label$488:;
	}
	I$1 = 1ll;
	label$495:;
	FBSTRING* vr$48 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
	int32 vr$49 = fb_StrCompare( (void*)vr$48, -1ll, (void*)":", 2ll );
	if( (int64)vr$49 != 0ll ) goto label$497;
	TMP$257$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) == 0ll);
	goto label$786;
	label$497:;
	TMP$257$1 = 0ll;
	label$786:;
	if( TMP$257$1 != 0ll ) goto label$498;
	TMP$258$1 = (int64)-(I$1 >= L$1);
	goto label$787;
	label$498:;
	TMP$258$1 = -1ll;
	label$787:;
	if( TMP$258$1 != 0ll ) goto label$496;
	{
		I$1 = I$1 + 1ll;
	}
	goto label$495;
	label$496:;
	if( I$1 >= L$1 ) goto label$500;
	{
		int64 vr$55 = fb_StrLen( (void*)&LINE_$, -1ll );
		FBSTRING* vr$57 = fb_RIGHT( (FBSTRING*)&LINE_$, vr$55 - I$1 );
		FBSTRING* vr$58 = fb_TRIM( (FBSTRING*)vr$57 );
		fb_StrAssign( (void*)&REST_$1, -1ll, (void*)vr$58, -1ll, 0 );
		FBSTRING* vr$61 = fb_LEFT( (FBSTRING*)&LINE_$, I$1 + -1ll );
		FBSTRING* vr$62 = fb_TRIM( (FBSTRING*)vr$61 );
		fb_StrAssign( (void*)&LINE_$, -1ll, (void*)vr$62, -1ll, 0 );
	}
	goto label$499;
	label$500:;
	{
		fb_StrAssign( (void*)&REST_$1, -1ll, (void*)"", 1ll, 0 );
		label$499:;
	}
	if( CONT$ != -1ll ) goto label$501;
	int32 vr$65 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$259$1 = (int64)-((int64)vr$65 != 0ll);
	goto label$788;
	label$501:;
	TMP$259$1 = 0ll;
	label$788:;
	if( TMP$259$1 == 0ll ) goto label$503;
	{
		CONT$ = 0ll;
		goto label$504;
		label$503:;
	}
	if( CONT$ != -1ll ) goto label$505;
	int32 vr$69 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$260$1 = (int64)-((int64)vr$69 == 0ll);
	goto label$789;
	label$505:;
	TMP$260$1 = 0ll;
	label$789:;
	if( TMP$260$1 == 0ll ) goto label$507;
	{
		CONT$ = 3ll;
		goto label$504;
		label$507:;
	}
	if( CONT$ != 4ll ) goto label$508;
	int32 vr$73 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$261$1 = (int64)-((int64)vr$73 != 0ll);
	goto label$790;
	label$508:;
	TMP$261$1 = 0ll;
	label$790:;
	if( TMP$261$1 == 0ll ) goto label$510;
	{
		CONT$ = 1ll;
		goto label$504;
		label$510:;
	}
	if( CONT$ != 4ll ) goto label$511;
	int32 vr$77 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
	TMP$262$1 = (int64)-((int64)vr$77 == 0ll);
	goto label$791;
	label$511:;
	TMP$262$1 = 0ll;
	label$791:;
	if( TMP$262$1 == 0ll ) goto label$513;
	{
		CONT$ = 2ll;
		goto label$504;
		label$513:;
	}
	label$504:;
	*(int64*)SEPARATORS$1 = 0ll;
	I$1 = 0ll;
	J$1 = 1ll;
	label$514:;
	{
		I$1 = I$1 + 1ll;
		FBSTRING* vr$81 = fb_StrMid( (FBSTRING*)&LINE_$, I$1, 1ll );
		fb_StrAssign( (void*)&C_$1, -1ll, (void*)vr$81, -1ll, 0 );
		uint32 vr$84 = ISSEPARATOR( &C_$1 );
		if( (int64)vr$84 == 0ll ) goto label$518;
		{
			*(int64*)((int64)(int64*)SEPARATORS$1 + (J$1 << (3ll & 63ll))) = I$1;
			J$1 = J$1 + 1ll;
			label$518:;
		}
	}
	label$516:;
	if( I$1 <= L$1 ) goto label$514;
	label$515:;
	*(int64*)((int64)(int64*)SEPARATORS$1 + (J$1 << (3ll & 63ll))) = I$1;
	K$1 = 0ll;
	{
		I$1 = 0ll;
		int64 TMP$263$2;
		TMP$263$2 = J$1 + -1ll;
		goto label$519;
		label$522:;
		{
			P1$1 = *(int64*)((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll)));
			P2$1 = *(int64*)(((int64)(int64*)SEPARATORS$1 + (I$1 << (3ll & 63ll))) + 8ll);
			if( P1$1 <= 0ll ) goto label$524;
			{
				FBSTRING* vr$92 = fb_StrMid( (FBSTRING*)&LINE_$, P1$1, 1ll );
				fb_StrAssign( (void*)&P_$1, -1ll, (void*)vr$92, -1ll, 0 );
				int32 vr$95 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"", 1ll );
				if( (int64)vr$95 == 0ll ) goto label$526;
				{
					fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
					K$1 = K$1 + 1ll;
					label$526:;
				}
				label$524:;
			}
			FBSTRING* vr$104 = fb_StrMid( (FBSTRING*)&LINE_$, P1$1 + 1ll, (P2$1 - P1$1) + -1ll );
			fb_StrAssign( (void*)&P_$1, -1ll, (void*)vr$104, -1ll, 0 );
			int32 vr$107 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"", 1ll );
			if( (int64)vr$107 == 0ll ) goto label$528;
			{
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
				K$1 = K$1 + 1ll;
				label$528:;
			}
		}
		label$520:;
		I$1 = I$1 + 1ll;
		label$519:;
		if( I$1 <= TMP$263$2 ) goto label$522;
		label$521:;
	}
	if( CONT$ == 0ll ) goto label$529;
	TMP$264$1 = (int64)-(CONT$ == 3ll);
	goto label$792;
	label$529:;
	TMP$264$1 = -1ll;
	label$792:;
	if( TMP$264$1 == 0ll ) goto label$530;
	int64 vr$116 = ISDEC( (FBSTRING*)LPARTS$ );
	TMP$265$1 = (int64)-(vr$116 == 0ll);
	goto label$793;
	label$530:;
	TMP$265$1 = 0ll;
	label$793:;
	if( TMP$265$1 == 0ll ) goto label$532;
	{
		{
			I$1 = K$1;
			goto label$533;
			label$536:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$534:;
			I$1 = I$1 + -1ll;
			label$533:;
			if( I$1 >= 1ll ) goto label$536;
			label$535:;
		}
		fb_StrAssign( (void*)LPARTS$, -1ll, (void*)"0", 2ll, 0 );
		K$1 = K$1 + 1ll;
		label$532:;
	}
	I$1 = 0ll;
	label$537:;
	{
		int64 TMP$267$2;
		int32 vr$127 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$127 == 0ll ) goto label$541;
		{
			I$1 = I$1 + 1ll;
			goto label$542;
			label$541:;
		}
		Q$1 = I$1;
		label$543:;
		{
			fb_StrAssign( (void*)&P_$1, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll, 0 );
			fb_StrConcatByref( (void*)((int64)(struct $4PART*)LPARTS$ + (Q$1 << (5ll & 63ll))), -1ll, (void*)&P_$1, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$266$4;
				TMP$266$4 = K$1;
				goto label$546;
				label$549:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$547:;
				J$1 = J$1 + 1ll;
				label$546:;
				if( J$1 <= TMP$266$4 ) goto label$549;
				label$548:;
			}
			K$1 = K$1 + -1ll;
		}
		label$545:;
		int32 vr$144 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$144 == 0ll ) goto label$550;
		TMP$267$2 = (int64)-(I$1 >= K$1);
		goto label$794;
		label$550:;
		TMP$267$2 = -1ll;
		label$794:;
		if( TMP$267$2 == 0ll ) goto label$543;
		label$544:;
		int32 vr$148 = fb_StrCompare( (void*)&P_$1, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$148 == 0ll ) goto label$552;
		{
			K$1 = K$1 + 1ll;
			I$1 = I$1 + 1ll;
			label$552:;
		}
		label$542:;
	}
	label$539:;
	if( I$1 < K$1 ) goto label$537;
	label$538:;
	I$1 = 0ll;
	label$553:;
	{
		int64 TMP$268$2;
		FBSTRING* vr$154 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 1ll );
		int32 vr$155 = fb_StrCompare( (void*)vr$154, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$155 != 0ll ) goto label$556;
		FBSTRING* vr$159 = fb_LEFT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), 1ll );
		int32 vr$160 = fb_StrCompare( (void*)vr$159, -1ll, (void*)"\x22", 2ll );
		TMP$268$2 = (int64)-((int64)vr$160 == 0ll);
		goto label$795;
		label$556:;
		TMP$268$2 = 0ll;
		label$795:;
		if( TMP$268$2 == 0ll ) goto label$558;
		{
			FBSTRING TMP$269$3;
			int64 vr$165 = fb_StrLen( (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll );
			FBSTRING* vr$169 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), vr$165 + -1ll );
			__builtin_memset( &TMP$269$3, 0, 24ll );
			FBSTRING* vr$174 = fb_StrConcat( &TMP$269$3, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$169, -1ll );
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$174, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$270$4;
				TMP$270$4 = K$1;
				goto label$559;
				label$562:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$560:;
				J$1 = J$1 + 1ll;
				label$559:;
				if( J$1 <= TMP$270$4 ) goto label$562;
				label$561:;
			}
			I$1 = I$1 + -1ll;
			K$1 = K$1 + -1ll;
		}
		label$558:;
		label$557:;
		I$1 = I$1 + 1ll;
	}
	label$555:;
	if( I$1 < K$1 ) goto label$553;
	label$554:;
	I$1 = 0ll;
	label$563:;
	{
		int64 TMP$271$2;
		int64 TMP$272$2;
		int64 TMP$273$2;
		int64 TMP$274$2;
		int64 TMP$275$2;
		int64 TMP$276$2;
		int64 TMP$277$2;
		int64 TMP$278$2;
		int64 TMP$279$2;
		int64 TMP$280$2;
		int64 TMP$281$2;
		int64 TMP$282$2;
		int64 TMP$283$2;
		fb_StrAssign( (void*)&S1_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, 0 );
		fb_StrAssign( (void*)&S2_$1, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 32ll), -1ll, 0 );
		int32 vr$193 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)">", 2ll );
		if( (int64)vr$193 == 0ll ) goto label$566;
		int32 vr$196 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"<", 2ll );
		TMP$271$2 = (int64)-((int64)vr$196 == 0ll);
		goto label$796;
		label$566:;
		TMP$271$2 = -1ll;
		label$796:;
		if( TMP$271$2 != 0ll ) goto label$567;
		int32 vr$200 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"+", 2ll );
		TMP$272$2 = (int64)-((int64)vr$200 == 0ll);
		goto label$797;
		label$567:;
		TMP$272$2 = -1ll;
		label$797:;
		if( TMP$272$2 != 0ll ) goto label$568;
		int32 vr$204 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"-", 2ll );
		TMP$273$2 = (int64)-((int64)vr$204 == 0ll);
		goto label$798;
		label$568:;
		TMP$273$2 = -1ll;
		label$798:;
		if( TMP$273$2 != 0ll ) goto label$569;
		int32 vr$208 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"*", 2ll );
		TMP$274$2 = (int64)-((int64)vr$208 == 0ll);
		goto label$799;
		label$569:;
		TMP$274$2 = -1ll;
		label$799:;
		if( TMP$274$2 != 0ll ) goto label$570;
		int32 vr$212 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"/", 2ll );
		TMP$275$2 = (int64)-((int64)vr$212 == 0ll);
		goto label$800;
		label$570:;
		TMP$275$2 = -1ll;
		label$800:;
		if( TMP$275$2 != 0ll ) goto label$571;
		int32 vr$216 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"^", 2ll );
		TMP$276$2 = (int64)-((int64)vr$216 == 0ll);
		goto label$801;
		label$571:;
		TMP$276$2 = -1ll;
		label$801:;
		if( TMP$276$2 == 0ll ) goto label$572;
		int32 vr$220 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"=", 2ll );
		TMP$277$2 = (int64)-((int64)vr$220 == 0ll);
		goto label$802;
		label$572:;
		TMP$277$2 = 0ll;
		label$802:;
		if( TMP$277$2 != 0ll ) goto label$574;
		int32 vr$224 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"+", 2ll );
		if( (int64)vr$224 != 0ll ) goto label$573;
		int32 vr$227 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"+", 2ll );
		TMP$278$2 = (int64)-((int64)vr$227 == 0ll);
		goto label$804;
		label$573:;
		TMP$278$2 = 0ll;
		label$804:;
		TMP$279$2 = (int64)-(TMP$278$2 != 0ll);
		goto label$803;
		label$574:;
		TMP$279$2 = -1ll;
		label$803:;
		if( TMP$279$2 != 0ll ) goto label$576;
		int32 vr$232 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"-", 2ll );
		if( (int64)vr$232 != 0ll ) goto label$575;
		int32 vr$235 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)"-", 2ll );
		TMP$280$2 = (int64)-((int64)vr$235 == 0ll);
		goto label$806;
		label$575:;
		TMP$280$2 = 0ll;
		label$806:;
		TMP$281$2 = (int64)-(TMP$280$2 != 0ll);
		goto label$805;
		label$576:;
		TMP$281$2 = -1ll;
		label$805:;
		if( TMP$281$2 != 0ll ) goto label$578;
		int32 vr$240 = fb_StrCompare( (void*)&S1_$1, -1ll, (void*)"<", 2ll );
		if( (int64)vr$240 != 0ll ) goto label$577;
		int32 vr$243 = fb_StrCompare( (void*)&S2_$1, -1ll, (void*)">", 2ll );
		TMP$282$2 = (int64)-((int64)vr$243 == 0ll);
		goto label$808;
		label$577:;
		TMP$282$2 = 0ll;
		label$808:;
		TMP$283$2 = (int64)-(TMP$282$2 != 0ll);
		goto label$807;
		label$578:;
		TMP$283$2 = -1ll;
		label$807:;
		if( TMP$283$2 == 0ll ) goto label$580;
		{
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)&S1_$1, -1ll, 0 );
			fb_StrConcatAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)&S2_$1, -1ll, 0 );
			{
				J$1 = I$1 + 1ll;
				int64 TMP$284$4;
				TMP$284$4 = K$1;
				goto label$581;
				label$584:;
				{
					_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
				}
				label$582:;
				J$1 = J$1 + 1ll;
				label$581:;
				if( J$1 <= TMP$284$4 ) goto label$584;
				label$583:;
			}
			I$1 = I$1 + -1ll;
			K$1 = K$1 + -1ll;
		}
		label$580:;
		label$579:;
		I$1 = I$1 + 1ll;
	}
	label$565:;
	if( I$1 < K$1 ) goto label$563;
	label$564:;
	{
		I$1 = 0ll;
		int64 TMP$285$2;
		TMP$285$2 = K$1;
		goto label$585;
		label$588:;
		{
			FBSTRING* vr$264 = fb_TRIM( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$264, -1ll, 0 );
		}
		label$586:;
		I$1 = I$1 + 1ll;
		label$585:;
		if( I$1 <= TMP$285$2 ) goto label$588;
		label$587:;
	}
	I$1 = 0ll;
	label$589:;
	{
		int64 vr$270 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
		if( vr$270 != 0ll ) goto label$593;
		{
			if( I$1 != (K$1 + -1ll) ) goto label$595;
			{
				K$1 = K$1 + -1ll;
				goto label$590;
				label$595:;
			}
			if( I$1 >= (K$1 + -1ll) ) goto label$597;
			{
				{
					J$1 = I$1;
					int64 TMP$286$5;
					TMP$286$5 = K$1 + -2ll;
					goto label$598;
					label$601:;
					{
						_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))) + 32ll) );
					}
					label$599:;
					J$1 = J$1 + 1ll;
					label$598:;
					if( J$1 <= TMP$286$5 ) goto label$601;
					label$600:;
				}
				K$1 = K$1 + -1ll;
				if( I$1 <= 0ll ) goto label$603;
				{
					I$1 = I$1 + -1ll;
					label$603:;
				}
			}
			label$597:;
			label$596:;
		}
		label$593:;
		label$592:;
		I$1 = I$1 + 1ll;
	}
	label$591:;
	if( I$1 <= (K$1 + -1ll) ) goto label$589;
	label$590:;
	{
		J$1 = 0ll;
		int64 TMP$287$2;
		TMP$287$2 = K$1 + -1ll;
		goto label$604;
		label$607:;
		{
			int64 TMP$288$3;
			FBSTRING* vr$287 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 1ll );
			int32 vr$288 = fb_StrCompare( (void*)vr$287, -1ll, (void*)"\x22", 2ll );
			if( (int64)vr$288 != 0ll ) goto label$608;
			FBSTRING* vr$292 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 1ll );
			int32 vr$293 = fb_StrCompare( (void*)vr$292, -1ll, (void*)"\x22", 2ll );
			TMP$288$3 = (int64)-((int64)vr$293 != 0ll);
			goto label$809;
			label$608:;
			TMP$288$3 = -1ll;
			label$809:;
			if( TMP$288$3 == 0ll ) goto label$610;
			{
				FBSTRING* vr$298 = fb_StrLcase2( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), 0 );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (J$1 << (5ll & 63ll))), -1ll, (void*)vr$298, -1ll, 0 );
				label$610:;
			}
		}
		label$605:;
		J$1 = J$1 + 1ll;
		label$604:;
		if( J$1 <= TMP$287$2 ) goto label$607;
		label$606:;
	}
	{
		I$1 = 0ll;
		int64 TMP$289$2;
		TMP$289$2 = K$1;
		goto label$611;
		label$614:;
		{
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = -1ll;
		}
		label$612:;
		I$1 = I$1 + 1ll;
		label$611:;
		if( I$1 <= TMP$289$2 ) goto label$614;
		label$613:;
	}
	int64 vr$305 = ISDEC( (FBSTRING*)LPARTS$ );
	if( vr$305 == 0ll ) goto label$616;
	{
		ADDPTR$1 = 1ll;
	}
	goto label$615;
	label$616:;
	{
		ADDPTR$1 = 0ll;
		label$615:;
	}
	int32 vr$307 = fb_StrCompare( (void*)LPARTS$, -1ll, (void*)"else", 5ll );
	if( (int64)vr$307 != 0ll ) goto label$618;
	{
		ADDPTR$1 = 1ll;
		label$618:;
	}
	I$1 = 0ll;
	label$619:;
	{
		int32 vr$311 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)"then", 5ll );
		if( (int64)vr$311 != 0ll ) goto label$623;
		{
			goto label$620;
			label$623:;
		}
		I$1 = I$1 + 1ll;
	}
	label$621:;
	if( I$1 <= K$1 ) goto label$619;
	label$620:;
	if( I$1 >= K$1 ) goto label$625;
	{
		ADDPTR$1 = I$1 + 1ll;
		label$625:;
	}
	fb_StrAssign( (void*)&LP_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, 0 );
	FBSTRING* vr$320 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), 1ll );
	int32 vr$321 = fb_StrCompare( (void*)vr$320, -1ll, (void*)"?", 2ll );
	if( (int64)vr$321 != 0ll ) goto label$626;
	int64 vr$325 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
	TMP$292$1 = (int64)-(vr$325 > 1ll);
	goto label$810;
	label$626:;
	TMP$292$1 = 0ll;
	label$810:;
	if( TMP$292$1 == 0ll ) goto label$628;
	{
		K$1 = K$1 + 1ll;
		{
			I$1 = K$1;
			int64 TMP$293$3;
			TMP$293$3 = ADDPTR$1 + 1ll;
			goto label$629;
			label$632:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$630:;
			I$1 = I$1 + -1ll;
			label$629:;
			if( I$1 >= TMP$293$3 ) goto label$632;
			label$631:;
		}
		int64 vr$336 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
		FBSTRING* vr$340 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), vr$336 + -1ll );
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$340, -1ll, 0 );
		fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, (void*)"?", 2ll, 0 );
		goto label$633;
	}
	label$628:;
	label$627:;
	FBSTRING* vr$345 = fb_StrAllocTempDescZEx( (uint8*)".", 1ll );
	int64 vr$348 = fb_StrInstr( 1ll, (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), (FBSTRING*)vr$345 );
	DOT$1 = vr$348;
	if( DOT$1 <= 0ll ) goto label$634;
	int64 vr$351 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
	TMP$294$1 = (int64)-(DOT$1 < vr$351);
	goto label$811;
	label$634:;
	TMP$294$1 = 0ll;
	label$811:;
	if( TMP$294$1 == 0ll ) goto label$636;
	{
		K$1 = K$1 + 1ll;
		{
			I$1 = K$1;
			int64 TMP$295$3;
			TMP$295$3 = ADDPTR$1 + 1ll;
			goto label$637;
			label$640:;
			{
				_ZN4PARTaSERKS_( (struct $4PART*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), (struct $4PART*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + -32ll) );
			}
			label$638:;
			I$1 = I$1 + -1ll;
			label$637:;
			if( I$1 >= TMP$295$3 ) goto label$640;
			label$639:;
		}
		int64 vr$362 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll );
		FBSTRING* vr$366 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), vr$362 - DOT$1 );
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$366, -1ll, 0 );
		FBSTRING* vr$371 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), DOT$1 );
		fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, (void*)vr$371, -1ll, 0 );
	}
	label$636:;
	label$635:;
	label$633:;
	fb_StrAssign( (void*)&LP_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))), -1ll, 0 );
	int32 vr$378 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mouse", 6ll );
	if( (int64)vr$378 == 0ll ) goto label$641;
	int32 vr$381 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cursor", 7ll );
	TMP$298$1 = (int64)-((int64)vr$381 == 0ll);
	goto label$812;
	label$641:;
	TMP$298$1 = -1ll;
	label$812:;
	if( TMP$298$1 != 0ll ) goto label$642;
	int32 vr$385 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"click", 6ll );
	TMP$300$1 = (int64)-((int64)vr$385 == 0ll);
	goto label$813;
	label$642:;
	TMP$300$1 = -1ll;
	label$813:;
	if( TMP$300$1 == 0ll ) goto label$644;
	{
		int32 vr$390 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"on", 3ll );
		if( (int64)vr$390 != 0ll ) goto label$646;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"1", 2ll, 0 );
			*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) = 512ll;
			label$646:;
		}
		int32 vr$396 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"off", 4ll );
		if( (int64)vr$396 != 0ll ) goto label$648;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"0", 2ll, 0 );
			*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) = 512ll;
			label$648:;
		}
	}
	label$644:;
	label$643:;
	int32 vr$401 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mode", 5ll );
	if( (int64)vr$401 == 0ll ) goto label$649;
	int32 vr$404 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"m.", 3ll );
	TMP$305$1 = (int64)-((int64)vr$404 == 0ll);
	goto label$814;
	label$649:;
	TMP$305$1 = -1ll;
	label$814:;
	if( TMP$305$1 == 0ll ) goto label$651;
	{
		int32 vr$409 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"atari", 6ll );
		if( (int64)vr$409 != 0ll ) goto label$653;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"0", 2ll, 0 );
			label$653:;
		}
		int32 vr$415 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_amber", 9ll );
		if( (int64)vr$415 != 0ll ) goto label$655;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"1", 2ll, 0 );
			label$655:;
		}
		int32 vr$421 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_green", 9ll );
		if( (int64)vr$421 != 0ll ) goto label$657;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"2", 2ll, 0 );
			label$657:;
		}
		int32 vr$427 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"pc_white", 9ll );
		if( (int64)vr$427 != 0ll ) goto label$659;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"3", 2ll, 0 );
			label$659:;
		}
		int32 vr$433 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"st", 3ll );
		if( (int64)vr$433 != 0ll ) goto label$661;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"4", 2ll, 0 );
			label$661:;
		}
		int32 vr$439 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"amiga", 6ll );
		if( (int64)vr$439 != 0ll ) goto label$663;
		{
			fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"5", 2ll, 0 );
			label$663:;
		}
	}
	label$651:;
	label$650:;
	{
		I$1 = 0ll;
		int64 TMP$312$2;
		TMP$312$2 = K$1 + -1ll;
		goto label$664;
		label$667:;
		{
			int64 TMP$313$3;
			int64 TMP$314$3;
			int64 TMP$315$3;
			int64 TMP$316$3;
			int64 TMP$317$3;
			int64 TMP$318$3;
			uint32 vr$446 = ISSEPARATOR( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$446;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$669;
			{
				goto label$670;
				label$669:;
			}
			uint8 vr$452 = ISOPERATOR( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$452;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$672;
			{
				goto label$670;
				label$672:;
			}
			uint8 vr$458 = ISASSIGN( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$458;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$674;
			{
				goto label$670;
				label$674:;
			}
			uint8 vr$464 = ISCOMMAND( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$464;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$676;
			{
				goto label$670;
				label$676:;
			}
			uint8 vr$470 = ISFUNCTION( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$470;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$678;
			{
				goto label$670;
				label$678:;
			}
			uint32 vr$476 = ISNOTENAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$476;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$680;
			{
				float vr$481 = GETNOTEVAL( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) );
				NOTE_VAL$1 = vr$481;
				FBSTRING* vr$482 = fb_FloatToStr( NOTE_VAL$1 );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$482, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$670;
			}
			label$680:;
			label$679:;
			uint32 vr$488 = ISCHANNEL( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = (int64)vr$488;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$682;
			{
				FBSTRING* vr$494 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 1ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$494, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 44ll;
				goto label$670;
				label$682:;
			}
			int64 vr$500 = ISCONSTANT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = vr$500;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$684;
			{
				FBSTRING* vr$504 = fb_LongintToStr( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$504, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$670;
				label$684:;
			}
			boolean vr$510 = ISNUM( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B1$1 = (int64)-vr$510;
			boolean vr$514 = ISINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B2$1 = (int64)-vr$514;
			int64 vr$518 = ISDEC( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			B3$1 = vr$518;
			if( B1$1 == 0ll ) goto label$685;
			TMP$313$3 = (int64)-(B2$1 != 0ll);
			goto label$815;
			label$685:;
			TMP$313$3 = 0ll;
			label$815:;
			if( TMP$313$3 == 0ll ) goto label$686;
			TMP$314$3 = (int64)-(B3$1 != 0ll);
			goto label$816;
			label$686:;
			TMP$314$3 = 0ll;
			label$816:;
			if( TMP$314$3 == 0ll ) goto label$688;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 512ll;
				goto label$670;
				label$688:;
			}
			if( B1$1 == 0ll ) goto label$689;
			TMP$315$3 = (int64)-(B2$1 != 0ll);
			goto label$817;
			label$689:;
			TMP$315$3 = 0ll;
			label$817:;
			if( TMP$315$3 == 0ll ) goto label$690;
			TMP$316$3 = (int64)-(~B3$1 != 0ll);
			goto label$818;
			label$690:;
			TMP$316$3 = 0ll;
			label$818:;
			if( TMP$316$3 == 0ll ) goto label$692;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$670;
				label$692:;
			}
			if( B1$1 == 0ll ) goto label$693;
			TMP$317$3 = (int64)-(~B2$1 != 0ll);
			goto label$819;
			label$693:;
			TMP$317$3 = 0ll;
			label$819:;
			if( TMP$317$3 == 0ll ) goto label$694;
			TMP$318$3 = (int64)-(~B3$1 != 0ll);
			goto label$820;
			label$694:;
			TMP$318$3 = 0ll;
			label$820:;
			if( TMP$318$3 == 0ll ) goto label$696;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$670;
				label$696:;
			}
			boolean vr$533 = ISSTRING( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			if( vr$533 == (boolean)0ll ) goto label$698;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 515ll;
				int64 vr$537 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
				FBSTRING* vr$541 = fb_StrMid( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), 2ll, vr$537 + -2ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll, (void*)vr$541, -1ll, 0 );
				goto label$670;
			}
			label$698:;
			label$697:;
			boolean vr$546 = ISNAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
			if( vr$546 == (boolean)0ll ) goto label$700;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) = 516ll;
				goto label$670;
				label$700:;
			}
			label$670:;
		}
		label$665:;
		I$1 = I$1 + 1ll;
		label$664:;
		if( I$1 <= TMP$312$2 ) goto label$667;
		label$666:;
	}
	*(int64*)(((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))) + 24ll) = 510ll;
	fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (K$1 << (5ll & 63ll))), -1ll, (void*)"", 1ll, 0 );
	TOKENNUM$ = K$1;
	int32 vr$553 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"load", 5ll );
	if( (int64)vr$553 == 0ll ) goto label$701;
	int32 vr$556 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"save", 5ll );
	TMP$321$1 = (int64)-((int64)vr$556 == 0ll);
	goto label$821;
	label$701:;
	TMP$321$1 = -1ll;
	label$821:;
	if( TMP$321$1 != 0ll ) goto label$702;
	int32 vr$560 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"brun", 5ll );
	TMP$323$1 = (int64)-((int64)vr$560 == 0ll);
	goto label$822;
	label$702:;
	TMP$323$1 = -1ll;
	label$822:;
	if( TMP$323$1 != 0ll ) goto label$703;
	int32 vr$564 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"run", 4ll );
	TMP$325$1 = (int64)-((int64)vr$564 == 0ll);
	goto label$823;
	label$703:;
	TMP$325$1 = -1ll;
	label$823:;
	if( TMP$325$1 != 0ll ) goto label$704;
	int32 vr$568 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"lo.", 4ll );
	TMP$327$1 = (int64)-((int64)vr$568 == 0ll);
	goto label$824;
	label$704:;
	TMP$327$1 = -1ll;
	label$824:;
	if( TMP$327$1 != 0ll ) goto label$705;
	int32 vr$572 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"s.", 3ll );
	TMP$329$1 = (int64)-((int64)vr$572 == 0ll);
	goto label$825;
	label$705:;
	TMP$329$1 = -1ll;
	label$825:;
	if( TMP$329$1 != 0ll ) goto label$706;
	int32 vr$576 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"br.", 4ll );
	TMP$331$1 = (int64)-((int64)vr$576 == 0ll);
	goto label$826;
	label$706:;
	TMP$331$1 = -1ll;
	label$826:;
	if( TMP$331$1 != 0ll ) goto label$707;
	int32 vr$580 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"enter", 6ll );
	TMP$333$1 = (int64)-((int64)vr$580 == 0ll);
	goto label$827;
	label$707:;
	TMP$333$1 = -1ll;
	label$827:;
	if( TMP$333$1 != 0ll ) goto label$708;
	int32 vr$584 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"e.", 3ll );
	TMP$335$1 = (int64)-((int64)vr$584 == 0ll);
	goto label$828;
	label$708:;
	TMP$335$1 = -1ll;
	label$828:;
	if( TMP$335$1 == 0ll ) goto label$709;
	TMP$336$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$829;
	label$709:;
	TMP$336$1 = 0ll;
	label$829:;
	if( TMP$336$1 == 0ll ) goto label$710;
	FBSTRING* vr$591 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$592 = fb_StrCompare( (void*)vr$591, -1ll, (void*)"$", 2ll );
	TMP$337$1 = (int64)-((int64)vr$592 != 0ll);
	goto label$830;
	label$710:;
	TMP$337$1 = 0ll;
	label$830:;
	if( TMP$337$1 == 0ll ) goto label$712;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$712:;
	}
	int32 vr$597 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"delete", 7ll );
	if( (int64)vr$597 == 0ll ) goto label$713;
	int32 vr$600 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"mkdir", 6ll );
	TMP$340$1 = (int64)-((int64)vr$600 == 0ll);
	goto label$831;
	label$713:;
	TMP$340$1 = -1ll;
	label$831:;
	if( TMP$340$1 == 0ll ) goto label$714;
	TMP$341$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$832;
	label$714:;
	TMP$341$1 = 0ll;
	label$832:;
	if( TMP$341$1 == 0ll ) goto label$715;
	FBSTRING* vr$607 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$608 = fb_StrCompare( (void*)vr$607, -1ll, (void*)"$", 2ll );
	TMP$342$1 = (int64)-((int64)vr$608 != 0ll);
	goto label$833;
	label$715:;
	TMP$342$1 = 0ll;
	label$833:;
	if( TMP$342$1 == 0ll ) goto label$717;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$717:;
	}
	int32 vr$613 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"copy", 5ll );
	if( (int64)vr$613 != 0ll ) goto label$718;
	TMP$344$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) == 516ll);
	goto label$834;
	label$718:;
	TMP$344$1 = 0ll;
	label$834:;
	if( TMP$344$1 == 0ll ) goto label$719;
	FBSTRING* vr$619 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), 1ll );
	int32 vr$620 = fb_StrCompare( (void*)vr$619, -1ll, (void*)"$", 2ll );
	TMP$345$1 = (int64)-((int64)vr$620 != 0ll);
	goto label$835;
	label$719:;
	TMP$345$1 = 0ll;
	label$835:;
	if( TMP$345$1 == 0ll ) goto label$721;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$721:;
	}
	int32 vr$625 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"copy", 5ll );
	if( (int64)vr$625 != 0ll ) goto label$722;
	TMP$346$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 120ll) == 516ll);
	goto label$836;
	label$722:;
	TMP$346$1 = 0ll;
	label$836:;
	if( TMP$346$1 == 0ll ) goto label$723;
	FBSTRING* vr$631 = fb_RIGHT( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 96ll), 1ll );
	int32 vr$632 = fb_StrCompare( (void*)vr$631, -1ll, (void*)"$", 2ll );
	TMP$347$1 = (int64)-((int64)vr$632 != 0ll);
	goto label$837;
	label$723:;
	TMP$347$1 = 0ll;
	label$837:;
	if( TMP$347$1 == 0ll ) goto label$725;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 120ll) = 515ll;
		label$725:;
	}
	int32 vr$637 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd", 3ll );
	if( (int64)vr$637 != 0ll ) goto label$727;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		label$727:;
	}
	int32 vr$641 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd.", 4ll );
	if( (int64)vr$641 != 0ll ) goto label$728;
	int32 vr$645 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)".", 2ll );
	TMP$350$1 = (int64)-((int64)vr$645 == 0ll);
	goto label$838;
	label$728:;
	TMP$350$1 = 0ll;
	label$838:;
	if( TMP$350$1 == 0ll ) goto label$730;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"..", 3ll, 0 );
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 24ll) = 195ll;
		label$730:;
	}
	int32 vr$653 = fb_StrCompare( (void*)&LP_$1, -1ll, (void*)"cd", 3ll );
	if( (int64)vr$653 != 0ll ) goto label$731;
	int32 vr$657 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)"/", 2ll );
	TMP$352$1 = (int64)-((int64)vr$657 == 0ll);
	goto label$839;
	label$731:;
	TMP$352$1 = 0ll;
	label$839:;
	if( TMP$352$1 == 0ll ) goto label$733;
	{
		*(int64*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 56ll) = 515ll;
		{
			I$1 = ADDPTR$1 + 2ll;
			int64 TMP$353$3;
			TMP$353$3 = K$1;
			goto label$734;
			label$737:;
			{
				FBSTRING TMP$354$4;
				__builtin_memset( &TMP$354$4, 0, 24ll );
				FBSTRING* vr$668 = fb_StrConcat( &TMP$354$4, (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))), -1ll );
				fb_StrAssign( (void*)(((int64)(struct $4PART*)LPARTS$ + (ADDPTR$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)vr$668, -1ll, 0 );
			}
			label$735:;
			I$1 = I$1 + 1ll;
			label$734:;
			if( I$1 <= TMP$353$3 ) goto label$737;
			label$736:;
		}
		label$733:;
	}
	int64 vr$673 = ISDEC( (FBSTRING*)LPARTS$ );
	if( vr$673 == 0ll ) goto label$739;
	{
		int32 vr$675 = fb_VALINT( (FBSTRING*)LPARTS$ );
		LINENUM$ = (uint32)vr$675;
		label$739:;
	}
	if( (int64)LINENUM$ <= 0ll ) goto label$740;
	TMP$355$1 = (int64)-(K$1 == 1ll);
	goto label$840;
	label$740:;
	TMP$355$1 = 0ll;
	label$840:;
	if( TMP$355$1 == 0ll ) goto label$741;
	TMP$356$1 = (int64)-(CONT$ == 3ll);
	goto label$841;
	label$741:;
	TMP$356$1 = 0ll;
	label$841:;
	if( TMP$356$1 == 0ll ) goto label$743;
	{
		DELETELINE( LINENUM$ );
		goto label$744;
		label$743:;
	}
	if( CONT$ == 0ll ) goto label$745;
	TMP$357$1 = (int64)-(CONT$ == 3ll);
	goto label$842;
	label$745:;
	TMP$357$1 = -1ll;
	label$842:;
	if( TMP$357$1 == 0ll ) goto label$746;
	TMP$358$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) != 27ll);
	goto label$843;
	label$746:;
	TMP$358$1 = 0ll;
	label$843:;
	if( TMP$358$1 == 0ll ) goto label$748;
	{
		uint32 vr$682 = COMPILE( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$682 );
		int32 vr$683 = fb_ErrorGetNum(  );
		if( (int64)vr$683 == 0ll ) goto label$750;
		{
			int32 vr$686 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$686, (int64)LINENUM$ );
			goto label$485;
			label$750:;
		}
		int32 vr$689 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$689 == 0ll ) goto label$752;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$474;
		}
		goto label$751;
		label$752:;
		{
			goto label$744;
			label$751:;
		}
	}
	label$748:;
	label$747:;
	if( CONT$ == 1ll ) goto label$753;
	TMP$359$1 = (int64)-(CONT$ == 2ll);
	goto label$844;
	label$753:;
	TMP$359$1 = -1ll;
	label$844:;
	if( TMP$359$1 == 0ll ) goto label$754;
	TMP$360$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 56ll) != 27ll);
	goto label$845;
	label$754:;
	TMP$360$1 = 0ll;
	label$845:;
	if( TMP$360$1 == 0ll ) goto label$756;
	{
		uint32 vr$695 = COMPILE( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$695 );
		int32 vr$696 = fb_ErrorGetNum(  );
		if( (int64)vr$696 == 0ll ) goto label$758;
		{
			int32 vr$699 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$699, (int64)LINENUM$ );
			goto label$485;
			label$758:;
		}
		int32 vr$702 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$702 == 0ll ) goto label$760;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$474;
		}
		goto label$759;
		label$760:;
		{
			goto label$744;
			label$759:;
		}
	}
	label$756:;
	label$755:;
	if( CONT$ == 0ll ) goto label$761;
	TMP$361$1 = (int64)-(CONT$ == 3ll);
	goto label$846;
	label$761:;
	TMP$361$1 = -1ll;
	label$846:;
	if( TMP$361$1 == 0ll ) goto label$762;
	TMP$362$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 88ll) == 27ll);
	goto label$847;
	label$762:;
	TMP$362$1 = 0ll;
	label$847:;
	if( TMP$362$1 == 0ll ) goto label$764;
	{
		uint32 vr$708 = COMPILE_ASSIGN( LINENUM$, 0u, (uint32)CONT$ );
		ERR_$1 = (int64)vr$708;
		if( ERR_$1 == 0ll ) goto label$766;
		{
			PRINTERROR( ERR_$1, (int64)LINENUM$ );
			goto label$485;
			label$766:;
		}
		int32 vr$712 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$712 == 0ll ) goto label$768;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$474;
		}
		goto label$767;
		label$768:;
		{
			goto label$744;
			label$767:;
		}
	}
	label$764:;
	label$763:;
	if( CONT$ == 1ll ) goto label$769;
	TMP$363$1 = (int64)-(CONT$ == 2ll);
	goto label$848;
	label$769:;
	TMP$363$1 = -1ll;
	label$848:;
	if( TMP$363$1 == 0ll ) goto label$770;
	TMP$364$1 = (int64)-(*(int64*)((int64)(struct $4PART*)LPARTS$ + 56ll) == 27ll);
	goto label$849;
	label$770:;
	TMP$364$1 = 0ll;
	label$849:;
	if( TMP$364$1 == 0ll ) goto label$772;
	{
		uint32 vr$718 = COMPILE_ASSIGN( LINENUM$, 0u, (uint32)CONT$ );
		fb_ErrorSetNum( (int32)vr$718 );
		int32 vr$719 = fb_ErrorGetNum(  );
		if( (int64)vr$719 == 0ll ) goto label$774;
		{
			int32 vr$722 = fb_ErrorGetNum(  );
			PRINTERROR( (int64)vr$722, (int64)LINENUM$ );
			goto label$485;
			label$774:;
		}
		int32 vr$725 = fb_StrCompare( (void*)&REST_$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$725 == 0ll ) goto label$776;
		{
			fb_StrAssign( (void*)&LINE_$, -1ll, (void*)&REST_$1, -1ll, 0 );
			CONT$ = 4ll;
			goto label$474;
		}
		goto label$775;
		label$776:;
		{
			goto label$744;
			label$775:;
		}
	}
	label$772:;
	label$771:;
	label$744:;
	if( (int64)LINENUM$ != 0ll ) goto label$778;
	{
		int64 TMP$367$2;
		EXECUTE_LINE( 2ll );
		label$485:;
		if( INLOAD$ != 0ll ) goto label$780;
		{
			FBSTRING TMP$365$3;
			FBSTRING TMP$366$3;
			__builtin_memset( &TMP$365$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$365$3, -1ll, (void*)"", 1ll, 0 );
			WRITELN( &TMP$365$3 );
			fb_StrDelete( (FBSTRING*)&TMP$365$3 );
			__builtin_memset( &TMP$366$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$366$3, -1ll, (void*)"Ready", 6ll, 0 );
			WRITELN( &TMP$366$3 );
			fb_StrDelete( (FBSTRING*)&TMP$366$3 );
			label$780:;
		}
		if( INLOAD$ != 1ll ) goto label$781;
		int32 vr$737 = fb_ErrorGetNum(  );
		TMP$367$2 = (int64)-((int64)vr$737 > 0ll);
		goto label$850;
		label$781:;
		TMP$367$2 = 0ll;
		label$850:;
		if( TMP$367$2 == 0ll ) goto label$783;
		{
			WRITELN( &FULLLINE_$ );
			label$783:;
		}
	}
	label$778:;
	label$777:;
	fb_StrDelete( (FBSTRING*)&REST_$1 );
	fb_StrDelete( (FBSTRING*)&D_$1 );
	fb_StrDelete( (FBSTRING*)&LP_$1 );
	fb_StrDelete( (FBSTRING*)&S2_$1 );
	fb_StrDelete( (FBSTRING*)&S1_$1 );
	fb_StrDelete( (FBSTRING*)&P_$1 );
	fb_StrDelete( (FBSTRING*)&C_$1 );
	label$473:;
}

uint8 ISOPERATOR( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$851:;
	{
		FBSTRING TMP$368$2;
		fb_StrInit( (void*)&TMP$368$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"+", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$854;
		label$855:;
		{
			fb$result$1 = (uint8)1u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$854:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"-", 2ll );
		if( (int64)vr$7 != 0ll ) goto label$856;
		label$857:;
		{
			fb$result$1 = (uint8)2u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$856:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"or", 3ll );
		if( (int64)vr$11 != 0ll ) goto label$858;
		label$859:;
		{
			fb$result$1 = (uint8)3u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$858:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"xor", 4ll );
		if( (int64)vr$15 != 0ll ) goto label$860;
		label$861:;
		{
			fb$result$1 = (uint8)4u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$860:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"*", 2ll );
		if( (int64)vr$19 != 0ll ) goto label$862;
		label$863:;
		{
			fb$result$1 = (uint8)5u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$862:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"/", 2ll );
		if( (int64)vr$23 != 0ll ) goto label$864;
		label$865:;
		{
			fb$result$1 = (uint8)6u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$864:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"and", 4ll );
		if( (int64)vr$27 != 0ll ) goto label$866;
		label$867:;
		{
			fb$result$1 = (uint8)7u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$866:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"div", 4ll );
		if( (int64)vr$31 != 0ll ) goto label$868;
		label$869:;
		{
			fb$result$1 = (uint8)8u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$868:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"mod", 4ll );
		if( (int64)vr$35 != 0ll ) goto label$870;
		label$871:;
		{
			fb$result$1 = (uint8)9u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$870:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"shl", 4ll );
		if( (int64)vr$39 != 0ll ) goto label$872;
		label$873:;
		{
			fb$result$1 = (uint8)10u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$872:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"shr", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$874;
		label$875:;
		{
			fb$result$1 = (uint8)11u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$874:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"^", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$876;
		label$877:;
		{
			fb$result$1 = (uint8)12u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$876:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"not", 4ll );
		if( (int64)vr$51 != 0ll ) goto label$878;
		label$879:;
		{
			fb$result$1 = (uint8)13u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$878:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"@", 2ll );
		if( (int64)vr$55 != 0ll ) goto label$880;
		label$881:;
		{
			fb$result$1 = (uint8)14u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$880:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$882;
		label$883:;
		{
			fb$result$1 = (uint8)27u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$882:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)">=", 3ll );
		if( (int64)vr$63 != 0ll ) goto label$884;
		label$885:;
		{
			fb$result$1 = (uint8)39u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$884:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"<=", 3ll );
		if( (int64)vr$67 != 0ll ) goto label$886;
		label$887:;
		{
			fb$result$1 = (uint8)38u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$886:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"<", 2ll );
		if( (int64)vr$71 != 0ll ) goto label$888;
		label$889:;
		{
			fb$result$1 = (uint8)16u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$888:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)">", 2ll );
		if( (int64)vr$75 != 0ll ) goto label$890;
		label$891:;
		{
			fb$result$1 = (uint8)15u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$890:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"<>", 3ll );
		if( (int64)vr$79 != 0ll ) goto label$892;
		label$893:;
		{
			fb$result$1 = (uint8)42u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$892:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"++", 3ll );
		if( (int64)vr$83 != 0ll ) goto label$894;
		label$895:;
		{
			fb$result$1 = (uint8)40u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$894:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$368$2, -1ll, (void*)"--", 3ll );
		if( (int64)vr$87 != 0ll ) goto label$896;
		label$897:;
		{
			fb$result$1 = (uint8)41u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		goto label$853;
		label$896:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$368$2 );
			goto label$852;
		}
		label$898:;
		label$853:;
		fb_StrDelete( (FBSTRING*)&TMP$368$2 );
	}
	label$852:;
	return fb$result$1;
}

uint32 ISCHANNEL( FBSTRING* S$1 )
{
	int64 TMP$382$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$899:;
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	int64 NN$1;
	__builtin_memset( &NN$1, 0, 8ll );
	int64 TOKEN$1;
	__builtin_memset( &TOKEN$1, 0, 8ll );
	FBSTRING* vr$4 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"#", 2ll );
	if( (int64)vr$5 == 0ll ) goto label$902;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$900;
		label$902:;
	}
	int64 vr$8 = fb_StrLen( (void*)S$1, -1ll );
	if( vr$8 == 2ll ) goto label$904;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$900;
		label$904:;
	}
	FBSTRING* vr$10 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$11 = fb_StrCompare( (void*)vr$10, -1ll, (void*)"0", 2ll );
	if( (int64)vr$11 < 0ll ) goto label$905;
	FBSTRING* vr$13 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$14 = fb_StrCompare( (void*)vr$13, -1ll, (void*)"9", 2ll );
	TMP$382$1 = (int64)-((int64)vr$14 > 0ll);
	goto label$908;
	label$905:;
	TMP$382$1 = -1ll;
	label$908:;
	if( TMP$382$1 == 0ll ) goto label$907;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$900;
		label$907:;
	}
	FBSTRING* vr$18 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	double vr$19 = fb_VAL( (FBSTRING*)vr$18 );
	fb$result$1 = (uint32)fb_D2L( vr$19 + 0x1.6p+5 );
	fb_StrDelete( (FBSTRING*)&S1$1 );
	goto label$900;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$900:;
	return fb$result$1;
}

int64 ISCONSTANT( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$909:;
	{
		FBSTRING TMP$383$2;
		fb_StrInit( (void*)&TMP$383$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$383$2, -1ll, (void*)"#read", 6ll );
		if( (int64)vr$3 != 0ll ) goto label$912;
		label$913:;
		{
			fb$result$1 = 1ll;
			fb_StrDelete( (FBSTRING*)&TMP$383$2 );
			goto label$910;
		}
		goto label$911;
		label$912:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$383$2, -1ll, (void*)"#write", 7ll );
		if( (int64)vr$7 != 0ll ) goto label$914;
		label$915:;
		{
			fb$result$1 = 2ll;
			fb_StrDelete( (FBSTRING*)&TMP$383$2 );
			goto label$910;
		}
		goto label$911;
		label$914:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$383$2, -1ll, (void*)"#append", 8ll );
		if( (int64)vr$11 != 0ll ) goto label$916;
		label$917:;
		{
			fb$result$1 = 4ll;
			fb_StrDelete( (FBSTRING*)&TMP$383$2 );
			goto label$910;
		}
		goto label$911;
		label$916:;
		{
			fb$result$1 = 0ll;
			fb_StrDelete( (FBSTRING*)&TMP$383$2 );
			goto label$910;
		}
		label$918:;
		label$911:;
		fb_StrDelete( (FBSTRING*)&TMP$383$2 );
	}
	label$910:;
	return fb$result$1;
}

uint32 ISNOTENAME( FBSTRING* S$1 )
{
	int64 TMP$387$1;
	int64 TMP$393$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$919:;
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	int64 NN$1;
	__builtin_memset( &NN$1, 0, 8ll );
	int64 TOKEN$1;
	__builtin_memset( &TOKEN$1, 0, 8ll );
	FBSTRING* vr$4 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"#", 2ll );
	if( (int64)vr$5 == 0ll ) goto label$922;
	{
		fb$result$1 = 0u;
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$920;
		label$922:;
	}
	FBSTRING* vr$8 = fb_StrMid( (FBSTRING*)S$1, 3ll, 1ll );
	int32 vr$9 = fb_StrCompare( (void*)vr$8, -1ll, (void*)"#", 2ll );
	if( (int64)vr$9 != 0ll ) goto label$924;
	{
		FBSTRING* vr$11 = fb_StrMid( (FBSTRING*)S$1, 2ll, 2ll );
		fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$11, -1ll, 0 );
	}
	goto label$923;
	label$924:;
	{
		FBSTRING* vr$13 = fb_StrMid( (FBSTRING*)S$1, 2ll, 1ll );
		fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$13, -1ll, 0 );
		label$923:;
	}
	int64 vr$15 = fb_StrLen( (void*)S$1, -1ll );
	FBSTRING* vr$17 = fb_StrMid( (FBSTRING*)S$1, vr$15 + -1ll, 1ll );
	int32 vr$18 = fb_StrCompare( (void*)vr$17, -1ll, (void*)"-", 2ll );
	if( (int64)vr$18 == 0ll ) goto label$926;
	{
		FBSTRING* vr$20 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
		double vr$21 = fb_VAL( (FBSTRING*)vr$20 );
		NN$1 = fb_D2L( vr$21 );
	}
	goto label$925;
	label$926:;
	{
		FBSTRING* vr$23 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
		double vr$24 = fb_VAL( (FBSTRING*)vr$23 );
		NN$1 = fb_D2L( vr$24 * -0x1.p+0 );
		label$925:;
	}
	if( NN$1 != 0ll ) goto label$927;
	FBSTRING* vr$27 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$28 = fb_StrCompare( (void*)vr$27, -1ll, (void*)"0", 2ll );
	TMP$387$1 = (int64)-((int64)vr$28 != 0ll);
	goto label$961;
	label$927:;
	TMP$387$1 = 0ll;
	label$961:;
	if( TMP$387$1 == 0ll ) goto label$929;
	{
		NN$1 = 4ll;
		label$929:;
	}
	{
		int32 vr$32 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"c", 2ll );
		if( (int64)vr$32 != 0ll ) goto label$931;
		label$932:;
		{
			TOKEN$1 = 768ll;
		}
		goto label$930;
		label$931:;
		int32 vr$35 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"c#", 3ll );
		if( (int64)vr$35 != 0ll ) goto label$933;
		label$934:;
		{
			TOKEN$1 = 769ll;
		}
		goto label$930;
		label$933:;
		int32 vr$38 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"d", 2ll );
		if( (int64)vr$38 != 0ll ) goto label$935;
		label$936:;
		{
			TOKEN$1 = 770ll;
		}
		goto label$930;
		label$935:;
		int32 vr$41 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"d#", 3ll );
		if( (int64)vr$41 != 0ll ) goto label$937;
		label$938:;
		{
			TOKEN$1 = 771ll;
		}
		goto label$930;
		label$937:;
		int32 vr$44 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"e", 2ll );
		if( (int64)vr$44 != 0ll ) goto label$939;
		label$940:;
		{
			TOKEN$1 = 772ll;
		}
		goto label$930;
		label$939:;
		int32 vr$47 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"f", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$941;
		label$942:;
		{
			TOKEN$1 = 773ll;
		}
		goto label$930;
		label$941:;
		int32 vr$50 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"f#", 3ll );
		if( (int64)vr$50 != 0ll ) goto label$943;
		label$944:;
		{
			TOKEN$1 = 774ll;
		}
		goto label$930;
		label$943:;
		int32 vr$53 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"g", 2ll );
		if( (int64)vr$53 != 0ll ) goto label$945;
		label$946:;
		{
			TOKEN$1 = 775ll;
		}
		goto label$930;
		label$945:;
		int32 vr$56 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"g#", 3ll );
		if( (int64)vr$56 != 0ll ) goto label$947;
		label$948:;
		{
			TOKEN$1 = 776ll;
		}
		goto label$930;
		label$947:;
		int32 vr$59 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"a", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$949;
		label$950:;
		{
			TOKEN$1 = 777ll;
		}
		goto label$930;
		label$949:;
		int32 vr$62 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"a#", 3ll );
		if( (int64)vr$62 != 0ll ) goto label$951;
		label$952:;
		{
			TOKEN$1 = 778ll;
		}
		goto label$930;
		label$951:;
		int32 vr$65 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"h", 2ll );
		if( (int64)vr$65 != 0ll ) goto label$953;
		label$954:;
		{
			TOKEN$1 = 779ll;
		}
		goto label$930;
		label$953:;
		int32 vr$68 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"b", 2ll );
		if( (int64)vr$68 != 0ll ) goto label$955;
		label$956:;
		{
			TOKEN$1 = 779ll;
		}
		goto label$930;
		label$955:;
		{
			fb$result$1 = 0u;
			fb_StrDelete( (FBSTRING*)&S1$1 );
			goto label$920;
		}
		label$957:;
		label$930:;
	}
	if( NN$1 < -1ll ) goto label$958;
	TMP$393$1 = (int64)-(NN$1 < 10ll);
	goto label$962;
	label$958:;
	TMP$393$1 = 0ll;
	label$962:;
	if( TMP$393$1 == 0ll ) goto label$960;
	{
		TOKEN$1 = TOKEN$1 + (NN$1 * 12ll);
		label$960:;
	}
	fb$result$1 = (uint32)TOKEN$1;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	goto label$920;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$920:;
	return fb$result$1;
}

uint32 ISSEPARATOR( FBSTRING* S$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$963:;
	{
		FBSTRING TMP$394$2;
		fb_StrInit( (void*)&TMP$394$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"+", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$966;
		label$967:;
		{
			fb$result$1 = 1u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$966:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"-", 2ll );
		if( (int64)vr$7 != 0ll ) goto label$968;
		label$969:;
		{
			fb$result$1 = 2u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$968:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$11 != 0ll ) goto label$970;
		label$971:;
		{
			fb$result$1 = 27u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$970:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)",", 2ll );
		if( (int64)vr$15 != 0ll ) goto label$972;
		label$973:;
		{
			fb$result$1 = 17u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$972:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"*", 2ll );
		if( (int64)vr$19 != 0ll ) goto label$974;
		label$975:;
		{
			fb$result$1 = 5u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$974:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"/", 2ll );
		if( (int64)vr$23 != 0ll ) goto label$976;
		label$977:;
		{
			fb$result$1 = 6u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$976:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)";", 2ll );
		if( (int64)vr$27 != 0ll ) goto label$978;
		label$979:;
		{
			fb$result$1 = 18u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$978:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"\x22", 2ll );
		if( (int64)vr$31 != 0ll ) goto label$980;
		label$981:;
		{
			fb$result$1 = 19u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$980:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"^", 2ll );
		if( (int64)vr$35 != 0ll ) goto label$982;
		label$983:;
		{
			fb$result$1 = 12u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$982:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)")", 2ll );
		if( (int64)vr$39 != 0ll ) goto label$984;
		label$985:;
		{
			fb$result$1 = 20u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$984:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"(", 2ll );
		if( (int64)vr$43 != 0ll ) goto label$986;
		label$987:;
		{
			fb$result$1 = 21u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$986:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)":", 2ll );
		if( (int64)vr$47 != 0ll ) goto label$988;
		label$989:;
		{
			fb$result$1 = 22u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$988:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)" ", 2ll );
		if( (int64)vr$51 != 0ll ) goto label$990;
		label$991:;
		{
			fb$result$1 = 511u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$990:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)">", 2ll );
		if( (int64)vr$55 != 0ll ) goto label$992;
		label$993:;
		{
			fb$result$1 = 15u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$992:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$394$2, -1ll, (void*)"<", 2ll );
		if( (int64)vr$59 != 0ll ) goto label$994;
		label$995:;
		{
			fb$result$1 = 16u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		goto label$965;
		label$994:;
		{
			fb$result$1 = 0u;
			fb_StrDelete( (FBSTRING*)&TMP$394$2 );
			goto label$964;
		}
		label$996:;
		label$965:;
		fb_StrDelete( (FBSTRING*)&TMP$394$2 );
	}
	label$964:;
	return fb$result$1;
}

uint8 ISASSIGN( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$997:;
	{
		FBSTRING TMP$395$2;
		fb_StrInit( (void*)&TMP$395$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$395$2, -1ll, (void*)"=", 2ll );
		if( (int64)vr$3 != 0ll ) goto label$1000;
		label$1001:;
		{
			fb$result$1 = (uint8)27u;
			fb_StrDelete( (FBSTRING*)&TMP$395$2 );
			goto label$998;
		}
		goto label$999;
		label$1000:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$395$2 );
			goto label$998;
		}
		label$1002:;
		label$999:;
		fb_StrDelete( (FBSTRING*)&TMP$395$2 );
	}
	label$998:;
	return fb$result$1;
}

uint8 ISCOMMAND( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1003:;
	{
		FBSTRING TMP$396$2;
		fb_StrInit( (void*)&TMP$396$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"beep", 5ll );
		if( (int64)vr$3 != 0ll ) goto label$1006;
		label$1007:;
		{
			fb$result$1 = (uint8)92u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1006:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"b.", 3ll );
		if( (int64)vr$7 != 0ll ) goto label$1008;
		label$1009:;
		{
			fb$result$1 = (uint8)92u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1008:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"blit", 5ll );
		if( (int64)vr$11 != 0ll ) goto label$1010;
		label$1011:;
		{
			fb$result$1 = (uint8)185u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1010:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"box", 4ll );
		if( (int64)vr$15 != 0ll ) goto label$1012;
		label$1013:;
		{
			fb$result$1 = (uint8)71u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1012:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"brun", 5ll );
		if( (int64)vr$19 != 0ll ) goto label$1014;
		label$1015:;
		{
			fb$result$1 = (uint8)89u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1014:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"br.", 4ll );
		if( (int64)vr$23 != 0ll ) goto label$1016;
		label$1017:;
		{
			fb$result$1 = (uint8)89u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1016:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cd", 3ll );
		if( (int64)vr$27 != 0ll ) goto label$1018;
		label$1019:;
		{
			fb$result$1 = (uint8)195u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1018:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"changefreq", 11ll );
		if( (int64)vr$31 != 0ll ) goto label$1020;
		label$1021:;
		{
			fb$result$1 = (uint8)174u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1020:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cf.", 4ll );
		if( (int64)vr$35 != 0ll ) goto label$1022;
		label$1023:;
		{
			fb$result$1 = (uint8)174u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1022:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"changepan", 10ll );
		if( (int64)vr$39 != 0ll ) goto label$1024;
		label$1025:;
		{
			fb$result$1 = (uint8)177u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1024:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cp.", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$1026;
		label$1027:;
		{
			fb$result$1 = (uint8)177u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1026:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"changevol", 10ll );
		if( (int64)vr$47 != 0ll ) goto label$1028;
		label$1029:;
		{
			fb$result$1 = (uint8)175u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1028:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cv.", 4ll );
		if( (int64)vr$51 != 0ll ) goto label$1030;
		label$1031:;
		{
			fb$result$1 = (uint8)175u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1030:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"changewave", 11ll );
		if( (int64)vr$55 != 0ll ) goto label$1032;
		label$1033:;
		{
			fb$result$1 = (uint8)176u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1032:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cw.", 4ll );
		if( (int64)vr$59 != 0ll ) goto label$1034;
		label$1035:;
		{
			fb$result$1 = (uint8)176u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1034:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"circle", 7ll );
		if( (int64)vr$63 != 0ll ) goto label$1036;
		label$1037:;
		{
			fb$result$1 = (uint8)69u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1036:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"ci.", 4ll );
		if( (int64)vr$67 != 0ll ) goto label$1038;
		label$1039:;
		{
			fb$result$1 = (uint8)69u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1038:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"click", 6ll );
		if( (int64)vr$71 != 0ll ) goto label$1040;
		label$1041:;
		{
			fb$result$1 = (uint8)105u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1040:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"close", 6ll );
		if( (int64)vr$75 != 0ll ) goto label$1042;
		label$1043:;
		{
			fb$result$1 = (uint8)180u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1042:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cls", 4ll );
		if( (int64)vr$79 != 0ll ) goto label$1044;
		label$1045:;
		{
			fb$result$1 = (uint8)64u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1044:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cogstop", 8ll );
		if( (int64)vr$83 != 0ll ) goto label$1046;
		label$1047:;
		{
			fb$result$1 = (uint8)207u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1046:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"color", 6ll );
		if( (int64)vr$87 != 0ll ) goto label$1048;
		label$1049:;
		{
			fb$result$1 = (uint8)73u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1048:;
		int32 vr$91 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"c.", 3ll );
		if( (int64)vr$91 != 0ll ) goto label$1050;
		label$1051:;
		{
			fb$result$1 = (uint8)73u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1050:;
		int32 vr$95 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"copy", 5ll );
		if( (int64)vr$95 != 0ll ) goto label$1052;
		label$1053:;
		{
			fb$result$1 = (uint8)196u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1052:;
		int32 vr$99 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"cursor", 7ll );
		if( (int64)vr$99 != 0ll ) goto label$1054;
		label$1055:;
		{
			fb$result$1 = (uint8)104u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1054:;
		int32 vr$103 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"data", 5ll );
		if( (int64)vr$103 != 0ll ) goto label$1056;
		label$1057:;
		{
			fb$result$1 = (uint8)183u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1056:;
		int32 vr$107 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"defchar", 8ll );
		if( (int64)vr$107 != 0ll ) goto label$1058;
		label$1059:;
		{
			fb$result$1 = (uint8)217u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1058:;
		int32 vr$111 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"defsnd", 7ll );
		if( (int64)vr$111 != 0ll ) goto label$1060;
		label$1061:;
		{
			fb$result$1 = (uint8)115u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1060:;
		int32 vr$115 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"defenv", 7ll );
		if( (int64)vr$115 != 0ll ) goto label$1062;
		label$1063:;
		{
			fb$result$1 = (uint8)116u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1062:;
		int32 vr$119 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"defsprite", 10ll );
		if( (int64)vr$119 != 0ll ) goto label$1064;
		label$1065:;
		{
			fb$result$1 = (uint8)108u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1064:;
		int32 vr$123 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"ds.", 4ll );
		if( (int64)vr$123 != 0ll ) goto label$1066;
		label$1067:;
		{
			fb$result$1 = (uint8)108u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1066:;
		int32 vr$127 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"deg", 4ll );
		if( (int64)vr$127 != 0ll ) goto label$1068;
		label$1069:;
		{
			fb$result$1 = (uint8)137u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1068:;
		int32 vr$131 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"delete", 7ll );
		if( (int64)vr$131 != 0ll ) goto label$1070;
		label$1071:;
		{
			fb$result$1 = (uint8)194u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1070:;
		int32 vr$135 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"dim", 4ll );
		if( (int64)vr$135 != 0ll ) goto label$1072;
		label$1073:;
		{
			fb$result$1 = (uint8)114u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1072:;
		int32 vr$139 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"dir", 4ll );
		if( (int64)vr$139 != 0ll ) goto label$1074;
		label$1075:;
		{
			fb$result$1 = (uint8)93u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1074:;
		int32 vr$143 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"dpoke", 6ll );
		if( (int64)vr$143 != 0ll ) goto label$1076;
		label$1077:;
		{
			fb$result$1 = (uint8)150u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1076:;
		int32 vr$147 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"draw", 5ll );
		if( (int64)vr$147 != 0ll ) goto label$1078;
		label$1079:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1078:;
		int32 vr$151 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"drawto", 7ll );
		if( (int64)vr$151 != 0ll ) goto label$1080;
		label$1081:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1080:;
		int32 vr$155 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"dr.", 4ll );
		if( (int64)vr$155 != 0ll ) goto label$1082;
		label$1083:;
		{
			fb$result$1 = (uint8)67u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1082:;
		int32 vr$159 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"else", 5ll );
		if( (int64)vr$159 != 0ll ) goto label$1084;
		label$1085:;
		{
			fb$result$1 = (uint8)90u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1084:;
		int32 vr$163 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"end", 4ll );
		if( (int64)vr$163 != 0ll ) goto label$1086;
		label$1087:;
		{
			fb$result$1 = (uint8)171u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1086:;
		int32 vr$167 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"enter", 6ll );
		if( (int64)vr$167 != 0ll ) goto label$1088;
		label$1089:;
		{
			fb$result$1 = (uint8)189u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1088:;
		int32 vr$171 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"e.", 3ll );
		if( (int64)vr$171 != 0ll ) goto label$1090;
		label$1091:;
		{
			fb$result$1 = (uint8)189u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1090:;
		int32 vr$175 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"fcircle", 8ll );
		if( (int64)vr$175 != 0ll ) goto label$1092;
		label$1093:;
		{
			fb$result$1 = (uint8)70u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1092:;
		int32 vr$179 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"fc.", 4ll );
		if( (int64)vr$179 != 0ll ) goto label$1094;
		label$1095:;
		{
			fb$result$1 = (uint8)70u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1094:;
		int32 vr$183 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"fill", 5ll );
		if( (int64)vr$183 != 0ll ) goto label$1096;
		label$1097:;
		{
			fb$result$1 = (uint8)113u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1096:;
		int32 vr$187 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"fi.", 4ll );
		if( (int64)vr$187 != 0ll ) goto label$1098;
		label$1099:;
		{
			fb$result$1 = (uint8)113u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1098:;
		int32 vr$191 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"font", 5ll );
		if( (int64)vr$191 != 0ll ) goto label$1100;
		label$1101:;
		{
			fb$result$1 = (uint8)96u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1100:;
		int32 vr$195 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"for", 4ll );
		if( (int64)vr$195 != 0ll ) goto label$1102;
		label$1103:;
		{
			fb$result$1 = (uint8)74u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1102:;
		int32 vr$199 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"f.", 3ll );
		if( (int64)vr$199 != 0ll ) goto label$1104;
		label$1105:;
		{
			fb$result$1 = (uint8)74u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1104:;
		int32 vr$203 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"frame", 6ll );
		if( (int64)vr$203 != 0ll ) goto label$1106;
		label$1107:;
		{
			fb$result$1 = (uint8)72u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1106:;
		int32 vr$207 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"fr.", 4ll );
		if( (int64)vr$207 != 0ll ) goto label$1108;
		label$1109:;
		{
			fb$result$1 = (uint8)72u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1108:;
		int32 vr$211 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"get", 4ll );
		if( (int64)vr$211 != 0ll ) goto label$1110;
		label$1111:;
		{
			fb$result$1 = (uint8)187u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1110:;
		int32 vr$215 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"gosub", 6ll );
		if( (int64)vr$215 != 0ll ) goto label$1112;
		label$1113:;
		{
			fb$result$1 = (uint8)169u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1112:;
		int32 vr$219 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"goto", 5ll );
		if( (int64)vr$219 != 0ll ) goto label$1114;
		label$1115:;
		{
			fb$result$1 = (uint8)78u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1114:;
		int32 vr$223 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"g.", 3ll );
		if( (int64)vr$223 != 0ll ) goto label$1116;
		label$1117:;
		{
			fb$result$1 = (uint8)78u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1116:;
		int32 vr$227 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"if", 3ll );
		if( (int64)vr$227 != 0ll ) goto label$1118;
		label$1119:;
		{
			fb$result$1 = (uint8)88u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1118:;
		int32 vr$231 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"ink", 4ll );
		if( (int64)vr$231 != 0ll ) goto label$1120;
		label$1121:;
		{
			fb$result$1 = (uint8)95u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1120:;
		int32 vr$235 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"i.", 3ll );
		if( (int64)vr$235 != 0ll ) goto label$1122;
		label$1123:;
		{
			fb$result$1 = (uint8)95u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1122:;
		int32 vr$239 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"input", 6ll );
		if( (int64)vr$239 != 0ll ) goto label$1124;
		label$1125:;
		{
			fb$result$1 = (uint8)181u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1124:;
		int32 vr$243 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"list", 5ll );
		if( (int64)vr$243 != 0ll ) goto label$1126;
		label$1127:;
		{
			fb$result$1 = (uint8)76u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1126:;
		int32 vr$247 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"l.", 3ll );
		if( (int64)vr$247 != 0ll ) goto label$1128;
		label$1129:;
		{
			fb$result$1 = (uint8)76u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1128:;
		int32 vr$251 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"load", 5ll );
		if( (int64)vr$251 != 0ll ) goto label$1130;
		label$1131:;
		{
			fb$result$1 = (uint8)82u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1130:;
		int32 vr$255 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"lo.", 4ll );
		if( (int64)vr$255 != 0ll ) goto label$1132;
		label$1133:;
		{
			fb$result$1 = (uint8)82u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1132:;
		int32 vr$259 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"lpoke", 6ll );
		if( (int64)vr$259 != 0ll ) goto label$1134;
		label$1135:;
		{
			fb$result$1 = (uint8)151u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1134:;
		int32 vr$263 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"mkdir", 6ll );
		if( (int64)vr$263 != 0ll ) goto label$1136;
		label$1137:;
		{
			fb$result$1 = (uint8)198u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1136:;
		int32 vr$267 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"mode", 5ll );
		if( (int64)vr$267 != 0ll ) goto label$1138;
		label$1139:;
		{
			fb$result$1 = (uint8)97u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1138:;
		int32 vr$271 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"m.", 3ll );
		if( (int64)vr$271 != 0ll ) goto label$1140;
		label$1141:;
		{
			fb$result$1 = (uint8)97u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1140:;
		int32 vr$275 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"mouse", 6ll );
		if( (int64)vr$275 != 0ll ) goto label$1142;
		label$1143:;
		{
			fb$result$1 = (uint8)99u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1142:;
		int32 vr$279 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"new", 4ll );
		if( (int64)vr$279 != 0ll ) goto label$1144;
		label$1145:;
		{
			fb$result$1 = (uint8)65u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1144:;
		int32 vr$283 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"next", 5ll );
		if( (int64)vr$283 != 0ll ) goto label$1146;
		label$1147:;
		{
			fb$result$1 = (uint8)75u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1146:;
		int32 vr$287 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"n.", 3ll );
		if( (int64)vr$287 != 0ll ) goto label$1148;
		label$1149:;
		{
			fb$result$1 = (uint8)75u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1148:;
		int32 vr$291 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"on", 3ll );
		if( (int64)vr$291 != 0ll ) goto label$1150;
		label$1151:;
		{
			fb$result$1 = (uint8)193u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1150:;
		int32 vr$295 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"open", 5ll );
		if( (int64)vr$295 != 0ll ) goto label$1152;
		label$1153:;
		{
			fb$result$1 = (uint8)179u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1152:;
		int32 vr$299 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"paper", 6ll );
		if( (int64)vr$299 != 0ll ) goto label$1154;
		label$1155:;
		{
			fb$result$1 = (uint8)94u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1154:;
		int32 vr$303 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pa.", 4ll );
		if( (int64)vr$303 != 0ll ) goto label$1156;
		label$1157:;
		{
			fb$result$1 = (uint8)94u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1156:;
		int32 vr$307 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pinfloat", 9ll );
		if( (int64)vr$307 != 0ll ) goto label$1158;
		label$1159:;
		{
			fb$result$1 = (uint8)124u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1158:;
		int32 vr$311 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pinhi", 6ll );
		if( (int64)vr$311 != 0ll ) goto label$1160;
		label$1161:;
		{
			fb$result$1 = (uint8)126u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1160:;
		int32 vr$315 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pinlo", 6ll );
		if( (int64)vr$315 != 0ll ) goto label$1162;
		label$1163:;
		{
			fb$result$1 = (uint8)125u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1162:;
		int32 vr$319 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pinstart", 9ll );
		if( (int64)vr$319 != 0ll ) goto label$1164;
		label$1165:;
		{
			fb$result$1 = (uint8)127u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1164:;
		int32 vr$323 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pintoggle", 10ll );
		if( (int64)vr$323 != 0ll ) goto label$1166;
		label$1167:;
		{
			fb$result$1 = (uint8)128u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1166:;
		int32 vr$327 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pinwrite", 9ll );
		if( (int64)vr$327 != 0ll ) goto label$1168;
		label$1169:;
		{
			fb$result$1 = (uint8)85u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1168:;
		int32 vr$331 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"play", 5ll );
		if( (int64)vr$331 != 0ll ) goto label$1170;
		label$1171:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1170:;
		int32 vr$335 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"p.", 3ll );
		if( (int64)vr$335 != 0ll ) goto label$1172;
		label$1173:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1172:;
		int32 vr$339 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"plot", 5ll );
		if( (int64)vr$339 != 0ll ) goto label$1174;
		label$1175:;
		{
			fb$result$1 = (uint8)66u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1174:;
		int32 vr$343 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pl.", 4ll );
		if( (int64)vr$343 != 0ll ) goto label$1176;
		label$1177:;
		{
			fb$result$1 = (uint8)66u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1176:;
		int32 vr$347 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"poke", 5ll );
		if( (int64)vr$347 != 0ll ) goto label$1178;
		label$1179:;
		{
			fb$result$1 = (uint8)149u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1178:;
		int32 vr$351 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pop", 4ll );
		if( (int64)vr$351 != 0ll ) goto label$1180;
		label$1181:;
		{
			fb$result$1 = (uint8)172u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1180:;
		int32 vr$355 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"position", 9ll );
		if( (int64)vr$355 != 0ll ) goto label$1182;
		label$1183:;
		{
			fb$result$1 = (uint8)129u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1182:;
		int32 vr$359 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"pos.", 5ll );
		if( (int64)vr$359 != 0ll ) goto label$1184;
		label$1185:;
		{
			fb$result$1 = (uint8)129u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1184:;
		int32 vr$363 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"print", 6ll );
		if( (int64)vr$363 != 0ll ) goto label$1186;
		label$1187:;
		{
			fb$result$1 = (uint8)68u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1186:;
		int32 vr$367 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"?", 2ll );
		if( (int64)vr$367 != 0ll ) goto label$1188;
		label$1189:;
		{
			fb$result$1 = (uint8)68u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1188:;
		int32 vr$371 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"put", 4ll );
		if( (int64)vr$371 != 0ll ) goto label$1190;
		label$1191:;
		{
			fb$result$1 = (uint8)188u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1190:;
		int32 vr$375 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"rad", 4ll );
		if( (int64)vr$375 != 0ll ) goto label$1192;
		label$1193:;
		{
			fb$result$1 = (uint8)136u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1192:;
		int32 vr$379 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"read", 5ll );
		if( (int64)vr$379 != 0ll ) goto label$1194;
		label$1195:;
		{
			fb$result$1 = (uint8)182u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1194:;
		int32 vr$383 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"release", 8ll );
		if( (int64)vr$383 != 0ll ) goto label$1196;
		label$1197:;
		{
			fb$result$1 = (uint8)146u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1196:;
		int32 vr$387 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"rem", 4ll );
		if( (int64)vr$387 != 0ll ) goto label$1198;
		label$1199:;
		{
			fb$result$1 = (uint8)190u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1198:;
		int32 vr$391 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"'", 2ll );
		if( (int64)vr$391 != 0ll ) goto label$1200;
		label$1201:;
		{
			fb$result$1 = (uint8)190u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1200:;
		int32 vr$395 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"restore", 8ll );
		if( (int64)vr$395 != 0ll ) goto label$1202;
		label$1203:;
		{
			fb$result$1 = (uint8)199u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1202:;
		int32 vr$399 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"restorepalette", 15ll );
		if( (int64)vr$399 != 0ll ) goto label$1204;
		label$1205:;
		{
			fb$result$1 = (uint8)212u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1204:;
		int32 vr$403 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"rp.", 4ll );
		if( (int64)vr$403 != 0ll ) goto label$1206;
		label$1207:;
		{
			fb$result$1 = (uint8)212u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1206:;
		int32 vr$407 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"return", 7ll );
		if( (int64)vr$407 != 0ll ) goto label$1208;
		label$1209:;
		{
			fb$result$1 = (uint8)170u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1208:;
		int32 vr$411 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"run", 4ll );
		if( (int64)vr$411 != 0ll ) goto label$1210;
		label$1211:;
		{
			fb$result$1 = (uint8)77u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1210:;
		int32 vr$415 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"save", 5ll );
		if( (int64)vr$415 != 0ll ) goto label$1212;
		label$1213:;
		{
			fb$result$1 = (uint8)81u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1212:;
		int32 vr$419 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"s.", 3ll );
		if( (int64)vr$419 != 0ll ) goto label$1214;
		label$1215:;
		{
			fb$result$1 = (uint8)81u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1214:;
		int32 vr$423 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setcolor", 9ll );
		if( (int64)vr$423 != 0ll ) goto label$1216;
		label$1217:;
		{
			fb$result$1 = (uint8)210u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1216:;
		int32 vr$427 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sc.", 4ll );
		if( (int64)vr$427 != 0ll ) goto label$1218;
		label$1219:;
		{
			fb$result$1 = (uint8)210u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1218:;
		int32 vr$431 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setdelay", 9ll );
		if( (int64)vr$431 != 0ll ) goto label$1220;
		label$1221:;
		{
			fb$result$1 = (uint8)142u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1220:;
		int32 vr$435 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sd.", 4ll );
		if( (int64)vr$435 != 0ll ) goto label$1222;
		label$1223:;
		{
			fb$result$1 = (uint8)142u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1222:;
		int32 vr$439 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setenv", 7ll );
		if( (int64)vr$439 != 0ll ) goto label$1224;
		label$1225:;
		{
			fb$result$1 = (uint8)144u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1224:;
		int32 vr$443 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"se.", 4ll );
		if( (int64)vr$443 != 0ll ) goto label$1226;
		label$1227:;
		{
			fb$result$1 = (uint8)144u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1226:;
		int32 vr$447 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setlen", 7ll );
		if( (int64)vr$447 != 0ll ) goto label$1228;
		label$1229:;
		{
			fb$result$1 = (uint8)141u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1228:;
		int32 vr$451 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sl.", 4ll );
		if( (int64)vr$451 != 0ll ) goto label$1230;
		label$1231:;
		{
			fb$result$1 = (uint8)141u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1230:;
		int32 vr$455 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setpan", 7ll );
		if( (int64)vr$455 != 0ll ) goto label$1232;
		label$1233:;
		{
			fb$result$1 = (uint8)140u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1232:;
		int32 vr$459 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sp.", 4ll );
		if( (int64)vr$459 != 0ll ) goto label$1234;
		label$1235:;
		{
			fb$result$1 = (uint8)140u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1234:;
		int32 vr$463 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setsustain", 11ll );
		if( (int64)vr$463 != 0ll ) goto label$1236;
		label$1237:;
		{
			fb$result$1 = (uint8)145u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1236:;
		int32 vr$467 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"ss.", 4ll );
		if( (int64)vr$467 != 0ll ) goto label$1238;
		label$1239:;
		{
			fb$result$1 = (uint8)145u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1238:;
		int32 vr$471 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setvol", 7ll );
		if( (int64)vr$471 != 0ll ) goto label$1240;
		label$1241:;
		{
			fb$result$1 = (uint8)139u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1240:;
		int32 vr$475 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sv.", 4ll );
		if( (int64)vr$475 != 0ll ) goto label$1242;
		label$1243:;
		{
			fb$result$1 = (uint8)139u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1242:;
		int32 vr$479 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setwave", 8ll );
		if( (int64)vr$479 != 0ll ) goto label$1244;
		label$1245:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1244:;
		int32 vr$483 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sw.", 4ll );
		if( (int64)vr$483 != 0ll ) goto label$1246;
		label$1247:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1246:;
		int32 vr$487 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"setwav", 7ll );
		if( (int64)vr$487 != 0ll ) goto label$1248;
		label$1249:;
		{
			fb$result$1 = (uint8)143u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1248:;
		int32 vr$491 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"shutup", 7ll );
		if( (int64)vr$491 != 0ll ) goto label$1250;
		label$1251:;
		{
			fb$result$1 = (uint8)178u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1250:;
		int32 vr$495 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sh.", 4ll );
		if( (int64)vr$495 != 0ll ) goto label$1252;
		label$1253:;
		{
			fb$result$1 = (uint8)178u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1252:;
		int32 vr$499 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sound", 6ll );
		if( (int64)vr$499 != 0ll ) goto label$1254;
		label$1255:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1254:;
		int32 vr$503 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"so.", 4ll );
		if( (int64)vr$503 != 0ll ) goto label$1256;
		label$1257:;
		{
			fb$result$1 = (uint8)117u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1256:;
		int32 vr$507 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"sprite", 7ll );
		if( (int64)vr$507 != 0ll ) goto label$1258;
		label$1259:;
		{
			fb$result$1 = (uint8)109u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1258:;
		int32 vr$511 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"spr.", 5ll );
		if( (int64)vr$511 != 0ll ) goto label$1260;
		label$1261:;
		{
			fb$result$1 = (uint8)109u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1260:;
		int32 vr$515 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"then", 5ll );
		if( (int64)vr$515 != 0ll ) goto label$1262;
		label$1263:;
		{
			fb$result$1 = (uint8)91u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1262:;
		int32 vr$519 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"waitms", 7ll );
		if( (int64)vr$519 != 0ll ) goto label$1264;
		label$1265:;
		{
			fb$result$1 = (uint8)86u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1264:;
		int32 vr$523 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"w.", 3ll );
		if( (int64)vr$523 != 0ll ) goto label$1266;
		label$1267:;
		{
			fb$result$1 = (uint8)86u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1266:;
		int32 vr$527 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"waitclock", 10ll );
		if( (int64)vr$527 != 0ll ) goto label$1268;
		label$1269:;
		{
			fb$result$1 = (uint8)112u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1268:;
		int32 vr$531 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"wc.", 4ll );
		if( (int64)vr$531 != 0ll ) goto label$1270;
		label$1271:;
		{
			fb$result$1 = (uint8)112u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1270:;
		int32 vr$535 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"waitvbl", 8ll );
		if( (int64)vr$535 != 0ll ) goto label$1272;
		label$1273:;
		{
			fb$result$1 = (uint8)87u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1272:;
		int32 vr$539 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"wv.", 4ll );
		if( (int64)vr$539 != 0ll ) goto label$1274;
		label$1275:;
		{
			fb$result$1 = (uint8)87u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1274:;
		int32 vr$543 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"wrpin", 6ll );
		if( (int64)vr$543 != 0ll ) goto label$1276;
		label$1277:;
		{
			fb$result$1 = (uint8)121u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1276:;
		int32 vr$547 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"wxpin", 6ll );
		if( (int64)vr$547 != 0ll ) goto label$1278;
		label$1279:;
		{
			fb$result$1 = (uint8)119u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1278:;
		int32 vr$551 = fb_StrCompare( (void*)&TMP$396$2, -1ll, (void*)"wypin", 6ll );
		if( (int64)vr$551 != 0ll ) goto label$1280;
		label$1281:;
		{
			fb$result$1 = (uint8)120u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		goto label$1005;
		label$1280:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$396$2 );
			goto label$1004;
		}
		label$1282:;
		label$1005:;
		fb_StrDelete( (FBSTRING*)&TMP$396$2 );
	}
	label$1004:;
	return fb$result$1;
}

uint8 ISFUNCTION( FBSTRING* S$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1283:;
	{
		FBSTRING TMP$512$2;
		fb_StrInit( (void*)&TMP$512$2, -1ll, (void*)S$1, -1ll, 0 );
		int32 vr$3 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"abs", 4ll );
		if( (int64)vr$3 != 0ll ) goto label$1286;
		label$1287:;
		{
			fb$result$1 = (uint8)158u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1286:;
		int32 vr$7 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"acos", 5ll );
		if( (int64)vr$7 != 0ll ) goto label$1288;
		label$1289:;
		{
			fb$result$1 = (uint8)133u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1288:;
		int32 vr$11 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"adr", 4ll );
		if( (int64)vr$11 != 0ll ) goto label$1290;
		label$1291:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1290:;
		int32 vr$15 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"addr", 5ll );
		if( (int64)vr$15 != 0ll ) goto label$1292;
		label$1293:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1292:;
		int32 vr$19 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"asc", 4ll );
		if( (int64)vr$19 != 0ll ) goto label$1294;
		label$1295:;
		{
			fb$result$1 = (uint8)167u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1294:;
		int32 vr$23 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"asin", 5ll );
		if( (int64)vr$23 != 0ll ) goto label$1296;
		label$1297:;
		{
			fb$result$1 = (uint8)132u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1296:;
		int32 vr$27 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"atn", 4ll );
		if( (int64)vr$27 != 0ll ) goto label$1298;
		label$1299:;
		{
			fb$result$1 = (uint8)134u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1298:;
		int32 vr$31 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"bin$", 5ll );
		if( (int64)vr$31 != 0ll ) goto label$1300;
		label$1301:;
		{
			fb$result$1 = (uint8)162u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1300:;
		int32 vr$35 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"chr$", 5ll );
		if( (int64)vr$35 != 0ll ) goto label$1302;
		label$1303:;
		{
			fb$result$1 = (uint8)159u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1302:;
		int32 vr$39 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"coginit", 8ll );
		if( (int64)vr$39 != 0ll ) goto label$1304;
		label$1305:;
		{
			fb$result$1 = (uint8)192u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1304:;
		int32 vr$43 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"cos", 4ll );
		if( (int64)vr$43 != 0ll ) goto label$1306;
		label$1307:;
		{
			fb$result$1 = (uint8)130u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1306:;
		int32 vr$47 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"dpeek", 6ll );
		if( (int64)vr$47 != 0ll ) goto label$1308;
		label$1309:;
		{
			fb$result$1 = (uint8)153u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1308:;
		int32 vr$51 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"findfirst", 10ll );
		if( (int64)vr$51 != 0ll ) goto label$1310;
		label$1311:;
		{
			fb$result$1 = (uint8)215u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1310:;
		int32 vr$55 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"findnext", 9ll );
		if( (int64)vr$55 != 0ll ) goto label$1312;
		label$1313:;
		{
			fb$result$1 = (uint8)216u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1312:;
		int32 vr$59 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"framebuf", 9ll );
		if( (int64)vr$59 != 0ll ) goto label$1314;
		label$1315:;
		{
			fb$result$1 = (uint8)197u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1314:;
		int32 vr$63 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"fb.", 4ll );
		if( (int64)vr$63 != 0ll ) goto label$1316;
		label$1317:;
		{
			fb$result$1 = (uint8)197u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1316:;
		int32 vr$67 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"fre", 4ll );
		if( (int64)vr$67 != 0ll ) goto label$1318;
		label$1319:;
		{
			fb$result$1 = (uint8)156u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1318:;
		int32 vr$71 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"gc.", 4ll );
		if( (int64)vr$71 != 0ll ) goto label$1320;
		label$1321:;
		{
			fb$result$1 = (uint8)211u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1320:;
		int32 vr$75 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"getcolor", 9ll );
		if( (int64)vr$75 != 0ll ) goto label$1322;
		label$1323:;
		{
			fb$result$1 = (uint8)211u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1322:;
		int32 vr$79 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"getpixel", 9ll );
		if( (int64)vr$79 != 0ll ) goto label$1324;
		label$1325:;
		{
			fb$result$1 = (uint8)111u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1324:;
		int32 vr$83 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"ge.", 4ll );
		if( (int64)vr$83 != 0ll ) goto label$1326;
		label$1327:;
		{
			fb$result$1 = (uint8)111u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1326:;
		int32 vr$87 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"getenvsustain", 14ll );
		if( (int64)vr$87 != 0ll ) goto label$1328;
		label$1329:;
		{
			fb$result$1 = (uint8)147u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1328:;
		int32 vr$91 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"getnotevalue", 13ll );
		if( (int64)vr$91 != 0ll ) goto label$1330;
		label$1331:;
		{
			fb$result$1 = (uint8)148u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1330:;
		int32 vr$95 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"gettime", 8ll );
		if( (int64)vr$95 != 0ll ) goto label$1332;
		label$1333:;
		{
			fb$result$1 = (uint8)98u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1332:;
		int32 vr$99 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"gt.", 4ll );
		if( (int64)vr$99 != 0ll ) goto label$1334;
		label$1335:;
		{
			fb$result$1 = (uint8)98u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1334:;
		int32 vr$103 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"hex$", 5ll );
		if( (int64)vr$103 != 0ll ) goto label$1336;
		label$1337:;
		{
			fb$result$1 = (uint8)163u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1336:;
		int32 vr$107 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"inkey$", 7ll );
		if( (int64)vr$107 != 0ll ) goto label$1338;
		label$1339:;
		{
			fb$result$1 = (uint8)157u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1338:;
		int32 vr$111 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"int", 4ll );
		if( (int64)vr$111 != 0ll ) goto label$1340;
		label$1341:;
		{
			fb$result$1 = (uint8)138u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1340:;
		int32 vr$115 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"left$", 6ll );
		if( (int64)vr$115 != 0ll ) goto label$1342;
		label$1343:;
		{
			fb$result$1 = (uint8)164u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1342:;
		int32 vr$119 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"len", 4ll );
		if( (int64)vr$119 != 0ll ) goto label$1344;
		label$1345:;
		{
			fb$result$1 = (uint8)168u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1344:;
		int32 vr$123 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"log", 4ll );
		if( (int64)vr$123 != 0ll ) goto label$1346;
		label$1347:;
		{
			fb$result$1 = (uint8)173u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1346:;
		int32 vr$127 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"lpeek", 6ll );
		if( (int64)vr$127 != 0ll ) goto label$1348;
		label$1349:;
		{
			fb$result$1 = (uint8)154u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1348:;
		int32 vr$131 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"memtop", 7ll );
		if( (int64)vr$131 != 0ll ) goto label$1350;
		label$1351:;
		{
			fb$result$1 = (uint8)209u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1350:;
		int32 vr$135 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"memlo", 6ll );
		if( (int64)vr$135 != 0ll ) goto label$1352;
		label$1353:;
		{
			fb$result$1 = (uint8)208u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1352:;
		int32 vr$139 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"mid$", 5ll );
		if( (int64)vr$139 != 0ll ) goto label$1354;
		label$1355:;
		{
			fb$result$1 = (uint8)166u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1354:;
		int32 vr$143 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"mousek", 7ll );
		if( (int64)vr$143 != 0ll ) goto label$1356;
		label$1357:;
		{
			fb$result$1 = (uint8)102u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1356:;
		int32 vr$147 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"mousew", 7ll );
		if( (int64)vr$147 != 0ll ) goto label$1358;
		label$1359:;
		{
			fb$result$1 = (uint8)103u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1358:;
		int32 vr$151 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"mousex", 7ll );
		if( (int64)vr$151 != 0ll ) goto label$1360;
		label$1361:;
		{
			fb$result$1 = (uint8)100u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1360:;
		int32 vr$155 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"mousey", 7ll );
		if( (int64)vr$155 != 0ll ) goto label$1362;
		label$1363:;
		{
			fb$result$1 = (uint8)101u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1362:;
		int32 vr$159 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"pads", 5ll );
		if( (int64)vr$159 != 0ll ) goto label$1364;
		label$1365:;
		{
			fb$result$1 = (uint8)213u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1364:;
		int32 vr$163 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padw", 5ll );
		if( (int64)vr$163 != 0ll ) goto label$1366;
		label$1367:;
		{
			fb$result$1 = (uint8)214u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1366:;
		int32 vr$167 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padx", 5ll );
		if( (int64)vr$167 != 0ll ) goto label$1368;
		label$1369:;
		{
			fb$result$1 = (uint8)200u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1368:;
		int32 vr$171 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"pady", 5ll );
		if( (int64)vr$171 != 0ll ) goto label$1370;
		label$1371:;
		{
			fb$result$1 = (uint8)201u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1370:;
		int32 vr$175 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padz", 5ll );
		if( (int64)vr$175 != 0ll ) goto label$1372;
		label$1373:;
		{
			fb$result$1 = (uint8)202u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1372:;
		int32 vr$179 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padrx", 6ll );
		if( (int64)vr$179 != 0ll ) goto label$1374;
		label$1375:;
		{
			fb$result$1 = (uint8)204u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1374:;
		int32 vr$183 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padry", 6ll );
		if( (int64)vr$183 != 0ll ) goto label$1376;
		label$1377:;
		{
			fb$result$1 = (uint8)205u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1376:;
		int32 vr$187 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padrz", 6ll );
		if( (int64)vr$187 != 0ll ) goto label$1378;
		label$1379:;
		{
			fb$result$1 = (uint8)206u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1378:;
		int32 vr$191 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"padh", 5ll );
		if( (int64)vr$191 != 0ll ) goto label$1380;
		label$1381:;
		{
			fb$result$1 = (uint8)203u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1380:;
		int32 vr$195 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"peek", 5ll );
		if( (int64)vr$195 != 0ll ) goto label$1382;
		label$1383:;
		{
			fb$result$1 = (uint8)152u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1382:;
		int32 vr$199 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"pinread", 8ll );
		if( (int64)vr$199 != 0ll ) goto label$1384;
		label$1385:;
		{
			fb$result$1 = (uint8)123u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1384:;
		int32 vr$203 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"rdpin", 6ll );
		if( (int64)vr$203 != 0ll ) goto label$1386;
		label$1387:;
		{
			fb$result$1 = (uint8)118u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1386:;
		int32 vr$207 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"right$", 7ll );
		if( (int64)vr$207 != 0ll ) goto label$1388;
		label$1389:;
		{
			fb$result$1 = (uint8)165u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1388:;
		int32 vr$211 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"rqpin", 6ll );
		if( (int64)vr$211 != 0ll ) goto label$1390;
		label$1391:;
		{
			fb$result$1 = (uint8)122u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1390:;
		int32 vr$215 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"round", 6ll );
		if( (int64)vr$215 != 0ll ) goto label$1392;
		label$1393:;
		{
			fb$result$1 = (uint8)191u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1392:;
		int32 vr$219 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"rnd", 4ll );
		if( (int64)vr$219 != 0ll ) goto label$1394;
		label$1395:;
		{
			fb$result$1 = (uint8)84u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1394:;
		int32 vr$223 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"sin", 4ll );
		if( (int64)vr$223 != 0ll ) goto label$1396;
		label$1397:;
		{
			fb$result$1 = (uint8)107u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1396:;
		int32 vr$227 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"sqr", 4ll );
		if( (int64)vr$227 != 0ll ) goto label$1398;
		label$1399:;
		{
			fb$result$1 = (uint8)135u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1398:;
		int32 vr$231 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"stick", 6ll );
		if( (int64)vr$231 != 0ll ) goto label$1400;
		label$1401:;
		{
			fb$result$1 = (uint8)106u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1400:;
		int32 vr$235 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"strig", 6ll );
		if( (int64)vr$235 != 0ll ) goto label$1402;
		label$1403:;
		{
			fb$result$1 = (uint8)110u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1402:;
		int32 vr$239 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"str$", 5ll );
		if( (int64)vr$239 != 0ll ) goto label$1404;
		label$1405:;
		{
			fb$result$1 = (uint8)161u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1404:;
		int32 vr$243 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"tan", 4ll );
		if( (int64)vr$243 != 0ll ) goto label$1406;
		label$1407:;
		{
			fb$result$1 = (uint8)131u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1406:;
		int32 vr$247 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"val", 4ll );
		if( (int64)vr$247 != 0ll ) goto label$1408;
		label$1409:;
		{
			fb$result$1 = (uint8)160u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1408:;
		int32 vr$251 = fb_StrCompare( (void*)&TMP$512$2, -1ll, (void*)"varptr", 7ll );
		if( (int64)vr$251 != 0ll ) goto label$1410;
		label$1411:;
		{
			fb$result$1 = (uint8)155u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		goto label$1285;
		label$1410:;
		{
			fb$result$1 = (uint8)0u;
			fb_StrDelete( (FBSTRING*)&TMP$512$2 );
			goto label$1284;
		}
		label$1412:;
		label$1285:;
		fb_StrDelete( (FBSTRING*)&TMP$512$2 );
	}
	label$1284:;
	return fb$result$1;
}

boolean ISNAME( FBSTRING* S$1 )
{
	int64 TMP$576$1;
	int64 TMP$577$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1413:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	int64 vr$4 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$4;
	if( L$1 != 0ll ) goto label$1416;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1414;
		label$1416:;
	}
	FBSTRING* vr$6 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$6, -1ll, 0 );
	int32 vr$9 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
	if( (int64)vr$9 < 0ll ) goto label$1417;
	int32 vr$12 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
	TMP$576$1 = (int64)-((int64)vr$12 > 0ll);
	goto label$1445;
	label$1417:;
	TMP$576$1 = -1ll;
	label$1445:;
	if( TMP$576$1 == 0ll ) goto label$1418;
	int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
	TMP$577$1 = (int64)-((int64)vr$16 != 0ll);
	goto label$1446;
	label$1418:;
	TMP$577$1 = 0ll;
	label$1446:;
	if( TMP$577$1 == 0ll ) goto label$1420;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1414;
		label$1420:;
	}
	if( L$1 <= 2ll ) goto label$1422;
	{
		{
			I$1 = 2ll;
			int64 TMP$578$3;
			TMP$578$3 = L$1;
			goto label$1423;
			label$1426:;
			{
				int64 TMP$579$4;
				int64 TMP$580$4;
				int64 TMP$581$4;
				int64 TMP$582$4;
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
				FBSTRING* vr$20 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$20, -1ll, 0 );
				if( I$1 >= L$1 ) goto label$1428;
				int32 vr$23 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$23 < 0ll ) goto label$1427;
				int32 vr$26 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
				TMP$579$4 = (int64)-((int64)vr$26 > 0ll);
				goto label$1448;
				label$1427:;
				TMP$579$4 = -1ll;
				label$1448:;
				TMP$580$4 = (int64)-(TMP$579$4 != 0ll);
				goto label$1447;
				label$1428:;
				TMP$580$4 = 0ll;
				label$1447:;
				if( TMP$580$4 == 0ll ) goto label$1430;
				int32 vr$31 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$31 < 0ll ) goto label$1429;
				int32 vr$34 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$581$4 = (int64)-((int64)vr$34 > 0ll);
				goto label$1450;
				label$1429:;
				TMP$581$4 = -1ll;
				label$1450:;
				TMP$582$4 = (int64)-(TMP$581$4 != 0ll);
				goto label$1449;
				label$1430:;
				TMP$582$4 = 0ll;
				label$1449:;
				if( TMP$582$4 == 0ll ) goto label$1431;
				int32 vr$39 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$583$4 = (int64)-((int64)vr$39 != 0ll);
				goto label$1451;
				label$1431:;
				TMP$583$4 = 0ll;
				label$1451:;
				if( TMP$583$4 == 0ll ) goto label$1432;
				int32 vr$43 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				TMP$584$4 = (int64)-((int64)vr$43 != 0ll);
				goto label$1452;
				label$1432:;
				TMP$584$4 = 0ll;
				label$1452:;
				if( TMP$584$4 == 0ll ) goto label$1434;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1414;
					label$1434:;
				}
				if( I$1 != L$1 ) goto label$1436;
				int32 vr$48 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$48 < 0ll ) goto label$1435;
				int32 vr$51 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"z", 2ll );
				TMP$585$4 = (int64)-((int64)vr$51 > 0ll);
				goto label$1454;
				label$1435:;
				TMP$585$4 = -1ll;
				label$1454:;
				TMP$586$4 = (int64)-(TMP$585$4 != 0ll);
				goto label$1453;
				label$1436:;
				TMP$586$4 = 0ll;
				label$1453:;
				if( TMP$586$4 == 0ll ) goto label$1438;
				int32 vr$56 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$56 < 0ll ) goto label$1437;
				int32 vr$59 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$587$4 = (int64)-((int64)vr$59 > 0ll);
				goto label$1456;
				label$1437:;
				TMP$587$4 = -1ll;
				label$1456:;
				TMP$588$4 = (int64)-(TMP$587$4 != 0ll);
				goto label$1455;
				label$1438:;
				TMP$588$4 = 0ll;
				label$1455:;
				if( TMP$588$4 == 0ll ) goto label$1439;
				int32 vr$64 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$589$4 = (int64)-((int64)vr$64 != 0ll);
				goto label$1457;
				label$1439:;
				TMP$589$4 = 0ll;
				label$1457:;
				if( TMP$589$4 == 0ll ) goto label$1440;
				int32 vr$68 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
				TMP$590$4 = (int64)-((int64)vr$68 != 0ll);
				goto label$1458;
				label$1440:;
				TMP$590$4 = 0ll;
				label$1458:;
				if( TMP$590$4 == 0ll ) goto label$1441;
				int32 vr$72 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
				TMP$591$4 = (int64)-((int64)vr$72 != 0ll);
				goto label$1459;
				label$1441:;
				TMP$591$4 = 0ll;
				label$1459:;
				if( TMP$591$4 == 0ll ) goto label$1442;
				int32 vr$76 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"!", 2ll );
				TMP$592$4 = (int64)-((int64)vr$76 != 0ll);
				goto label$1460;
				label$1442:;
				TMP$592$4 = 0ll;
				label$1460:;
				if( TMP$592$4 == 0ll ) goto label$1444;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1414;
					label$1444:;
				}
			}
			label$1424:;
			I$1 = I$1 + 1ll;
			label$1423:;
			if( I$1 <= TMP$578$3 ) goto label$1426;
			label$1425:;
		}
	}
	label$1422:;
	label$1421:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1414;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1414:;
	return fb$result$1;
}

boolean ISNUM( FBSTRING* S$1 )
{
	int64 TMP$593$1;
	int64 TMP$594$1;
	int64 TMP$595$1;
	int64 TMP$596$1;
	int64 TMP$597$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1461:;
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
	if( L$1 != 0ll ) goto label$1464;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1462;
		label$1464:;
	}
	FBSTRING* vr$11 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$11, -1ll, 0 );
	int32 vr$14 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
	if( (int64)vr$14 < 0ll ) goto label$1465;
	int32 vr$17 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
	TMP$593$1 = (int64)-((int64)vr$17 > 0ll);
	goto label$1517;
	label$1465:;
	TMP$593$1 = -1ll;
	label$1517:;
	if( TMP$593$1 == 0ll ) goto label$1466;
	int32 vr$21 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
	TMP$594$1 = (int64)-((int64)vr$21 != 0ll);
	goto label$1518;
	label$1466:;
	TMP$594$1 = 0ll;
	label$1518:;
	if( TMP$594$1 == 0ll ) goto label$1467;
	int32 vr$25 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	TMP$595$1 = (int64)-((int64)vr$25 != 0ll);
	goto label$1519;
	label$1467:;
	TMP$595$1 = 0ll;
	label$1519:;
	if( TMP$595$1 == 0ll ) goto label$1468;
	int32 vr$29 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	TMP$596$1 = (int64)-((int64)vr$29 != 0ll);
	goto label$1520;
	label$1468:;
	TMP$596$1 = 0ll;
	label$1520:;
	if( TMP$596$1 == 0ll ) goto label$1469;
	int32 vr$33 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
	TMP$597$1 = (int64)-((int64)vr$33 != 0ll);
	goto label$1521;
	label$1469:;
	TMP$597$1 = 0ll;
	label$1521:;
	if( TMP$597$1 == 0ll ) goto label$1471;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1462;
		label$1471:;
	}
	int32 vr$38 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
	if( (int64)vr$38 != 0ll ) goto label$1473;
	{
		DS$1 = 1ll;
		label$1473:;
	}
	int32 vr$41 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	if( (int64)vr$41 != 0ll ) goto label$1475;
	{
		HEX_$1 = 1ll;
	}
	goto label$1474;
	label$1475:;
	{
		HEX_$1 = 0ll;
		label$1474:;
	}
	int32 vr$44 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	if( (int64)vr$44 != 0ll ) goto label$1477;
	{
		BIN_$1 = 1ll;
	}
	goto label$1476;
	label$1477:;
	{
		BIN_$1 = 0ll;
		label$1476:;
	}
	if( L$1 <= 1ll ) goto label$1479;
	{
		{
			I$1 = 2ll;
			int64 TMP$598$3;
			TMP$598$3 = L$1;
			goto label$1480;
			label$1483:;
			{
				int64 TMP$599$4;
				int64 TMP$600$4;
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
				FBSTRING* vr$46 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$46, -1ll, 0 );
				B$1 = 0ll;
				int32 vr$49 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$49 < 0ll ) goto label$1484;
				int32 vr$52 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$599$4 = (int64)-((int64)vr$52 <= 0ll);
				goto label$1522;
				label$1484:;
				TMP$599$4 = 0ll;
				label$1522:;
				if( TMP$599$4 == 0ll ) goto label$1486;
				{
					B$1 = -1ll;
					label$1486:;
				}
				int32 vr$56 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				if( (int64)vr$56 == 0ll ) goto label$1487;
				int32 vr$59 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				TMP$600$4 = (int64)-((int64)vr$59 == 0ll);
				goto label$1523;
				label$1487:;
				TMP$600$4 = -1ll;
				label$1523:;
				if( TMP$600$4 != 0ll ) goto label$1488;
				int32 vr$63 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"E", 2ll );
				TMP$601$4 = (int64)-((int64)vr$63 == 0ll);
				goto label$1524;
				label$1488:;
				TMP$601$4 = -1ll;
				label$1524:;
				if( TMP$601$4 != 0ll ) goto label$1489;
				int32 vr$67 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"e", 2ll );
				TMP$602$4 = (int64)-((int64)vr$67 == 0ll);
				goto label$1525;
				label$1489:;
				TMP$602$4 = -1ll;
				label$1525:;
				if( TMP$602$4 != 0ll ) goto label$1490;
				int32 vr$71 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
				TMP$603$4 = (int64)-((int64)vr$71 == 0ll);
				goto label$1526;
				label$1490:;
				TMP$603$4 = -1ll;
				label$1526:;
				if( TMP$603$4 == 0ll ) goto label$1492;
				{
					B$1 = -1ll;
					label$1492:;
				}
				if( HEX_$1 != 1ll ) goto label$1493;
				int32 vr$75 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				TMP$604$4 = (int64)-((int64)vr$75 >= 0ll);
				goto label$1527;
				label$1493:;
				TMP$604$4 = 0ll;
				label$1527:;
				if( TMP$604$4 == 0ll ) goto label$1494;
				int32 vr$79 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"f", 2ll );
				TMP$605$4 = (int64)-((int64)vr$79 <= 0ll);
				goto label$1528;
				label$1494:;
				TMP$605$4 = 0ll;
				label$1528:;
				if( TMP$605$4 == 0ll ) goto label$1496;
				{
					B$1 = -1ll;
					label$1496:;
				}
				if( BIN_$1 != 1ll ) goto label$1498;
				int32 vr$83 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$83 < 0ll ) goto label$1497;
				int32 vr$86 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"1", 2ll );
				TMP$606$4 = (int64)-((int64)vr$86 > 0ll);
				goto label$1530;
				label$1497:;
				TMP$606$4 = -1ll;
				label$1530:;
				TMP$607$4 = (int64)-(TMP$606$4 != 0ll);
				goto label$1529;
				label$1498:;
				TMP$607$4 = 0ll;
				label$1529:;
				if( TMP$607$4 == 0ll ) goto label$1499;
				int32 vr$91 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$608$4 = (int64)-((int64)vr$91 != 0ll);
				goto label$1531;
				label$1499:;
				TMP$608$4 = 0ll;
				label$1531:;
				if( TMP$608$4 == 0ll ) goto label$1501;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1462;
					label$1501:;
				}
				if( ~B$1 == 0ll ) goto label$1503;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1462;
					label$1503:;
				}
				int32 vr$98 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
				if( (int64)vr$98 != 0ll ) goto label$1504;
				FBSTRING* vr$101 = fb_StrMid( (FBSTRING*)S$1, I$1 + -1ll, 1ll );
				FBSTRING* vr$102 = fb_StrLcase2( (FBSTRING*)vr$101, 0 );
				int32 vr$103 = fb_StrCompare( (void*)vr$102, -1ll, (void*)"e", 2ll );
				TMP$609$4 = (int64)-((int64)vr$103 != 0ll);
				goto label$1532;
				label$1504:;
				TMP$609$4 = 0ll;
				label$1532:;
				if( TMP$609$4 == 0ll ) goto label$1506;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1462;
					label$1506:;
				}
				int32 vr$108 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)".", 2ll );
				if( (int64)vr$108 != 0ll ) goto label$1508;
				{
					DS$1 = DS$1 + 1ll;
					if( DS$1 <= 1ll ) goto label$1510;
					{
						fb$result$1 = (boolean)0ll;
						fb_StrDelete( (FBSTRING*)&M_$1 );
						goto label$1462;
						label$1510:;
					}
					label$1508:;
				}
				int32 vr$113 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"E", 2ll );
				if( (int64)vr$113 == 0ll ) goto label$1511;
				int32 vr$116 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"e", 2ll );
				TMP$610$4 = (int64)-((int64)vr$116 == 0ll);
				goto label$1533;
				label$1511:;
				TMP$610$4 = -1ll;
				label$1533:;
				if( TMP$610$4 == 0ll ) goto label$1513;
				{
					int64 TMP$611$5;
					ES$1 = ES$1 + 1ll;
					if( HEX_$1 != 0ll ) goto label$1514;
					TMP$611$5 = (int64)-(ES$1 > 1ll);
					goto label$1534;
					label$1514:;
					TMP$611$5 = 0ll;
					label$1534:;
					if( TMP$611$5 == 0ll ) goto label$1516;
					{
						fb$result$1 = (boolean)0ll;
						fb_StrDelete( (FBSTRING*)&M_$1 );
						goto label$1462;
						label$1516:;
					}
					label$1513:;
				}
			}
			label$1481:;
			I$1 = I$1 + 1ll;
			label$1480:;
			if( I$1 <= TMP$598$3 ) goto label$1483;
			label$1482:;
		}
	}
	label$1479:;
	label$1478:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1462;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1462:;
	return fb$result$1;
}

boolean ISINT( FBSTRING* S$1 )
{
	int64 TMP$612$1;
	int64 TMP$613$1;
	int64 TMP$614$1;
	int64 TMP$615$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1535:;
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
	if( L$1 != 0ll ) goto label$1538;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1536;
		label$1538:;
	}
	FBSTRING* vr$10 = fb_StrMid( (FBSTRING*)S$1, 1ll, 1ll );
	fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$10, -1ll, 0 );
	int32 vr$13 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
	if( (int64)vr$13 < 0ll ) goto label$1539;
	int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
	TMP$612$1 = (int64)-((int64)vr$16 > 0ll);
	goto label$1572;
	label$1539:;
	TMP$612$1 = -1ll;
	label$1572:;
	if( TMP$612$1 == 0ll ) goto label$1540;
	int32 vr$20 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	TMP$613$1 = (int64)-((int64)vr$20 != 0ll);
	goto label$1573;
	label$1540:;
	TMP$613$1 = 0ll;
	label$1573:;
	if( TMP$613$1 == 0ll ) goto label$1541;
	int32 vr$24 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	TMP$614$1 = (int64)-((int64)vr$24 != 0ll);
	goto label$1574;
	label$1541:;
	TMP$614$1 = 0ll;
	label$1574:;
	if( TMP$614$1 == 0ll ) goto label$1542;
	int32 vr$28 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"-", 2ll );
	TMP$615$1 = (int64)-((int64)vr$28 != 0ll);
	goto label$1575;
	label$1542:;
	TMP$615$1 = 0ll;
	label$1575:;
	if( TMP$615$1 == 0ll ) goto label$1544;
	{
		fb$result$1 = (boolean)0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1536;
		label$1544:;
	}
	int32 vr$33 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"$", 2ll );
	if( (int64)vr$33 != 0ll ) goto label$1546;
	{
		HEX_$1 = 1ll;
	}
	goto label$1545;
	label$1546:;
	{
		HEX_$1 = 0ll;
		label$1545:;
	}
	int32 vr$36 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"%", 2ll );
	if( (int64)vr$36 != 0ll ) goto label$1548;
	{
		BIN_$1 = 1ll;
	}
	goto label$1547;
	label$1548:;
	{
		BIN_$1 = 0ll;
		label$1547:;
	}
	if( L$1 <= 1ll ) goto label$1550;
	{
		{
			I$1 = 2ll;
			int64 TMP$616$3;
			TMP$616$3 = L$1;
			goto label$1551;
			label$1554:;
			{
				int64 TMP$617$4;
				int64 TMP$618$4;
				int64 TMP$619$4;
				int64 TMP$620$4;
				int64 TMP$621$4;
				int64 TMP$622$4;
				int64 TMP$623$4;
				int64 TMP$624$4;
				int64 TMP$625$4;
				int64 TMP$626$4;
				int64 TMP$627$4;
				FBSTRING* vr$38 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
				fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$38, -1ll, 0 );
				if( HEX_$1 != 0ll ) goto label$1556;
				int32 vr$41 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$41 < 0ll ) goto label$1555;
				int32 vr$44 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$617$4 = (int64)-((int64)vr$44 > 0ll);
				goto label$1577;
				label$1555:;
				TMP$617$4 = -1ll;
				label$1577:;
				TMP$618$4 = (int64)-(TMP$617$4 != 0ll);
				goto label$1576;
				label$1556:;
				TMP$618$4 = 0ll;
				label$1576:;
				if( TMP$618$4 == 0ll ) goto label$1557;
				int32 vr$49 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$619$4 = (int64)-((int64)vr$49 != 0ll);
				goto label$1578;
				label$1557:;
				TMP$619$4 = 0ll;
				label$1578:;
				if( TMP$619$4 == 0ll ) goto label$1559;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1536;
					label$1559:;
				}
				if( HEX_$1 != 1ll ) goto label$1561;
				int32 vr$54 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$54 < 0ll ) goto label$1560;
				int32 vr$57 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
				TMP$620$4 = (int64)-((int64)vr$57 > 0ll);
				goto label$1580;
				label$1560:;
				TMP$620$4 = -1ll;
				label$1580:;
				TMP$621$4 = (int64)-(TMP$620$4 != 0ll);
				goto label$1579;
				label$1561:;
				TMP$621$4 = 0ll;
				label$1579:;
				if( TMP$621$4 == 0ll ) goto label$1563;
				int32 vr$62 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"a", 2ll );
				if( (int64)vr$62 < 0ll ) goto label$1562;
				int32 vr$65 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"f", 2ll );
				TMP$622$4 = (int64)-((int64)vr$65 > 0ll);
				goto label$1582;
				label$1562:;
				TMP$622$4 = -1ll;
				label$1582:;
				TMP$623$4 = (int64)-(TMP$622$4 != 0ll);
				goto label$1581;
				label$1563:;
				TMP$623$4 = 0ll;
				label$1581:;
				if( TMP$623$4 == 0ll ) goto label$1564;
				int32 vr$70 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$624$4 = (int64)-((int64)vr$70 != 0ll);
				goto label$1583;
				label$1564:;
				TMP$624$4 = 0ll;
				label$1583:;
				if( TMP$624$4 == 0ll ) goto label$1566;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1536;
					label$1566:;
				}
				if( BIN_$1 != 1ll ) goto label$1568;
				int32 vr$75 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
				if( (int64)vr$75 < 0ll ) goto label$1567;
				int32 vr$78 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"1", 2ll );
				TMP$625$4 = (int64)-((int64)vr$78 > 0ll);
				goto label$1585;
				label$1567:;
				TMP$625$4 = -1ll;
				label$1585:;
				TMP$626$4 = (int64)-(TMP$625$4 != 0ll);
				goto label$1584;
				label$1568:;
				TMP$626$4 = 0ll;
				label$1584:;
				if( TMP$626$4 == 0ll ) goto label$1569;
				int32 vr$83 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
				TMP$627$4 = (int64)-((int64)vr$83 != 0ll);
				goto label$1586;
				label$1569:;
				TMP$627$4 = 0ll;
				label$1586:;
				if( TMP$627$4 == 0ll ) goto label$1571;
				{
					fb$result$1 = (boolean)0ll;
					fb_StrDelete( (FBSTRING*)&M_$1 );
					goto label$1536;
					label$1571:;
				}
			}
			label$1552:;
			I$1 = I$1 + 1ll;
			label$1551:;
			if( I$1 <= TMP$616$3 ) goto label$1554;
			label$1553:;
		}
	}
	label$1550:;
	label$1549:;
	fb$result$1 = (boolean)1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1536;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1536:;
	return fb$result$1;
}

int64 ISDEC( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1587:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	FBSTRING M_$1;
	__builtin_memset( &M_$1, 0, 24ll );
	int64 vr$4 = fb_StrLen( (void*)S$1, -1ll );
	L$1 = vr$4;
	if( L$1 != 0ll ) goto label$1590;
	{
		fb$result$1 = 0ll;
		fb_StrDelete( (FBSTRING*)&M_$1 );
		goto label$1588;
		label$1590:;
	}
	{
		I$1 = 1ll;
		int64 TMP$628$2;
		TMP$628$2 = L$1;
		goto label$1591;
		label$1594:;
		{
			int64 TMP$629$3;
			int64 TMP$630$3;
			FBSTRING* vr$6 = fb_StrMid( (FBSTRING*)S$1, I$1, 1ll );
			fb_StrAssign( (void*)&M_$1, -1ll, (void*)vr$6, -1ll, 0 );
			int32 vr$9 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"0", 2ll );
			if( (int64)vr$9 < 0ll ) goto label$1595;
			int32 vr$12 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"9", 2ll );
			TMP$629$3 = (int64)-((int64)vr$12 > 0ll);
			goto label$1599;
			label$1595:;
			TMP$629$3 = -1ll;
			label$1599:;
			if( TMP$629$3 == 0ll ) goto label$1596;
			int32 vr$16 = fb_StrCompare( (void*)&M_$1, -1ll, (void*)"_", 2ll );
			TMP$630$3 = (int64)-((int64)vr$16 != 0ll);
			goto label$1600;
			label$1596:;
			TMP$630$3 = 0ll;
			label$1600:;
			if( TMP$630$3 == 0ll ) goto label$1598;
			{
				fb$result$1 = 0ll;
				fb_StrDelete( (FBSTRING*)&M_$1 );
				goto label$1588;
				label$1598:;
			}
		}
		label$1592:;
		I$1 = I$1 + 1ll;
		label$1591:;
		if( I$1 <= TMP$628$2 ) goto label$1594;
		label$1593:;
	}
	fb$result$1 = 1ll;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	goto label$1588;
	fb_StrDelete( (FBSTRING*)&M_$1 );
	label$1588:;
	return fb$result$1;
}

boolean ISSTRING( FBSTRING* S$1 )
{
	int64 TMP$631$1;
	boolean fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1601:;
	FBSTRING* vr$1 = fb_LEFT( (FBSTRING*)S$1, 1ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)"\x22", 2ll );
	if( (int64)vr$2 != 0ll ) goto label$1603;
	FBSTRING* vr$4 = fb_RIGHT( (FBSTRING*)S$1, 1ll );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"\x22", 2ll );
	TMP$631$1 = (int64)-((int64)vr$5 == 0ll);
	goto label$1606;
	label$1603:;
	TMP$631$1 = 0ll;
	label$1606:;
	if( TMP$631$1 == 0ll ) goto label$1605;
	{
		fb$result$1 = (boolean)1ll;
		goto label$1602;
	}
	goto label$1604;
	label$1605:;
	{
		fb$result$1 = (boolean)0ll;
		goto label$1602;
		label$1604:;
	}
	label$1602:;
	return fb$result$1;
}

float GETNOTEVAL( int64 TOKEN$1 )
{
	float fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1607:;
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
	goto label$1608;
	label$1608:;
	return fb$result$1;
}

void PSLPOKE( uint32 A$1, uint32 V$1 )
{
	label$1609:;
	*(uint32*)((uint8*)&MACHINE$ + (((int64)A$1 >> (2ll & 63ll)) << (2ll & 63ll))) = V$1;
	label$1610:;
}

uint32 PSLPEEK( uint32 A$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1611:;
	fb$result$1 = *(uint32*)((uint8*)&MACHINE$ + (((int64)A$1 >> (2ll & 63ll)) << (2ll & 63ll)));
	goto label$1612;
	label$1612:;
	return fb$result$1;
}

void PSDPOKE( uint32 A$1, uint16 V$1 )
{
	label$1613:;
	*(uint32*)((uint8*)&MACHINE$ + (((int64)A$1 >> (1ll & 63ll)) << (2ll & 63ll))) = (uint32)V$1;
	label$1614:;
}

uint16 PSDPEEK( uint32 A$1 )
{
	uint16 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 2ll );
	label$1615:;
	fb$result$1 = *(uint16*)((uint8*)&MACHINE$ + (((int64)A$1 >> (1ll & 63ll)) << (1ll & 63ll)));
	goto label$1616;
	label$1616:;
	return fb$result$1;
}

void PSPOKE( uint32 A$1, uint8 V$1 )
{
	label$1617:;
	*(uint8*)((uint8*)&MACHINE$ + (int64)A$1) = V$1;
	label$1618:;
}

uint8 PSPEEK( uint32 A$1 )
{
	uint8 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 1ll );
	label$1619:;
	fb$result$1 = *(uint8*)((uint8*)&MACHINE$ + (int64)A$1);
	goto label$1620;
	label$1620:;
	return fb$result$1;
}

int64 DELETELINE( uint32 ALINE$1 )
{
	int64 TMP$633$1;
	int64 TMP$634$1;
	int64 TMP$635$1;
	int64 TMP$636$1;
	int64 TMP$637$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1621:;
	uint32 LINEPTR2$1;
	__builtin_memset( &LINEPTR2$1, 0, 4ll );
	uint32 OLDSEARCHPTR$1;
	__builtin_memset( &OLDSEARCHPTR$1, 0, 4ll );
	uint32 SEARCHPTR$1;
	__builtin_memset( &SEARCHPTR$1, 0, 4ll );
	uint32 HEADER$1[6];
	__builtin_memset( (uint32*)HEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$632$1;
	*(uint32**)&tmp$632$1 = (uint32*)HEADER$1;
	*(uint32**)((uint8*)&tmp$632$1 + 8ll) = (uint32*)HEADER$1;
	*(int64*)((uint8*)&tmp$632$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$632$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$632$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$632$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$632$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$632$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$632$1 + 64ll) = 5ll;
	SEARCHPTR$1 = PROGRAMSTART$;
	label$1623:;
	{
		memmove( (void*)HEADER$1, (void*)((uint8*)&MACHINE$ + (int64)SEARCHPTR$1), 24ull );
		LINEPTR2$1 = SEARCHPTR$1;
		SEARCHPTR$1 = *(uint32*)((int64)(uint32*)HEADER$1 + 20ll);
	}
	label$1625:;
	if( (int64)*(uint32*)HEADER$1 >= (int64)ALINE$1 ) goto label$1626;
	TMP$633$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) == 2147483647ll);
	goto label$1641;
	label$1626:;
	TMP$633$1 = -1ll;
	label$1641:;
	if( TMP$633$1 == 0ll ) goto label$1623;
	label$1624:;
	if( (int64)*(uint32*)HEADER$1 == (int64)ALINE$1 ) goto label$1628;
	{
		fb$result$1 = -1ll;
		goto label$1622;
		label$1628:;
	}
	PSLPOKE( LINEPTR2$1, 4294967295u );
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) != 2147483647ll ) goto label$1629;
	TMP$634$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) == 4294967295ll);
	goto label$1642;
	label$1629:;
	TMP$634$1 = 0ll;
	label$1642:;
	if( TMP$634$1 == 0ll ) goto label$1631;
	{
		PROGRAMSTART$ = 524288u;
		PROGRAMPTR$ = 524288ll;
		LASTLINE$ = 0u;
		LASTLINEPTR$ = 4294967295u;
		PSLPOKE( 0u, 4294967295u );
		PSLPOKE( 16u, 4294967295u );
		PSLPOKE( 20u, 2147483647u );
		RUNPTR$ = 524288u;
		RUNPTR2$ = 524288u;
	}
	label$1631:;
	label$1630:;
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) != 2147483647ll ) goto label$1632;
	TMP$635$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) != 4294967295ll);
	goto label$1643;
	label$1632:;
	TMP$635$1 = 0ll;
	label$1643:;
	if( TMP$635$1 == 0ll ) goto label$1634;
	{
		PSLPOKE( (uint32)((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) + 20ll), 2147483647u );
		LASTLINEPTR$ = *(uint32*)((int64)(uint32*)HEADER$1 + 16ll);
		uint32 vr$26 = PSLPEEK( *(uint32*)((int64)(uint32*)HEADER$1 + 16ll) );
		LASTLINE$ = vr$26;
		fb$result$1 = 0ll;
		goto label$1622;
	}
	label$1634:;
	label$1633:;
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) == 2147483647ll ) goto label$1635;
	TMP$636$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) == 4294967295ll);
	goto label$1644;
	label$1635:;
	TMP$636$1 = 0ll;
	label$1644:;
	if( TMP$636$1 == 0ll ) goto label$1637;
	{
		PSLPOKE( (uint32)((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) + 16ll), 4294967295u );
		PROGRAMSTART$ = *(uint32*)((int64)(uint32*)HEADER$1 + 20ll);
		fb$result$1 = 0ll;
		goto label$1622;
	}
	label$1637:;
	label$1636:;
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) == 2147483647ll ) goto label$1638;
	TMP$637$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) != 4294967295ll);
	goto label$1645;
	label$1638:;
	TMP$637$1 = 0ll;
	label$1645:;
	if( TMP$637$1 == 0ll ) goto label$1640;
	{
		PSLPOKE( (uint32)((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) + 16ll), *(uint32*)((int64)(uint32*)HEADER$1 + 16ll) );
		PSLPOKE( (uint32)((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) + 20ll), *(uint32*)((int64)(uint32*)HEADER$1 + 20ll) );
		fb$result$1 = 0ll;
		goto label$1622;
	}
	label$1640:;
	label$1639:;
	label$1622:;
	return fb$result$1;
}

void SAVE_LINE( void )
{
	label$1646:;
	uint32 LLENGTH$1;
	__builtin_memset( &LLENGTH$1, 0, 4ll );
	uint32 LLENGTH2$1;
	__builtin_memset( &LLENGTH2$1, 0, 4ll );
	uint32 LLENGTH3$1;
	__builtin_memset( &LLENGTH3$1, 0, 4ll );
	LLENGTH$1 = (uint32)(COMPILEDSLOT$ * (LINEPTR$ + 1ll));
	int64 vr$6 = fb_StrLen( (void*)&FULLLINE_$, -1ll );
	LLENGTH2$1 = (uint32)vr$6;
	if( ((int64)LLENGTH2$1 % 4ll) == 0ll ) goto label$1649;
	{
		LLENGTH2$1 = (uint32)fb_D2L( (((double)(int64)LLENGTH2$1 / 0x1.p+2) * 0x1.p+2) + 0x1.p+2 );
		label$1649:;
	}
	LLENGTH3$1 = (uint32)((int64)LLENGTH$1 + (int64)LLENGTH2$1);
	*(uint32*)((uint8*)&CL$ + 8ll) = (uint32)(PROGRAMPTR$ + (int64)LLENGTH$1);
	*(uint32*)((uint8*)&CL$ + 12ll) = LLENGTH2$1;
	memmove( (void*)((uint8*)&MACHINE$ + PROGRAMPTR$), (void*)&CL$, (uint64)LLENGTH$1 );
	memmove( (void*)((uint8*)&MACHINE$ + (PROGRAMPTR$ + (int64)LLENGTH$1)), (void*)&FULLLINE_$, (uint64)LLENGTH2$1 );
	PROGRAMPTR$ = PROGRAMPTR$ + (int64)LLENGTH3$1;
	label$1647:;
}

int64 INSERTLINE( uint32 ALINE$1 )
{
	int64 TMP$639$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1650:;
	uint32 SEARCHPTR$1;
	__builtin_memset( &SEARCHPTR$1, 0, 4ll );
	uint32 LINEPTR2$1;
	__builtin_memset( &LINEPTR2$1, 0, 4ll );
	SEARCHPTR$1 = PROGRAMSTART$;
	uint32 HEADER$1[6];
	__builtin_memset( (uint32*)HEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$638$1;
	*(uint32**)&tmp$638$1 = (uint32*)HEADER$1;
	*(uint32**)((uint8*)&tmp$638$1 + 8ll) = (uint32*)HEADER$1;
	*(int64*)((uint8*)&tmp$638$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$638$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$638$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$638$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$638$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$638$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$638$1 + 64ll) = 5ll;
	label$1652:;
	{
		memmove( (void*)HEADER$1, (void*)((uint8*)&MACHINE$ + (int64)SEARCHPTR$1), 24ull );
		LINEPTR2$1 = SEARCHPTR$1;
		SEARCHPTR$1 = *(uint32*)((int64)(uint32*)HEADER$1 + 20ll);
	}
	label$1654:;
	if( (int64)*(uint32*)HEADER$1 >= (int64)ALINE$1 ) goto label$1655;
	TMP$639$1 = (int64)-((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) == 2147483647ll);
	goto label$1664;
	label$1655:;
	TMP$639$1 = -1ll;
	label$1664:;
	if( TMP$639$1 == 0ll ) goto label$1652;
	label$1653:;
	if( (int64)*(uint32*)HEADER$1 != (int64)ALINE$1 ) goto label$1657;
	{
		fb$result$1 = -1ll;
		goto label$1651;
		label$1657:;
	}
	if( (int64)*(uint32*)HEADER$1 >= (int64)ALINE$1 ) goto label$1659;
	{
		fb$result$1 = -2ll;
		goto label$1651;
		label$1659:;
	}
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) != 4294967295ll ) goto label$1661;
	{
		PROGRAMSTART$ = (uint32)PROGRAMPTR$;
		PSLPOKE( (uint32)((int64)LINEPTR2$1 + 16ll), (uint32)PROGRAMPTR$ );
		*(uint32*)((uint8*)&CL$ + 16ll) = 4294967295u;
		*(uint32*)((uint8*)&CL$ + 20ll) = LINEPTR2$1;
		SAVE_LINE(  );
		fb$result$1 = 0ll;
		goto label$1651;
	}
	label$1661:;
	label$1660:;
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) == 4294967295ll ) goto label$1663;
	{
		*(uint32*)((uint8*)&CL$ + 16ll) = *(uint32*)((int64)(uint32*)HEADER$1 + 16ll);
		*(uint32*)((uint8*)&CL$ + 20ll) = LINEPTR2$1;
		PSLPOKE( (uint32)((int64)LINEPTR2$1 + 16ll), (uint32)PROGRAMPTR$ );
		PSLPOKE( (uint32)((int64)*(uint32*)((int64)(uint32*)HEADER$1 + 16ll) + 20ll), (uint32)PROGRAMPTR$ );
		SAVE_LINE(  );
		fb$result$1 = 0ll;
		goto label$1651;
	}
	label$1663:;
	label$1662:;
	label$1651:;
	return fb$result$1;
}

void ADD_LINE_AT_END( int64 ALINE$1 )
{
	label$1665:;
	LASTLINE$ = (uint32)ALINE$1;
	*(uint32*)((uint8*)&CL$ + 16ll) = LASTLINEPTR$;
	PSLPOKE( (uint32)((int64)LASTLINEPTR$ + 20ll), (uint32)PROGRAMPTR$ );
	LASTLINEPTR$ = (uint32)PROGRAMPTR$;
	*(uint32*)((uint8*)&CL$ + 20ll) = 2147483647u;
	if( PROGRAMPTR$ != 524288ll ) goto label$1668;
	{
		*(uint32*)((uint8*)&CL$ + 16ll) = 4294967295u;
		label$1668:;
	}
	SAVE_LINE(  );
	PSLPOKE( (uint32)PROGRAMPTR$, 4294967295u );
	label$1666:;
}

void COMPILE_NOTHING( void )
{
	label$1669:;
	label$1670:;
}

uint32 COMPILE_UNKNOWN( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1671:;
	fb$result$1 = 23u;
	goto label$1672;
	label$1672:;
	return fb$result$1;
}

uint32 COMPILE_FUN_1P( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1673:;
	uint32 vr$1 = EXPR(  );
	fb$result$1 = vr$1;
	goto label$1674;
	label$1674:;
	return fb$result$1;
}

uint32 COMPILE_FUN_2P( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1675:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	uint32 vr$2 = EXPR(  );
	ERR_$1 = vr$2;
	int32 vr$3 = fb_ErrorGetNum(  );
	if( (int64)vr$3 <= 0ll ) goto label$1678;
	{
		fb$result$1 = ERR_$1;
		goto label$1676;
		label$1678:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1680;
	{
		fb$result$1 = 21u;
		goto label$1676;
	}
	goto label$1679;
	label$1680:;
	{
		CT$ = CT$ + 1ll;
		label$1679:;
	}
	uint32 vr$7 = EXPR(  );
	ERR_$1 = vr$7;
	int32 vr$8 = fb_ErrorGetNum(  );
	if( (int64)vr$8 <= 0ll ) goto label$1682;
	{
		fb$result$1 = ERR_$1;
		goto label$1676;
		label$1682:;
	}
	fb$result$1 = 0u;
	goto label$1676;
	label$1676:;
	return fb$result$1;
}

uint32 COMPILE_FUN_3P( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1683:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	uint32 vr$2 = EXPR(  );
	ERR_$1 = vr$2;
	if( (int64)ERR_$1 <= 0ll ) goto label$1686;
	{
		fb$result$1 = ERR_$1;
		goto label$1684;
		label$1686:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1688;
	{
		fb$result$1 = 21u;
		goto label$1684;
	}
	goto label$1687;
	label$1688:;
	{
		CT$ = CT$ + 1ll;
		label$1687:;
	}
	uint32 vr$6 = EXPR(  );
	ERR_$1 = vr$6;
	if( (int64)ERR_$1 <= 0ll ) goto label$1690;
	{
		fb$result$1 = ERR_$1;
		goto label$1684;
		label$1690:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1692;
	{
		fb$result$1 = 21u;
		goto label$1684;
	}
	goto label$1691;
	label$1692:;
	{
		CT$ = CT$ + 1ll;
		label$1691:;
	}
	uint32 vr$10 = EXPR(  );
	ERR_$1 = vr$10;
	if( (int64)ERR_$1 <= 0ll ) goto label$1694;
	{
		fb$result$1 = ERR_$1;
		goto label$1684;
		label$1694:;
	}
	fb$result$1 = 0u;
	goto label$1684;
	label$1684:;
	return fb$result$1;
}

uint32 COMPILE_FUN_4P( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1695:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	uint32 vr$2 = EXPR(  );
	ERR_$1 = vr$2;
	if( (int64)ERR_$1 <= 0ll ) goto label$1698;
	{
		fb$result$1 = ERR_$1;
		goto label$1696;
		label$1698:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1700;
	{
		fb$result$1 = 21u;
		goto label$1696;
	}
	goto label$1699;
	label$1700:;
	{
		CT$ = CT$ + 1ll;
		label$1699:;
	}
	uint32 vr$6 = EXPR(  );
	ERR_$1 = vr$6;
	if( (int64)ERR_$1 <= 0ll ) goto label$1702;
	{
		fb$result$1 = ERR_$1;
		goto label$1696;
		label$1702:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1704;
	{
		fb$result$1 = 21u;
		goto label$1696;
	}
	goto label$1703;
	label$1704:;
	{
		CT$ = CT$ + 1ll;
		label$1703:;
	}
	uint32 vr$10 = EXPR(  );
	ERR_$1 = vr$10;
	if( (int64)ERR_$1 <= 0ll ) goto label$1706;
	{
		fb$result$1 = ERR_$1;
		goto label$1696;
		label$1706:;
	}
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1708;
	{
		fb$result$1 = 21u;
		goto label$1696;
	}
	goto label$1707;
	label$1708:;
	{
		CT$ = CT$ + 1ll;
		label$1707:;
	}
	uint32 vr$14 = EXPR(  );
	ERR_$1 = vr$14;
	if( (int64)ERR_$1 <= 0ll ) goto label$1710;
	{
		fb$result$1 = ERR_$1;
		goto label$1696;
		label$1710:;
	}
	fb$result$1 = 0u;
	goto label$1696;
	label$1696:;
	return fb$result$1;
}

struct $8C_RESULT COMPILE_FUN_VARP( void )
{
	struct $8C_RESULT fb$result$1;
	__builtin_memset( &fb$result$1, 0, 16ll );
	label$1711:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	struct $8C_RESULT CR$1;
	__builtin_memset( &CR$1, 0, 16ll );
	I$1 = 0ll;
	ERR_$1 = 0ll;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll ) goto label$1714;
	{
		label$1715:;
		{
			EXPR(  );
			I$1 = I$1 + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll ) goto label$1719;
			{
				CT$ = CT$ + 1ll;
				label$1719:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1721;
			{
				goto label$1716;
				label$1721:;
			}
		}
		label$1717:;
		goto label$1715;
		label$1716:;
	}
	label$1714:;
	label$1713:;
	*(int64*)&CR$1 = I$1;
	*(int64*)((uint8*)&CR$1 + 8ll) = ERR_$1;
	__builtin_memcpy( &fb$result$1, &CR$1, 16 );
	goto label$1712;
	label$1712:;
	return fb$result$1;
}

struct $8C_RESULT COMPILE_READ( void )
{
	struct $8C_RESULT fb$result$1;
	__builtin_memset( &fb$result$1, 0, 16ll );
	label$1722:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	int64 OLDLINEPTR$1;
	__builtin_memset( &OLDLINEPTR$1, 0, 8ll );
	struct $8C_RESULT CR$1;
	__builtin_memset( &CR$1, 0, 16ll );
	I$1 = 0ll;
	ERR_$1 = 0ll;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll ) goto label$1725;
	{
		label$1726:;
		{
			uint32 vr$7 = GETADDR(  );
			ERR_$1 = (int64)vr$7;
			CT$ = CT$ + 1ll;
			I$1 = I$1 + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll ) goto label$1730;
			{
				CT$ = CT$ + 1ll;
				label$1730:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1732;
			{
				goto label$1727;
				label$1732:;
			}
		}
		label$1728:;
		goto label$1726;
		label$1727:;
	}
	goto label$1724;
	label$1725:;
	{
		ERR_$1 = 54ll;
	}
	label$1724:;
	*(int64*)&CR$1 = I$1;
	*(int64*)((uint8*)&CR$1 + 8ll) = ERR_$1;
	__builtin_memcpy( &fb$result$1, &CR$1, 16 );
	goto label$1723;
	label$1723:;
	return fb$result$1;
}

struct $8C_RESULT COMPILE_INPUT( void )
{
	struct $8C_RESULT fb$result$1;
	__builtin_memset( &fb$result$1, 0, 16ll );
	label$1733:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	int64 OLDLINEPTR$1;
	__builtin_memset( &OLDLINEPTR$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	struct $8C_RESULT CR$1;
	__builtin_memset( &CR$1, 0, 16ll );
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 515ll ) goto label$1736;
	{
		int64 TMP$641$2;
		int64 vr$10 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
		L$1 = vr$10;
		MEMTOP$ = (uint32)((((int64)MEMTOP$ - L$1) + -4ll) & 4294967292ll);
		PSLPOKE( MEMTOP$, (uint32)L$1 );
		{
			I$1 = 1ll;
			int64 TMP$640$3;
			TMP$640$3 = L$1;
			goto label$1737;
			label$1740:;
			{
				FBSTRING* vr$19 = fb_StrMid( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), I$1, 1ll );
				uint32 vr$20 = fb_ASC( (FBSTRING*)vr$19, 1ll );
				PSPOKE( (uint32)(((int64)MEMTOP$ + I$1) + 3ll), (uint8)vr$20 );
			}
			label$1738:;
			I$1 = I$1 + 1ll;
			label$1737:;
			if( I$1 <= TMP$640$3 ) goto label$1740;
			label$1739:;
		}
		*(uint32*)&T1$1 = MEMTOP$;
		*(uint32*)((uint8*)&T1$1 + 8ll) = 43u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		CT$ = CT$ + 1ll;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll ) goto label$1742;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 33u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			label$1742:;
		}
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 18ll ) goto label$1744;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 34u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			label$1744:;
		}
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 18ll ) goto label$1745;
		TMP$641$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll);
		goto label$1757;
		label$1745:;
		TMP$641$2 = 0ll;
		label$1757:;
		if( TMP$641$2 == 0ll ) goto label$1747;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + -1ll;
			label$1747:;
		}
		CT$ = CT$ + 1ll;
	}
	label$1736:;
	label$1735:;
	I$1 = 0ll;
	ERR_$1 = 0ll;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll ) goto label$1749;
	{
		label$1750:;
		{
			uint32 vr$66 = GETADDR(  );
			ERR_$1 = (int64)vr$66;
			CT$ = CT$ + 1ll;
			I$1 = I$1 + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll ) goto label$1754;
			{
				CT$ = CT$ + 1ll;
				label$1754:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1756;
			{
				goto label$1751;
				label$1756:;
			}
		}
		label$1752:;
		goto label$1750;
		label$1751:;
	}
	goto label$1748;
	label$1749:;
	{
		ERR_$1 = 54ll;
	}
	label$1748:;
	*(int64*)&CR$1 = I$1;
	*(int64*)((uint8*)&CR$1 + 8ll) = ERR_$1;
	__builtin_memcpy( &fb$result$1, &CR$1, 16 );
	goto label$1734;
	label$1734:;
	return fb$result$1;
}

uint32 COMPILE_ARRAY_ASSIGN( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1758:;
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 I$1;
	__builtin_memset( &I$1, 0, 4ll );
	uint32 J$1;
	__builtin_memset( &J$1, 0, 4ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	FBSTRING VARNAME_$1;
	__builtin_memset( &VARNAME_$1, 0, 24ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	NUMPAR$1 = 0u;
	ERR_$1 = 0u;
	fb_StrAssign( (void*)&VARNAME_$1, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + -32ll), -1ll, 0 );
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 21ll ) goto label$1761;
	{
		int64 TMP$642$2;
		CT$ = CT$ + 1ll;
		label$1762:;
		{
			EXPR(  );
			CT$ = CT$ + 1ll;
			NUMPAR$1 = (uint32)((int64)NUMPAR$1 + 1ll);
		}
		label$1764:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + -8ll) == 20ll ) goto label$1765;
		TMP$642$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll);
		goto label$1775;
		label$1765:;
		TMP$642$2 = -1ll;
		label$1775:;
		if( TMP$642$2 == 0ll ) goto label$1762;
		label$1763:;
		CT$ = CT$ + 1ll;
		EXPR(  );
		J$1 = 4294967295u;
		I$1 = 0u;
		label$1766:;
		{
			int32 vr$24 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + ((int64)I$1 * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll );
			if( (int64)vr$24 != 0ll ) goto label$1770;
			{
				J$1 = I$1;
				goto label$1767;
				label$1770:;
			}
			I$1 = (uint32)((int64)I$1 + 1ll);
		}
		label$1768:;
		if( (int64)I$1 <= VARNUM$ ) goto label$1766;
		label$1767:;
		*(uint32*)&T1$1 = J$1;
		*(uint32*)((uint8*)&T1$1 + 4ll) = NUMPAR$1;
		*(uint32*)((uint8*)&T1$1 + 8ll) = 23u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		if( (int64)NUMPAR$1 <= 3ll ) goto label$1772;
		{
			ERR_$1 = 45u;
			label$1772:;
		}
		if( (int64)I$1 <= VARNUM$ ) goto label$1774;
		{
			ERR_$1 = 20u;
			label$1774:;
		}
	}
	goto label$1760;
	label$1761:;
	{
		ERR_$1 = 14u;
	}
	label$1760:;
	fb$result$1 = ERR_$1;
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	goto label$1759;
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	label$1759:;
	return fb$result$1;
}

uint32 COMPILE_PRINT( void )
{
	int64 TMP$645$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1776:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)&T1$1 = 0u;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1779;
	{
		*(uint32*)((uint8*)&T1$1 + 8ll) = 32u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		fb$result$1 = 0u;
		goto label$1777;
		label$1779:;
	}
	label$1780:;
	{
		int64 TMP$643$2;
		int64 TMP$644$2;
		EXPR(  );
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 17ll ) goto label$1784;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 33u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			label$1784:;
		}
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 18ll ) goto label$1786;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 34u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			label$1786:;
		}
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1788;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 68u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			label$1788:;
		}
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1789;
		TMP$643$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 18ll);
		goto label$1794;
		label$1789:;
		TMP$643$2 = 0ll;
		label$1794:;
		if( TMP$643$2 == 0ll ) goto label$1790;
		TMP$644$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll);
		goto label$1795;
		label$1790:;
		TMP$644$2 = 0ll;
		label$1795:;
		if( TMP$644$2 == 0ll ) goto label$1792;
		{
			fb$result$1 = 22u;
			goto label$1777;
			label$1792:;
		}
		CT$ = CT$ + 1ll;
	}
	label$1782:;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll ) goto label$1793;
	TMP$645$1 = (int64)-(CT$ >= TOKENNUM$);
	goto label$1796;
	label$1793:;
	TMP$645$1 = -1ll;
	label$1796:;
	if( TMP$645$1 == 0ll ) goto label$1780;
	label$1781:;
	fb$result$1 = 0u;
	goto label$1777;
	label$1777:;
	return fb$result$1;
}

uint32 COMPILE_IF( uint32 ALINE$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1797:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 CMD$1;
	__builtin_memset( &CMD$1, 0, 4ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	uint32 vr$4 = COMPILE_FUN_1P(  );
	ERR_$1 = vr$4;
	CMD$1 = (uint32)*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	CT$ = CT$ + 1ll;
	if( (int64)CMD$1 == 91ll ) goto label$1800;
	{
		fb$result$1 = 52u;
		goto label$1798;
		label$1800:;
	}
	*(uint32*)((uint8*)&T1$1 + 8ll) = 88u;
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	uint8 vr$16 = ISASSIGN( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll) );
	if( (int64)vr$16 == 0ll ) goto label$1802;
	{
		uint32 vr$18 = COMPILE_IMMEDIATE_ASSIGN( 5u );
		ERR_$1 = vr$18;
	}
	goto label$1801;
	label$1802:;
	{
		int64 vr$19 = COMPILE_IMMEDIATE( 5u, ALINE$1 );
		ERR_$1 = (uint32)vr$19;
		label$1801:;
	}
	fb$result$1 = ERR_$1;
	goto label$1798;
	label$1798:;
	return fb$result$1;
}

uint32 COMPILE_ELSE( uint32 ALINE$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1803:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 90u;
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	uint8 vr$10 = ISASSIGN( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll) );
	if( (int64)vr$10 == 0ll ) goto label$1806;
	{
		uint32 vr$12 = COMPILE_IMMEDIATE_ASSIGN( 5u );
		ERR_$1 = vr$12;
	}
	goto label$1805;
	label$1806:;
	{
		int64 vr$13 = COMPILE_IMMEDIATE( 5u, ALINE$1 );
		ERR_$1 = (uint32)vr$13;
		label$1805:;
	}
	fb$result$1 = ERR_$1;
	goto label$1804;
	label$1804:;
	return fb$result$1;
}

uint32 COMPILE_DIM( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1807:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 CMD$1;
	__builtin_memset( &CMD$1, 0, 4ll );
	uint32 ESIZE$1;
	__builtin_memset( &ESIZE$1, 0, 4ll );
	uint32 DIMS$1[3];
	__builtin_memset( (uint32*)DIMS$1, 0, 12ll );
	struct $8FBARRAY1IjE tmp$646$1;
	*(uint32**)&tmp$646$1 = (uint32*)DIMS$1;
	*(uint32**)((uint8*)&tmp$646$1 + 8ll) = (uint32*)DIMS$1;
	*(int64*)((uint8*)&tmp$646$1 + 16ll) = 12ll;
	*(int64*)((uint8*)&tmp$646$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$646$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$646$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$646$1 + 48ll) = 3ll;
	*(int64*)((uint8*)&tmp$646$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$646$1 + 64ll) = 2ll;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 M$1;
	__builtin_memset( &M$1, 0, 8ll );
	FBSTRING VARNAME2_$1;
	__builtin_memset( &VARNAME2_$1, 0, 24ll );
	uint32 ARRAYTYPE$1;
	__builtin_memset( &ARRAYTYPE$1, 0, 4ll );
	uint32 ARRAYSIZE$1;
	__builtin_memset( &ARRAYSIZE$1, 0, 4ll );
	uint32 ARRAYPTR$1;
	__builtin_memset( &ARRAYPTR$1, 0, 4ll );
	*(uint32*)DIMS$1 = 1u;
	*(uint32*)((int64)(uint32*)DIMS$1 + 4ll) = 1u;
	*(uint32*)((int64)(uint32*)DIMS$1 + 8ll) = 1u;
	boolean vr$17 = ISNAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
	if( vr$17 == (boolean)0ll ) goto label$1810;
	{
		int64 TMP$651$2;
		int64 TMP$653$2;
		fb_StrAssign( (void*)&VARNAME2_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, 0 );
		J$1 = -1ll;
		if( VARNUM$ <= 0ll ) goto label$1812;
		{
			{
				I$1 = 0ll;
				int64 TMP$647$4;
				TMP$647$4 = VARNUM$ + -1ll;
				goto label$1813;
				label$1816:;
				{
					int32 vr$25 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (I$1 * 40ll)), -1ll, (void*)&VARNAME2_$1, -1ll );
					if( (int64)vr$25 != 0ll ) goto label$1818;
					{
						J$1 = I$1;
						goto label$1815;
						label$1818:;
					}
				}
				label$1814:;
				I$1 = I$1 + 1ll;
				label$1813:;
				if( I$1 <= TMP$647$4 ) goto label$1816;
				label$1815:;
			}
		}
		label$1812:;
		label$1811:;
		if( J$1 != -1ll ) goto label$1820;
		{
			J$1 = VARNUM$;
		}
		goto label$1819;
		label$1820:;
		{
			FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (uint8*)"Dim: at line ", 13ll );
			fb_PrintString( 0, (FBSTRING*)vr$28, 0 );
			fb_PrintUInt( 0, LINENUM$, 0 );
			FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (uint8*)": warning: the variable existed.", 32ll );
			fb_PrintString( 0, (FBSTRING*)vr$29, 1 );
			label$1819:;
		}
		int32 vr$32 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll), -1ll, (void*)"(", 2ll );
		if( (int64)vr$32 == 0ll ) goto label$1821;
		int32 vr$36 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll), -1ll, (void*)"as", 3ll );
		TMP$651$2 = (int64)-((int64)vr$36 != 0ll);
		goto label$1868;
		label$1821:;
		TMP$651$2 = 0ll;
		label$1868:;
		if( TMP$651$2 == 0ll ) goto label$1823;
		{
			fb$result$1 = 43u;
			fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
			goto label$1808;
			label$1823:;
		}
		int32 vr$42 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll), -1ll, (void*)"as", 3ll );
		if( (int64)vr$42 != 0ll ) goto label$1825;
		{
			L$1 = CT$ + 1ll;
			goto label$1826;
			label$1825:;
		}
		L$1 = CT$ + 2ll;
		M$1 = 0ll;
		label$1827:;
		{
			int64 TMP$652$3;
			int64 vr$48 = ISDEC( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) );
			if( vr$48 == 0ll ) goto label$1831;
			{
				int32 vr$51 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) );
				*(uint32*)((int64)(uint32*)DIMS$1 + (M$1 << (2ll & 63ll))) = (uint32)vr$51;
				M$1 = M$1 + 1ll;
			}
			goto label$1830;
			label$1831:;
			{
				fb$result$1 = 17u;
				fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
				goto label$1808;
			}
			label$1830:;
			int32 vr$57 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)",", 2ll );
			if( (int64)vr$57 == 0ll ) goto label$1832;
			int32 vr$61 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) + 32ll), -1ll, (void*)")", 2ll );
			TMP$652$3 = (int64)-((int64)vr$61 != 0ll);
			goto label$1869;
			label$1832:;
			TMP$652$3 = 0ll;
			label$1869:;
			if( TMP$652$3 == 0ll ) goto label$1834;
			{
				fb$result$1 = 44u;
				fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
				goto label$1808;
				label$1834:;
			}
			L$1 = L$1 + 2ll;
		}
		label$1829:;
		int32 vr$68 = fb_StrCompare( (void*)(((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) + -32ll), -1ll, (void*)")", 2ll );
		if( (int64)vr$68 == 0ll ) goto label$1835;
		TMP$653$2 = (int64)-(M$1 > 2ll);
		goto label$1870;
		label$1835:;
		TMP$653$2 = -1ll;
		label$1870:;
		if( TMP$653$2 == 0ll ) goto label$1827;
		label$1828:;
		if( M$1 <= 3ll ) goto label$1837;
		{
			fb$result$1 = 45u;
			fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
			goto label$1808;
			label$1837:;
		}
		ARRAYTYPE$1 = 256u;
		ESIZE$1 = 12u;
		label$1826:;
		int32 vr$74 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))), -1ll, (void*)"as", 3ll );
		if( (int64)vr$74 != 0ll ) goto label$1839;
		{
			{
				FBSTRING TMP$654$4;
				fb_StrInit( (void*)&TMP$654$4, -1ll, (void*)(((int64)(struct $4PART*)LPARTS$ + (L$1 << (5ll & 63ll))) + 32ll), -1ll, 0 );
				int32 vr$80 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"byte", 5ll );
				if( (int64)vr$80 != 0ll ) goto label$1841;
				label$1842:;
				{
					ARRAYTYPE$1 = 257u;
					ESIZE$1 = 1u;
				}
				goto label$1840;
				label$1841:;
				int32 vr$83 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"ubyte", 6ll );
				if( (int64)vr$83 != 0ll ) goto label$1843;
				label$1844:;
				{
					ARRAYTYPE$1 = 258u;
					ESIZE$1 = 1u;
				}
				goto label$1840;
				label$1843:;
				int32 vr$86 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"short", 6ll );
				if( (int64)vr$86 != 0ll ) goto label$1845;
				label$1846:;
				{
					ARRAYTYPE$1 = 259u;
					ESIZE$1 = 2u;
				}
				goto label$1840;
				label$1845:;
				int32 vr$89 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"ushort", 7ll );
				if( (int64)vr$89 != 0ll ) goto label$1847;
				label$1848:;
				{
					ARRAYTYPE$1 = 260u;
					ESIZE$1 = 2u;
				}
				goto label$1840;
				label$1847:;
				int32 vr$92 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"long", 5ll );
				if( (int64)vr$92 != 0ll ) goto label$1849;
				label$1850:;
				{
					ARRAYTYPE$1 = 261u;
					ESIZE$1 = 4u;
				}
				goto label$1840;
				label$1849:;
				int32 vr$95 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"integer", 8ll );
				if( (int64)vr$95 != 0ll ) goto label$1851;
				label$1852:;
				{
					ARRAYTYPE$1 = 261u;
					ESIZE$1 = 4u;
				}
				goto label$1840;
				label$1851:;
				int32 vr$98 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"ulong", 6ll );
				if( (int64)vr$98 != 0ll ) goto label$1853;
				label$1854:;
				{
					ARRAYTYPE$1 = 262u;
					ESIZE$1 = 4u;
				}
				goto label$1840;
				label$1853:;
				int32 vr$101 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"int64", 6ll );
				if( (int64)vr$101 != 0ll ) goto label$1855;
				label$1856:;
				{
					ARRAYTYPE$1 = 263u;
					ESIZE$1 = 8u;
				}
				goto label$1840;
				label$1855:;
				int32 vr$104 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"uint64", 7ll );
				if( (int64)vr$104 != 0ll ) goto label$1857;
				label$1858:;
				{
					ARRAYTYPE$1 = 264u;
					ESIZE$1 = 8u;
				}
				goto label$1840;
				label$1857:;
				int32 vr$107 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"single", 7ll );
				if( (int64)vr$107 != 0ll ) goto label$1859;
				label$1860:;
				{
					ARRAYTYPE$1 = 265u;
					ESIZE$1 = 4u;
				}
				goto label$1840;
				label$1859:;
				int32 vr$110 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"double", 7ll );
				if( (int64)vr$110 != 0ll ) goto label$1861;
				label$1862:;
				{
					ARRAYTYPE$1 = 266u;
					ESIZE$1 = 8u;
				}
				goto label$1840;
				label$1861:;
				int32 vr$113 = fb_StrCompare( (void*)&TMP$654$4, -1ll, (void*)"string", 7ll );
				if( (int64)vr$113 != 0ll ) goto label$1863;
				label$1864:;
				{
					ARRAYTYPE$1 = 267u;
					ESIZE$1 = 4u;
				}
				goto label$1840;
				label$1863:;
				{
					fb$result$1 = 47u;
					fb_StrDelete( (FBSTRING*)&TMP$654$4 );
					fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
					goto label$1808;
				}
				label$1865:;
				label$1840:;
				fb_StrDelete( (FBSTRING*)&TMP$654$4 );
			}
		}
		label$1839:;
		label$1838:;
	}
	goto label$1809;
	label$1810:;
	{
		fb$result$1 = 46u;
		fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
		goto label$1808;
	}
	label$1809:;
	ARRAYSIZE$1 = (uint32)((((int64)ESIZE$1 * (int64)*(uint32*)DIMS$1) * (int64)*(uint32*)((int64)(uint32*)DIMS$1 + 4ll)) * (int64)*(uint32*)((int64)(uint32*)DIMS$1 + 8ll));
	ARRAYPTR$1 = (uint32)(((int64)MEMTOP$ - (int64)ARRAYSIZE$1) + -16ll);
	ARRAYPTR$1 = (uint32)((int64)ARRAYPTR$1 & 4294967280ll);
	MEMTOP$ = ARRAYPTR$1;
	PSDPOKE( ARRAYPTR$1, (uint16)ARRAYTYPE$1 );
	PSDPOKE( (uint32)((int64)ARRAYPTR$1 + 2ll), (uint16)ESIZE$1 );
	PSLPOKE( (uint32)((int64)ARRAYPTR$1 + 4ll), *(uint32*)DIMS$1 );
	PSLPOKE( (uint32)((int64)ARRAYPTR$1 + 8ll), *(uint32*)((int64)(uint32*)DIMS$1 + 4ll) );
	PSLPOKE( (uint32)((int64)ARRAYPTR$1 + 12ll), *(uint32*)((int64)(uint32*)DIMS$1 + 8ll) );
	fb_StrAssign( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (J$1 * 40ll)), -1ll, (void*)&VARNAME2_$1, -1ll, 0 );
	*(uint32*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (J$1 * 40ll)) + 24ll) = ARRAYPTR$1;
	*(uint32*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (J$1 * 40ll)) + 32ll) = ARRAYTYPE$1;
	if( J$1 != VARNUM$ ) goto label$1867;
	{
		VARNUM$ = VARNUM$ + 1ll;
		label$1867:;
	}
	fb$result$1 = 0u;
	fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
	goto label$1808;
	fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
	label$1808:;
	return fb$result$1;
}

uint32 COMPILE_FOR( void )
{
	int64 TMP$669$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1871:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 CMD$1;
	__builtin_memset( &CMD$1, 0, 4ll );
	uint32 VARNUM$1;
	__builtin_memset( &VARNUM$1, 0, 4ll );
	uint32 B1$1;
	__builtin_memset( &B1$1, 0, 4ll );
	uint32 B2$1;
	__builtin_memset( &B2$1, 0, 4ll );
	uint32 B3$1;
	__builtin_memset( &B3$1, 0, 4ll );
	float NOTE_VAL$1;
	__builtin_memset( &NOTE_VAL$1, 0, 4ll );
	uint8 vr$10 = ISASSIGN( (FBSTRING*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 32ll) );
	if( (int64)vr$10 == 0ll ) goto label$1874;
	{
		COMPILE_IMMEDIATE_ASSIGN( 5u );
	}
	goto label$1873;
	label$1874:;
	{
		fb$result$1 = 32u;
		goto label$1872;
		label$1873:;
	}
	__builtin_memcpy( &T1$1, (struct $11EXPR_RESULT*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + -16ll), 16 );
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 23ll ) goto label$1876;
	{
		fb$result$1 = 34u;
		goto label$1872;
		label$1876:;
	}
	VARNUM$1 = *(uint32*)&T1$1;
	int32 vr$19 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)"to", 3ll );
	if( (int64)vr$19 == 0ll ) goto label$1878;
	{
		fb$result$1 = 33u;
		goto label$1872;
		label$1878:;
	}
	CT$ = CT$ + 1ll;
	EXPR(  );
	int32 vr$24 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)"step", 5ll );
	if( (int64)vr$24 == 0ll ) goto label$1879;
	FBSTRING* vr$28 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), 2ll );
	int32 vr$29 = fb_StrCompare( (void*)vr$28, -1ll, (void*)"s.", 3ll );
	TMP$669$1 = (int64)-((int64)vr$29 == 0ll);
	goto label$1906;
	label$1879:;
	TMP$669$1 = -1ll;
	label$1906:;
	if( TMP$669$1 == 0ll ) goto label$1881;
	{
		int64 TMP$670$2;
		FBSTRING* vr$34 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), 2ll );
		int32 vr$35 = fb_StrCompare( (void*)vr$34, -1ll, (void*)"s.", 3ll );
		if( (int64)vr$35 != 0ll ) goto label$1882;
		int64 vr$39 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
		TMP$670$2 = (int64)-(vr$39 > 2ll);
		goto label$1907;
		label$1882:;
		TMP$670$2 = 0ll;
		label$1907:;
		if( TMP$670$2 == 0ll ) goto label$1884;
		{
			int64 TMP$671$3;
			int64 TMP$672$3;
			int64 TMP$673$3;
			int64 TMP$674$3;
			int64 TMP$675$3;
			int64 TMP$676$3;
			int64 vr$43 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
			FBSTRING* vr$47 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), vr$43 + -2ll );
			fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)vr$47, -1ll, 0 );
			uint8 vr$52 = ISFUNCTION( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = (int64)vr$52;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$1886;
			{
				goto label$1887;
				label$1886:;
			}
			uint32 vr$58 = ISNOTENAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = (int64)vr$58;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$1889;
			{
				float vr$63 = GETNOTEVAL( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) );
				NOTE_VAL$1 = vr$63;
				FBSTRING* vr$64 = fb_FloatToStr( NOTE_VAL$1 );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)vr$64, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$1887;
			}
			label$1889:;
			label$1888:;
			int64 vr$70 = ISCONSTANT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = vr$70;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) <= 0ll ) goto label$1891;
			{
				FBSTRING* vr$74 = fb_LongintToStr( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)vr$74, -1ll, 0 );
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$1887;
				label$1891:;
			}
			boolean vr$80 = ISNUM( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			B1$1 = (uint32)-vr$80;
			boolean vr$84 = ISINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			B2$1 = (uint32)-vr$84;
			int64 vr$88 = ISDEC( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			B3$1 = (uint32)vr$88;
			if( (int64)B1$1 == 0ll ) goto label$1892;
			TMP$671$3 = (int64)-((int64)B2$1 != 0ll);
			goto label$1908;
			label$1892:;
			TMP$671$3 = 0ll;
			label$1908:;
			if( TMP$671$3 == 0ll ) goto label$1893;
			TMP$672$3 = (int64)-((int64)B3$1 != 0ll);
			goto label$1909;
			label$1893:;
			TMP$672$3 = 0ll;
			label$1909:;
			if( TMP$672$3 == 0ll ) goto label$1895;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 512ll;
				goto label$1887;
				label$1895:;
			}
			if( (int64)B1$1 == 0ll ) goto label$1896;
			TMP$673$3 = (int64)-((int64)B2$1 != 0ll);
			goto label$1910;
			label$1896:;
			TMP$673$3 = 0ll;
			label$1910:;
			if( TMP$673$3 == 0ll ) goto label$1897;
			TMP$674$3 = (int64)-(~(int64)B3$1 != 0ll);
			goto label$1911;
			label$1897:;
			TMP$674$3 = 0ll;
			label$1911:;
			if( TMP$674$3 == 0ll ) goto label$1899;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 513ll;
				goto label$1887;
				label$1899:;
			}
			if( (int64)B1$1 == 0ll ) goto label$1900;
			TMP$675$3 = (int64)-(~(int64)B2$1 != 0ll);
			goto label$1912;
			label$1900:;
			TMP$675$3 = 0ll;
			label$1912:;
			if( TMP$675$3 == 0ll ) goto label$1901;
			TMP$676$3 = (int64)-(~(int64)B3$1 != 0ll);
			goto label$1913;
			label$1901:;
			TMP$676$3 = 0ll;
			label$1913:;
			if( TMP$676$3 == 0ll ) goto label$1903;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 514ll;
				goto label$1887;
				label$1903:;
			}
			boolean vr$113 = ISNAME( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			if( vr$113 == (boolean)0ll ) goto label$1905;
			{
				*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) = 516ll;
				goto label$1887;
				label$1905:;
			}
			label$1887:;
			CT$ = CT$ + -1ll;
		}
		label$1884:;
		label$1883:;
		CT$ = CT$ + 1ll;
		EXPR(  );
	}
	goto label$1880;
	label$1881:;
	{
		*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 28u;
		*(int64*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 1ll;
		LINEPTR$ = LINEPTR$ + 1ll;
	}
	label$1880:;
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 28u;
	*(int64*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = (int64)VARNUM$1;
	LINEPTR$ = LINEPTR$ + 1ll;
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 74u;
	*(int64*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 0ll;
	LINEPTR$ = LINEPTR$ + 1ll;
	fb$result$1 = 0u;
	goto label$1872;
	label$1872:;
	return fb$result$1;
}

uint32 COMPILE_NEXT( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1914:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 CMD$1;
	__builtin_memset( &CMD$1, 0, 4ll );
	uint32 I$1;
	__builtin_memset( &I$1, 0, 4ll );
	uint32 J$1;
	__builtin_memset( &J$1, 0, 4ll );
	FBSTRING VARNAME_$1;
	__builtin_memset( &VARNAME_$1, 0, 24ll );
	fb_StrAssign( (void*)&VARNAME_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, 0 );
	if( VARNUM$ != 0ll ) goto label$1917;
	{
		fb$result$1 = 35u;
		fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
		goto label$1915;
		label$1917:;
	}
	J$1 = 4294967295u;
	{
		I$1 = 0u;
		uint32 TMP$677$2;
		TMP$677$2 = (uint32)(VARNUM$ + -1ll);
		goto label$1918;
		label$1921:;
		{
			int32 vr$16 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + ((int64)I$1 * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll );
			if( (int64)vr$16 != 0ll ) goto label$1923;
			{
				J$1 = I$1;
				goto label$1920;
				label$1923:;
			}
		}
		label$1919:;
		I$1 = (uint32)((int64)I$1 + 1ll);
		label$1918:;
		if( (int64)I$1 <= (int64)TMP$677$2 ) goto label$1921;
		label$1920:;
	}
	if( (int64)J$1 != -1ll ) goto label$1925;
	{
		fb$result$1 = 35u;
		fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
		goto label$1915;
		label$1925:;
	}
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 28u;
	*(int64*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = (int64)J$1;
	LINEPTR$ = LINEPTR$ + 1ll;
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 75u;
	*(int64*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 0ll;
	LINEPTR$ = LINEPTR$ + 1ll;
	fb$result$1 = 0u;
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	goto label$1915;
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	label$1915:;
	return fb$result$1;
}

uint32 COMPILE_GOTO( void )
{
	int64 TMP$679$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1926:;
	int64 GOTOLINE$1;
	__builtin_memset( &GOTOLINE$1, 0, 8ll );
	int64 GOTOPTR$1;
	__builtin_memset( &GOTOPTR$1, 0, 8ll );
	int64 OLDGOTOPTR$1;
	__builtin_memset( &OLDGOTOPTR$1, 0, 8ll );
	uint32 GOTOHEADER$1[6];
	__builtin_memset( (uint32*)GOTOHEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$678$1;
	*(uint32**)&tmp$678$1 = (uint32*)GOTOHEADER$1;
	*(uint32**)((uint8*)&tmp$678$1 + 8ll) = (uint32*)GOTOHEADER$1;
	*(int64*)((uint8*)&tmp$678$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$678$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$678$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$678$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$678$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$678$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$678$1 + 64ll) = 5ll;
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 512ll ) goto label$1928;
	TMP$679$1 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 56ll) == 510ll);
	goto label$1940;
	label$1928:;
	TMP$679$1 = 0ll;
	label$1940:;
	if( TMP$679$1 == 0ll ) goto label$1930;
	{
		int64 TMP$680$2;
		int64 TMP$681$2;
		int32 vr$13 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
		GOTOLINE$1 = (int64)vr$13;
		*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 78u;
		GOTOPTR$1 = (int64)PROGRAMSTART$;
		label$1931:;
		{
			memmove( (void*)GOTOHEADER$1, (void*)((uint8*)&MACHINE$ + GOTOPTR$1), 24ull );
			if( (int64)*(uint32*)GOTOHEADER$1 == 4294967295ll ) goto label$1935;
			{
				OLDGOTOPTR$1 = GOTOPTR$1;
				GOTOPTR$1 = (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll);
			}
			label$1935:;
			label$1934:;
		}
		label$1933:;
		if( (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll) == 2147483647ll ) goto label$1936;
		TMP$680$2 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == -1ll);
		goto label$1941;
		label$1936:;
		TMP$680$2 = -1ll;
		label$1941:;
		if( TMP$680$2 != 0ll ) goto label$1937;
		TMP$681$2 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == GOTOLINE$1);
		goto label$1942;
		label$1937:;
		TMP$681$2 = -1ll;
		label$1942:;
		if( TMP$681$2 == 0ll ) goto label$1931;
		label$1932:;
		if( (int64)*(uint32*)GOTOHEADER$1 != GOTOLINE$1 ) goto label$1939;
		{
			*(uint32*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = (uint32)OLDGOTOPTR$1;
			*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 4ll) = (uint32)GOTOLINE$1;
		}
		goto label$1938;
		label$1939:;
		{
			*(uint32*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 2147483648u;
			*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 4ll) = (uint32)GOTOLINE$1;
			*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 83u;
		}
		label$1938:;
		LINEPTR$ = LINEPTR$ + 1ll;
	}
	goto label$1929;
	label$1930:;
	{
		EXPR(  );
		*(uint32*)((uint8*)&T3$1 + 8ll) = 79u;
		*(uint32*)&T3$1 = 0u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
	}
	label$1929:;
	fb$result$1 = 0u;
	goto label$1927;
	label$1927:;
	return fb$result$1;
}

uint32 COMPILE_GOSUB( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1943:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 169u;
	LINEPTR$ = LINEPTR$ + 1ll;
	uint32 vr$5 = COMPILE_GOTO(  );
	ERR_$1 = vr$5;
	fb$result$1 = ERR_$1;
	goto label$1944;
	label$1944:;
	return fb$result$1;
}

uint32 COMPILE_ON( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1945:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 ONLINEPTR$1;
	__builtin_memset( &ONLINEPTR$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	EXPR(  );
	NUMPAR$1 = 0ll;
	*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 193u;
	ONLINEPTR$1 = LINEPTR$;
	LINEPTR$ = LINEPTR$ + 1ll;
	int32 vr$9 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)"goto", 5ll );
	if( (int64)vr$9 != 0ll ) goto label$1948;
	{
		I$1 = CT$ + 1ll;
		label$1949:;
		{
			int64 TMP$682$3;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 512ll ) goto label$1953;
			{
				*(uint32*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 2147483648u;
				int32 vr$17 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 4ll) = (uint32)vr$17;
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 83u;
				LINEPTR$ = LINEPTR$ + 1ll;
				NUMPAR$1 = NUMPAR$1 + 1ll;
			}
			goto label$1952;
			label$1953:;
			{
				fb$result$1 = 17u;
				goto label$1946;
			}
			label$1952:;
			I$1 = I$1 + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1954;
			TMP$682$3 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll);
			goto label$1977;
			label$1954:;
			TMP$682$3 = 0ll;
			label$1977:;
			if( TMP$682$3 == 0ll ) goto label$1956;
			{
				fb$result$1 = 21u;
				goto label$1946;
				label$1956:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1958;
			{
				goto label$1950;
				label$1958:;
			}
			I$1 = I$1 + 1ll;
		}
		label$1951:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1949;
		label$1950:;
		*(uint32*)((uint8*)((uint8*)&CL$ + (ONLINEPTR$1 << (4ll & 63ll))) + 4ll) = 1u;
	}
	label$1948:;
	label$1947:;
	int32 vr$35 = fb_StrCompare( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)"gosub", 6ll );
	if( (int64)vr$35 != 0ll ) goto label$1960;
	{
		I$1 = CT$ + 1ll;
		label$1961:;
		{
			int64 TMP$683$3;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 512ll ) goto label$1965;
			{
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 169u;
				LINEPTR$ = LINEPTR$ + 1ll;
				*(uint32*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) = 2147483648u;
				int32 vr$46 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) );
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 4ll) = (uint32)vr$46;
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 83u;
				LINEPTR$ = LINEPTR$ + 1ll;
				NUMPAR$1 = NUMPAR$1 + 1ll;
				*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 45u;
				LINEPTR$ = LINEPTR$ + 1ll;
			}
			goto label$1964;
			label$1965:;
			{
				fb$result$1 = 17u;
				goto label$1946;
			}
			label$1964:;
			I$1 = I$1 + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) == 17ll ) goto label$1966;
			TMP$683$3 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll);
			goto label$1978;
			label$1966:;
			TMP$683$3 = 0ll;
			label$1978:;
			if( TMP$683$3 == 0ll ) goto label$1968;
			{
				fb$result$1 = 21u;
				goto label$1946;
				label$1968:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1970;
			{
				goto label$1962;
				label$1970:;
			}
			I$1 = I$1 + 1ll;
		}
		label$1963:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (I$1 << (5ll & 63ll))) + 24ll) != 510ll ) goto label$1961;
		label$1962:;
		*(uint32*)((uint8*)((uint8*)&CL$ + (ONLINEPTR$1 << (4ll & 63ll))) + 4ll) = 3u;
	}
	label$1960:;
	label$1959:;
	*(uint32*)((uint8*)&CL$ + (ONLINEPTR$1 << (4ll & 63ll))) = (uint32)NUMPAR$1;
	{
		I$1 = LINEPTR$;
		int64 TMP$684$2;
		TMP$684$2 = ONLINEPTR$1;
		goto label$1971;
		label$1974:;
		{
			if( (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))) + 8ll) != 45ll ) goto label$1976;
			{
				*(uint32*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))) = (uint32)(LINEPTR$ + -2ll);
				label$1976:;
			}
		}
		label$1972:;
		I$1 = I$1 + -1ll;
		label$1971:;
		if( I$1 >= TMP$684$2 ) goto label$1974;
		label$1973:;
	}
	fb$result$1 = 0u;
	goto label$1946;
	label$1946:;
	return fb$result$1;
}

uint32 GETADDR( void )
{
	int64 TMP$686$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$1979:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	FBSTRING VARNAME_$1;
	__builtin_memset( &VARNAME_$1, 0, 24ll );
	FBSTRING SUFFIX_$1;
	__builtin_memset( &SUFFIX_$1, 0, 24ll );
	fb_StrAssign( (void*)&VARNAME_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, 0 );
	J$1 = -1ll;
	{
		I$1 = 0ll;
		int64 TMP$685$2;
		TMP$685$2 = VARNUM$ + -1ll;
		goto label$1981;
		label$1984:;
		{
			int32 vr$15 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (I$1 * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll );
			if( (int64)vr$15 != 0ll ) goto label$1986;
			{
				J$1 = I$1;
				goto label$1983;
				label$1986:;
			}
		}
		label$1982:;
		I$1 = I$1 + 1ll;
		label$1981:;
		if( I$1 <= TMP$685$2 ) goto label$1984;
		label$1983:;
	}
	if( J$1 != -1ll ) goto label$1987;
	TMP$686$1 = (int64)-(VARNUM$ < 1024ll);
	goto label$2002;
	label$1987:;
	TMP$686$1 = 0ll;
	label$2002:;
	if( TMP$686$1 == 0ll ) goto label$1989;
	{
		fb_StrAssign( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll, 0 );
		*(int64*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)) + 24ll) = 0ll;
		*(uint32*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)) + 32ll) = 28u;
		J$1 = VARNUM$;
		VARNUM$ = VARNUM$ + 1ll;
	}
	label$1989:;
	label$1988:;
	NUMPAR$1 = 0ll;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 56ll) != 21ll ) goto label$1991;
	{
		int64 TMP$687$2;
		CT$ = CT$ + 1ll;
		label$1992:;
		{
			CT$ = CT$ + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 21ll ) goto label$1996;
			{
				CT$ = CT$ + 1ll;
				uint32 vr$30 = EXPR(  );
				ERR_$1 = (int64)vr$30;
				CT$ = CT$ + 1ll;
			}
			goto label$1995;
			label$1996:;
			{
				uint32 vr$33 = EXPR(  );
				ERR_$1 = (int64)vr$33;
				label$1995:;
			}
			if( ERR_$1 <= 0ll ) goto label$1998;
			{
				fb$result$1 = (uint32)ERR_$1;
				fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
				fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
				goto label$1980;
				label$1998:;
			}
			NUMPAR$1 = NUMPAR$1 + 1ll;
		}
		label$1994:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 20ll ) goto label$1999;
		TMP$687$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll);
		goto label$2003;
		label$1999:;
		TMP$687$2 = -1ll;
		label$2003:;
		if( TMP$687$2 == 0ll ) goto label$1992;
		label$1993:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$2001;
		{
			fb$result$1 = 14u;
			fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
			fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
			goto label$1980;
			label$2001:;
		}
	}
	label$1991:;
	label$1990:;
	*(uint32*)((uint8*)&T2$1 + 4ll) = (uint32)NUMPAR$1;
	*(uint32*)((uint8*)&T2$1 + 8ll) = 18u;
	*(uint32*)&T2$1 = (uint32)J$1;
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T2$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	fb$result$1 = 0u;
	fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	goto label$1980;
	fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	label$1980:;
	return fb$result$1;
}

int64 COMPILE_IMMEDIATE( uint32 LINETYPE$1, uint32 ALINE$1 )
{
	int64 TMP$688$1;
	int64 TMP$689$1;
	int64 TMP$690$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2004:;
	uint32 CMD$1;
	__builtin_memset( &CMD$1, 0, 4ll );
	uint32 I$1;
	__builtin_memset( &I$1, 0, 4ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $8C_RESULT CR$1;
	__builtin_memset( &CR$1, 0, 16ll );
	*(int64*)((uint8*)&CR$1 + 8ll) = 0ll;
	CMD$1 = 0u;
	*(int64*)&CR$1 = 0ll;
	if( (int64)LINETYPE$1 == 2ll ) goto label$2006;
	TMP$688$1 = (int64)-((int64)LINETYPE$1 == 3ll);
	goto label$2220;
	label$2006:;
	TMP$688$1 = -1ll;
	label$2220:;
	if( TMP$688$1 == 0ll ) goto label$2008;
	{
		CMD$1 = (uint32)*(int64*)((int64)(struct $4PART*)LPARTS$ + 24ll);
		CT$ = 1ll;
		label$2008:;
	}
	if( (int64)LINETYPE$1 == 4ll ) goto label$2009;
	TMP$689$1 = (int64)-((int64)LINETYPE$1 == 1ll);
	goto label$2221;
	label$2009:;
	TMP$689$1 = -1ll;
	label$2221:;
	if( TMP$689$1 == 0ll ) goto label$2011;
	{
		CMD$1 = (uint32)*(int64*)((int64)(struct $4PART*)LPARTS$ + 56ll);
		CT$ = 2ll;
		LINEPTR$ = 2ll;
		label$2011:;
	}
	if( (int64)LINETYPE$1 != 5ll ) goto label$2013;
	{
		CMD$1 = (uint32)*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
		CT$ = CT$ + 1ll;
		label$2013:;
	}
	label$2014:;
	{
		if( (int64)CMD$1 != 92ll ) goto label$2016;
		label$2017:;
		{
			uint32 vr$18 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$18;
		}
		goto label$2015;
		label$2016:;
		if( (int64)CMD$1 != 185ll ) goto label$2018;
		label$2019:;
		{
			struct $8C_RESULT vr$21 = COMPILE_FUN_VARP(  );
			CR$1 = vr$21;
		}
		goto label$2015;
		label$2018:;
		if( (int64)CMD$1 != 71ll ) goto label$2020;
		label$2021:;
		{
			struct $8C_RESULT vr$23 = COMPILE_FUN_VARP(  );
			CR$1 = vr$23;
		}
		goto label$2015;
		label$2020:;
		if( (int64)CMD$1 != 89ll ) goto label$2022;
		label$2023:;
		{
			struct $8C_RESULT vr$25 = COMPILE_FUN_VARP(  );
			CR$1 = vr$25;
		}
		goto label$2015;
		label$2022:;
		if( (int64)CMD$1 != 195ll ) goto label$2024;
		label$2025:;
		{
			uint32 vr$27 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$27;
		}
		goto label$2015;
		label$2024:;
		if( (int64)CMD$1 != 69ll ) goto label$2026;
		label$2027:;
		{
			struct $8C_RESULT vr$30 = COMPILE_FUN_VARP(  );
			CR$1 = vr$30;
		}
		goto label$2015;
		label$2026:;
		if( (int64)CMD$1 != 105ll ) goto label$2028;
		label$2029:;
		{
			uint32 vr$32 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$32;
		}
		goto label$2015;
		label$2028:;
		if( (int64)CMD$1 != 64ll ) goto label$2030;
		label$2031:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2030:;
		if( (int64)CMD$1 != 180ll ) goto label$2032;
		label$2033:;
		{
			uint32 vr$36 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$36;
		}
		goto label$2015;
		label$2032:;
		if( (int64)CMD$1 != 73ll ) goto label$2034;
		label$2035:;
		{
			uint32 vr$39 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$39;
		}
		goto label$2015;
		label$2034:;
		if( (int64)CMD$1 != 196ll ) goto label$2036;
		label$2037:;
		{
			uint32 vr$42 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$42;
		}
		goto label$2015;
		label$2036:;
		if( (int64)CMD$1 != 174ll ) goto label$2038;
		label$2039:;
		{
			uint32 vr$45 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$45;
		}
		goto label$2015;
		label$2038:;
		if( (int64)CMD$1 != 176ll ) goto label$2040;
		label$2041:;
		{
			uint32 vr$48 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$48;
		}
		goto label$2015;
		label$2040:;
		if( (int64)CMD$1 != 175ll ) goto label$2042;
		label$2043:;
		{
			uint32 vr$51 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$51;
		}
		goto label$2015;
		label$2042:;
		if( (int64)CMD$1 != 177ll ) goto label$2044;
		label$2045:;
		{
			uint32 vr$54 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$54;
		}
		goto label$2015;
		label$2044:;
		if( (int64)CMD$1 != 207ll ) goto label$2046;
		label$2047:;
		{
			uint32 vr$57 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$57;
		}
		goto label$2015;
		label$2046:;
		if( (int64)CMD$1 != 104ll ) goto label$2048;
		label$2049:;
		{
			uint32 vr$60 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$60;
		}
		goto label$2015;
		label$2048:;
		if( (int64)CMD$1 != 183ll ) goto label$2050;
		label$2051:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2050:;
		if( (int64)CMD$1 != 217ll ) goto label$2052;
		label$2053:;
		{
			uint32 vr$64 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$64;
		}
		goto label$2015;
		label$2052:;
		if( (int64)CMD$1 != 116ll ) goto label$2054;
		label$2055:;
		{
			struct $8C_RESULT vr$67 = COMPILE_FUN_VARP(  );
			CR$1 = vr$67;
		}
		goto label$2015;
		label$2054:;
		if( (int64)CMD$1 != 115ll ) goto label$2056;
		label$2057:;
		{
			struct $8C_RESULT vr$69 = COMPILE_FUN_VARP(  );
			CR$1 = vr$69;
		}
		goto label$2015;
		label$2056:;
		if( (int64)CMD$1 != 108ll ) goto label$2058;
		label$2059:;
		{
			struct $8C_RESULT vr$71 = COMPILE_FUN_VARP(  );
			CR$1 = vr$71;
		}
		goto label$2015;
		label$2058:;
		if( (int64)CMD$1 != 137ll ) goto label$2060;
		label$2061:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2060:;
		if( (int64)CMD$1 != 194ll ) goto label$2062;
		label$2063:;
		{
			uint32 vr$74 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$74;
		}
		goto label$2015;
		label$2062:;
		if( (int64)CMD$1 != 114ll ) goto label$2064;
		label$2065:;
		{
			uint32 vr$77 = COMPILE_DIM(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$77;
			goto label$2066;
		}
		goto label$2015;
		label$2064:;
		if( (int64)CMD$1 != 93ll ) goto label$2067;
		label$2068:;
		{
			struct $8C_RESULT vr$80 = COMPILE_FUN_VARP(  );
			CR$1 = vr$80;
		}
		goto label$2015;
		label$2067:;
		if( (int64)CMD$1 != 150ll ) goto label$2069;
		label$2070:;
		{
			uint32 vr$82 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$82;
		}
		goto label$2015;
		label$2069:;
		if( (int64)CMD$1 != 67ll ) goto label$2071;
		label$2072:;
		{
			struct $8C_RESULT vr$85 = COMPILE_FUN_VARP(  );
			CR$1 = vr$85;
		}
		goto label$2015;
		label$2071:;
		if( (int64)CMD$1 != 90ll ) goto label$2073;
		label$2074:;
		{
			uint32 vr$87 = COMPILE_ELSE( ALINE$1 );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$87;
			goto label$2066;
		}
		goto label$2015;
		label$2073:;
		if( (int64)CMD$1 != 171ll ) goto label$2075;
		label$2076:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2075:;
		if( (int64)CMD$1 != 189ll ) goto label$2077;
		label$2078:;
		{
			struct $8C_RESULT vr$91 = COMPILE_FUN_VARP(  );
			CR$1 = vr$91;
		}
		goto label$2015;
		label$2077:;
		if( (int64)CMD$1 != 187ll ) goto label$2079;
		label$2080:;
		{
			struct $8C_RESULT vr$93 = COMPILE_FUN_VARP(  );
			CR$1 = vr$93;
		}
		goto label$2015;
		label$2079:;
		if( (int64)CMD$1 != 78ll ) goto label$2081;
		label$2082:;
		{
			if( (int64)ALINE$1 <= 0ll ) goto label$2084;
			{
				COMPILE_GOTO(  );
				goto label$2066;
			}
			goto label$2083;
			label$2084:;
			{
				PRINTERROR( 25ll, 0ll );
				goto label$2066;
				label$2083:;
			}
		}
		goto label$2015;
		label$2081:;
		if( (int64)CMD$1 != 169ll ) goto label$2085;
		label$2086:;
		{
			if( (int64)ALINE$1 <= 0ll ) goto label$2088;
			{
				COMPILE_GOSUB(  );
				goto label$2066;
			}
			goto label$2087;
			label$2088:;
			{
				PRINTERROR( 25ll, 0ll );
				goto label$2066;
				label$2087:;
			}
		}
		goto label$2015;
		label$2085:;
		if( (int64)CMD$1 != 70ll ) goto label$2089;
		label$2090:;
		{
			struct $8C_RESULT vr$99 = COMPILE_FUN_VARP(  );
			CR$1 = vr$99;
		}
		goto label$2015;
		label$2089:;
		if( (int64)CMD$1 != 113ll ) goto label$2091;
		label$2092:;
		{
			uint32 vr$101 = COMPILE_FUN_4P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$101;
		}
		goto label$2015;
		label$2091:;
		if( (int64)CMD$1 != 96ll ) goto label$2093;
		label$2094:;
		{
			uint32 vr$104 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$104;
		}
		goto label$2015;
		label$2093:;
		if( (int64)CMD$1 != 74ll ) goto label$2095;
		label$2096:;
		{
			uint32 vr$107 = COMPILE_FOR(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$107;
			goto label$2066;
		}
		goto label$2015;
		label$2095:;
		if( (int64)CMD$1 != 72ll ) goto label$2097;
		label$2098:;
		{
			struct $8C_RESULT vr$110 = COMPILE_FUN_VARP(  );
			CR$1 = vr$110;
		}
		goto label$2015;
		label$2097:;
		if( (int64)CMD$1 != 88ll ) goto label$2099;
		label$2100:;
		{
			uint32 vr$112 = COMPILE_IF( ALINE$1 );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$112;
			goto label$2066;
		}
		goto label$2015;
		label$2099:;
		if( (int64)CMD$1 != 95ll ) goto label$2101;
		label$2102:;
		{
			uint32 vr$115 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$115;
		}
		goto label$2015;
		label$2101:;
		if( (int64)CMD$1 != 181ll ) goto label$2103;
		label$2104:;
		{
			struct $8C_RESULT vr$118 = COMPILE_INPUT(  );
			CR$1 = vr$118;
		}
		goto label$2015;
		label$2103:;
		if( (int64)CMD$1 != 138ll ) goto label$2105;
		label$2106:;
		{
			uint32 vr$120 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$120;
		}
		goto label$2015;
		label$2105:;
		if( (int64)CMD$1 != 76ll ) goto label$2107;
		label$2108:;
		{
			struct $8C_RESULT vr$123 = COMPILE_FUN_VARP(  );
			CR$1 = vr$123;
		}
		goto label$2015;
		label$2107:;
		if( (int64)CMD$1 != 82ll ) goto label$2109;
		label$2110:;
		{
			struct $8C_RESULT vr$125 = COMPILE_FUN_VARP(  );
			CR$1 = vr$125;
		}
		goto label$2015;
		label$2109:;
		if( (int64)CMD$1 != 151ll ) goto label$2111;
		label$2112:;
		{
			uint32 vr$127 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$127;
		}
		goto label$2015;
		label$2111:;
		if( (int64)CMD$1 != 198ll ) goto label$2113;
		label$2114:;
		{
			uint32 vr$130 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$130;
		}
		goto label$2015;
		label$2113:;
		if( (int64)CMD$1 != 97ll ) goto label$2115;
		label$2116:;
		{
			uint32 vr$133 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$133;
		}
		goto label$2015;
		label$2115:;
		if( (int64)CMD$1 != 99ll ) goto label$2117;
		label$2118:;
		{
			uint32 vr$136 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$136;
		}
		goto label$2015;
		label$2117:;
		if( (int64)CMD$1 != 65ll ) goto label$2119;
		label$2120:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2119:;
		if( (int64)CMD$1 != 75ll ) goto label$2121;
		label$2122:;
		{
			uint32 vr$140 = COMPILE_NEXT(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$140;
			goto label$2066;
		}
		goto label$2015;
		label$2121:;
		if( (int64)CMD$1 != 193ll ) goto label$2123;
		label$2124:;
		{
			uint32 vr$143 = COMPILE_ON(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$143;
			goto label$2066;
		}
		goto label$2015;
		label$2123:;
		if( (int64)CMD$1 != 179ll ) goto label$2125;
		label$2126:;
		{
			uint32 vr$146 = COMPILE_FUN_3P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$146;
		}
		goto label$2015;
		label$2125:;
		if( (int64)CMD$1 != 94ll ) goto label$2127;
		label$2128:;
		{
			uint32 vr$149 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$149;
		}
		goto label$2015;
		label$2127:;
		if( (int64)CMD$1 != 124ll ) goto label$2129;
		label$2130:;
		{
			uint32 vr$152 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$152;
		}
		goto label$2015;
		label$2129:;
		if( (int64)CMD$1 != 125ll ) goto label$2131;
		label$2132:;
		{
			uint32 vr$155 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$155;
		}
		goto label$2015;
		label$2131:;
		if( (int64)CMD$1 != 126ll ) goto label$2133;
		label$2134:;
		{
			uint32 vr$158 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$158;
		}
		goto label$2015;
		label$2133:;
		if( (int64)CMD$1 != 127ll ) goto label$2135;
		label$2136:;
		{
			uint32 vr$161 = COMPILE_FUN_4P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$161;
		}
		goto label$2015;
		label$2135:;
		if( (int64)CMD$1 != 128ll ) goto label$2137;
		label$2138:;
		{
			uint32 vr$164 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$164;
		}
		goto label$2015;
		label$2137:;
		if( (int64)CMD$1 != 85ll ) goto label$2139;
		label$2140:;
		{
			uint32 vr$167 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$167;
		}
		goto label$2015;
		label$2139:;
		if( (int64)CMD$1 != 117ll ) goto label$2141;
		label$2142:;
		{
			struct $8C_RESULT vr$170 = COMPILE_FUN_VARP(  );
			CR$1 = vr$170;
		}
		goto label$2015;
		label$2141:;
		if( (int64)CMD$1 != 66ll ) goto label$2143;
		label$2144:;
		{
			struct $8C_RESULT vr$172 = COMPILE_FUN_VARP(  );
			CR$1 = vr$172;
		}
		goto label$2015;
		label$2143:;
		if( (int64)CMD$1 != 149ll ) goto label$2145;
		label$2146:;
		{
			uint32 vr$174 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$174;
		}
		goto label$2015;
		label$2145:;
		if( (int64)CMD$1 != 172ll ) goto label$2147;
		label$2148:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2147:;
		if( (int64)CMD$1 != 129ll ) goto label$2149;
		label$2150:;
		{
			uint32 vr$178 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$178;
		}
		goto label$2015;
		label$2149:;
		if( (int64)CMD$1 != 68ll ) goto label$2151;
		label$2152:;
		{
			uint32 vr$181 = COMPILE_PRINT(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$181;
			goto label$2066;
		}
		goto label$2015;
		label$2151:;
		if( (int64)CMD$1 != 188ll ) goto label$2153;
		label$2154:;
		{
			struct $8C_RESULT vr$184 = COMPILE_FUN_VARP(  );
			CR$1 = vr$184;
		}
		goto label$2015;
		label$2153:;
		if( (int64)CMD$1 != 136ll ) goto label$2155;
		label$2156:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2155:;
		if( (int64)CMD$1 != 182ll ) goto label$2157;
		label$2158:;
		{
			struct $8C_RESULT vr$187 = COMPILE_READ(  );
			CR$1 = vr$187;
		}
		goto label$2015;
		label$2157:;
		if( (int64)CMD$1 != 146ll ) goto label$2159;
		label$2160:;
		{
			uint32 vr$189 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$189;
		}
		goto label$2015;
		label$2159:;
		if( (int64)CMD$1 != 190ll ) goto label$2161;
		label$2162:;
		{
			COMPILE_NOTHING(  );
			goto label$2066;
		}
		goto label$2015;
		label$2161:;
		if( (int64)CMD$1 != 199ll ) goto label$2163;
		label$2164:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2163:;
		if( (int64)CMD$1 != 212ll ) goto label$2165;
		label$2166:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2165:;
		if( (int64)CMD$1 != 170ll ) goto label$2167;
		label$2168:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2167:;
		if( (int64)CMD$1 != 77ll ) goto label$2169;
		label$2170:;
		{
			struct $8C_RESULT vr$196 = COMPILE_FUN_VARP(  );
			CR$1 = vr$196;
		}
		goto label$2015;
		label$2169:;
		if( (int64)CMD$1 != 81ll ) goto label$2171;
		label$2172:;
		{
			struct $8C_RESULT vr$198 = COMPILE_FUN_VARP(  );
			CR$1 = vr$198;
		}
		goto label$2015;
		label$2171:;
		if( (int64)CMD$1 != 210ll ) goto label$2173;
		label$2174:;
		{
			struct $8C_RESULT vr$200 = COMPILE_FUN_VARP(  );
			CR$1 = vr$200;
		}
		goto label$2015;
		label$2173:;
		if( (int64)CMD$1 != 142ll ) goto label$2175;
		label$2176:;
		{
			uint32 vr$202 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$202;
		}
		goto label$2015;
		label$2175:;
		if( (int64)CMD$1 != 144ll ) goto label$2177;
		label$2178:;
		{
			uint32 vr$205 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$205;
		}
		goto label$2015;
		label$2177:;
		if( (int64)CMD$1 != 141ll ) goto label$2179;
		label$2180:;
		{
			uint32 vr$208 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$208;
		}
		goto label$2015;
		label$2179:;
		if( (int64)CMD$1 != 140ll ) goto label$2181;
		label$2182:;
		{
			uint32 vr$211 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$211;
		}
		goto label$2015;
		label$2181:;
		if( (int64)CMD$1 != 145ll ) goto label$2183;
		label$2184:;
		{
			uint32 vr$214 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$214;
		}
		goto label$2015;
		label$2183:;
		if( (int64)CMD$1 != 139ll ) goto label$2185;
		label$2186:;
		{
			uint32 vr$217 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$217;
		}
		goto label$2015;
		label$2185:;
		if( (int64)CMD$1 != 143ll ) goto label$2187;
		label$2188:;
		{
			uint32 vr$220 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$220;
		}
		goto label$2015;
		label$2187:;
		if( (int64)CMD$1 != 178ll ) goto label$2189;
		label$2190:;
		{
			struct $8C_RESULT vr$223 = COMPILE_FUN_VARP(  );
			CR$1 = vr$223;
		}
		goto label$2015;
		label$2189:;
		if( (int64)CMD$1 != 109ll ) goto label$2191;
		label$2192:;
		{
			uint32 vr$225 = COMPILE_FUN_3P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$225;
		}
		goto label$2015;
		label$2191:;
		if( (int64)CMD$1 != 112ll ) goto label$2193;
		label$2194:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2193:;
		if( (int64)CMD$1 != 86ll ) goto label$2195;
		label$2196:;
		{
			uint32 vr$229 = COMPILE_FUN_1P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$229;
		}
		goto label$2015;
		label$2195:;
		if( (int64)CMD$1 != 87ll ) goto label$2197;
		label$2198:;
		{
			COMPILE_NOTHING(  );
		}
		goto label$2015;
		label$2197:;
		if( (int64)CMD$1 != 121ll ) goto label$2199;
		label$2200:;
		{
			uint32 vr$233 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$233;
		}
		goto label$2015;
		label$2199:;
		if( (int64)CMD$1 != 119ll ) goto label$2201;
		label$2202:;
		{
			uint32 vr$236 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$236;
		}
		goto label$2015;
		label$2201:;
		if( (int64)CMD$1 != 120ll ) goto label$2203;
		label$2204:;
		{
			uint32 vr$239 = COMPILE_FUN_2P(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$239;
		}
		goto label$2015;
		label$2203:;
		if( (int64)CMD$1 != 516ll ) goto label$2205;
		label$2206:;
		{
			uint32 vr$242 = COMPILE_ARRAY_ASSIGN(  );
			*(int64*)((uint8*)&CR$1 + 8ll) = (int64)vr$242;
			int32 vr$244 = fb_ErrorGetNum(  );
			if( (int64)vr$244 != 14ll ) goto label$2208;
			{
				uint32 vr$246 = COMPILE_UNKNOWN(  );
				fb_ErrorSetNum( (int32)vr$246 );
				goto label$2066;
			}
			goto label$2207;
			label$2208:;
			{
				goto label$2066;
				label$2207:;
			}
		}
		goto label$2015;
		label$2205:;
		{
			COMPILE_UNKNOWN(  );
			goto label$2066;
		}
		label$2209:;
		label$2015:;
	}
	*(uint32*)((uint8*)&T3$1 + 8ll) = CMD$1;
	*(uint32*)&T3$1 = (uint32)*(int64*)&CR$1;
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	label$2066:;
	if( (int64)LINETYPE$1 == 3ll ) goto label$2210;
	TMP$690$1 = (int64)-((int64)LINETYPE$1 == 4ll);
	goto label$2222;
	label$2210:;
	TMP$690$1 = -1ll;
	label$2222:;
	if( TMP$690$1 == 0ll ) goto label$2212;
	{
		*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 510u;
		label$2212:;
	}
	{
		I$1 = (uint32)LINEPTR$;
		goto label$2213;
		label$2216:;
		{
			int64 TMP$691$3;
			if( (int64)*(uint32*)((uint8*)((uint8*)&CL$ + ((int64)I$1 << (4ll & 63ll))) + 8ll) != 155ll ) goto label$2217;
			TMP$691$3 = (int64)-((int64)*(uint32*)((uint8*)((uint8*)&CL$ + ((int64)I$1 << (4ll & 63ll))) + -8ll) == 17ll);
			goto label$2223;
			label$2217:;
			TMP$691$3 = 0ll;
			label$2223:;
			if( TMP$691$3 == 0ll ) goto label$2219;
			{
				*(uint32*)((uint8*)((uint8*)&CL$ + ((int64)I$1 << (4ll & 63ll))) + -8ll) = 18u;
				label$2219:;
			}
		}
		label$2214:;
		I$1 = (uint32)((int64)I$1 + -1ll);
		label$2213:;
		if( (int64)I$1 >= 1ll ) goto label$2216;
		label$2215:;
	}
	fb$result$1 = *(int64*)((uint8*)&CR$1 + 8ll);
	goto label$2005;
	label$2005:;
	return fb$result$1;
}

uint32 COMPILE_IMMEDIATE_ASSIGN( uint32 LINETYPE$1 )
{
	int64 TMP$692$1;
	int64 TMP$693$1;
	int64 TMP$695$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2224:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	FBSTRING SUFFIX2_$1;
	__builtin_memset( &SUFFIX2_$1, 0, 24ll );
	FBSTRING VARNAME2_$1;
	__builtin_memset( &VARNAME2_$1, 0, 24ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 255u;
	*(uint32*)&T1$1 = 0u;
	I$1 = -1ll;
	J$1 = -1ll;
	fb_ErrorSetNum( 0 );
	if( (int64)LINETYPE$1 == 2ll ) goto label$2226;
	TMP$692$1 = (int64)-((int64)LINETYPE$1 == 3ll);
	goto label$2257;
	label$2226:;
	TMP$692$1 = -1ll;
	label$2257:;
	if( TMP$692$1 == 0ll ) goto label$2228;
	{
		fb_StrAssign( (void*)&VARNAME2_$1, -1ll, (void*)LPARTS$, -1ll, 0 );
		CT$ = 2ll;
		label$2228:;
	}
	if( (int64)LINETYPE$1 == 4ll ) goto label$2229;
	TMP$693$1 = (int64)-((int64)LINETYPE$1 == 1ll);
	goto label$2258;
	label$2229:;
	TMP$693$1 = -1ll;
	label$2258:;
	if( TMP$693$1 == 0ll ) goto label$2231;
	{
		fb_StrAssign( (void*)&VARNAME2_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + 32ll), -1ll, 0 );
		CT$ = 3ll;
		LINEPTR$ = 2ll;
		label$2231:;
	}
	if( (int64)LINETYPE$1 != 5ll ) goto label$2233;
	{
		fb_StrAssign( (void*)&VARNAME2_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, 0 );
		CT$ = CT$ + 2ll;
		label$2233:;
	}
	FBSTRING* vr$24 = fb_RIGHT( (FBSTRING*)&VARNAME2_$1, 1ll );
	fb_StrAssign( (void*)&SUFFIX2_$1, -1ll, (void*)vr$24, -1ll, 0 );
	EXPR(  );
	if( VARNUM$ <= 0ll ) goto label$2235;
	{
		{
			I$1 = 0ll;
			int64 TMP$694$3;
			TMP$694$3 = VARNUM$ + -1ll;
			goto label$2236;
			label$2239:;
			{
				int32 vr$30 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (I$1 * 40ll)), -1ll, (void*)&VARNAME2_$1, -1ll );
				if( (int64)vr$30 != 0ll ) goto label$2241;
				{
					J$1 = I$1;
					goto label$2238;
					label$2241:;
				}
			}
			label$2237:;
			I$1 = I$1 + 1ll;
			label$2236:;
			if( I$1 <= TMP$694$3 ) goto label$2239;
			label$2238:;
		}
	}
	label$2235:;
	label$2234:;
	if( J$1 != -1ll ) goto label$2242;
	TMP$695$1 = (int64)-(VARNUM$ < 1024ll);
	goto label$2259;
	label$2242:;
	TMP$695$1 = 0ll;
	label$2259:;
	if( TMP$695$1 == 0ll ) goto label$2244;
	{
		fb_StrAssign( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)), -1ll, (void*)&VARNAME2_$1, -1ll, 0 );
		J$1 = VARNUM$;
		VARNUM$ = VARNUM$ + 1ll;
	}
	label$2244:;
	label$2243:;
	if( VARNUM$ < 1024ll ) goto label$2246;
	{
		ERR_$1 = 45ll;
	}
	goto label$2245;
	label$2246:;
	{
		int64 TMP$696$2;
		*(uint32*)&T1$1 = (uint32)J$1;
		*(uint32*)((uint8*)&T1$1 + 8ll) = 23u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		if( (int64)LINETYPE$1 == 3ll ) goto label$2247;
		TMP$696$2 = (int64)-((int64)LINETYPE$1 == 4ll);
		goto label$2260;
		label$2247:;
		TMP$696$2 = -1ll;
		label$2260:;
		if( TMP$696$2 == 0ll ) goto label$2249;
		{
			*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))) + 8ll) = 510u;
			label$2249:;
		}
		{
			I$1 = LINEPTR$;
			goto label$2250;
			label$2253:;
			{
				int64 TMP$697$4;
				if( (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))) + 8ll) != 155ll ) goto label$2254;
				TMP$697$4 = (int64)-((int64)*(uint32*)((uint8*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))) + -8ll) == 17ll);
				goto label$2261;
				label$2254:;
				TMP$697$4 = 0ll;
				label$2261:;
				if( TMP$697$4 == 0ll ) goto label$2256;
				{
					*(uint32*)((uint8*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))) + -8ll) = 18u;
					label$2256:;
				}
			}
			label$2251:;
			I$1 = I$1 + -1ll;
			label$2250:;
			if( I$1 >= 1ll ) goto label$2253;
			label$2252:;
		}
	}
	label$2245:;
	fb$result$1 = (uint32)ERR_$1;
	fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
	fb_StrDelete( (FBSTRING*)&SUFFIX2_$1 );
	goto label$2225;
	fb_StrDelete( (FBSTRING*)&VARNAME2_$1 );
	fb_StrDelete( (FBSTRING*)&SUFFIX2_$1 );
	label$2225:;
	return fb$result$1;
}

uint32 COMPILE( uint32 ALINEMAJOR$1, uint32 ALINEMINOR$1, uint32 CONT$1 )
{
	int64 TMP$698$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2262:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)&CL$ = ALINEMAJOR$1;
	*(uint32*)((uint8*)&CL$ + 4ll) = ALINEMINOR$1;
	int64 vr$5 = COMPILE_IMMEDIATE( (uint32)((int64)CONT$1 + 1ll), ALINEMAJOR$1 );
	fb_ErrorSetNum( (int32)vr$5 );
	int32 vr$7 = fb_ErrorGetNum(  );
	if( (int64)vr$7 != 0ll ) goto label$2264;
	TMP$698$1 = (int64)-((int64)ALINEMAJOR$1 > 0ll);
	goto label$2274;
	label$2264:;
	TMP$698$1 = 0ll;
	label$2274:;
	if( TMP$698$1 == 0ll ) goto label$2266;
	{
		int64 TMP$699$2;
		if( (int64)CONT$1 == 3ll ) goto label$2267;
		TMP$699$2 = (int64)-((int64)CONT$1 == 2ll);
		goto label$2275;
		label$2267:;
		TMP$699$2 = -1ll;
		label$2275:;
		if( TMP$699$2 == 0ll ) goto label$2269;
		{
			if( (int64)ALINEMAJOR$1 <= (int64)LASTLINE$ ) goto label$2271;
			{
				ADD_LINE_AT_END( (int64)ALINEMAJOR$1 );
			}
			goto label$2270;
			label$2271:;
			{
				DELETELINE( ALINEMAJOR$1 );
				if( (int64)ALINEMAJOR$1 <= (int64)LASTLINE$ ) goto label$2273;
				{
					ADD_LINE_AT_END( (int64)ALINEMAJOR$1 );
				}
				goto label$2272;
				label$2273:;
				{
					INSERTLINE( ALINEMAJOR$1 );
					label$2272:;
				}
			}
			label$2270:;
		}
		label$2269:;
		label$2268:;
	}
	label$2266:;
	label$2265:;
	fb$result$1 = ERR_$1;
	goto label$2263;
	label$2263:;
	return fb$result$1;
}

uint32 COMPILE_ASSIGN( uint32 ALINEMAJOR$1, uint32 ALINEMINOR$1, uint32 CONT$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2276:;
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)&CL$ = ALINEMAJOR$1;
	*(uint32*)((uint8*)&CL$ + 4ll) = ALINEMINOR$1;
	uint32 vr$5 = COMPILE_IMMEDIATE_ASSIGN( (uint32)((int64)CONT$1 + 1ll) );
	ERR_$1 = vr$5;
	if( (int64)ALINEMAJOR$1 <= 0ll ) goto label$2279;
	{
		int64 TMP$700$2;
		if( (int64)CONT$1 == 3ll ) goto label$2280;
		TMP$700$2 = (int64)-((int64)CONT$1 == 2ll);
		goto label$2287;
		label$2280:;
		TMP$700$2 = -1ll;
		label$2287:;
		if( TMP$700$2 == 0ll ) goto label$2282;
		{
			if( (int64)ALINEMAJOR$1 <= (int64)LASTLINE$ ) goto label$2284;
			{
				ADD_LINE_AT_END( (int64)ALINEMAJOR$1 );
			}
			goto label$2283;
			label$2284:;
			{
				DELETELINE( ALINEMAJOR$1 );
				if( (int64)ALINEMAJOR$1 <= (int64)LASTLINE$ ) goto label$2286;
				{
					ADD_LINE_AT_END( (int64)ALINEMAJOR$1 );
				}
				goto label$2285;
				label$2286:;
				{
					INSERTLINE( ALINEMAJOR$1 );
					label$2285:;
				}
			}
			label$2283:;
		}
		label$2282:;
		label$2281:;
	}
	label$2279:;
	label$2278:;
	fb$result$1 = ERR_$1;
	goto label$2277;
	label$2277:;
	return fb$result$1;
}

uint32 GETFUN( int64 M$1 )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2288:;
	uint32 OLDCT$1;
	__builtin_memset( &OLDCT$1, 0, 4ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	OLDCT$1 = (uint32)CT$;
	NUMPAR$1 = 0u;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 56ll) != 21ll ) goto label$2291;
	{
		int64 TMP$701$2;
		CT$ = CT$ + 1ll;
		label$2292:;
		{
			CT$ = CT$ + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 21ll ) goto label$2296;
			{
				CT$ = CT$ + 1ll;
				uint32 vr$11 = EXPR(  );
				ERR_$1 = vr$11;
				CT$ = CT$ + 1ll;
			}
			goto label$2295;
			label$2296:;
			{
				uint32 vr$13 = EXPR(  );
				ERR_$1 = vr$13;
				label$2295:;
			}
			if( (int64)ERR_$1 <= 0ll ) goto label$2298;
			{
				fb$result$1 = ERR_$1;
				goto label$2289;
				label$2298:;
			}
			NUMPAR$1 = (uint32)((int64)NUMPAR$1 + 1ll);
		}
		label$2294:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 20ll ) goto label$2299;
		TMP$701$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll);
		goto label$2304;
		label$2299:;
		TMP$701$2 = -1ll;
		label$2304:;
		if( TMP$701$2 == 0ll ) goto label$2292;
		label$2293:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$2301;
		{
			fb$result$1 = 14u;
			goto label$2289;
			label$2301:;
		}
	}
	label$2291:;
	label$2290:;
	*(uint32*)&T2$1 = NUMPAR$1;
	*(uint32*)((uint8*)&T2$1 + 8ll) = (uint32)*(int64*)(((int64)(struct $4PART*)LPARTS$ + ((int64)OLDCT$1 << (5ll & 63ll))) + 24ll);
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T2$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	if( M$1 != -1ll ) goto label$2303;
	{
		*(uint32*)((uint8*)&T2$1 + 8ll) = 21u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T2$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		label$2303:;
	}
	fb$result$1 = 0u;
	goto label$2289;
	label$2289:;
	return fb$result$1;
}

uint32 GETVAR( int64 M$1 )
{
	int64 TMP$703$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2305:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	FBSTRING VARNAME_$1;
	__builtin_memset( &VARNAME_$1, 0, 24ll );
	FBSTRING SUFFIX_$1;
	__builtin_memset( &SUFFIX_$1, 0, 24ll );
	fb_StrAssign( (void*)&VARNAME_$1, -1ll, (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, 0 );
	J$1 = -1ll;
	{
		I$1 = 0ll;
		int64 TMP$702$2;
		TMP$702$2 = VARNUM$ + -1ll;
		goto label$2307;
		label$2310:;
		{
			int32 vr$15 = fb_StrCompare( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (I$1 * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll );
			if( (int64)vr$15 != 0ll ) goto label$2312;
			{
				J$1 = I$1;
				goto label$2309;
				label$2312:;
			}
		}
		label$2308:;
		I$1 = I$1 + 1ll;
		label$2307:;
		if( I$1 <= TMP$702$2 ) goto label$2310;
		label$2309:;
	}
	if( J$1 != -1ll ) goto label$2313;
	TMP$703$1 = (int64)-(VARNUM$ < 1024ll);
	goto label$2330;
	label$2313:;
	TMP$703$1 = 0ll;
	label$2330:;
	if( TMP$703$1 == 0ll ) goto label$2315;
	{
		fb_StrAssign( (void*)((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)), -1ll, (void*)&VARNAME_$1, -1ll, 0 );
		*(int64*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)) + 24ll) = 0ll;
		*(uint32*)(((int64)(struct $8VARIABLE*)VARIABLES$ + (VARNUM$ * 40ll)) + 32ll) = 28u;
		J$1 = VARNUM$;
		VARNUM$ = VARNUM$ + 1ll;
	}
	label$2315:;
	label$2314:;
	NUMPAR$1 = 0ll;
	if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 56ll) != 21ll ) goto label$2317;
	{
		int64 TMP$704$2;
		CT$ = CT$ + 1ll;
		label$2318:;
		{
			CT$ = CT$ + 1ll;
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 21ll ) goto label$2322;
			{
				CT$ = CT$ + 1ll;
				uint32 vr$30 = EXPR(  );
				ERR_$1 = (int64)vr$30;
				CT$ = CT$ + 1ll;
			}
			goto label$2321;
			label$2322:;
			{
				uint32 vr$33 = EXPR(  );
				ERR_$1 = (int64)vr$33;
				label$2321:;
			}
			if( ERR_$1 <= 0ll ) goto label$2324;
			{
				fb$result$1 = (uint32)ERR_$1;
				fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
				fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
				goto label$2306;
				label$2324:;
			}
			NUMPAR$1 = NUMPAR$1 + 1ll;
		}
		label$2320:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 20ll ) goto label$2325;
		TMP$704$2 = (int64)-(*(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) == 510ll);
		goto label$2331;
		label$2325:;
		TMP$704$2 = -1ll;
		label$2331:;
		if( TMP$704$2 == 0ll ) goto label$2318;
		label$2319:;
		if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 510ll ) goto label$2327;
		{
			fb$result$1 = 14u;
			fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
			fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
			goto label$2306;
			label$2327:;
		}
	}
	label$2317:;
	label$2316:;
	*(uint32*)((uint8*)&T2$1 + 4ll) = (uint32)NUMPAR$1;
	*(uint32*)((uint8*)&T2$1 + 8ll) = 17u;
	*(uint32*)&T2$1 = (uint32)J$1;
	__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T2$1, 16 );
	LINEPTR$ = LINEPTR$ + 1ll;
	if( M$1 != -1ll ) goto label$2329;
	{
		*(uint32*)((uint8*)&T2$1 + 8ll) = 21u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T2$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		label$2329:;
	}
	fb$result$1 = 0u;
	fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	goto label$2306;
	fb_StrDelete( (FBSTRING*)&SUFFIX_$1 );
	fb_StrDelete( (FBSTRING*)&VARNAME_$1 );
	label$2306:;
	return fb$result$1;
}

uint32 GETVALUE( void )
{
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2332:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 OP$1;
	__builtin_memset( &OP$1, 0, 8ll );
	int64 M$1;
	__builtin_memset( &M$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	M$1 = 1ll;
	*(uint32*)&T1$1 = 0u;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	if( OP$1 != 2ll ) goto label$2335;
	{
		M$1 = -1ll;
		CT$ = CT$ + 1ll;
		OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
		label$2335:;
	}
	{
		if( OP$1 != 512ll ) goto label$2337;
		label$2338:;
		{
			if( M$1 != 1ll ) goto label$2340;
			{
				int32 vr$12 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
				*(uint32*)&T1$1 = (uint32)(M$1 * (int64)vr$12);
				*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
				label$2340:;
			}
			if( M$1 != -1ll ) goto label$2342;
			{
				int32 vr$18 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
				*(int64*)&T1$1 = M$1 * (int64)vr$18;
				*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
				label$2342:;
			}
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + 1ll;
		}
		goto label$2336;
		label$2337:;
		if( OP$1 != 513ll ) goto label$2343;
		label$2344:;
		{
			FBSTRING* vr$29 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), 1ll );
			int32 vr$30 = fb_StrCompare( (void*)vr$29, -1ll, (void*)"$", 2ll );
			if( (int64)vr$30 != 0ll ) goto label$2346;
			{
				FBSTRING TMP$706$4;
				int64 vr$34 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
				FBSTRING* vr$38 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), vr$34 + -1ll );
				__builtin_memset( &TMP$706$4, 0, 24ll );
				FBSTRING* vr$41 = fb_StrConcat( &TMP$706$4, (void*)"&h", 3ll, (void*)vr$38, -1ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)vr$41, -1ll, 0 );
				label$2346:;
			}
			FBSTRING* vr$46 = fb_LEFT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), 1ll );
			int32 vr$47 = fb_StrCompare( (void*)vr$46, -1ll, (void*)"%", 2ll );
			if( (int64)vr$47 != 0ll ) goto label$2348;
			{
				FBSTRING TMP$708$4;
				int64 vr$51 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
				FBSTRING* vr$55 = fb_RIGHT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), vr$51 + -1ll );
				__builtin_memset( &TMP$708$4, 0, 24ll );
				FBSTRING* vr$58 = fb_StrConcat( &TMP$708$4, (void*)"&b", 3ll, (void*)vr$55, -1ll );
				fb_StrAssign( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll, (void*)vr$58, -1ll, 0 );
				label$2348:;
			}
			int32 vr$63 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			*(int64*)&T1$1 = M$1 * (int64)vr$63;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + 1ll;
		}
		goto label$2336;
		label$2343:;
		if( OP$1 != 514ll ) goto label$2349;
		label$2350:;
		{
			if( M$1 != 1ll ) goto label$2352;
			{
				double vr$74 = fb_VAL( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
				*(double*)&T1$1 = vr$74 * 0x1.p+0;
				*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
				label$2352:;
			}
			if( M$1 != -1ll ) goto label$2354;
			{
				double vr$78 = fb_VAL( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
				*(double*)&T1$1 = vr$78 * -0x1.p+0;
				*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
				label$2354:;
			}
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + 1ll;
		}
		goto label$2336;
		label$2349:;
		if( OP$1 != 515ll ) goto label$2355;
		label$2356:;
		{
			int64 vr$88 = fb_StrLen( (void*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), -1ll );
			L$1 = vr$88;
			MEMTOP$ = (uint32)((((int64)MEMTOP$ - L$1) + -4ll) & 4294967292ll);
			PSLPOKE( MEMTOP$, (uint32)L$1 );
			{
				I$1 = 1ll;
				int64 TMP$709$4;
				TMP$709$4 = L$1;
				goto label$2357;
				label$2360:;
				{
					FBSTRING* vr$97 = fb_StrMid( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))), I$1, 1ll );
					uint32 vr$98 = fb_ASC( (FBSTRING*)vr$97, 1ll );
					PSPOKE( (uint32)(((int64)MEMTOP$ + I$1) + 3ll), (uint8)vr$98 );
				}
				label$2358:;
				I$1 = I$1 + 1ll;
				label$2357:;
				if( I$1 <= TMP$709$4 ) goto label$2360;
				label$2359:;
			}
			*(uint32*)&T1$1 = MEMTOP$;
			*(uint32*)((uint8*)&T1$1 + 8ll) = 43u;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + 1ll;
		}
		goto label$2336;
		label$2355:;
		if( OP$1 != 44ll ) goto label$2361;
		label$2362:;
		{
			*(uint32*)((uint8*)&T1$1 + 8ll) = 44u;
			int32 vr$113 = fb_VALINT( (FBSTRING*)((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) );
			*(int64*)&T1$1 = (int64)vr$113;
			__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T1$1, 16 );
			LINEPTR$ = LINEPTR$ + 1ll;
			CT$ = CT$ + 1ll;
		}
		goto label$2336;
		label$2361:;
		if( OP$1 != 516ll ) goto label$2363;
		label$2364:;
		{
			uint32 vr$121 = GETVAR( M$1 );
			ERR_$1 = (int64)vr$121;
			CT$ = CT$ + 1ll;
			if( ERR_$1 <= 0ll ) goto label$2366;
			{
				fb$result$1 = (uint32)ERR_$1;
				goto label$2333;
				label$2366:;
			}
		}
		goto label$2336;
		label$2363:;
		if( OP$1 != 21ll ) goto label$2367;
		label$2368:;
		{
			CT$ = CT$ + 1ll;
			uint32 vr$126 = EXPR(  );
			ERR_$1 = (int64)vr$126;
			if( ERR_$1 <= 0ll ) goto label$2370;
			{
				fb$result$1 = (uint32)ERR_$1;
				goto label$2333;
				label$2370:;
			}
			if( *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll) != 20ll ) goto label$2372;
			{
				CT$ = CT$ + 1ll;
				label$2372:;
			}
		}
		goto label$2336;
		label$2367:;
		{
			uint32 vr$131 = GETFUN( M$1 );
			ERR_$1 = (int64)vr$131;
			CT$ = CT$ + 1ll;
			if( ERR_$1 <= 0ll ) goto label$2375;
			{
				fb$result$1 = (uint32)ERR_$1;
				goto label$2333;
				label$2375:;
			}
		}
		label$2373:;
		label$2336:;
	}
	fb$result$1 = 0u;
	goto label$2333;
	label$2333:;
	return fb$result$1;
}

uint32 MULDIV( void )
{
	int64 TMP$710$1;
	int64 TMP$711$1;
	int64 TMP$712$1;
	int64 TMP$713$1;
	int64 TMP$714$1;
	int64 TMP$715$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2376:;
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	int64 OP$1;
	__builtin_memset( &OP$1, 0, 8ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)&T3$1 = 0u;
	uint32 vr$4 = GETVALUE(  );
	ERR_$1 = vr$4;
	if( (int64)ERR_$1 <= 0ll ) goto label$2379;
	{
		fb$result$1 = ERR_$1;
		goto label$2377;
		label$2379:;
	}
	OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	label$2380:;
	if( OP$1 == 5ll ) goto label$2382;
	TMP$710$1 = (int64)-(OP$1 == 8ll);
	goto label$2390;
	label$2382:;
	TMP$710$1 = -1ll;
	label$2390:;
	if( TMP$710$1 != 0ll ) goto label$2383;
	TMP$711$1 = (int64)-(OP$1 == 6ll);
	goto label$2391;
	label$2383:;
	TMP$711$1 = -1ll;
	label$2391:;
	if( TMP$711$1 != 0ll ) goto label$2384;
	TMP$712$1 = (int64)-(OP$1 == 9ll);
	goto label$2392;
	label$2384:;
	TMP$712$1 = -1ll;
	label$2392:;
	if( TMP$712$1 != 0ll ) goto label$2385;
	TMP$713$1 = (int64)-(OP$1 == 10ll);
	goto label$2393;
	label$2385:;
	TMP$713$1 = -1ll;
	label$2393:;
	if( TMP$713$1 != 0ll ) goto label$2386;
	TMP$714$1 = (int64)-(OP$1 == 11ll);
	goto label$2394;
	label$2386:;
	TMP$714$1 = -1ll;
	label$2394:;
	if( TMP$714$1 != 0ll ) goto label$2387;
	TMP$715$1 = (int64)-(OP$1 == 12ll);
	goto label$2395;
	label$2387:;
	TMP$715$1 = -1ll;
	label$2395:;
	if( TMP$715$1 == 0ll ) goto label$2381;
	{
		CT$ = CT$ + 1ll;
		uint32 vr$14 = GETVALUE(  );
		ERR_$1 = vr$14;
		if( (int64)ERR_$1 <= 0ll ) goto label$2389;
		{
			fb$result$1 = ERR_$1;
			goto label$2377;
			label$2389:;
		}
		*(uint32*)((uint8*)&T3$1 + 8ll) = (uint32)OP$1;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	}
	goto label$2380;
	label$2381:;
	fb$result$1 = 0u;
	goto label$2377;
	label$2377:;
	return fb$result$1;
}

uint32 ADDSUB( void )
{
	int64 TMP$716$1;
	int64 TMP$717$1;
	int64 TMP$718$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2396:;
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	int64 OP$1;
	__builtin_memset( &OP$1, 0, 8ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	*(uint32*)&T3$1 = 0u;
	uint32 vr$4 = MULDIV(  );
	ERR_$1 = vr$4;
	if( (int64)ERR_$1 <= 0ll ) goto label$2399;
	{
		fb$result$1 = ERR_$1;
		goto label$2397;
		label$2399:;
	}
	OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	label$2400:;
	if( OP$1 == 1ll ) goto label$2402;
	TMP$716$1 = (int64)-(OP$1 == 2ll);
	goto label$2407;
	label$2402:;
	TMP$716$1 = -1ll;
	label$2407:;
	if( TMP$716$1 != 0ll ) goto label$2403;
	TMP$717$1 = (int64)-(OP$1 == 7ll);
	goto label$2408;
	label$2403:;
	TMP$717$1 = -1ll;
	label$2408:;
	if( TMP$717$1 != 0ll ) goto label$2404;
	TMP$718$1 = (int64)-(OP$1 == 3ll);
	goto label$2409;
	label$2404:;
	TMP$718$1 = -1ll;
	label$2409:;
	if( TMP$718$1 == 0ll ) goto label$2401;
	{
		CT$ = CT$ + 1ll;
		uint32 vr$11 = MULDIV(  );
		ERR_$1 = vr$11;
		if( (int64)ERR_$1 <= 0ll ) goto label$2406;
		{
			fb$result$1 = ERR_$1;
			goto label$2397;
			label$2406:;
		}
		*(uint32*)((uint8*)&T3$1 + 8ll) = (uint32)OP$1;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	}
	goto label$2400;
	label$2401:;
	fb$result$1 = 0u;
	goto label$2397;
	label$2397:;
	return fb$result$1;
}

uint32 EXPR( void )
{
	int64 TMP$719$1;
	int64 TMP$720$1;
	int64 TMP$721$1;
	int64 TMP$722$1;
	int64 TMP$723$1;
	uint32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2410:;
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	int64 OP$1;
	__builtin_memset( &OP$1, 0, 8ll );
	uint32 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 4ll );
	OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	if( OP$1 != 510ll ) goto label$2413;
	{
		*(uint32*)&T3$1 = 29u;
		*(uint32*)((uint8*)&T3$1 + 8ll) = 255u;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		fb$result$1 = 29u;
		goto label$2411;
		label$2413:;
	}
	*(uint32*)&T3$1 = 0u;
	uint32 vr$10 = ADDSUB(  );
	ERR_$1 = vr$10;
	if( (int64)ERR_$1 <= 0ll ) goto label$2415;
	{
		fb$result$1 = ERR_$1;
		goto label$2411;
		label$2415:;
	}
	OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	label$2416:;
	if( OP$1 == 27ll ) goto label$2418;
	TMP$719$1 = (int64)-(OP$1 == 15ll);
	goto label$2425;
	label$2418:;
	TMP$719$1 = -1ll;
	label$2425:;
	if( TMP$719$1 != 0ll ) goto label$2419;
	TMP$720$1 = (int64)-(OP$1 == 16ll);
	goto label$2426;
	label$2419:;
	TMP$720$1 = -1ll;
	label$2426:;
	if( TMP$720$1 != 0ll ) goto label$2420;
	TMP$721$1 = (int64)-(OP$1 == 39ll);
	goto label$2427;
	label$2420:;
	TMP$721$1 = -1ll;
	label$2427:;
	if( TMP$721$1 != 0ll ) goto label$2421;
	TMP$722$1 = (int64)-(OP$1 == 38ll);
	goto label$2428;
	label$2421:;
	TMP$722$1 = -1ll;
	label$2428:;
	if( TMP$722$1 != 0ll ) goto label$2422;
	TMP$723$1 = (int64)-(OP$1 == 42ll);
	goto label$2429;
	label$2422:;
	TMP$723$1 = -1ll;
	label$2429:;
	if( TMP$723$1 == 0ll ) goto label$2417;
	{
		CT$ = CT$ + 1ll;
		uint32 vr$19 = ADDSUB(  );
		ERR_$1 = vr$19;
		if( (int64)ERR_$1 <= 0ll ) goto label$2424;
		{
			fb$result$1 = ERR_$1;
			goto label$2411;
			label$2424:;
		}
		*(uint32*)((uint8*)&T3$1 + 8ll) = (uint32)OP$1;
		__builtin_memcpy( (struct $11EXPR_RESULT*)((uint8*)&CL$ + (LINEPTR$ << (4ll & 63ll))), &T3$1, 16 );
		LINEPTR$ = LINEPTR$ + 1ll;
		OP$1 = *(int64*)(((int64)(struct $4PART*)LPARTS$ + (CT$ << (5ll & 63ll))) + 24ll);
	}
	goto label$2416;
	label$2417:;
	fb$result$1 = 0u;
	goto label$2411;
	label$2411:;
	return fb$result$1;
}

int64 EXECUTE_LINE( int64 ASTART$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2430:;
	tmp$168 CMD$1;
	__builtin_memset( &CMD$1, 0, 8ll );
	RUNPTR2$ = 0u;
	{
		LINEPTR_E$ = ASTART$1;
		int64 TMP$724$2;
		TMP$724$2 = LINEPTR$ + -1ll;
		goto label$2432;
		label$2435:;
		{
			CMD$1 = *(tmp$168*)((int64)(tmp$168*)COMMANDS$ + (((int64)*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 8ll) & 255ll) << (3ll & 63ll)));
			(CMD$1)(  );
		}
		label$2433:;
		LINEPTR_E$ = LINEPTR_E$ + 1ll;
		label$2432:;
		if( LINEPTR_E$ <= TMP$724$2 ) goto label$2435;
		label$2434:;
	}
	fb$result$1 = (int64)RUNPTR2$;
	goto label$2431;
	label$2431:;
	return fb$result$1;
}

struct $11EXPR_RESULT POP( void )
{
	struct $11EXPR_RESULT fb$result$1;
	__builtin_memset( &fb$result$1, 0, 16ll );
	label$2436:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	if( STACKPOINTER$ != 0ll ) goto label$2439;
	{
		*(uint32*)((uint8*)&T1$1 + 8ll) = 255u;
		*(uint32*)&T1$1 = 24u;
	}
	goto label$2438;
	label$2439:;
	{
		STACKPOINTER$ = STACKPOINTER$ + -1ll;
		__builtin_memcpy( &T1$1, (struct $11EXPR_RESULT*)((int64)(struct $11EXPR_RESULT*)STACK$ + (STACKPOINTER$ << (4ll & 63ll))), 16 );
	}
	label$2438:;
	__builtin_memcpy( &fb$result$1, &T1$1, 16 );
	goto label$2437;
	label$2437:;
	return fb$result$1;
}

void PUSH( struct $11EXPR_RESULT* T1$1 )
{
	label$2440:;
	if( STACKPOINTER$ >= 512ll ) goto label$2443;
	{
		__builtin_memcpy( (struct $11EXPR_RESULT*)((int64)(struct $11EXPR_RESULT*)STACK$ + (STACKPOINTER$ << (4ll & 63ll))), T1$1, 16 );
		STACKPOINTER$ = STACKPOINTER$ + 1ll;
	}
	label$2443:;
	label$2442:;
	label$2441:;
}

FBSTRING* CONVERTSTRING( uint32 PSADDR$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$2444:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	uint32 L$1;
	__builtin_memset( &L$1, 0, 4ll );
	uint32 vr$4 = PSLPEEK( PSADDR$1 );
	L$1 = vr$4;
	fb_StrAssign( (void*)&S$1, -1ll, (void*)"", 1ll, 0 );
	{
		I$1 = 1ll;
		int64 TMP$725$2;
		TMP$725$2 = (int64)L$1;
		goto label$2446;
		label$2449:;
		{
			uint8 vr$11 = PSPEEK( (uint32)(((int64)PSADDR$1 + I$1) + 3ll) );
			FBSTRING* vr$13 = fb_CHR( 1, (int64)vr$11 );
			fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
		}
		label$2447:;
		I$1 = I$1 + 1ll;
		label$2446:;
		if( I$1 <= TMP$725$2 ) goto label$2449;
		label$2448:;
	}
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	goto label$2445;
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$2445:;
	FBSTRING* vr$21 = fb_StrAllocTempResult( (FBSTRING*)&fb$result$1 );
	return vr$21;
}

int64 CONVERTTOINT( struct $11EXPR_RESULT* T1$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2450:;
	{
		uint32 TMP$726$2;
		TMP$726$2 = *(uint32*)((uint8*)T1$1 + 8ll);
		if( (int64)TMP$726$2 != 28ll ) goto label$2453;
		label$2454:;
		{
			fb$result$1 = *(int64*)T1$1;
			goto label$2451;
		}
		goto label$2452;
		label$2453:;
		if( (int64)TMP$726$2 != 29ll ) goto label$2455;
		label$2456:;
		{
			fb$result$1 = (int64)*(uint32*)T1$1;
			goto label$2451;
		}
		goto label$2452;
		label$2455:;
		if( (int64)TMP$726$2 != 30ll ) goto label$2457;
		label$2458:;
		{
			double vr$9 = round( *(double*)T1$1 );
			fb$result$1 = fb_D2L( vr$9 );
			goto label$2451;
		}
		goto label$2452;
		label$2457:;
		if( (int64)TMP$726$2 != 31ll ) goto label$2459;
		label$2460:;
		{
			double vr$13 = fb_VAL( *(FBSTRING**)T1$1 );
			double vr$14 = round( vr$13 );
			fb$result$1 = fb_D2L( vr$14 );
			goto label$2451;
		}
		goto label$2452;
		label$2459:;
		if( (int64)TMP$726$2 != 43ll ) goto label$2461;
		label$2462:;
		{
			FBSTRING* vr$18 = CONVERTSTRING( *(uint32*)T1$1 );
			double vr$19 = fb_VAL( (FBSTRING*)vr$18 );
			double vr$20 = round( vr$19 );
			fb$result$1 = fb_D2L( vr$20 );
			goto label$2451;
		}
		goto label$2452;
		label$2461:;
		if( (int64)TMP$726$2 != 44ll ) goto label$2463;
		label$2464:;
		{
			fb$result$1 = *(int64*)T1$1;
			goto label$2451;
		}
		goto label$2452;
		label$2463:;
		{
			fb$result$1 = 0ll;
			goto label$2451;
		}
		label$2465:;
		label$2452:;
	}
	label$2451:;
	return fb$result$1;
}

float CONVERTTOFLOAT( struct $11EXPR_RESULT* T1$1 )
{
	float fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2466:;
	float S$1;
	__builtin_memset( &S$1, 0, 4ll );
	{
		uint32 TMP$727$2;
		TMP$727$2 = *(uint32*)((uint8*)T1$1 + 8ll);
		if( (int64)TMP$727$2 != 28ll ) goto label$2469;
		label$2470:;
		{
			S$1 = (float)*(int64*)T1$1;
			fb$result$1 = S$1;
			goto label$2467;
		}
		goto label$2468;
		label$2469:;
		if( (int64)TMP$727$2 != 29ll ) goto label$2471;
		label$2472:;
		{
			S$1 = (float)*(uint32*)T1$1;
			fb$result$1 = S$1;
			goto label$2467;
		}
		goto label$2468;
		label$2471:;
		if( (int64)TMP$727$2 != 30ll ) goto label$2473;
		label$2474:;
		{
			fb$result$1 = (float)*(double*)T1$1;
			goto label$2467;
		}
		goto label$2468;
		label$2473:;
		if( (int64)TMP$727$2 != 31ll ) goto label$2475;
		label$2476:;
		{
			double vr$14 = fb_VAL( *(FBSTRING**)T1$1 );
			fb$result$1 = (float)vr$14;
			goto label$2467;
		}
		goto label$2468;
		label$2475:;
		if( (int64)TMP$727$2 != 43ll ) goto label$2477;
		label$2478:;
		{
			FBSTRING* vr$18 = CONVERTSTRING( *(uint32*)T1$1 );
			double vr$19 = fb_VAL( (FBSTRING*)vr$18 );
			fb$result$1 = (float)vr$19;
			goto label$2467;
		}
		goto label$2468;
		label$2477:;
		{
			fb$result$1 = 0x0p+0f;
			goto label$2467;
		}
		label$2479:;
		label$2468:;
	}
	label$2467:;
	return fb$result$1;
}

void CSAVE_BLOCK( uint32 ADDRESS$1 )
{
	label$2480:;
	label$2481:;
}

void CSAVE_ADDTOBLOCK( uint8 D$1, uint8 FORCE$1 )
{
	label$2482:;
	label$2483:;
}

void TEST_CSAVE( void )
{
	label$2484:;
	label$2485:;
}

void DO_ABS( void )
{
	label$2486:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 28ll ) goto label$2489;
	{
		*(int64*)&T1$1 = __builtin_llabs( *(int64*)&T1$1 );
	}
	goto label$2488;
	label$2489:;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 30ll ) goto label$2490;
	{
		*(double*)&T1$1 = __builtin_fabs( *(double*)&T1$1 );
	}
	goto label$2488;
	label$2490:;
	{
		*(uint32*)((uint8*)&T1$1 + 8ll) = 255u;
		*(uint32*)&T1$1 = 40u;
	}
	label$2488:;
	PUSH( &T1$1 );
	label$2487:;
}

void DO_ACOS( void )
{
	int64 TMP$728$1;
	label$2491:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2493;
	TMP$728$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2496;
	label$2493:;
	TMP$728$1 = -1ll;
	label$2496:;
	if( TMP$728$1 == 0ll ) goto label$2495;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"acos: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2492;
		label$2495:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	float vr$10 = CONVERTTOFLOAT( &T1$1 );
	*(double*)&T1$1 = (double)(__builtin_acosf( vr$10 ) * TRIG_COEFF2$);
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$2492:;
}

void DO_ASC( void )
{
	int64 TMP$730$1;
	label$2497:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2499;
	TMP$730$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2506;
	label$2499:;
	TMP$730$1 = -1ll;
	label$2506:;
	if( TMP$730$1 == 0ll ) goto label$2501;
	{
		FBSTRING* vr$9 = fb_StrAllocTempDescZEx( (uint8*)"asc: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$9, 0 );
		PRINTERROR( 39ll, 0ll );
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$2498;
		label$2501:;
	}
	struct $11EXPR_RESULT vr$11 = POP(  );
	T1$1 = vr$11;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2503;
	{
		FBSTRING* vr$13 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
		*(FBSTRING**)&T1$1 = &S$1;
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$2503:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$2505;
	{
		FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (uint8*)"asc: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$17, 0 );
		PRINTERROR( 15ll, 0ll );
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$2498;
		label$2505:;
	}
	uint32 vr$19 = fb_ASC( *(FBSTRING**)&T1$1, 1ll );
	*(int64*)&T1$1 = (int64)vr$19;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
	PUSH( &T1$1 );
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$2498:;
}

void DO_ASIN( void )
{
	int64 TMP$732$1;
	label$2507:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2509;
	TMP$732$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2512;
	label$2509:;
	TMP$732$1 = -1ll;
	label$2512:;
	if( TMP$732$1 == 0ll ) goto label$2511;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"asin: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2508;
		label$2511:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	float vr$10 = CONVERTTOFLOAT( &T1$1 );
	*(double*)&T1$1 = (double)(__builtin_asinf( vr$10 ) * TRIG_COEFF2$);
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$2508:;
}

void DO_ATN( void )
{
	int64 TMP$734$1;
	label$2513:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2515;
	TMP$734$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2518;
	label$2515:;
	TMP$734$1 = -1ll;
	label$2518:;
	if( TMP$734$1 == 0ll ) goto label$2517;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"atn: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2514;
		label$2517:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	float vr$10 = CONVERTTOFLOAT( &T1$1 );
	*(double*)&T1$1 = (double)(__builtin_atanf( vr$10 ) * TRIG_COEFF2$);
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$2514:;
}

void DO_BEEP( void )
{
	int64 TMP$737$1;
	label$2519:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	uint32 FREQ$1;
	__builtin_memset( &FREQ$1, 0, 4ll );
	uint8 SAMPLE$1[2];
	__builtin_memset( (uint8*)SAMPLE$1, 0, 2ll );
	struct $8FBARRAY1IhE tmp$736$1;
	*(uint8**)&tmp$736$1 = (uint8*)SAMPLE$1;
	*(uint8**)((uint8*)&tmp$736$1 + 8ll) = (uint8*)SAMPLE$1;
	*(int64*)((uint8*)&tmp$736$1 + 16ll) = 2ll;
	*(int64*)((uint8*)&tmp$736$1 + 24ll) = 1ll;
	*(int64*)((uint8*)&tmp$736$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$736$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$736$1 + 48ll) = 2ll;
	*(int64*)((uint8*)&tmp$736$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$736$1 + 64ll) = 1ll;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T2$1 = vr$6;
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 28ll ) goto label$2521;
	TMP$737$1 = (int64)-((int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 29ll);
	goto label$2524;
	label$2521:;
	TMP$737$1 = -1ll;
	label$2524:;
	if( TMP$737$1 == 0ll ) goto label$2523;
	{
		FREQ$1 = (uint32)*(int64*)&T1$1;
	}
	goto label$2522;
	label$2523:;
	{
		int64 vr$13 = CONVERTTOINT( &T1$1 );
		FREQ$1 = (uint32)vr$13;
		label$2522:;
	}
	*(uint8*)SAMPLE$1 = (uint8)127u;
	*(uint8*)((int64)(uint8*)SAMPLE$1 + 1ll) = (uint8)128u;
	PUSH( &T2$1 );
	label$2520:;
}

void DO_BLIT( void )
{
	int64 TMP$739$1;
	label$2525:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 P$1[10];
	__builtin_memset( (uint32*)P$1, 0, 40ll );
	struct $8FBARRAY1IjE tmp$738$1;
	*(uint32**)&tmp$738$1 = (uint32*)P$1;
	*(uint32**)((uint8*)&tmp$738$1 + 8ll) = (uint32*)P$1;
	*(int64*)((uint8*)&tmp$738$1 + 16ll) = 40ll;
	*(int64*)((uint8*)&tmp$738$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$738$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$738$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$738$1 + 48ll) = 10ll;
	*(int64*)((uint8*)&tmp$738$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$738$1 + 64ll) = 9ll;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 == 10ll ) goto label$2527;
	TMP$739$1 = (int64)-(NUMPAR$1 != 6ll);
	goto label$2536;
	label$2527:;
	TMP$739$1 = 0ll;
	label$2536:;
	if( TMP$739$1 == 0ll ) goto label$2529;
	{
		FBSTRING* vr$10 = fb_StrAllocTempDescZEx( (uint8*)"blit: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$10, 0 );
		PRINTERROR( 39ll, (int64)*(uint32*)RUNHEADER$ );
		goto label$2526;
		label$2529:;
	}
	{
		I$1 = NUMPAR$1 + -1ll;
		goto label$2530;
		label$2533:;
		{
			struct $11EXPR_RESULT vr$13 = POP(  );
			T1$1 = vr$13;
			int64 vr$15 = CONVERTTOINT( &T1$1 );
			*(uint32*)((int64)(uint32*)P$1 + (I$1 << (2ll & 63ll))) = (uint32)vr$15;
		}
		label$2531:;
		I$1 = I$1 + -1ll;
		label$2530:;
		if( I$1 >= 0ll ) goto label$2533;
		label$2532:;
	}
	if( NUMPAR$1 != 10ll ) goto label$2535;
	{
	}
	goto label$2534;
	label$2535:;
	{
	}
	label$2534:;
	label$2526:;
}

void DO_BIN( void )
{
	int64 TMP$741$1;
	label$2537:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	uint32 NUM$1;
	__builtin_memset( &NUM$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 2ll ) goto label$2539;
	TMP$741$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2544;
	label$2539:;
	TMP$741$1 = -1ll;
	label$2544:;
	if( TMP$741$1 == 0ll ) goto label$2541;
	{
		FBSTRING* vr$9 = fb_StrAllocTempDescZEx( (uint8*)"bin$: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$9, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2538;
		label$2541:;
	}
	if( (int64)NUMPAR$1 != 2ll ) goto label$2543;
	{
		struct $11EXPR_RESULT vr$11 = POP(  );
		T1$1 = vr$11;
		int64 vr$13 = CONVERTTOINT( &T1$1 );
		NUM$1 = (uint32)vr$13;
	}
	goto label$2542;
	label$2543:;
	{
		NUM$1 = 0u;
		label$2542:;
	}
	struct $11EXPR_RESULT vr$15 = POP(  );
	T1$1 = vr$15;
	int64 vr$17 = CONVERTTOINT( &T1$1 );
	ARG$1 = (uint32)vr$17;
	FBSTRING* vr$19 = fb_BINEx_i( ARG$1, (int32)NUM$1 );
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$19, -1ll, 0 );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	PUSH( &T1$1 );
	label$2538:;
}

void DO_BOX( void )
{
	int64 TMP$743$1;
	int64 TMP$744$1;
	int64 TMP$745$1;
	int64 TMP$746$1;
	int64 TMP$747$1;
	int64 TMP$748$1;
	int64 TMP$749$1;
	label$2545:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT T4$1;
	__builtin_memset( &T4$1, 0, 16ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T4$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T3$1 = vr$5;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T2$1 = vr$6;
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 28ll ) goto label$2547;
	TMP$743$1 = (int64)-((int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 29ll);
	goto label$2556;
	label$2547:;
	TMP$743$1 = -1ll;
	label$2556:;
	if( TMP$743$1 == 0ll ) goto label$2549;
	if( (int64)*(uint32*)((uint8*)&T2$1 + 8ll) == 28ll ) goto label$2548;
	TMP$744$1 = (int64)-((int64)*(uint32*)((uint8*)&T2$1 + 8ll) == 29ll);
	goto label$2558;
	label$2548:;
	TMP$744$1 = -1ll;
	label$2558:;
	TMP$745$1 = (int64)-(TMP$744$1 != 0ll);
	goto label$2557;
	label$2549:;
	TMP$745$1 = 0ll;
	label$2557:;
	if( TMP$745$1 == 0ll ) goto label$2551;
	if( (int64)*(uint32*)((uint8*)&T3$1 + 8ll) == 28ll ) goto label$2550;
	TMP$746$1 = (int64)-((int64)*(uint32*)((uint8*)&T3$1 + 8ll) == 29ll);
	goto label$2560;
	label$2550:;
	TMP$746$1 = -1ll;
	label$2560:;
	TMP$747$1 = (int64)-(TMP$746$1 != 0ll);
	goto label$2559;
	label$2551:;
	TMP$747$1 = 0ll;
	label$2559:;
	if( TMP$747$1 == 0ll ) goto label$2553;
	if( (int64)*(uint32*)((uint8*)&T4$1 + 8ll) == 28ll ) goto label$2552;
	TMP$748$1 = (int64)-((int64)*(uint32*)((uint8*)&T4$1 + 8ll) == 29ll);
	goto label$2562;
	label$2552:;
	TMP$748$1 = -1ll;
	label$2562:;
	TMP$749$1 = (int64)-(TMP$748$1 != 0ll);
	goto label$2561;
	label$2553:;
	TMP$749$1 = 0ll;
	label$2561:;
	if( TMP$749$1 == 0ll ) goto label$2555;
	{
		BOX( *(int64*)&T1$1, *(int64*)&T2$1, *(int64*)&T3$1, *(int64*)&T4$1, (uint8)PLOT_COLOR$ );
		goto label$2546;
	}
	goto label$2554;
	label$2555:;
	{
		int64 vr$26 = CONVERTTOINT( &T4$1 );
		int64 vr$28 = CONVERTTOINT( &T3$1 );
		int64 vr$30 = CONVERTTOINT( &T2$1 );
		int64 vr$32 = CONVERTTOINT( &T1$1 );
		BOX( vr$32, vr$30, vr$28, vr$26, (uint8)PLOT_COLOR$ );
	}
	label$2554:;
	label$2546:;
}

void DO_BRUN( void )
{
	label$2563:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2566;
	{
		FBSTRING* vr$3 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$3, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$2566:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2568;
	{
	}
	label$2568:;
	label$2567:;
	label$2564:;
}

void DO_CD( void )
{
	label$2569:;
	int64 SLASH$1;
	__builtin_memset( &SLASH$1, 0, 8ll );
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	FBSTRING NEWDIR_$1;
	__builtin_memset( &NEWDIR_$1, 0, 24ll );
	FBSTRING FILENAME$1;
	__builtin_memset( &FILENAME$1, 0, 24ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"*", 1ll );
	FBSTRING* vr$6 = fb_Dir( (FBSTRING*)vr$5, 49, (int32*)0ull );
	fb_StrAssign( (void*)&FILENAME$1, -1ll, (void*)vr$6, -1ll, 0 );
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2572;
	{
		FBSTRING* vr$10 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$10, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$2572:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$2574;
	{
		PRINTERROR( 15ll, 0ll );
		fb_StrDelete( (FBSTRING*)&FILENAME$1 );
		fb_StrDelete( (FBSTRING*)&NEWDIR_$1 );
		goto label$2570;
		label$2574:;
	}
	fb_StrAssign( (void*)&NEWDIR_$1, -1ll, *(void**)&T1$1, -1ll, 0 );
	int32 vr$16 = fb_StrCompare( (void*)&NEWDIR_$1, -1ll, (void*)"..", 3ll );
	if( (int64)vr$16 != 0ll ) goto label$2576;
	{
		int64 TMP$750$2;
		FBSTRING TMP$754$2;
		int64 vr$18 = fb_StrLen( (void*)&CURRENTDIR_$, -1ll );
		FBSTRING* vr$19 = fb_StrAllocTempDescZEx( (uint8*)"/", 1ll );
		int64 vr$20 = fb_StrInstrRev( (FBSTRING*)&CURRENTDIR_$, (FBSTRING*)vr$19, vr$18 );
		SLASH$1 = vr$20;
		if( SLASH$1 <= 1ll ) goto label$2578;
		{
			FBSTRING* vr$22 = fb_LEFT( (FBSTRING*)&CURRENTDIR_$, SLASH$1 + -1ll );
			fb_StrAssign( (void*)&NEWDIR_$1, -1ll, (void*)vr$22, -1ll, 0 );
		}
		goto label$2577;
		label$2578:;
		{
			fb_StrAssign( (void*)&NEWDIR_$1, -1ll, (void*)"/", 2ll, 0 );
			label$2577:;
		}
		int32 vr$26 = fb_ChDir( (FBSTRING*)&NEWDIR_$1 );
		ERR_$1 = (int64)vr$26;
		if( ERR_$1 == 0ll ) goto label$2579;
		TMP$750$2 = (int64)-(ERR_$1 != 5ll);
		goto label$2594;
		label$2579:;
		TMP$750$2 = 0ll;
		label$2594:;
		if( TMP$750$2 == 0ll ) goto label$2581;
		{
			FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (uint8*)"System error ", 13ll );
			fb_PrintString( 0, (FBSTRING*)vr$29, 0 );
			fb_PrintLongint( 0, ERR_$1, 0 );
			FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (uint8*)": ", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$30, 0 );
			fb_PrintString( 0, (FBSTRING*)((uint8*)ERRORS_$ + 1272ll), 1 );
			fb_ChDir( (FBSTRING*)&CURRENTDIR_$ );
		}
		goto label$2580;
		label$2581:;
		{
			fb_StrAssign( (void*)&CURRENTDIR_$, -1ll, (void*)&NEWDIR_$1, -1ll, 0 );
			label$2580:;
		}
		__builtin_memset( &TMP$754$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$754$2, -1ll, (void*)"Current directory: ", 20ll, 0 );
		WRITE1( &TMP$754$2 );
		fb_StrDelete( (FBSTRING*)&TMP$754$2 );
		WRITELN( &CURRENTDIR_$ );
		fb_StrDelete( (FBSTRING*)&FILENAME$1 );
		fb_StrDelete( (FBSTRING*)&NEWDIR_$1 );
		goto label$2570;
	}
	label$2576:;
	label$2575:;
	FBSTRING* vr$39 = fb_LEFT( (FBSTRING*)&NEWDIR_$1, 1ll );
	int32 vr$40 = fb_StrCompare( (void*)vr$39, -1ll, (void*)"/", 2ll );
	if( (int64)vr$40 != 0ll ) goto label$2583;
	{
		int64 TMP$755$2;
		FBSTRING TMP$759$2;
		int32 vr$43 = fb_ChDir( (FBSTRING*)&NEWDIR_$1 );
		ERR_$1 = (int64)vr$43;
		if( ERR_$1 == 0ll ) goto label$2584;
		TMP$755$2 = (int64)-(ERR_$1 != 5ll);
		goto label$2595;
		label$2584:;
		TMP$755$2 = 0ll;
		label$2595:;
		if( TMP$755$2 == 0ll ) goto label$2586;
		{
			FBSTRING TMP$756$3;
			FBSTRING TMP$757$3;
			FBSTRING TMP$758$3;
			__builtin_memset( &TMP$756$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$756$3, -1ll, (void*)"System error ", 14ll, 0 );
			WRITE1( &TMP$756$3 );
			fb_StrDelete( (FBSTRING*)&TMP$756$3 );
			__builtin_memset( &TMP$757$3, 0, 24ll );
			FBSTRING* vr$51 = fb_LongintToStr( ERR_$1 );
			fb_StrAssign( (void*)&TMP$757$3, -1ll, (void*)vr$51, -1ll, 0 );
			WRITE1( &TMP$757$3 );
			fb_StrDelete( (FBSTRING*)&TMP$757$3 );
			__builtin_memset( &TMP$758$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$758$3, -1ll, (void*)": ", 3ll, 0 );
			WRITE1( &TMP$758$3 );
			fb_StrDelete( (FBSTRING*)&TMP$758$3 );
			WRITELN( (FBSTRING*)((uint8*)ERRORS_$ + 1272ll) );
			fb_ChDir( (FBSTRING*)&CURRENTDIR_$ );
		}
		goto label$2585;
		label$2586:;
		{
			fb_StrAssign( (void*)&CURRENTDIR_$, -1ll, (void*)&NEWDIR_$1, -1ll, 0 );
			label$2585:;
		}
		__builtin_memset( &TMP$759$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$759$2, -1ll, (void*)"Current directory: ", 20ll, 0 );
		WRITE1( &TMP$759$2 );
		fb_StrDelete( (FBSTRING*)&TMP$759$2 );
		WRITELN( &CURRENTDIR_$ );
		fb_StrDelete( (FBSTRING*)&FILENAME$1 );
		fb_StrDelete( (FBSTRING*)&NEWDIR_$1 );
		goto label$2570;
	}
	goto label$2582;
	label$2583:;
	{
		int64 TMP$763$2;
		FBSTRING TMP$767$2;
		int32 vr$66 = fb_StrCompare( (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
		if( (int64)vr$66 == 0ll ) goto label$2588;
		{
			FBSTRING TMP$760$3;
			FBSTRING TMP$761$3;
			__builtin_memset( &TMP$760$3, 0, 24ll );
			FBSTRING* vr$71 = fb_StrConcat( &TMP$760$3, (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
			__builtin_memset( &TMP$761$3, 0, 24ll );
			FBSTRING* vr$74 = fb_StrConcat( &TMP$761$3, (void*)vr$71, -1ll, (void*)&NEWDIR_$1, -1ll );
			fb_StrAssign( (void*)&NEWDIR_$1, -1ll, (void*)vr$74, -1ll, 0 );
		}
		goto label$2587;
		label$2588:;
		{
			FBSTRING TMP$762$3;
			__builtin_memset( &TMP$762$3, 0, 24ll );
			FBSTRING* vr$79 = fb_StrConcat( &TMP$762$3, (void*)&CURRENTDIR_$, -1ll, (void*)&NEWDIR_$1, -1ll );
			fb_StrAssign( (void*)&NEWDIR_$1, -1ll, (void*)vr$79, -1ll, 0 );
			label$2587:;
		}
		FBSTRING* vr$82 = fb_RIGHT( (FBSTRING*)&NEWDIR_$1, 1ll );
		int32 vr$83 = fb_StrCompare( (void*)vr$82, -1ll, (void*)"/", 2ll );
		if( (int64)vr$83 != 0ll ) goto label$2590;
		{
			int64 vr$86 = fb_StrLen( (void*)&NEWDIR_$1, -1ll );
			FBSTRING* vr$89 = fb_LEFT( (FBSTRING*)&NEWDIR_$1, vr$86 + -1ll );
			fb_StrAssign( (void*)&NEWDIR_$1, -1ll, (void*)vr$89, -1ll, 0 );
			label$2590:;
		}
		int32 vr$92 = fb_ChDir( (FBSTRING*)&NEWDIR_$1 );
		ERR_$1 = (int64)vr$92;
		if( ERR_$1 == 0ll ) goto label$2591;
		TMP$763$2 = (int64)-(ERR_$1 != 5ll);
		goto label$2596;
		label$2591:;
		TMP$763$2 = 0ll;
		label$2596:;
		if( TMP$763$2 == 0ll ) goto label$2593;
		{
			FBSTRING TMP$764$3;
			FBSTRING TMP$765$3;
			FBSTRING TMP$766$3;
			__builtin_memset( &TMP$764$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$764$3, -1ll, (void*)"System error ", 14ll, 0 );
			WRITE1( &TMP$764$3 );
			fb_StrDelete( (FBSTRING*)&TMP$764$3 );
			__builtin_memset( &TMP$765$3, 0, 24ll );
			FBSTRING* vr$100 = fb_LongintToStr( ERR_$1 );
			fb_StrAssign( (void*)&TMP$765$3, -1ll, (void*)vr$100, -1ll, 0 );
			WRITE1( &TMP$765$3 );
			fb_StrDelete( (FBSTRING*)&TMP$765$3 );
			__builtin_memset( &TMP$766$3, 0, 24ll );
			fb_StrAssign( (void*)&TMP$766$3, -1ll, (void*)": ", 3ll, 0 );
			WRITE1( &TMP$766$3 );
			fb_StrDelete( (FBSTRING*)&TMP$766$3 );
			WRITELN( (FBSTRING*)((uint8*)ERRORS_$ + 1272ll) );
			fb_ChDir( (FBSTRING*)&CURRENTDIR_$ );
		}
		goto label$2592;
		label$2593:;
		{
			fb_StrAssign( (void*)&CURRENTDIR_$, -1ll, (void*)&NEWDIR_$1, -1ll, 0 );
			label$2592:;
		}
		__builtin_memset( &TMP$767$2, 0, 24ll );
		fb_StrAssign( (void*)&TMP$767$2, -1ll, (void*)"Current directory: ", 20ll, 0 );
		WRITE1( &TMP$767$2 );
		fb_StrDelete( (FBSTRING*)&TMP$767$2 );
		WRITELN( &CURRENTDIR_$ );
	}
	label$2582:;
	fb_StrDelete( (FBSTRING*)&FILENAME$1 );
	fb_StrDelete( (FBSTRING*)&NEWDIR_$1 );
	label$2570:;
}

void DO_CHANGEFREQ( void )
{
	label$2597:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 LFREQ$1;
	__builtin_memset( &LFREQ$1, 0, 8ll );
	int64 SKIP$1;
	__builtin_memset( &SKIP$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 PERIOD$1;
	__builtin_memset( &PERIOD$1, 0, 8ll );
	int64 AMODE$1;
	__builtin_memset( &AMODE$1, 0, 8ll );
	uint32 PS$1;
	__builtin_memset( &PS$1, 0, 4ll );
	float FREQ$1;
	__builtin_memset( &FREQ$1, 0, 4ll );
	struct $11EXPR_RESULT vr$9 = POP(  );
	T1$1 = vr$9;
	float vr$11 = CONVERTTOFLOAT( &T1$1 );
	FREQ$1 = vr$11;
	struct $11EXPR_RESULT vr$12 = POP(  );
	T1$1 = vr$12;
	int64 vr$14 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$14 % 8ll;
	AMODE$1 = (int64)*(uint16*)(((int64)(struct $12AUDIOCHANNEL*)CHANNELS$ + (CHANNEL$1 * 28ll)) + 22ll);
	if( AMODE$1 <= 0ll ) goto label$2600;
	{
		LFREQ$1 = fb_D2L( __builtin_floor( ((double)__builtin_logf( FREQ$1 ) / 0x1.62E42FEFA39EFp-1) ) );
		double vr$25 = pow( 0x1.p+1, (double)(LFREQ$1 + AMODE$1) );
		double vr$26 = round( vr$25 );
		SKIP$1 = fb_D2L( vr$26 );
		if( SKIP$1 <= 32768ll ) goto label$2602;
		{
			I$1 = fb_D2L( (double)SKIP$1 / 0x1.p+15 );
			SKIP$1 = 32768ll;
		}
		goto label$2601;
		label$2602:;
		{
			I$1 = 1ll;
			label$2601:;
		}
		double vr$37 = pow( 0x1.p+1, (double)((18ll - AMODE$1) - LFREQ$1) );
		double vr$40 = round( (0x1.AEAAp+21 / (double)FREQ$1) / ((double)I$1 * vr$37) );
		PERIOD$1 = fb_D2L( vr$40 );
		*(float*)(((int64)(struct $12AUDIOCHANNEL*)CHANNELS$ + (CHANNEL$1 * 28ll)) + 24ll) = (float)((0x1.AEAAp+21 / (double)PERIOD$1) * ((double)SKIP$1 / 0x1.p+18));
	}
	goto label$2599;
	label$2600:;
	{
		PERIOD$1 = 24ll;
		double vr$52 = round( ((double)FREQ$1 / 0x1.1F1Cp+17) * 0x1.p+18 );
		SKIP$1 = fb_D2L( vr$52 );
		*(float*)(((int64)(struct $12AUDIOCHANNEL*)CHANNELS$ + (CHANNEL$1 * 28ll)) + 24ll) = (float)((0x1.AEAAp+21 / (double)PERIOD$1) * ((double)SKIP$1 / 0x1.p+18));
	}
	label$2599:;
	label$2598:;
}

void DO_CHANGEPAN( void )
{
	label$2603:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 PAN$1;
	__builtin_memset( &PAN$1, 0, 8ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	float vr$5 = CONVERTTOFLOAT( &T1$1 );
	double vr$8 = round( (double)(vr$5 * 0x1.p+13f) );
	PAN$1 = fb_D2L( vr$8 + 0x1.p+13 );
	if( PAN$1 >= 0ll ) goto label$2606;
	{
		PAN$1 = 0ll;
		label$2606:;
	}
	if( PAN$1 <= 16384ll ) goto label$2608;
	{
		PAN$1 = 16384ll;
		label$2608:;
	}
	struct $11EXPR_RESULT vr$11 = POP(  );
	T1$1 = vr$11;
	int64 vr$13 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$13 % 8ll;
	label$2604:;
}

void DO_CHANGEVOL( void )
{
	label$2609:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 VOL$1;
	__builtin_memset( &VOL$1, 0, 8ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	float vr$5 = CONVERTTOFLOAT( &T1$1 );
	double vr$8 = round( (double)(vr$5 * 0x1.F4p+9f) );
	VOL$1 = fb_D2L( vr$8 ) % 16384ll;
	struct $11EXPR_RESULT vr$11 = POP(  );
	T1$1 = vr$11;
	int64 vr$13 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$13 % 8ll;
	label$2610:;
}

void DO_CHANGEWAV( void )
{
	label$2611:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 WAVE$1;
	__builtin_memset( &WAVE$1, 0, 8ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	int64 vr$5 = CONVERTTOINT( &T1$1 );
	WAVE$1 = vr$5;
	if( WAVE$1 >= 0ll ) goto label$2614;
	{
		WAVE$1 = 0ll;
		label$2614:;
	}
	struct $11EXPR_RESULT vr$6 = POP(  );
	T1$1 = vr$6;
	int64 vr$8 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$8 % 8ll;
	label$2612:;
}

void DO_CHR( void )
{
	int64 TMP$768$1;
	label$2615:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2617;
	TMP$768$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2620;
	label$2617:;
	TMP$768$1 = -1ll;
	label$2620:;
	if( TMP$768$1 == 0ll ) goto label$2619;
	{
		FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"chr$: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$8, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2616;
		label$2619:;
	}
	struct $11EXPR_RESULT vr$9 = POP(  );
	T1$1 = vr$9;
	int64 vr$11 = CONVERTTOINT( &T1$1 );
	ARG$1 = (uint32)vr$11;
	FBSTRING* vr$14 = fb_CHR( 1, (int64)ARG$1 );
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$14, -1ll, 0 );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	PUSH( &T1$1 );
	label$2616:;
}

void DO_CIRCLE( void )
{
	int64 TMP$770$1;
	int64 TMP$771$1;
	int64 TMP$772$1;
	int64 TMP$773$1;
	int64 TMP$774$1;
	label$2621:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T3$1 = vr$3;
	struct $11EXPR_RESULT vr$4 = POP(  );
	T2$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 28ll ) goto label$2623;
	TMP$770$1 = (int64)-((int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 29ll);
	goto label$2630;
	label$2623:;
	TMP$770$1 = -1ll;
	label$2630:;
	if( TMP$770$1 == 0ll ) goto label$2625;
	if( (int64)*(uint32*)((uint8*)&T2$1 + 8ll) == 28ll ) goto label$2624;
	TMP$771$1 = (int64)-((int64)*(uint32*)((uint8*)&T2$1 + 8ll) == 29ll);
	goto label$2632;
	label$2624:;
	TMP$771$1 = -1ll;
	label$2632:;
	TMP$772$1 = (int64)-(TMP$771$1 != 0ll);
	goto label$2631;
	label$2625:;
	TMP$772$1 = 0ll;
	label$2631:;
	if( TMP$772$1 == 0ll ) goto label$2627;
	if( (int64)*(uint32*)((uint8*)&T3$1 + 8ll) == 28ll ) goto label$2626;
	TMP$773$1 = (int64)-((int64)*(uint32*)((uint8*)&T3$1 + 8ll) == 29ll);
	goto label$2634;
	label$2626:;
	TMP$773$1 = -1ll;
	label$2634:;
	TMP$774$1 = (int64)-(TMP$773$1 != 0ll);
	goto label$2633;
	label$2627:;
	TMP$774$1 = 0ll;
	label$2633:;
	if( TMP$774$1 == 0ll ) goto label$2629;
	{
		ECIRCLE( *(int64*)&T1$1, *(int64*)&T2$1, *(int64*)&T3$1, (uint8)PLOT_COLOR$ );
		goto label$2622;
	}
	goto label$2628;
	label$2629:;
	{
		int64 vr$20 = CONVERTTOINT( &T3$1 );
		int64 vr$22 = CONVERTTOINT( &T2$1 );
		int64 vr$24 = CONVERTTOINT( &T1$1 );
		ECIRCLE( vr$24, vr$22, vr$20, (uint8)PLOT_COLOR$ );
	}
	label$2628:;
	label$2622:;
}

void DO_CLICK( void )
{
	label$2635:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)&T1$1 != 0ll ) goto label$2638;
	{
		KEYCLICK$ = 0ll;
	}
	goto label$2637;
	label$2638:;
	{
		KEYCLICK$ = 1ll;
		label$2637:;
	}
	label$2636:;
}

void DO_CLOSE( void )
{
	label$2639:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	struct $11EXPR_RESULT vr$6 = POP(  );
	T1$1 = vr$6;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 44ll ) goto label$2642;
	{
		FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"channel# expected", 17ll );
		fb_PrintString( 0, (FBSTRING*)vr$8, 1 );
		goto label$2640;
		label$2642:;
	}
	CHANNEL$1 = *(int64*)&T1$1;
	fb_FileClose( (int32)CHANNEL$1 );
	label$2640:;
}

void DO_CLS( void )
{
	label$2643:;
	CLS1( (uint8)INK$, (uint8)PAPER$ );
	PLOT_COLOR$ = INK$;
	label$2644:;
}

int64 DO_COGINIT_2( int64 COG$1, int64 ADDRVAL$1, int64 PTRA_VAL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$2645:;
	COG$1 = 0ll;
	fb$result$1 = COG$1;
	goto label$2646;
	label$2646:;
	return fb$result$1;
}

void DO_COGINIT( void )
{
	label$2647:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 PTRA_VAL$1;
	__builtin_memset( &PTRA_VAL$1, 0, 8ll );
	int64 ADDRVAL$1;
	__builtin_memset( &ADDRVAL$1, 0, 8ll );
	int64 COG$1;
	__builtin_memset( &COG$1, 0, 8ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T1$1 = vr$6;
	if( NUMPAR$1 != 3ll ) goto label$2650;
	{
		struct $11EXPR_RESULT vr$7 = POP(  );
		T1$1 = vr$7;
	}
	label$2650:;
	label$2649:;
	label$2648:;
}

void DO_COGSTOP( void )
{
	label$2651:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	label$2652:;
}

void DO_COLOR( void )
{
	label$2653:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	PLOT_COLOR$ = *(int64*)&T1$1;
	label$2654:;
}

void DO_COPY( void )
{
	label$2655:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	FBSTRING FILENAME_1$1;
	__builtin_memset( &FILENAME_1$1, 0, 24ll );
	FBSTRING FILENAME_2$1;
	__builtin_memset( &FILENAME_2$1, 0, 24ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T2$1 = vr$6;
	if( (int64)*(uint32*)((uint8*)&T2$1 + 8ll) != 43ll ) goto label$2658;
	{
		FBSTRING* vr$8 = CONVERTSTRING( *(uint32*)&T2$1 );
		fb_StrAssign( (void*)&FILENAME_1$1, -1ll, (void*)vr$8, -1ll, 0 );
	}
	goto label$2657;
	label$2658:;
	if( (int64)*(uint32*)((uint8*)&T2$1 + 8ll) != 31ll ) goto label$2659;
	{
		fb_StrAssign( (void*)&FILENAME_1$1, -1ll, *(void**)&T2$1, -1ll, 0 );
	}
	goto label$2657;
	label$2659:;
	{
		PRINTERROR( 15ll, (int64)*(uint32*)RUNHEADER$ );
		fb_StrDelete( (FBSTRING*)&FILENAME_2$1 );
		fb_StrDelete( (FBSTRING*)&FILENAME_1$1 );
		goto label$2656;
	}
	label$2657:;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2661;
	{
		FBSTRING* vr$16 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( (void*)&FILENAME_2$1, -1ll, (void*)vr$16, -1ll, 0 );
	}
	goto label$2660;
	label$2661:;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2662;
	{
		fb_StrAssign( (void*)&FILENAME_2$1, -1ll, *(void**)&T1$1, -1ll, 0 );
	}
	goto label$2660;
	label$2662:;
	{
		PRINTERROR( 15ll, (int64)*(uint32*)RUNHEADER$ );
		fb_StrDelete( (FBSTRING*)&FILENAME_2$1 );
		fb_StrDelete( (FBSTRING*)&FILENAME_1$1 );
		goto label$2656;
	}
	label$2660:;
	int32 vr$24 = fb_FileOpen( (FBSTRING*)&FILENAME_1$1, 2u, 0u, 0u, 9, 0 );
	fb_ErrorSetNum( vr$24 );
	int32 vr$26 = fb_FileOpen( (FBSTRING*)&FILENAME_2$1, 3u, 0u, 0u, 8, 0 );
	fb_ErrorSetNum( vr$26 );
	label$2663:;
	{
		fb_FileGetLargeIOB( 9, 0ll, (void*)BLOCK$, 1024ull, (uint64*)&R$1 );
		fb_FilePutLarge( 8, 0ll, (void*)BLOCK$, (uint64)R$1 );
	}
	label$2665:;
	if( R$1 == 1024ll ) goto label$2663;
	label$2664:;
	fb_FileClose( 8 );
	fb_FileClose( 9 );
	fb_StrDelete( (FBSTRING*)&FILENAME_2$1 );
	fb_StrDelete( (FBSTRING*)&FILENAME_1$1 );
	label$2656:;
}

void DO_COS( void )
{
	int64 TMP$776$1;
	label$2666:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2668;
	TMP$776$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2671;
	label$2668:;
	TMP$776$1 = -1ll;
	label$2671:;
	if( TMP$776$1 == 0ll ) goto label$2670;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"cos: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2667;
		label$2670:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	float vr$10 = CONVERTTOFLOAT( &T1$1 );
	*(double*)&T1$1 = (double)__builtin_cosf( (TRIG_COEFF$ * vr$10) );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$2667:;
}

void DO_CURSOR( void )
{
	label$2672:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)&T1$1 != 0ll ) goto label$2675;
	{
		SETSPRITESIZE( 17ll, 0ll, 0ll );
	}
	goto label$2674;
	label$2675:;
	{
		SETSPRITESIZE( 17ll, 8ll, 16ll );
		label$2674:;
	}
	label$2673:;
}

void DO_DEFCHAR( void )
{
	label$2676:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 C$1;
	__builtin_memset( &C$1, 0, 4ll );
	uint32 CPTR_$1;
	__builtin_memset( &CPTR_$1, 0, 4ll );
	uint8 BUF$1[16];
	__builtin_memset( (uint8*)BUF$1, 0, 16ll );
	struct $8FBARRAY1IhE tmp$778$1;
	*(uint8**)&tmp$778$1 = (uint8*)BUF$1;
	*(uint8**)((uint8*)&tmp$778$1 + 8ll) = (uint8*)BUF$1;
	*(int64*)((uint8*)&tmp$778$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$778$1 + 24ll) = 1ll;
	*(int64*)((uint8*)&tmp$778$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$778$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$778$1 + 48ll) = 16ll;
	*(int64*)((uint8*)&tmp$778$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$778$1 + 64ll) = 15ll;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T1$1 = vr$6;
	int64 vr$8 = CONVERTTOINT( &T1$1 );
	CPTR_$1 = (uint32)vr$8;
	struct $11EXPR_RESULT vr$10 = POP(  );
	T1$1 = vr$10;
	int64 vr$12 = CONVERTTOINT( &T1$1 );
	C$1 = (uint32)vr$12;
	if( (int64)CPTR_$1 >= 524288ll ) goto label$2679;
	{
	}
	goto label$2678;
	label$2679:;
	{
	}
	label$2678:;
	label$2677:;
}

void DO_DEFENV( void )
{
	int64 TMP$779$1;
	label$2680:;
	int64 A$1;
	__builtin_memset( &A$1, 0, 8ll );
	int64 D$1;
	__builtin_memset( &D$1, 0, 8ll );
	int64 S$1;
	__builtin_memset( &S$1, 0, 8ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 WPTR$1;
	__builtin_memset( &WPTR$1, 0, 8ll );
	float AA$1;
	__builtin_memset( &AA$1, 0, 4ll );
	float DD$1;
	__builtin_memset( &DD$1, 0, 4ll );
	float SS$1;
	__builtin_memset( &SS$1, 0, 4ll );
	float RR$1;
	__builtin_memset( &RR$1, 0, 4ll );
	float FULLTIME$1;
	__builtin_memset( &FULLTIME$1, 0, 4ll );
	float TIMEUNIT$1;
	__builtin_memset( &TIMEUNIT$1, 0, 4ll );
	float DA$1;
	__builtin_memset( &DA$1, 0, 4ll );
	float DR$1;
	__builtin_memset( &DR$1, 0, 4ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 == 2ll ) goto label$2682;
	TMP$779$1 = (int64)-(NUMPAR$1 != 5ll);
	goto label$2728;
	label$2682:;
	TMP$779$1 = 0ll;
	label$2728:;
	if( TMP$779$1 == 0ll ) goto label$2684;
	{
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$2681;
		label$2684:;
	}
	if( NUMPAR$1 != 2ll ) goto label$2686;
	{
		struct $11EXPR_RESULT vr$23 = POP(  );
		T1$1 = vr$23;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2688;
		{
			FBSTRING* vr$25 = CONVERTSTRING( *(uint32*)&T1$1 );
			fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$25, -1ll, 0 );
		}
		goto label$2687;
		label$2688:;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2689;
		{
			fb_StrAssign( (void*)&S1$1, -1ll, *(void**)&T1$1, -1ll, 0 );
		}
		goto label$2687;
		label$2689:;
		{
			fb_StrAssign( (void*)&S1$1, -1ll, (void*)"", 1ll, 0 );
			int64 vr$31 = CONVERTTOINT( &T1$1 );
			WPTR$1 = vr$31;
		}
		label$2687:;
		int32 vr$33 = fb_StrCompare( (void*)&S1$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$33 == 0ll ) goto label$2691;
		{
			FBSTRING TMP$781$3;
			struct $11EXPR_RESULT vr$35 = POP(  );
			T1$1 = vr$35;
			int64 vr$37 = CONVERTTOINT( &T1$1 );
			CHANNEL$1 = vr$37;
			fb_FileClose( 9 );
			__builtin_memset( &TMP$781$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$781$3, (void*)"/sd/media/h/", 13ll, (void*)&S1$1, -1ll );
			int32 vr$42 = fb_FileOpen( (FBSTRING*)vr$41, 2u, 0u, 0u, 9, 0 );
			R$1 = (int64)vr$42;
			fb_FileGetLarge( 9, 17ll, (void*)((int64)(uint8*)ENVBUF8$ + (CHANNEL$1 * 513ll)), 256ull );
			{
				I$1 = 255ll;
				label$2695:;
				{
					*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = (uint16)((int64)*(uint8*)((int64)(uint8*)ENVBUF8$ + ((CHANNEL$1 * 513ll) + I$1)) << (8ll & 63ll));
				}
				label$2693:;
				I$1 = I$1 + -1ll;
				label$2692:;
				if( I$1 >= 0ll ) goto label$2695;
				label$2694:;
			}
			fb_FileClose( 9 );
			*(uint16*)(((int64)(uint16*)ENVBUF$ + (CHANNEL$1 << (9ll & 63ll))) + 510ll) = (uint16)0u;
			fb_StrDelete( (FBSTRING*)&S1$1 );
			goto label$2681;
		}
		goto label$2690;
		label$2691:;
		{
			if( WPTR$1 >= 524288ll ) goto label$2697;
			{
				{
					I$1 = 0ll;
					label$2701:;
					{
						uint16 vr$60 = PSDPEEK( (uint32)(WPTR$1 + (I$1 << (1ll & 63ll))) );
						*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = vr$60;
					}
					label$2699:;
					I$1 = I$1 + 1ll;
					label$2698:;
					if( I$1 <= 255ll ) goto label$2701;
					label$2700:;
				}
			}
			goto label$2696;
			label$2697:;
			{
				{
					I$1 = 0ll;
					label$2705:;
					{
						uint16 vr$68 = PSDPEEK( (uint32)(WPTR$1 + (I$1 << (1ll & 63ll))) );
						*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = vr$68;
					}
					label$2703:;
					I$1 = I$1 + 1ll;
					label$2702:;
					if( I$1 <= 255ll ) goto label$2705;
					label$2704:;
				}
			}
			label$2696:;
			*(uint16*)(((int64)(uint16*)ENVBUF$ + (CHANNEL$1 << (9ll & 63ll))) + 510ll) = (uint16)0u;
			fb_StrDelete( (FBSTRING*)&S1$1 );
			goto label$2681;
		}
		label$2690:;
	}
	label$2686:;
	label$2685:;
	if( NUMPAR$1 != 5ll ) goto label$2707;
	{
		struct $11EXPR_RESULT vr$75 = POP(  );
		T1$1 = vr$75;
		float vr$77 = CONVERTTOFLOAT( &T1$1 );
		RR$1 = vr$77;
		struct $11EXPR_RESULT vr$78 = POP(  );
		T1$1 = vr$78;
		float vr$80 = CONVERTTOFLOAT( &T1$1 );
		SS$1 = vr$80;
		struct $11EXPR_RESULT vr$81 = POP(  );
		T1$1 = vr$81;
		float vr$83 = CONVERTTOFLOAT( &T1$1 );
		DD$1 = vr$83;
		struct $11EXPR_RESULT vr$84 = POP(  );
		T1$1 = vr$84;
		float vr$86 = CONVERTTOFLOAT( &T1$1 );
		AA$1 = vr$86;
		struct $11EXPR_RESULT vr$87 = POP(  );
		T1$1 = vr$87;
		int64 vr$89 = CONVERTTOINT( &T1$1 );
		CHANNEL$1 = vr$89;
		if( (double)SS$1 >= 0x0p+0 ) goto label$2709;
		{
			SS$1 = 0x0p+0f;
			label$2709:;
		}
		if( (double)SS$1 <= 0x1.p+0 ) goto label$2711;
		{
			SS$1 = 0x1.p+0f;
			label$2711:;
		}
		FULLTIME$1 = (AA$1 + DD$1) + RR$1;
		TIMEUNIT$1 = (float)(0x1.p+8 / (double)FULLTIME$1);
		double vr$99 = round( (double)(AA$1 * TIMEUNIT$1) );
		A$1 = fb_D2L( vr$99 );
		double vr$103 = round( (double)(DD$1 * TIMEUNIT$1) );
		D$1 = fb_D2L( vr$103 );
		double vr$107 = round( (double)(RR$1 * TIMEUNIT$1) );
		R$1 = fb_D2L( vr$107 );
		DA$1 = (float)(0x1.FFEp+15 / (double)A$1);
		DD$1 = (float)((-((double)SS$1 * 0x1.FFEp+15) + 0x1.FFEp+15) / (double)D$1);
		DR$1 = (float)(((double)SS$1 * 0x1.FFEp+15) / (double)R$1);
		*(uint16*)((int64)(uint16*)SUSPOINTS$ + (CHANNEL$1 << (1ll & 63ll))) = (uint16)(A$1 + D$1);
		AA$1 = 0x0p+0f;
		{
			I$1 = 0ll;
			int64 TMP$782$3;
			TMP$782$3 = A$1 + -1ll;
			goto label$2712;
			label$2715:;
			{
				double vr$129 = round( (double)AA$1 );
				*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = (uint16)fb_D2I( vr$129 );
				AA$1 = AA$1 + DA$1;
			}
			label$2713:;
			I$1 = I$1 + 1ll;
			label$2712:;
			if( I$1 <= TMP$782$3 ) goto label$2715;
			label$2714:;
		}
		{
			I$1 = A$1;
			int64 TMP$783$3;
			TMP$783$3 = (A$1 + D$1) + -1ll;
			goto label$2716;
			label$2719:;
			{
				double vr$139 = round( (double)AA$1 );
				*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = (uint16)fb_D2I( vr$139 );
				AA$1 = AA$1 - DD$1;
				if( (double)AA$1 >= 0x0p+0 ) goto label$2721;
				{
					AA$1 = 0x0p+0f;
					label$2721:;
				}
			}
			label$2717:;
			I$1 = I$1 + 1ll;
			label$2716:;
			if( I$1 <= TMP$783$3 ) goto label$2719;
			label$2718:;
		}
		{
			I$1 = A$1 + D$1;
			goto label$2722;
			label$2725:;
			{
				double vr$149 = round( (double)AA$1 );
				*(uint16*)((int64)(uint16*)ENVBUF$ + (((CHANNEL$1 << (8ll & 63ll)) + I$1) << (1ll & 63ll))) = (uint16)fb_D2I( vr$149 );
				AA$1 = AA$1 - DR$1;
				if( (double)AA$1 >= 0x0p+0 ) goto label$2727;
				{
					AA$1 = 0x0p+0f;
					label$2727:;
				}
			}
			label$2723:;
			I$1 = I$1 + 1ll;
			label$2722:;
			if( I$1 <= 255ll ) goto label$2725;
			label$2724:;
		}
		*(uint16*)(((int64)(uint16*)ENVBUF$ + (CHANNEL$1 << (9ll & 63ll))) + 510ll) = (uint16)0u;
	}
	label$2707:;
	label$2706:;
	*(uint16*)(((int64)(uint16*)ENVBUF$ + (CHANNEL$1 << (9ll & 63ll))) + 510ll) = (uint16)0u;
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$2681:;
}

void DO_DEFSND( void )
{
	label$2729:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 PAR$1;
	__builtin_memset( &PAR$1, 0, 8ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 WPTR$1;
	__builtin_memset( &WPTR$1, 0, 8ll );
	float EVEN$1;
	__builtin_memset( &EVEN$1, 0, 4ll );
	float ODD$1;
	__builtin_memset( &ODD$1, 0, 4ll );
	float MAX$1;
	__builtin_memset( &MAX$1, 0, 4ll );
	float SPL$1;
	__builtin_memset( &SPL$1, 0, 4ll );
	float QQQ$1;
	__builtin_memset( &QQQ$1, 0, 4ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	float HARM$1[16];
	__builtin_memset( (float*)HARM$1, 0, 64ll );
	struct $8FBARRAY1IfE tmp$784$1;
	*(float**)&tmp$784$1 = (float*)HARM$1;
	*(float**)((uint8*)&tmp$784$1 + 8ll) = (float*)HARM$1;
	*(int64*)((uint8*)&tmp$784$1 + 16ll) = 64ll;
	*(int64*)((uint8*)&tmp$784$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$784$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$784$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$784$1 + 48ll) = 16ll;
	*(int64*)((uint8*)&tmp$784$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$784$1 + 64ll) = 15ll;
	int16 SAMPLE$1;
	__builtin_memset( &SAMPLE$1, 0, 2ll );
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 >= 2ll ) goto label$2732;
	{
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$2730;
		label$2732:;
	}
	if( NUMPAR$1 != 2ll ) goto label$2734;
	{
		struct $11EXPR_RESULT vr$21 = POP(  );
		T1$1 = vr$21;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2736;
		{
			FBSTRING* vr$23 = CONVERTSTRING( *(uint32*)&T1$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$23, -1ll, 0 );
		}
		goto label$2735;
		label$2736:;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2737;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)&T1$1, -1ll, 0 );
		}
		goto label$2735;
		label$2737:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, (void*)"", 1ll, 0 );
			int64 vr$29 = CONVERTTOINT( &T1$1 );
			WPTR$1 = vr$29;
		}
		label$2735:;
		int32 vr$31 = fb_StrCompare( (void*)&S$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$31 == 0ll ) goto label$2739;
		{
			FBSTRING TMP$786$3;
			struct $11EXPR_RESULT vr$33 = POP(  );
			T1$1 = vr$33;
			int64 vr$35 = CONVERTTOINT( &T1$1 );
			CHANNEL$1 = vr$35;
			if( CHANNEL$1 <= 31ll ) goto label$2741;
			{
				fb_StrDelete( (FBSTRING*)&S$1 );
				goto label$2730;
				label$2741:;
			}
			fb_FileClose( 9 );
			__builtin_memset( &TMP$786$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$786$3, (void*)"/sd/media/s/", 13ll, (void*)&S$1, -1ll );
			fb_FileOpen( (FBSTRING*)vr$40, 2u, 0u, 0u, 9, 0 );
			{
				I$1 = 0ll;
				label$2745:;
				{
					fb_FileGetLarge( 9, (I$1 << (1ll & 63ll)) + 17ll, (void*)&SAMPLE$1, 2ull );
					PSDPOKE( (uint32)((CHANNEL$1 << (11ll & 63ll)) + (I$1 << (1ll & 63ll))), (uint16)SAMPLE$1 );
				}
				label$2743:;
				I$1 = I$1 + 1ll;
				label$2742:;
				if( I$1 <= 1024ll ) goto label$2745;
				label$2744:;
			}
			fb_FileClose( 9 );
			fb_StrDelete( (FBSTRING*)&S$1 );
			goto label$2730;
		}
		goto label$2738;
		label$2739:;
		{
			if( WPTR$1 >= 522240ll ) goto label$2747;
			{
				{
					I$1 = 0ll;
					label$2751:;
					{
						uint16 vr$53 = PSDPEEK( (uint32)(WPTR$1 + (I$1 << (1ll & 63ll))) );
						PSDPOKE( (uint32)((CHANNEL$1 << (11ll & 63ll)) + (I$1 << (1ll & 63ll))), vr$53 );
					}
					label$2749:;
					I$1 = I$1 + 1ll;
					label$2748:;
					if( I$1 <= 1023ll ) goto label$2751;
					label$2750:;
				}
			}
			goto label$2746;
			label$2747:;
			{
				{
					I$1 = 0ll;
					label$2755:;
					{
						uint16 vr$62 = PSDPEEK( (uint32)(WPTR$1 + (I$1 << (1ll & 63ll))) );
						PSDPOKE( (uint32)((CHANNEL$1 << (11ll & 63ll)) + (I$1 << (1ll & 63ll))), vr$62 );
					}
					label$2753:;
					I$1 = I$1 + 1ll;
					label$2752:;
					if( I$1 <= 1023ll ) goto label$2755;
					label$2754:;
				}
			}
			label$2746:;
			fb_StrDelete( (FBSTRING*)&S$1 );
			goto label$2730;
		}
		label$2738:;
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$2730;
	}
	label$2734:;
	label$2733:;
	{
		I$1 = 0ll;
		label$2759:;
		{
			*(float*)((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) = 0x0p+0f;
		}
		label$2757:;
		I$1 = I$1 + 1ll;
		label$2756:;
		if( I$1 <= 15ll ) goto label$2759;
		label$2758:;
	}
	{
		I$1 = NUMPAR$1;
		goto label$2760;
		label$2763:;
		{
			struct $11EXPR_RESULT vr$72 = POP(  );
			T1$1 = vr$72;
			float vr$74 = CONVERTTOFLOAT( &T1$1 );
			*(float*)(((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) + -8ll) = vr$74;
		}
		label$2761:;
		I$1 = I$1 + -1ll;
		label$2760:;
		if( I$1 >= 2ll ) goto label$2763;
		label$2762:;
	}
	struct $11EXPR_RESULT vr$77 = POP(  );
	T1$1 = vr$77;
	int64 vr$79 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$79;
	if( CHANNEL$1 <= 31ll ) goto label$2765;
	{
		fb_StrDelete( (FBSTRING*)&S$1 );
		goto label$2730;
		label$2765:;
	}
	MAX$1 = 0x0p+0f;
	if( *(float*)HARM$1 >= 0x0p+0f ) goto label$2767;
	{
		EVEN$1 = __builtin_fabsf( *(float*)HARM$1 );
		ODD$1 = __builtin_fabsf( *(float*)((int64)(float*)HARM$1 + 4ll) );
		*(float*)HARM$1 = 0x1.p+0f;
		*(float*)((int64)(float*)HARM$1 + 4ll) = EVEN$1;
		*(float*)((int64)(float*)HARM$1 + 8ll) = ODD$1;
		{
			I$1 = 3ll;
			label$2771:;
			{
				*(float*)((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) = *(float*)(((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) + -8ll) * EVEN$1;
			}
			label$2769:;
			I$1 = I$1 + 2ll;
			label$2768:;
			if( I$1 <= 15ll ) goto label$2771;
			label$2770:;
		}
		{
			I$1 = 4ll;
			label$2775:;
			{
				*(float*)((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) = *(float*)(((int64)(float*)HARM$1 + (I$1 << (2ll & 63ll))) + -8ll) * ODD$1;
			}
			label$2773:;
			I$1 = I$1 + 2ll;
			label$2772:;
			if( I$1 <= 14ll ) goto label$2775;
			label$2774:;
		}
	}
	label$2767:;
	label$2766:;
	if( *(float*)HARM$1 < 0x0p+0f ) goto label$2777;
	{
		{
			I$1 = 0ll;
			label$2781:;
			{
				SPL$1 = 0x0p+0f;
				{
					J$1 = 0ll;
					label$2785:;
					{
						SPL$1 = (float)((double)SPL$1 + ((double)*(float*)((int64)(float*)HARM$1 + (J$1 << (2ll & 63ll))) * __builtin_sin( (((double)I$1 * (double)(J$1 + 1ll)) * 0x1.921FB54442EEAp-8) )));
					}
					label$2783:;
					J$1 = J$1 + 1ll;
					label$2782:;
					if( J$1 <= 15ll ) goto label$2785;
					label$2784:;
				}
				if( __builtin_fabsf( SPL$1 ) <= MAX$1 ) goto label$2787;
				{
					MAX$1 = __builtin_fabsf( SPL$1 );
					label$2787:;
				}
			}
			label$2779:;
			I$1 = I$1 + 1ll;
			label$2778:;
			if( I$1 <= 1023ll ) goto label$2781;
			label$2780:;
		}
		{
			I$1 = 0ll;
			label$2791:;
			{
				SPL$1 = 0x0p+0f;
				{
					J$1 = 0ll;
					label$2795:;
					{
						SPL$1 = (float)((double)SPL$1 + (((double)*(float*)((int64)(float*)HARM$1 + (J$1 << (2ll & 63ll))) * (0x1.FD6p+14 / (double)MAX$1)) * __builtin_sin( (((double)I$1 * (double)(J$1 + 1ll)) * 0x1.921FB54442EEAp-8) )));
					}
					label$2793:;
					J$1 = J$1 + 1ll;
					label$2792:;
					if( J$1 <= 15ll ) goto label$2795;
					label$2794:;
				}
				double vr$124 = round( (double)SPL$1 );
				PSDPOKE( (uint32)((CHANNEL$1 << (11ll & 63ll)) + (I$1 << (1ll & 63ll))), (uint16)fb_D2I( vr$124 ) );
			}
			label$2789:;
			I$1 = I$1 + 1ll;
			label$2788:;
			if( I$1 <= 1023ll ) goto label$2791;
			label$2790:;
		}
	}
	label$2777:;
	label$2776:;
	fb_StrDelete( (FBSTRING*)&S$1 );
	label$2730:;
}

void DO_DEFSPRITE( void )
{
	uint8* TMP$787$1;
	label$2796:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT T4$1;
	__builtin_memset( &T4$1, 0, 16ll );
	struct $11EXPR_RESULT T5$1;
	__builtin_memset( &T5$1, 0, 16ll );
	int64 A1$1;
	__builtin_memset( &A1$1, 0, 8ll );
	int64 A2$1;
	__builtin_memset( &A2$1, 0, 8ll );
	int64 A3$1;
	__builtin_memset( &A3$1, 0, 8ll );
	int64 A4$1;
	__builtin_memset( &A4$1, 0, 8ll );
	int64 A5$1;
	__builtin_memset( &A5$1, 0, 8ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	struct $11EXPR_RESULT vr$12 = POP(  );
	T5$1 = vr$12;
	struct $11EXPR_RESULT vr$13 = POP(  );
	T4$1 = vr$13;
	struct $11EXPR_RESULT vr$14 = POP(  );
	T3$1 = vr$14;
	struct $11EXPR_RESULT vr$15 = POP(  );
	T2$1 = vr$15;
	struct $11EXPR_RESULT vr$16 = POP(  );
	T1$1 = vr$16;
	int64 vr$18 = CONVERTTOINT( &T1$1 );
	A1$1 = vr$18;
	int64 vr$20 = CONVERTTOINT( &T2$1 );
	A2$1 = vr$20;
	int64 vr$22 = CONVERTTOINT( &T3$1 );
	A3$1 = vr$22;
	int64 vr$24 = CONVERTTOINT( &T4$1 );
	A4$1 = vr$24;
	int64 vr$26 = CONVERTTOINT( &T5$1 );
	A5$1 = vr$26;
	if( *(uint64*)((int64)(uint8**)SPRITE$ + (A1$1 << (3ll & 63ll))) == 0ull ) goto label$2799;
	{
		if( *(uint8**)((int64)(uint8**)SPRITE$ + (A1$1 << (3ll & 63ll))) == (uint8*)0ull ) goto label$2800;
		free( *(void**)((int64)(uint8**)SPRITE$ + (A1$1 << (3ll & 63ll))) );
		label$2800:;
		label$2799:;
	}
	void* vr$30 = malloc( 1ull );
	TMP$787$1 = (uint8*)vr$30;
	if( TMP$787$1 == (uint8*)0ull ) goto label$2801;
	*TMP$787$1 = (uint8)((A4$1 * A5$1) + -1ll);
	label$2801:;
	*(uint8**)((int64)(uint8**)SPRITE$ + (A1$1 << (3ll & 63ll))) = TMP$787$1;
	{
		Y$1 = A3$1;
		int64 TMP$788$2;
		TMP$788$2 = (A3$1 + A5$1) + -1ll;
		goto label$2802;
		label$2805:;
		{
			{
				X$1 = A2$1;
				int64 TMP$789$4;
				TMP$789$4 = (A4$1 + A2$1) + -1ll;
				goto label$2806;
				label$2809:;
				{
				}
				label$2807:;
				X$1 = X$1 + 1ll;
				label$2806:;
				if( X$1 <= TMP$789$4 ) goto label$2809;
				label$2808:;
			}
		}
		label$2803:;
		Y$1 = Y$1 + 1ll;
		label$2802:;
		if( Y$1 <= TMP$788$2 ) goto label$2805;
		label$2804:;
	}
	SETSPRITESIZE( A1$1, A4$1, A5$1 );
	label$2797:;
}

void DO_DEG( void )
{
	label$2810:;
	TRIG_COEFF$ = 0x1.1DF46Ap-6f;
	TRIG_COEFF2$ = 0x1.CA5DC2p+5f;
	label$2811:;
}

void DO_DELETE( void )
{
	label$2812:;
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	FBSTRING FILENAME_$1;
	__builtin_memset( &FILENAME_$1, 0, 24ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2815;
	{
		FBSTRING* vr$5 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$5, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$2815:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$2817;
	{
		PRINTERROR( 15ll, 0ll );
		fb_StrDelete( (FBSTRING*)&FILENAME_$1 );
		goto label$2813;
		label$2817:;
	}
	int32 vr$8 = fb_StrCompare( (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
	if( (int64)vr$8 == 0ll ) goto label$2819;
	{
		FBSTRING TMP$790$2;
		FBSTRING TMP$791$2;
		__builtin_memset( &TMP$790$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$790$2, (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$791$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$791$2, (void*)vr$12, -1ll, *(void**)&T1$1, -1ll );
		fb_StrAssign( (void*)&FILENAME_$1, -1ll, (void*)vr$15, -1ll, 0 );
	}
	goto label$2818;
	label$2819:;
	{
		FBSTRING TMP$792$2;
		__builtin_memset( &TMP$792$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$792$2, (void*)"/", 2ll, *(void**)&T1$1, -1ll );
		fb_StrAssign( (void*)&FILENAME_$1, -1ll, (void*)vr$19, -1ll, 0 );
		label$2818:;
	}
	fb_FileKill( (FBSTRING*)&FILENAME_$1 );
	fb_StrDelete( (FBSTRING*)&FILENAME_$1 );
	label$2813:;
}

void DO_DIR( void )
{
	label$2820:;
	label$2821:;
}

void DO_DPEEK( void )
{
	label$2822:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 A$1;
	__builtin_memset( &A$1, 0, 4ll );
	uint32 R$1;
	__builtin_memset( &R$1, 0, 4ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	int64 vr$5 = CONVERTTOINT( &T1$1 );
	A$1 = (uint32)vr$5;
	if( (int64)A$1 >= 524288ll ) goto label$2825;
	{
		uint16 vr$8 = PSDPEEK( A$1 );
		R$1 = (uint32)vr$8;
	}
	goto label$2824;
	label$2825:;
	{
		uint16 vr$10 = PSDPEEK( A$1 );
		R$1 = (uint32)vr$10;
		label$2824:;
	}
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = R$1;
	PUSH( &T1$1 );
	label$2823:;
}

void DO_DPOKE( void )
{
	label$2826:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	uint32 A$1;
	__builtin_memset( &A$1, 0, 4ll );
	uint32 V$1;
	__builtin_memset( &V$1, 0, 4ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T1$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T2$1 = vr$5;
	int64 vr$7 = CONVERTTOINT( &T2$1 );
	A$1 = (uint32)vr$7;
	int64 vr$10 = CONVERTTOINT( &T1$1 );
	V$1 = (uint32)vr$10;
	if( (int64)A$1 >= 524288ll ) goto label$2829;
	{
		PSDPOKE( A$1, (uint16)V$1 );
	}
	goto label$2828;
	label$2829:;
	{
		PSDPOKE( A$1, (uint16)V$1 );
		label$2828:;
	}
	label$2827:;
}

void DO_DRAW( void )
{
	label$2830:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	int64 X$1;
	__builtin_memset( &X$1, 0, 8ll );
	int64 Y$1;
	__builtin_memset( &Y$1, 0, 8ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T2$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	int64 vr$7 = CONVERTTOINT( &T1$1 );
	X$1 = vr$7;
	int64 vr$9 = CONVERTTOINT( &T2$1 );
	Y$1 = vr$9;
	DRAW1( PLOT_X$, PLOT_Y$, X$1, Y$1, (uint8)PLOT_COLOR$ );
	PLOT_X$ = X$1;
	PLOT_Y$ = Y$1;
	label$2831:;
}

void DO_ELSE( void )
{
	label$2832:;
	LINEPTR_E$ = LINEPTR$ + -1ll;
	label$2833:;
}

void DO_END( void )
{
	label$2834:;
	LINEPTR_E$ = LINEPTR$ + -1ll;
	RUNPTR$ = 2147483647u;
	label$2835:;
}

void DO_ENTER( void )
{
	label$2836:;
	DO_LOAD( 1234ll );
	label$2837:;
}

void DO_ERROR( void )
{
	label$2838:;
	uint32 R$1;
	__builtin_memset( &R$1, 0, 4ll );
	R$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	label$2839:;
}

void DO_FCIRCLE( void )
{
	label$2840:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T3$1 = vr$3;
	struct $11EXPR_RESULT vr$4 = POP(  );
	T2$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	int64 vr$8 = CONVERTTOINT( &T3$1 );
	int64 vr$10 = CONVERTTOINT( &T2$1 );
	int64 vr$12 = CONVERTTOINT( &T1$1 );
	FCIRCLE( vr$12, vr$10, vr$8, (uint8)PLOT_COLOR$ );
	label$2841:;
}

void DO_FILL( void )
{
	label$2842:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT T4$1;
	__builtin_memset( &T4$1, 0, 16ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T4$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T3$1 = vr$5;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T2$1 = vr$6;
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	int64 vr$9 = CONVERTTOINT( &T4$1 );
	int64 vr$11 = CONVERTTOINT( &T3$1 );
	int64 vr$13 = CONVERTTOINT( &T2$1 );
	int64 vr$15 = CONVERTTOINT( &T1$1 );
	FILL( vr$15, vr$13, vr$11, vr$9 );
	label$2843:;
}

void DO_FINDFIRST( void )
{
	label$2844:;
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 C1$1;
	__builtin_memset( &C1$1, 0, 4ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	FBSTRING S1$1;
	__builtin_memset( &S1$1, 0, 24ll );
	FBSTRING S2$1;
	__builtin_memset( &S2$1, 0, 24ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 != 2ll ) goto label$2847;
	{
		struct $11EXPR_RESULT vr$8 = POP(  );
		T1$1 = vr$8;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2849;
		{
			FBSTRING* vr$10 = CONVERTSTRING( *(uint32*)&T1$1 );
			fb_StrAssign( (void*)&S2$1, -1ll, (void*)vr$10, -1ll, 0 );
		}
		goto label$2848;
		label$2849:;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2850;
		{
			fb_StrAssign( (void*)&S2$1, -1ll, *(void**)&T1$1, -1ll, 0 );
		}
		goto label$2848;
		label$2850:;
		{
		}
		label$2848:;
		struct $11EXPR_RESULT vr$14 = POP(  );
		T1$1 = vr$14;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2852;
		{
			FBSTRING* vr$16 = CONVERTSTRING( *(uint32*)&T1$1 );
			fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$16, -1ll, 0 );
		}
		goto label$2851;
		label$2852:;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2853;
		{
			fb_StrAssign( (void*)&S1$1, -1ll, *(void**)&T1$1, -1ll, 0 );
		}
		goto label$2851;
		label$2853:;
		{
		}
		label$2851:;
	}
	goto label$2846;
	label$2847:;
	if( (int64)NUMPAR$1 != 1ll ) goto label$2854;
	{
		struct $11EXPR_RESULT vr$21 = POP(  );
		T1$1 = vr$21;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$2856;
		{
			FBSTRING* vr$23 = CONVERTSTRING( *(uint32*)&T1$1 );
			fb_StrAssign( (void*)&S1$1, -1ll, (void*)vr$23, -1ll, 0 );
		}
		goto label$2855;
		label$2856:;
		if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2857;
		{
			fb_StrAssign( (void*)&S1$1, -1ll, *(void**)&T1$1, -1ll, 0 );
		}
		goto label$2855;
		label$2857:;
		{
		}
		label$2855:;
		fb_StrAssign( (void*)&S2$1, -1ll, (void*)"", 1ll, 0 );
	}
	goto label$2846;
	label$2854:;
	{
		FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (uint8*)"findfirst: ", 11ll );
		fb_PrintString( 0, (FBSTRING*)vr$28, 0 );
		PRINTERROR( 39ll, 0ll );
		fb_StrDelete( (FBSTRING*)&S2$1 );
		fb_StrDelete( (FBSTRING*)&S1$1 );
		goto label$2845;
	}
	label$2846:;
	int32 vr$32 = fb_StrCompare( (void*)&S2$1, -1ll, (void*)"", 1ll );
	if( (int64)vr$32 != 0ll ) goto label$2859;
	{
		C1$1 = 49u;
	}
	goto label$2858;
	label$2859:;
	FBSTRING* vr$35 = fb_StrLcase2( (FBSTRING*)&S2$1, 0 );
	int32 vr$36 = fb_StrCompare( (void*)vr$35, -1ll, (void*)"dir", 4ll );
	if( (int64)vr$36 != 0ll ) goto label$2860;
	{
		C1$1 = 16u;
	}
	goto label$2858;
	label$2860:;
	{
		C1$1 = 33u;
	}
	label$2858:;
	FBSTRING* vr$39 = fb_Dir( (FBSTRING*)&S1$1, (int32)C1$1, (int32*)0ull );
	fb_StrAssign( (void*)&S2$1, -1ll, (void*)vr$39, -1ll, 0 );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)&S2$1, -1ll, 0 );
	PUSH( &T1$1 );
	fb_StrDelete( (FBSTRING*)&S2$1 );
	fb_StrDelete( (FBSTRING*)&S1$1 );
	label$2845:;
}

void DO_FINDNEXT( void )
{
	label$2861:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	FBSTRING S2$1;
	__builtin_memset( &S2$1, 0, 24ll );
	if( (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) <= 0ll ) goto label$2864;
	{
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"findnext: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$5, 0 );
		PRINTERROR( 39ll, 0ll );
		fb_StrDelete( (FBSTRING*)&S2$1 );
		goto label$2862;
		label$2864:;
	}
	FBSTRING* vr$7 = fb_DirNext( (int32*)0ull );
	fb_StrAssign( (void*)&S2$1, -1ll, (void*)vr$7, -1ll, 0 );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)&S2$1, -1ll, 0 );
	PUSH( &T1$1 );
	fb_StrDelete( (FBSTRING*)&S2$1 );
	label$2862:;
}

void DO_FONT( void )
{
	label$2865:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 30ll ) goto label$2868;
	{
		*(int64*)&T1$1 = fb_D2L( *(double*)&T1$1 );
		label$2868:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$2870;
	{
		double vr$5 = fb_VAL( *(FBSTRING**)&T1$1 );
		*(int64*)&T1$1 = fb_D2L( vr$5 );
		label$2870:;
	}
	FONT$ = *(int64*)&T1$1;
	label$2866:;
}

void DO_FOR( void )
{
	label$2871:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	FORTOP$ = FORTOP$ + 1ll;
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	*(int64*)(((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) + 8ll) = *(int64*)&T1$1;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	int64 vr$7 = CONVERTTOINT( &T1$1 );
	*(int64*)(((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) + 16ll) = vr$7;
	struct $11EXPR_RESULT vr$9 = POP(  );
	T1$1 = vr$9;
	int64 vr$11 = CONVERTTOINT( &T1$1 );
	*(int64*)(((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) + 24ll) = vr$11;
	if( (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 8ll) != 510ll ) goto label$2874;
	{
		*(uint32*)((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) = RUNPTR$;
		*(uint32*)(((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) + 4ll) = 0u;
	}
	goto label$2873;
	label$2874:;
	{
		*(uint32*)((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) = OLDRUNPTR$;
		*(uint32*)(((int64)(struct $9FOR_ENTRY*)FORTABLE$ + (FORTOP$ << (5ll & 63ll))) + 4ll) = (uint32)(LINEPTR_E$ + 1ll);
	}
	label$2873:;
	label$2872:;
}

void DO_FRAME( void )
{
	label$2875:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	struct $11EXPR_RESULT T3$1;
	__builtin_memset( &T3$1, 0, 16ll );
	struct $11EXPR_RESULT T4$1;
	__builtin_memset( &T4$1, 0, 16ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T4$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T3$1 = vr$5;
	struct $11EXPR_RESULT vr$6 = POP(  );
	T2$1 = vr$6;
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	int64 vr$10 = CONVERTTOINT( &T4$1 );
	int64 vr$12 = CONVERTTOINT( &T3$1 );
	int64 vr$14 = CONVERTTOINT( &T2$1 );
	int64 vr$16 = CONVERTTOINT( &T1$1 );
	FRAME( vr$16, vr$14, vr$12, vr$10, (uint8)PLOT_COLOR$ );
	label$2876:;
}

void DO_FRAMEBUF( void )
{
	label$2877:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = BUFPTR$;
	PUSH( &T1$1 );
	label$2878:;
}

void DO_FRE( void )
{
	label$2879:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	R$1 = (int64)MEMTOP$ - PROGRAMPTR$;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = (uint32)R$1;
	PUSH( &T1$1 );
	label$2880:;
}

void DO_GET( void )
{
	label$2881:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 CHANNEL$1;
	__builtin_memset( &CHANNEL$1, 0, 8ll );
	int64 AMOUNT$1;
	__builtin_memset( &AMOUNT$1, 0, 8ll );
	int64 ADR$1;
	__builtin_memset( &ADR$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	int64 POS1$1;
	__builtin_memset( &POS1$1, 0, 8ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 != 4ll ) goto label$2884;
	{
		struct $11EXPR_RESULT vr$12 = POP(  );
		T1$1 = vr$12;
		int64 vr$14 = CONVERTTOINT( &T1$1 );
		POS1$1 = vr$14;
	}
	goto label$2883;
	label$2884:;
	{
		POS1$1 = -1ll;
		label$2883:;
	}
	if( NUMPAR$1 < 3ll ) goto label$2886;
	{
		struct $11EXPR_RESULT vr$15 = POP(  );
		T1$1 = vr$15;
		int64 vr$17 = CONVERTTOINT( &T1$1 );
		AMOUNT$1 = vr$17;
	}
	goto label$2885;
	label$2886:;
	{
		AMOUNT$1 = 1ll;
		label$2885:;
	}
	if( NUMPAR$1 < 2ll ) goto label$2888;
	{
		struct $11EXPR_RESULT vr$18 = POP(  );
		T1$1 = vr$18;
		int64 vr$20 = CONVERTTOINT( &T1$1 );
		ADR$1 = vr$20;
		label$2888:;
	}
	struct $11EXPR_RESULT vr$21 = POP(  );
	T1$1 = vr$21;
	int64 vr$23 = CONVERTTOINT( &T1$1 );
	CHANNEL$1 = vr$23;
	*(int64*)((int64)(int64*)GETRES$ + (J$1 << (3ll & 63ll))) = 0ll;
	int32 vr$25 = fb_GetX(  );
	if( (int64)vr$25 < 0ll ) goto label$2890;
	{
		{
			I$1 = 0ll;
			int64 TMP$795$3;
			TMP$795$3 = fb_D2L( (double)AMOUNT$1 / 0x1.p+10 );
			goto label$2891;
			label$2894:;
			{
				fb_FileGetLargeIOB( (int32)CHANNEL$1, POS1$1 + 1ll, (void*)BLOCK$, (uint64)AMOUNT$1, (uint64*)&R$1 );
				if( ADR$1 >= 524288ll ) goto label$2896;
				{
					{
						J$1 = 0ll;
						int64 TMP$796$6;
						TMP$796$6 = R$1 + -1ll;
						goto label$2897;
						label$2900:;
						{
							PSPOKE( (uint32)((ADR$1 + (I$1 << (10ll & 63ll))) + J$1), *(uint8*)((int64)(uint8*)BLOCK$ + J$1) );
						}
						label$2898:;
						J$1 = J$1 + 1ll;
						label$2897:;
						if( J$1 <= TMP$796$6 ) goto label$2900;
						label$2899:;
					}
				}
				goto label$2895;
				label$2896:;
				{
					{
						J$1 = 0ll;
						int64 TMP$797$6;
						TMP$797$6 = R$1 + -1ll;
						goto label$2901;
						label$2904:;
						{
							PSPOKE( (uint32)((ADR$1 + (I$1 << (10ll & 63ll))) + J$1), *(uint8*)((int64)(uint8*)BLOCK$ + J$1) );
						}
						label$2902:;
						J$1 = J$1 + 1ll;
						label$2901:;
						if( J$1 <= TMP$797$6 ) goto label$2904;
						label$2903:;
					}
					label$2895:;
				}
				*(int64*)((int64)(int64*)GETRES$ + (J$1 << (3ll & 63ll))) = *(int64*)((int64)(int64*)GETRES$ + (J$1 << (3ll & 63ll))) + R$1;
			}
			label$2892:;
			I$1 = I$1 + 1ll;
			label$2891:;
			if( I$1 <= TMP$795$3 ) goto label$2894;
			label$2893:;
		}
	}
	goto label$2889;
	label$2890:;
	{
		{
			I$1 = 0ll;
			int64 TMP$798$3;
			TMP$798$3 = fb_D2L( (double)AMOUNT$1 / 0x1.p+10 );
			goto label$2905;
			label$2908:;
			{
				fb_FileGetLargeIOB( (int32)CHANNEL$1, 0ll, (void*)BLOCK$, (uint64)AMOUNT$1, (uint64*)&R$1 );
				if( ADR$1 >= 524288ll ) goto label$2910;
				{
					{
						J$1 = 0ll;
						int64 TMP$799$6;
						TMP$799$6 = R$1 + -1ll;
						goto label$2911;
						label$2914:;
						{
							PSPOKE( (uint32)((ADR$1 + (I$1 << (10ll & 63ll))) + J$1), *(uint8*)((int64)(uint8*)BLOCK$ + J$1) );
						}
						label$2912:;
						J$1 = J$1 + 1ll;
						label$2911:;
						if( J$1 <= TMP$799$6 ) goto label$2914;
						label$2913:;
					}
				}
				goto label$2909;
				label$2910:;
				{
					{
						J$1 = 0ll;
						int64 TMP$800$6;
						TMP$800$6 = R$1 + -1ll;
						goto label$2915;
						label$2918:;
						{
							PSPOKE( (uint32)((ADR$1 + (I$1 << (10ll & 63ll))) + J$1), *(uint8*)((int64)(uint8*)BLOCK$ + J$1) );
						}
						label$2916:;
						J$1 = J$1 + 1ll;
						label$2915:;
						if( J$1 <= TMP$800$6 ) goto label$2918;
						label$2917:;
					}
					label$2909:;
				}
				*(int64*)((int64)(int64*)GETRES$ + (J$1 << (3ll & 63ll))) = *(int64*)((int64)(int64*)GETRES$ + (J$1 << (3ll & 63ll))) + R$1;
			}
			label$2906:;
			I$1 = I$1 + 1ll;
			label$2905:;
			if( I$1 <= TMP$798$3 ) goto label$2908;
			label$2907:;
		}
	}
	label$2889:;
	label$2882:;
}

void DO_GETCOLOR( void )
{
	int64 TMP$801$1;
	label$2919:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2921;
	TMP$801$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2924;
	label$2921:;
	TMP$801$1 = -1ll;
	label$2924:;
	if( TMP$801$1 == 0ll ) goto label$2923;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"getcolor ", 9ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2920;
		label$2923:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	PUSH( &T1$1 );
	label$2920:;
}

void DO_GETENVSUSTAIN( void )
{
	int64 TMP$803$1;
	label$2925:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$2927;
	TMP$803$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2930;
	label$2927:;
	TMP$803$1 = -1ll;
	label$2930:;
	if( TMP$803$1 == 0ll ) goto label$2929;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"getenvsustain: ", 15ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2926;
		label$2929:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	int64 vr$10 = CONVERTTOINT( &T1$1 );
	*(int64*)&T1$1 = (int64)*(uint16*)((int64)(uint16*)SUSPOINTS$ + (vr$10 << (1ll & 63ll)));
	*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
	PUSH( &T1$1 );
	label$2926:;
}

void DO_GETNOTEVALUE( void )
{
	label$2931:;
	float R$1;
	__builtin_memset( &R$1, 0, 4ll );
	float NOTEBASE$1;
	__builtin_memset( &NOTEBASE$1, 0, 4ll );
	float NOTEEXP$1;
	__builtin_memset( &NOTEEXP$1, 0, 4ll );
	int64 A$1;
	__builtin_memset( &A$1, 0, 8ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$5 = POP(  );
	T1$1 = vr$5;
	int64 vr$7 = CONVERTTOINT( &T1$1 );
	A$1 = vr$7;
	NOTEBASE$1 = *(float*)((int64)(float*)NOTETABLE$ + ((A$1 % 12ll) << (2ll & 63ll)));
	NOTEEXP$1 = (float)((double)A$1 / 0x1.8p+3);
	double vr$14 = pow( 0x1.p+1, (double)NOTEEXP$1 );
	R$1 = (float)(vr$14 * (double)NOTEBASE$1);
	*(double*)&T1$1 = (double)R$1;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$2932:;
}

void DO_GETPIXEL( void )
{
	label$2933:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 A1$1;
	__builtin_memset( &A1$1, 0, 4ll );
	uint32 A2$1;
	__builtin_memset( &A2$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 == 2ll ) goto label$2936;
	{
		FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"getpixel: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$8, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2934;
		label$2936:;
	}
	struct $11EXPR_RESULT vr$9 = POP(  );
	T2$1 = vr$9;
	struct $11EXPR_RESULT vr$10 = POP(  );
	T1$1 = vr$10;
	int64 vr$12 = CONVERTTOINT( &T1$1 );
	A1$1 = (uint32)vr$12;
	int64 vr$15 = CONVERTTOINT( &T2$1 );
	A2$1 = (uint32)vr$15;
	uint8 vr$24 = PSPEEK( (uint32)(((int64)BUFPTR$ + (int64)A1$1) + ((int64)A2$1 << (10ll & 63ll))) );
	*(uint32*)&T1$1 = (uint32)vr$24;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	PUSH( &T1$1 );
	label$2934:;
}

void DO_GETTIME( void )
{
	label$2937:;
	uint32 HI2$1;
	__builtin_memset( &HI2$1, 0, 4ll );
	uint32 LO2$1;
	__builtin_memset( &LO2$1, 0, 4ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = LO2$1;
	*(uint32*)((uint8*)&T1$1 + 4ll) = HI2$1;
	PUSH( &T1$1 );
	label$2938:;
}

void DO_GOSUB( void )
{
	label$2939:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	GOSUBTOP$ = GOSUBTOP$ + 1ll;
	if( (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 24ll) != 510ll ) goto label$2942;
	{
		*(uint32*)((int64)(struct $11GOSUB_ENTRY*)GOSUBTABLE$ + (GOSUBTOP$ << (3ll & 63ll))) = RUNPTR$;
		*(uint32*)(((int64)(struct $11GOSUB_ENTRY*)GOSUBTABLE$ + (GOSUBTOP$ << (3ll & 63ll))) + 4ll) = 0u;
	}
	goto label$2941;
	label$2942:;
	{
		*(uint32*)((int64)(struct $11GOSUB_ENTRY*)GOSUBTABLE$ + (GOSUBTOP$ << (3ll & 63ll))) = OLDRUNPTR$;
		*(uint32*)(((int64)(struct $11GOSUB_ENTRY*)GOSUBTABLE$ + (GOSUBTOP$ << (3ll & 63ll))) + 4ll) = (uint32)(LINEPTR_E$ + 2ll);
	}
	label$2941:;
	label$2940:;
}

void DO_FAST_GOTO( void )
{
	label$2943:;
	uint32 TESTPTR$1;
	__builtin_memset( &TESTPTR$1, 0, 4ll );
	uint32 FLAG$1;
	__builtin_memset( &FLAG$1, 0, 4ll );
	TESTPTR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	uint32 vr$4 = PSLPEEK( TESTPTR$1 );
	FLAG$1 = vr$4;
	if( (int64)FLAG$1 != (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 4ll) ) goto label$2946;
	{
		RUNPTR$ = TESTPTR$1;
		LINEPTR_E$ = LINEPTR$ + -1ll;
		if( (int64)*(uint32*)((int64)(uint32*)RUNHEADER$ + 20ll) != 2147483647ll ) goto label$2948;
		{
			*(uint32*)((int64)(uint32*)RUNHEADER$ + 20ll) = 0u;
			label$2948:;
		}
	}
	goto label$2945;
	label$2946:;
	{
		DO_FIND_GOTO(  );
	}
	label$2945:;
	label$2944:;
}

void DO_FIND_GOTO( void )
{
	int64 TMP$807$1;
	int64 TMP$808$1;
	label$2949:;
	int64 GOTOLINE$1;
	__builtin_memset( &GOTOLINE$1, 0, 8ll );
	int64 GOTOPTR$1;
	__builtin_memset( &GOTOPTR$1, 0, 8ll );
	int64 OLDGOTOPTR$1;
	__builtin_memset( &OLDGOTOPTR$1, 0, 8ll );
	uint32 GOTOHEADER$1[6];
	__builtin_memset( (uint32*)GOTOHEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$806$1;
	*(uint32**)&tmp$806$1 = (uint32*)GOTOHEADER$1;
	*(uint32**)((uint8*)&tmp$806$1 + 8ll) = (uint32*)GOTOHEADER$1;
	*(int64*)((uint8*)&tmp$806$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$806$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$806$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$806$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$806$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$806$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$806$1 + 64ll) = 5ll;
	GOTOLINE$1 = (int64)*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 4ll);
	GOTOPTR$1 = (int64)PROGRAMSTART$;
	label$2951:;
	{
		memmove( (void*)GOTOHEADER$1, (void*)((uint8*)&MACHINE$ + GOTOPTR$1), 24ull );
		if( (int64)*(uint32*)GOTOHEADER$1 == 4294967295ll ) goto label$2955;
		{
			OLDGOTOPTR$1 = GOTOPTR$1;
			GOTOPTR$1 = (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll);
		}
		label$2955:;
		label$2954:;
	}
	label$2953:;
	if( (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll) == 2147483647ll ) goto label$2956;
	TMP$807$1 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == -1ll);
	goto label$2960;
	label$2956:;
	TMP$807$1 = -1ll;
	label$2960:;
	if( TMP$807$1 != 0ll ) goto label$2957;
	TMP$808$1 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == GOTOLINE$1);
	goto label$2961;
	label$2957:;
	TMP$808$1 = -1ll;
	label$2961:;
	if( TMP$808$1 == 0ll ) goto label$2951;
	label$2952:;
	if( (int64)*(uint32*)GOTOHEADER$1 != GOTOLINE$1 ) goto label$2959;
	{
		*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) = (uint32)OLDGOTOPTR$1;
		*(uint32*)((uint8*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))) + 8ll) = 78u;
		memmove( (void*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll))), (void*)((uint8*)&MACHINE$ + ((int64)OLDRUNPTR$ + ((LINEPTR_E$ + 2ll) * COMPILEDSLOT$))), (uint64)COMPILEDSLOT$ );
		DO_FAST_GOTO(  );
	}
	goto label$2958;
	label$2959:;
	{
		PRINTERROR( 38ll, 0ll );
	}
	label$2958:;
	label$2950:;
}

void DO_SLOW_GOTO( void )
{
	int64 TMP$810$1;
	int64 TMP$811$1;
	label$2962:;
	int64 GOTOLINE$1;
	__builtin_memset( &GOTOLINE$1, 0, 8ll );
	int64 GOTOPTR$1;
	__builtin_memset( &GOTOPTR$1, 0, 8ll );
	int64 OLDGOTOPTR$1;
	__builtin_memset( &OLDGOTOPTR$1, 0, 8ll );
	uint32 GOTOHEADER$1[6];
	__builtin_memset( (uint32*)GOTOHEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$809$1;
	*(uint32**)&tmp$809$1 = (uint32*)GOTOHEADER$1;
	*(uint32**)((uint8*)&tmp$809$1 + 8ll) = (uint32*)GOTOHEADER$1;
	*(int64*)((uint8*)&tmp$809$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$809$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$809$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$809$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$809$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$809$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$809$1 + 64ll) = 5ll;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	int64 vr$9 = CONVERTTOINT( &T1$1 );
	GOTOLINE$1 = vr$9;
	GOTOPTR$1 = (int64)PROGRAMSTART$;
	label$2964:;
	{
		memmove( (void*)GOTOHEADER$1, (void*)((uint8*)&MACHINE$ + GOTOPTR$1), 24ull );
		if( (int64)*(uint32*)GOTOHEADER$1 == 4294967295ll ) goto label$2968;
		{
			OLDGOTOPTR$1 = GOTOPTR$1;
			GOTOPTR$1 = (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll);
		}
		label$2968:;
		label$2967:;
	}
	label$2966:;
	if( (int64)*(uint32*)((int64)(uint32*)GOTOHEADER$1 + 20ll) == 2147483647ll ) goto label$2969;
	TMP$810$1 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == -1ll);
	goto label$2975;
	label$2969:;
	TMP$810$1 = -1ll;
	label$2975:;
	if( TMP$810$1 != 0ll ) goto label$2970;
	TMP$811$1 = (int64)-((int64)*(uint32*)GOTOHEADER$1 == GOTOLINE$1);
	goto label$2976;
	label$2970:;
	TMP$811$1 = -1ll;
	label$2976:;
	if( TMP$811$1 == 0ll ) goto label$2964;
	label$2965:;
	if( (int64)*(uint32*)GOTOHEADER$1 != GOTOLINE$1 ) goto label$2972;
	{
		RUNPTR$ = (uint32)OLDGOTOPTR$1;
		LINEPTR_E$ = LINEPTR$ + -1ll;
		if( (int64)*(uint32*)((int64)(uint32*)RUNHEADER$ + 20ll) != 2147483647ll ) goto label$2974;
		{
			*(uint32*)((int64)(uint32*)RUNHEADER$ + 20ll) = 0u;
			label$2974:;
		}
	}
	label$2972:;
	label$2971:;
	label$2963:;
}

void DO_HEX( void )
{
	int64 TMP$812$1;
	label$2977:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	uint32 NUM$1;
	__builtin_memset( &NUM$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 2ll ) goto label$2979;
	TMP$812$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$2984;
	label$2979:;
	TMP$812$1 = -1ll;
	label$2984:;
	if( TMP$812$1 == 0ll ) goto label$2981;
	{
		FBSTRING* vr$9 = fb_StrAllocTempDescZEx( (uint8*)"hex$: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$9, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$2978;
		label$2981:;
	}
	if( (int64)NUMPAR$1 != 2ll ) goto label$2983;
	{
		struct $11EXPR_RESULT vr$11 = POP(  );
		T1$1 = vr$11;
		int64 vr$13 = CONVERTTOINT( &T1$1 );
		NUM$1 = (uint32)vr$13;
	}
	goto label$2982;
	label$2983:;
	{
		NUM$1 = 8u;
		label$2982:;
	}
	struct $11EXPR_RESULT vr$15 = POP(  );
	T1$1 = vr$15;
	int64 vr$17 = CONVERTTOINT( &T1$1 );
	ARG$1 = (uint32)vr$17;
	FBSTRING* vr$19 = fb_HEXEx_i( ARG$1, (int32)NUM$1 );
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$19, -1ll, 0 );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	PUSH( &T1$1 );
	label$2978:;
}

void DO_IF( void )
{
	label$2985:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	struct $11EXPR_RESULT vr$2 = POP(  );
	T1$1 = vr$2;
	if( (int64)*(uint32*)&T1$1 != 0ll ) goto label$2988;
	{
		{
			I$1 = LINEPTR_E$;
			int64 TMP$814$3;
			TMP$814$3 = LINEPTR$ + -1ll;
			goto label$2989;
			label$2992:;
			{
				__builtin_memcpy( &T1$1, (struct $11EXPR_RESULT*)((uint8*)&CL$ + (I$1 << (4ll & 63ll))), 16 );
				if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 90ll ) goto label$2994;
				{
					LINEPTR_E$ = I$1;
					goto label$2986;
					label$2994:;
				}
			}
			label$2990:;
			I$1 = I$1 + 1ll;
			label$2989:;
			if( I$1 <= TMP$814$3 ) goto label$2992;
			label$2991:;
		}
		LINEPTR_E$ = LINEPTR$ + -1ll;
	}
	label$2988:;
	label$2987:;
	label$2986:;
}

void DO_INKEY( void )
{
	int64 TMP$815$1;
	int64 TMP$816$1;
	label$2995:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 KEY$1;
	__builtin_memset( &KEY$1, 0, 8ll );
	int64 LEDS$1;
	__builtin_memset( &LEDS$1, 0, 8ll );
	if( KEY$1 == 0ll ) goto label$2997;
	TMP$815$1 = (int64)-(KEY$1 < 2147483648ll);
	goto label$3012;
	label$2997:;
	TMP$815$1 = 0ll;
	label$3012:;
	if( TMP$815$1 == 0ll ) goto label$2998;
	TMP$816$1 = (int64)-((KEY$1 & 255ll) < 224ll);
	goto label$3013;
	label$2998:;
	TMP$816$1 = 0ll;
	label$3013:;
	if( TMP$816$1 == 0ll ) goto label$3000;
	{
		if( LEDS$1 == 0ll ) goto label$3002;
		{
			int64 TMP$817$3;
			int64 TMP$818$3;
			int64 TMP$819$3;
			int64 TMP$820$3;
			if( KEY$1 <= 96ll ) goto label$3003;
			TMP$817$3 = (int64)-(KEY$1 < 123ll);
			goto label$3014;
			label$3003:;
			TMP$817$3 = 0ll;
			label$3014:;
			if( TMP$817$3 == 0ll ) goto label$3005;
			{
				KEY$1 = KEY$1 + -32ll;
			}
			goto label$3004;
			label$3005:;
			if( KEY$1 <= 64ll ) goto label$3007;
			TMP$818$3 = (int64)-(KEY$1 < 91ll);
			goto label$3015;
			label$3007:;
			TMP$818$3 = 0ll;
			label$3015:;
			if( TMP$818$3 == 0ll ) goto label$3006;
			{
				KEY$1 = KEY$1 + 32ll;
			}
			goto label$3004;
			label$3006:;
			if( KEY$1 <= 22ll ) goto label$3009;
			TMP$819$3 = (int64)-(KEY$1 < 32ll);
			goto label$3016;
			label$3009:;
			TMP$819$3 = 0ll;
			label$3016:;
			if( TMP$819$3 == 0ll ) goto label$3008;
			{
				KEY$1 = KEY$1 + -9ll;
			}
			goto label$3004;
			label$3008:;
			if( KEY$1 <= 13ll ) goto label$3011;
			TMP$820$3 = (int64)-(KEY$1 < 23ll);
			goto label$3017;
			label$3011:;
			TMP$820$3 = 0ll;
			label$3017:;
			if( TMP$820$3 == 0ll ) goto label$3010;
			{
				KEY$1 = KEY$1 + 39ll;
			}
			label$3010:;
			label$3004:;
		}
		label$3002:;
		label$3001:;
	}
	label$3000:;
	label$2999:;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
	PUSH( &T1$1 );
	label$2996:;
}

void DO_INK( void )
{
	label$3018:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	int64 vr$3 = CONVERTTOINT( &T1$1 );
	INK$ = vr$3;
	SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
	SETCURSORCOLOR( (uint8)INK$ );
	label$3019:;
}

void DO_INT( void )
{
	label$3020:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	{
		uint32 TMP$821$2;
		TMP$821$2 = *(uint32*)((uint8*)&T1$1 + 8ll);
		if( (int64)TMP$821$2 != 30ll ) goto label$3023;
		label$3024:;
		{
			*(int64*)&T1$1 = fb_D2L( __builtin_floor( *(double*)&T1$1 ) );
		}
		goto label$3022;
		label$3023:;
		if( (int64)TMP$821$2 != 31ll ) goto label$3025;
		label$3026:;
		{
			double vr$6 = fb_VAL( *(FBSTRING**)&T1$1 );
			*(int64*)&T1$1 = fb_D2L( __builtin_floor( vr$6 ) );
		}
		goto label$3022;
		label$3025:;
		if( (int64)TMP$821$2 != 43ll ) goto label$3027;
		label$3028:;
		{
			FBSTRING* vr$10 = CONVERTSTRING( *(uint32*)&T1$1 );
			double vr$11 = fb_VAL( (FBSTRING*)vr$10 );
			*(int64*)&T1$1 = fb_D2L( __builtin_floor( vr$11 ) );
		}
		label$3027:;
		label$3022:;
	}
	*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
	PUSH( &T1$1 );
	label$3021:;
}

void DO_INPUT( void )
{
	int64 TMP$823$1;
	label$3029:;
	FBSTRING LINE_$1;
	__builtin_memset( &LINE_$1, 0, 24ll );
	FBSTRING PART_$1;
	__builtin_memset( &PART_$1, 0, 24ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 COMMA$1;
	__builtin_memset( &COMMA$1, 0, 4ll );
	uint32 STRINGADDR$1;
	__builtin_memset( &STRINGADDR$1, 0, 4ll );
	uint32 VARTYPE$1;
	__builtin_memset( &VARTYPE$1, 0, 4ll );
	uint32 ESIZE$1;
	__builtin_memset( &ESIZE$1, 0, 4ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	float FVAL$1;
	__builtin_memset( &FVAL$1, 0, 4ll );
	FBSTRING ARGS$1[65];
	__builtin_memset( (FBSTRING*)ARGS$1, 0, 1560ll );
	struct $8FBARRAY1I8FBSTRINGE tmp$822$1;
	*(FBSTRING**)&tmp$822$1 = (FBSTRING*)ARGS$1;
	*(FBSTRING**)((uint8*)&tmp$822$1 + 8ll) = (FBSTRING*)ARGS$1;
	*(int64*)((uint8*)&tmp$822$1 + 16ll) = 1560ll;
	*(int64*)((uint8*)&tmp$822$1 + 24ll) = 24ll;
	*(int64*)((uint8*)&tmp$822$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$822$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$822$1 + 48ll) = 65ll;
	*(int64*)((uint8*)&tmp$822$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$822$1 + 64ll) = 64ll;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 J$1;
	__builtin_memset( &J$1, 0, 8ll );
	int64 L$1;
	__builtin_memset( &L$1, 0, 8ll );
	int64 CPX$1;
	__builtin_memset( &CPX$1, 0, 8ll );
	int64 CPY$1;
	__builtin_memset( &CPY$1, 0, 8ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 < 1ll ) goto label$3031;
	TMP$823$1 = (int64)-((int64)NUMPAR$1 > 64ll);
	goto label$3113;
	label$3031:;
	TMP$823$1 = -1ll;
	label$3113:;
	if( TMP$823$1 == 0ll ) goto label$3033;
	{
		FBSTRING* vr$23 = fb_StrAllocTempDescZEx( (uint8*)"In input: ", 10ll );
		fb_PrintString( 0, (FBSTRING*)vr$23, 0 );
		PRINTERROR( 39ll, (int64)*(uint32*)RUNHEADER$ );
		fb_ArrayDestructStr( (struct $7FBARRAYIvE*)&tmp$822$1 );
		fb_StrDelete( (FBSTRING*)&PART_$1 );
		fb_StrDelete( (FBSTRING*)&LINE_$1 );
		goto label$3030;
		label$3033:;
	}
	I$1 = (int64)NUMPAR$1 + -1ll;
	CPX$1 = fb_D2L( (double)CURSOR_X$ / 0x1.p+1 );
	CPY$1 = CURSOR_Y$;
	label$3034:;
	{
		int64 TMP$825$2;
		FBSTRING* vr$33 = EDIT(  );
		fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)vr$33, -1ll, 0 );
		if( CURSOR_Y$ != (CPY$1 + 1ll) ) goto label$3038;
		{
			int64 vr$37 = fb_StrLen( (void*)&LINE_$1, -1ll );
			FBSTRING* vr$41 = fb_RIGHT( (FBSTRING*)&LINE_$1, (vr$37 - CPX$1) + EDITOR_SPACES$ );
			FBSTRING* vr$42 = fb_TRIM( (FBSTRING*)vr$41 );
			fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)vr$42, -1ll, 0 );
		}
		goto label$3037;
		label$3038:;
		{
			FBSTRING* vr$45 = fb_TRIM( (FBSTRING*)&LINE_$1 );
			fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)vr$45, -1ll, 0 );
		}
		label$3037:;
		label$3039:;
		{
			FBSTRING* vr$47 = fb_StrAllocTempDescZEx( (uint8*)",", 1ll );
			int64 vr$49 = fb_StrInstr( 1ll, (FBSTRING*)&LINE_$1, (FBSTRING*)vr$47 );
			COMMA$1 = (uint32)vr$49;
			if( (int64)COMMA$1 <= 0ll ) goto label$3043;
			{
				FBSTRING* vr$55 = fb_LEFT( (FBSTRING*)&LINE_$1, (int64)COMMA$1 + -1ll );
				fb_StrAssign( (void*)&PART_$1, -1ll, (void*)vr$55, -1ll, 0 );
				int64 vr$58 = fb_StrLen( (void*)&LINE_$1, -1ll );
				FBSTRING* vr$62 = fb_RIGHT( (FBSTRING*)&LINE_$1, vr$58 - (int64)COMMA$1 );
				fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)vr$62, -1ll, 0 );
			}
			goto label$3042;
			label$3043:;
			{
				FBSTRING* vr$65 = fb_TRIM( (FBSTRING*)&LINE_$1 );
				fb_StrAssign( (void*)&PART_$1, -1ll, (void*)vr$65, -1ll, 0 );
				fb_StrAssign( (void*)&LINE_$1, -1ll, (void*)"", 1ll, 0 );
			}
			label$3042:;
			fb_StrAssign( (void*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)), -1ll, (void*)&PART_$1, -1ll, 0 );
			I$1 = I$1 + -1ll;
		}
		label$3041:;
		if( I$1 < 0ll ) goto label$3044;
		int32 vr$73 = fb_StrCompare( (void*)&LINE_$1, -1ll, (void*)"", 1ll );
		TMP$825$2 = (int64)-((int64)vr$73 == 0ll);
		goto label$3114;
		label$3044:;
		TMP$825$2 = -1ll;
		label$3114:;
		if( TMP$825$2 == 0ll ) goto label$3039;
		label$3040:;
	}
	label$3036:;
	if( I$1 >= 0ll ) goto label$3034;
	label$3035:;
	{
		I$1 = 0ll;
		int64 TMP$826$2;
		TMP$826$2 = (int64)NUMPAR$1 + -1ll;
		goto label$3045;
		label$3048:;
		{
			int64 TMP$828$3;
			int64 TMP$829$3;
			int64 TMP$830$3;
			int64 TMP$831$3;
			int64 TMP$832$3;
			int64 TMP$833$3;
			boolean vr$80 = ISNUM( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
			boolean vr$83 = ISINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
			if( (boolean)(vr$80 & (boolean)(vr$83 == 0ll)) == (boolean)0ll ) goto label$3050;
			{
				R$1 = 30ll;
				label$3050:;
			}
			boolean vr$88 = ISINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
			if( vr$88 == (boolean)0ll ) goto label$3052;
			{
				R$1 = 28ll;
				label$3052:;
			}
			int64 vr$91 = ISDEC( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
			if( vr$91 == 0ll ) goto label$3054;
			{
				R$1 = 29ll;
				label$3054:;
			}
			boolean vr$94 = ISNUM( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
			if( (boolean)(vr$94 == 0ll) == (boolean)0ll ) goto label$3056;
			{
				R$1 = 43ll;
				int64 vr$97 = fb_StrLen( (void*)&PART_$1, -1ll );
				L$1 = vr$97;
				MEMTOP$ = (uint32)((((int64)MEMTOP$ - L$1) + -4ll) & 4294967292ll);
				PSLPOKE( MEMTOP$, (uint32)L$1 );
				{
					J$1 = 1ll;
					int64 TMP$827$5;
					TMP$827$5 = L$1;
					goto label$3057;
					label$3060:;
					{
						FBSTRING* vr$106 = fb_StrMid( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)), J$1, 1ll );
						uint32 vr$107 = fb_ASC( (FBSTRING*)vr$106, 1ll );
						PSPOKE( (uint32)(((int64)MEMTOP$ + J$1) + 3ll), (uint8)vr$107 );
					}
					label$3058:;
					J$1 = J$1 + 1ll;
					label$3057:;
					if( J$1 <= TMP$827$5 ) goto label$3060;
					label$3059:;
				}
				STRINGADDR$1 = MEMTOP$;
			}
			label$3056:;
			label$3055:;
			struct $11EXPR_RESULT vr$114 = POP(  );
			T1$1 = vr$114;
			VARTYPE$1 = *(uint32*)((uint8*)&T1$1 + 4ll);
			{
				if( (int64)VARTYPE$1 != 0ll ) goto label$3062;
				label$3063:;
				{
					ESIZE$1 = 12u;
				}
				goto label$3061;
				label$3062:;
				if( (int64)VARTYPE$1 != 256ll ) goto label$3064;
				label$3065:;
				{
					ESIZE$1 = 12u;
				}
				goto label$3061;
				label$3064:;
				if( (int64)VARTYPE$1 != 257ll ) goto label$3066;
				label$3067:;
				{
					ESIZE$1 = 1u;
				}
				goto label$3061;
				label$3066:;
				if( (int64)VARTYPE$1 != 258ll ) goto label$3068;
				label$3069:;
				{
					ESIZE$1 = 1u;
				}
				goto label$3061;
				label$3068:;
				if( (int64)VARTYPE$1 != 259ll ) goto label$3070;
				label$3071:;
				{
					ESIZE$1 = 2u;
				}
				goto label$3061;
				label$3070:;
				if( (int64)VARTYPE$1 != 260ll ) goto label$3072;
				label$3073:;
				{
					ESIZE$1 = 2u;
				}
				goto label$3061;
				label$3072:;
				if( (int64)VARTYPE$1 != 261ll ) goto label$3074;
				label$3075:;
				{
					ESIZE$1 = 4u;
				}
				goto label$3061;
				label$3074:;
				if( (int64)VARTYPE$1 != 262ll ) goto label$3076;
				label$3077:;
				{
					ESIZE$1 = 4u;
				}
				goto label$3061;
				label$3076:;
				if( (int64)VARTYPE$1 != 263ll ) goto label$3078;
				label$3079:;
				{
					ESIZE$1 = 8u;
				}
				goto label$3061;
				label$3078:;
				if( (int64)VARTYPE$1 != 264ll ) goto label$3080;
				label$3081:;
				{
					ESIZE$1 = 8u;
				}
				goto label$3061;
				label$3080:;
				if( (int64)VARTYPE$1 != 265ll ) goto label$3082;
				label$3083:;
				{
					ESIZE$1 = 6u;
				}
				goto label$3061;
				label$3082:;
				if( (int64)VARTYPE$1 != 266ll ) goto label$3084;
				label$3085:;
				{
					ESIZE$1 = 8u;
				}
				goto label$3061;
				label$3084:;
				if( (int64)VARTYPE$1 != 267ll ) goto label$3086;
				label$3087:;
				{
					ESIZE$1 = 5u;
				}
				goto label$3061;
				label$3086:;
				{
					ESIZE$1 = 12u;
				}
				label$3088:;
				label$3061:;
			}
			if( (int64)ESIZE$1 != 12ll ) goto label$3089;
			TMP$828$3 = (int64)-((int64)*(uint32*)&T1$1 < 524288ll);
			goto label$3115;
			label$3089:;
			TMP$828$3 = 0ll;
			label$3115:;
			if( TMP$828$3 == 0ll ) goto label$3091;
			{
			}
			label$3091:;
			label$3090:;
			if( (int64)ESIZE$1 != 12ll ) goto label$3092;
			TMP$829$3 = (int64)-((int64)*(uint32*)&T1$1 >= 524288ll);
			goto label$3116;
			label$3092:;
			TMP$829$3 = 0ll;
			label$3116:;
			if( TMP$829$3 == 0ll ) goto label$3094;
			{
				if( R$1 != 28ll ) goto label$3096;
				{
					int32 vr$136 = fb_VALINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
					PSLPOKE( *(uint32*)&T1$1, (uint32)vr$136 );
					label$3096:;
				}
				if( R$1 != 29ll ) goto label$3098;
				{
					int32 vr$139 = fb_VALINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
					PSLPOKE( *(uint32*)&T1$1, (uint32)vr$139 );
					label$3098:;
				}
				if( R$1 != 43ll ) goto label$3100;
				{
					PSLPOKE( *(uint32*)&T1$1, STRINGADDR$1 );
					label$3100:;
				}
				PSLPOKE( (uint32)((int64)*(uint32*)&T1$1 + 8ll), (uint32)R$1 );
			}
			label$3094:;
			label$3093:;
			if( (int64)ESIZE$1 != 5ll ) goto label$3101;
			TMP$830$3 = (int64)-(R$1 == 43ll);
			goto label$3117;
			label$3101:;
			TMP$830$3 = 0ll;
			label$3117:;
			if( TMP$830$3 == 0ll ) goto label$3103;
			{
				PSLPOKE( *(uint32*)&T1$1, STRINGADDR$1 );
				label$3103:;
			}
			if( (int64)ESIZE$1 != 4ll ) goto label$3104;
			TMP$831$3 = (int64)-(R$1 != 43ll);
			goto label$3118;
			label$3104:;
			TMP$831$3 = 0ll;
			label$3118:;
			if( TMP$831$3 == 0ll ) goto label$3106;
			{
				int32 vr$150 = fb_VALINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
				PSLPOKE( *(uint32*)&T1$1, (uint32)vr$150 );
				label$3106:;
			}
			if( (int64)ESIZE$1 != 2ll ) goto label$3107;
			TMP$832$3 = (int64)-(R$1 != 43ll);
			goto label$3119;
			label$3107:;
			TMP$832$3 = 0ll;
			label$3119:;
			if( TMP$832$3 == 0ll ) goto label$3109;
			{
				int32 vr$155 = fb_VALINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
				PSDPOKE( *(uint32*)&T1$1, (uint16)vr$155 );
				label$3109:;
			}
			if( (int64)ESIZE$1 != 1ll ) goto label$3110;
			TMP$833$3 = (int64)-(R$1 != 43ll);
			goto label$3120;
			label$3110:;
			TMP$833$3 = 0ll;
			label$3120:;
			if( TMP$833$3 == 0ll ) goto label$3112;
			{
				int32 vr$161 = fb_VALINT( (FBSTRING*)((int64)(FBSTRING*)ARGS$1 + (I$1 * 24ll)) );
				PSPOKE( *(uint32*)&T1$1, (uint8)vr$161 );
				label$3112:;
			}
		}
		label$3046:;
		I$1 = I$1 + 1ll;
		label$3045:;
		if( I$1 <= TMP$826$2 ) goto label$3048;
		label$3047:;
	}
	fb_ArrayDestructStr( (struct $7FBARRAYIvE*)&tmp$822$1 );
	fb_StrDelete( (FBSTRING*)&PART_$1 );
	fb_StrDelete( (FBSTRING*)&LINE_$1 );
	label$3030:;
}

void DO_LEFT( void )
{
	label$3121:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 == 2ll ) goto label$3124;
	{
		FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (uint8*)"left$: ", 7ll );
		fb_PrintString( 0, (FBSTRING*)vr$6, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$3122;
		label$3124:;
	}
	struct $11EXPR_RESULT vr$7 = POP(  );
	T1$1 = vr$7;
	int64 vr$9 = CONVERTTOINT( &T1$1 );
	ARG$1 = (uint32)vr$9;
	struct $11EXPR_RESULT vr$11 = POP(  );
	T1$1 = vr$11;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$3126;
	{
		FBSTRING* vr$13 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$13, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3126:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$3128;
	{
		FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (uint8*)"left$: ", 7ll );
		fb_PrintString( 0, (FBSTRING*)vr$15, 0 );
		PRINTERROR( 15ll, 0ll );
		goto label$3122;
		label$3128:;
	}
	FBSTRING* vr$17 = fb_LEFT( *(FBSTRING**)&T1$1, (int64)ARG$1 );
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$17, -1ll, 0 );
	PUSH( &T1$1 );
	label$3122:;
}

void DO_LEN( void )
{
	int64 TMP$835$1;
	label$3129:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG$1;
	__builtin_memset( &ARG$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 > 1ll ) goto label$3131;
	TMP$835$1 = (int64)-((int64)NUMPAR$1 == 0ll);
	goto label$3138;
	label$3131:;
	TMP$835$1 = -1ll;
	label$3138:;
	if( TMP$835$1 == 0ll ) goto label$3133;
	{
		FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"len: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$8, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$3130;
		label$3133:;
	}
	struct $11EXPR_RESULT vr$9 = POP(  );
	T1$1 = vr$9;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$3135;
	{
		FBSTRING* vr$11 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$11, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3135:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$3137;
	{
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (uint8*)"len: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$13, 0 );
		PRINTERROR( 15ll, 0ll );
		goto label$3130;
		label$3137:;
	}
	*(int64*)&T1$1 = 8ll;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
	PUSH( &T1$1 );
	label$3130:;
}

void DO_LIST( void )
{
	int64 TMP$839$1;
	label$3139:;
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	int64 STARTLINE$1;
	__builtin_memset( &STARTLINE$1, 0, 8ll );
	int64 ENDLINE$1;
	__builtin_memset( &ENDLINE$1, 0, 8ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 AEND$1;
	__builtin_memset( &AEND$1, 0, 8ll );
	int64 NEWLIST$1;
	__builtin_memset( &NEWLIST$1, 0, 8ll );
	uint32 HEADER$1[6];
	__builtin_memset( (uint32*)HEADER$1, 0, 24ll );
	struct $8FBARRAY1IjE tmp$837$1;
	*(uint32**)&tmp$837$1 = (uint32*)HEADER$1;
	*(uint32**)((uint8*)&tmp$837$1 + 8ll) = (uint32*)HEADER$1;
	*(int64*)((uint8*)&tmp$837$1 + 16ll) = 24ll;
	*(int64*)((uint8*)&tmp$837$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&tmp$837$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$837$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$837$1 + 48ll) = 6ll;
	*(int64*)((uint8*)&tmp$837$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$837$1 + 64ll) = 5ll;
	uint8 LINEBUF$1[128];
	__builtin_memset( (uint8*)LINEBUF$1, 0, 128ll );
	struct $8FBARRAY1IhE tmp$838$1;
	*(uint8**)&tmp$838$1 = (uint8*)LINEBUF$1;
	*(uint8**)((uint8*)&tmp$838$1 + 8ll) = (uint8*)LINEBUF$1;
	*(int64*)((uint8*)&tmp$838$1 + 16ll) = 128ll;
	*(int64*)((uint8*)&tmp$838$1 + 24ll) = 1ll;
	*(int64*)((uint8*)&tmp$838$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$838$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$838$1 + 48ll) = 128ll;
	*(int64*)((uint8*)&tmp$838$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$838$1 + 64ll) = 127ll;
	int64 LISTPTR$1;
	__builtin_memset( &LISTPTR$1, 0, 8ll );
	STARTLINE$1 = 0ll;
	ENDLINE$1 = 2147483647ll;
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 != 1ll ) goto label$3142;
	{
		struct $11EXPR_RESULT vr$16 = POP(  );
		T1$1 = vr$16;
		int64 vr$18 = CONVERTTOINT( &T1$1 );
		STARTLINE$1 = vr$18;
		label$3142:;
	}
	if( NUMPAR$1 != 2ll ) goto label$3144;
	{
		struct $11EXPR_RESULT vr$19 = POP(  );
		T1$1 = vr$19;
		int64 vr$21 = CONVERTTOINT( &T1$1 );
		ENDLINE$1 = vr$21;
		struct $11EXPR_RESULT vr$22 = POP(  );
		T1$1 = vr$22;
		int64 vr$24 = CONVERTTOINT( &T1$1 );
		STARTLINE$1 = vr$24;
		label$3144:;
	}
	fb_PrintVoid( 0, 1 );
	LISTPTR$1 = (int64)PROGRAMSTART$;
	label$3145:;
	{
		if( (int64)*(uint32*)HEADER$1 == 4294967295ll ) goto label$3149;
		{
			LISTPTR$1 = (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll);
		}
		label$3149:;
		label$3148:;
	}
	label$3147:;
	if( (int64)*(uint32*)((int64)(uint32*)HEADER$1 + 20ll) == 2147483647ll ) goto label$3150;
	TMP$839$1 = (int64)-((int64)*(uint32*)HEADER$1 == -1ll);
	goto label$3151;
	label$3150:;
	TMP$839$1 = -1ll;
	label$3151:;
	if( TMP$839$1 == 0ll ) goto label$3145;
	label$3146:;
	label$3140:;
}

void DO_LOAD( int64 AMODE$1 )
{
	FBSTRING TMP$850$1;
	FBSTRING TMP$851$1;
	FBSTRING TMP$852$1;
	FBSTRING TMP$853$1;
	label$3152:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 R$1;
	__builtin_memset( &R$1, 0, 8ll );
	int64 AMOUNT$1;
	__builtin_memset( &AMOUNT$1, 0, 8ll );
	int64 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 8ll );
	uint32 HEADER$1;
	__builtin_memset( &HEADER$1, 0, 4ll );
	uint32 LINELENGTH$1;
	__builtin_memset( &LINELENGTH$1, 0, 4ll );
	uint8 LINE2$1[126];
	__builtin_memset( (uint8*)LINE2$1, 0, 126ll );
	struct $8FBARRAY1IhE tmp$840$1;
	*(uint8**)&tmp$840$1 = (uint8*)LINE2$1;
	*(uint8**)((uint8*)&tmp$840$1 + 8ll) = (uint8*)LINE2$1;
	*(int64*)((uint8*)&tmp$840$1 + 16ll) = 126ll;
	*(int64*)((uint8*)&tmp$840$1 + 24ll) = 1ll;
	*(int64*)((uint8*)&tmp$840$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$840$1 + 40ll) = 49ll;
	*(int64*)((uint8*)&tmp$840$1 + 48ll) = 126ll;
	*(int64*)((uint8*)&tmp$840$1 + 56ll) = 0ll;
	*(int64*)((uint8*)&tmp$840$1 + 64ll) = 125ll;
	FBSTRING LINE2_$1;
	__builtin_memset( &LINE2_$1, 0, 24ll );
	INLOAD$ = 1ll;
	NUMPAR$1 = (int64)*(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( NUMPAR$1 <= 0ll ) goto label$3155;
	{
		struct $11EXPR_RESULT vr$14 = POP(  );
		T1$1 = vr$14;
	}
	goto label$3154;
	label$3155:;
	{
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)&LOADNAME$, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3154:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$3157;
	{
		FBSTRING* vr$16 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$16, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3157:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$3159;
	{
		FBSTRING TMP$841$2;
		FBSTRING TMP$842$2;
		FBSTRING TMP$847$2;
		FBSTRING TMP$848$2;
		if( AMODE$1 == 1234ll ) goto label$3161;
		{
			DO_NEW(  );
			label$3161:;
		}
		int32 vr$18 = fb_StrCompare( *(void**)&T1$1, -1ll, (void*)"", 1ll );
		if( (int64)vr$18 != 0ll ) goto label$3163;
		{
			fb_StrAssign( *(void**)&T1$1, -1ll, (void*)&LOADNAME$, -1ll, 0 );
		}
		goto label$3162;
		label$3163:;
		{
			fb_StrAssign( (void*)&LOADNAME$, -1ll, *(void**)&T1$1, -1ll, 0 );
			label$3162:;
		}
		fb_FileClose( 9 );
		__builtin_memset( &TMP$841$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$841$2, (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$842$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$842$2, (void*)vr$22, -1ll, *(void**)&T1$1, -1ll );
		int32 vr$26 = fb_FileOpen( (FBSTRING*)vr$25, 2u, 0u, 0u, 9, 0 );
		R$1 = (int64)vr$26;
		if( R$1 == 0ll ) goto label$3165;
		{
			FBSTRING TMP$844$3;
			FBSTRING TMP$845$3;
			FBSTRING TMP$846$3;
			fb_FileClose( 9 );
			__builtin_memset( &TMP$844$3, 0, 24ll );
			FBSTRING* vr$30 = fb_StrConcat( &TMP$844$3, (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
			__builtin_memset( &TMP$845$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$845$3, (void*)vr$30, -1ll, *(void**)&T1$1, -1ll );
			__builtin_memset( &TMP$846$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$846$3, (void*)vr$33, -1ll, (void*)".bas", 5ll );
			int32 vr$37 = fb_FileOpen( (FBSTRING*)vr$36, 2u, 0u, 0u, 9, 0 );
			R$1 = (int64)vr$37;
			if( R$1 == 0ll ) goto label$3167;
			{
				FBSTRING* vr$39 = fb_StrAllocTempDescZEx( (uint8*)"System error ", 13ll );
				fb_PrintString( 0, (FBSTRING*)vr$39, 0 );
				fb_PrintLongint( 0, R$1, 0 );
				FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (uint8*)": ", 2ll );
				fb_PrintString( 0, (FBSTRING*)vr$40, 1 );
				fb_FileClose( 9 );
				fb_StrDelete( (FBSTRING*)&LINE2_$1 );
				goto label$3153;
			}
			goto label$3166;
			label$3167:;
			{
				fb_StrConcatAssign( (void*)&LOADNAME$, -1ll, (void*)".bas", 5ll, 0 );
			}
			label$3166:;
		}
		label$3165:;
		label$3164:;
		fb_FileClose( 9 );
		__builtin_memset( &TMP$847$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$847$2, (void*)&CURRENTDIR_$, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$848$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$848$2, (void*)vr$44, -1ll, (void*)&LOADNAME$, -1ll );
		fb_FileOpen( (FBSTRING*)vr$47, 2u, 0u, 0u, 9, 0 );
		label$3168:;
		{
			fb_FileLineInput( 9, (void*)&LINE_$, -1ll, 0 );
			INTERPRET(  );
		}
		label$3170:;
		int32 vr$48 = fb_StrCompare( (void*)&LINE_$, -1ll, (void*)"", 1ll );
		if( (int64)vr$48 != 0ll ) goto label$3168;
		label$3169:;
		fb_FileClose( 9 );
	}
	goto label$3158;
	label$3159:;
	{
		PRINTERROR( 30ll, 0ll );
	}
	label$3158:;
	__builtin_memset( &TMP$853$1, 0, 24ll );
	__builtin_memset( &TMP$850$1, 0, 24ll );
	FBSTRING* vr$53 = fb_StrConcat( &TMP$850$1, (void*)"Loaded ", 8ll, (void*)&CURRENTDIR_$, -1ll );
	__builtin_memset( &TMP$851$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrConcat( &TMP$851$1, (void*)vr$53, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$852$1, 0, 24ll );
	FBSTRING* vr$59 = fb_StrConcat( &TMP$852$1, (void*)vr$56, -1ll, (void*)&LOADNAME$, -1ll );
	fb_StrAssign( (void*)&TMP$853$1, -1ll, (void*)vr$59, -1ll, 0 );
	WRITELN( &TMP$853$1 );
	fb_StrDelete( (FBSTRING*)&TMP$853$1 );
	INLOAD$ = 0ll;
	fb_StrDelete( (FBSTRING*)&LINE2_$1 );
	label$3153:;
}

void DO_LOG( void )
{
	int64 TMP$854$1;
	label$3171:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	float BASE_$1;
	__builtin_memset( &BASE_$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 == 0ll ) goto label$3173;
	TMP$854$1 = (int64)-((int64)NUMPAR$1 > 2ll);
	goto label$3178;
	label$3173:;
	TMP$854$1 = -1ll;
	label$3178:;
	if( TMP$854$1 == 0ll ) goto label$3175;
	{
		FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"log: ", 5ll );
		fb_PrintString( 0, (FBSTRING*)vr$8, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$3172;
		label$3175:;
	}
	if( (int64)NUMPAR$1 != 2ll ) goto label$3177;
	{
		struct $11EXPR_RESULT vr$10 = POP(  );
		T1$1 = vr$10;
		float vr$12 = CONVERTTOFLOAT( &T1$1 );
		BASE_$1 = __builtin_logf( vr$12 );
	}
	goto label$3176;
	label$3177:;
	{
		BASE_$1 = 0x1.p+0f;
	}
	label$3176:;
	struct $11EXPR_RESULT vr$14 = POP(  );
	T1$1 = vr$14;
	float vr$16 = CONVERTTOFLOAT( &T1$1 );
	*(double*)&T1$1 = (double)(float)((double)__builtin_logf( vr$16 ) / (double)BASE_$1);
	*(uint32*)((uint8*)&T1$1 + 8ll) = 30u;
	PUSH( &T1$1 );
	label$3172:;
}

void DO_LPEEK( void )
{
	label$3179:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 A$1;
	__builtin_memset( &A$1, 0, 4ll );
	uint32 R$1;
	__builtin_memset( &R$1, 0, 4ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	int64 vr$5 = CONVERTTOINT( &T1$1 );
	A$1 = (uint32)vr$5;
	if( (int64)A$1 >= 524288ll ) goto label$3182;
	{
		uint32 vr$8 = PSLPEEK( A$1 );
		R$1 = vr$8;
	}
	goto label$3181;
	label$3182:;
	{
		uint32 vr$9 = PSLPEEK( A$1 );
		R$1 = vr$9;
		label$3181:;
	}
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = R$1;
	PUSH( &T1$1 );
	label$3180:;
}

void DO_LPOKE( void )
{
	label$3183:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT T2$1;
	__builtin_memset( &T2$1, 0, 16ll );
	uint32 A$1;
	__builtin_memset( &A$1, 0, 4ll );
	uint32 V$1;
	__builtin_memset( &V$1, 0, 4ll );
	struct $11EXPR_RESULT vr$4 = POP(  );
	T1$1 = vr$4;
	struct $11EXPR_RESULT vr$5 = POP(  );
	T2$1 = vr$5;
	int64 vr$7 = CONVERTTOINT( &T2$1 );
	A$1 = (uint32)vr$7;
	int64 vr$10 = CONVERTTOINT( &T1$1 );
	V$1 = (uint32)vr$10;
	if( (int64)A$1 >= 524288ll ) goto label$3186;
	{
		PSLPOKE( A$1, V$1 );
	}
	goto label$3185;
	label$3186:;
	{
		PSLPOKE( A$1, V$1 );
		label$3185:;
	}
	label$3184:;
}

void DO_MEMLO( void )
{
	label$3187:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)&T1$1 = (uint32)PROGRAMPTR$;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	PUSH( &T1$1 );
	label$3188:;
}

void DO_MEMTOP( void )
{
	label$3189:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)&T1$1 = MEMTOP$;
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	PUSH( &T1$1 );
	label$3190:;
}

void DO_MID( void )
{
	label$3191:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	uint32 NUMPAR$1;
	__builtin_memset( &NUMPAR$1, 0, 4ll );
	uint32 ARG1$1;
	__builtin_memset( &ARG1$1, 0, 4ll );
	uint32 ARG2$1;
	__builtin_memset( &ARG2$1, 0, 4ll );
	NUMPAR$1 = *(uint32*)((uint8*)&CL$ + (LINEPTR_E$ << (4ll & 63ll)));
	if( (int64)NUMPAR$1 == 3ll ) goto label$3194;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"mid$: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$7, 0 );
		PRINTERROR( 39ll, 0ll );
		goto label$3192;
		label$3194:;
	}
	struct $11EXPR_RESULT vr$8 = POP(  );
	T1$1 = vr$8;
	int64 vr$10 = CONVERTTOINT( &T1$1 );
	ARG2$1 = (uint32)vr$10;
	struct $11EXPR_RESULT vr$12 = POP(  );
	T1$1 = vr$12;
	int64 vr$14 = CONVERTTOINT( &T1$1 );
	ARG1$1 = (uint32)vr$14;
	struct $11EXPR_RESULT vr$16 = POP(  );
	T1$1 = vr$16;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$3196;
	{
		FBSTRING* vr$18 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$18, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3196:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$3198;
	{
		FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (uint8*)"mid$: ", 6ll );
		fb_PrintString( 0, (FBSTRING*)vr$20, 0 );
		PRINTERROR( 15ll, 0ll );
		goto label$3192;
		label$3198:;
	}
	FBSTRING* vr$23 = fb_StrMid( *(FBSTRING**)&T1$1, (int64)ARG1$1, (int64)ARG2$1 );
	fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$23, -1ll, 0 );
	PUSH( &T1$1 );
	label$3192:;
}

void DO_MKDIR( void )
{
	label$3199:;
	int64 ERR_$1;
	__builtin_memset( &ERR_$1, 0, 8ll );
	FBSTRING FILENAME_$1;
	__builtin_memset( &FILENAME_$1, 0, 24ll );
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$3 = POP(  );
	T1$1 = vr$3;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 43ll ) goto label$3202;
	{
		FBSTRING* vr$5 = CONVERTSTRING( *(uint32*)&T1$1 );
		fb_StrAssign( *(void**)&T1$1, -1ll, (void*)vr$5, -1ll, 0 );
		*(uint32*)((uint8*)&T1$1 + 8ll) = 31u;
		label$3202:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) == 31ll ) goto label$3204;
	{
		PRINTERROR( 15ll, 0ll );
		fb_StrDelete( (FBSTRING*)&FILENAME_$1 );
		goto label$3200;
		label$3204:;
	}
	fb_StrAssign( (void*)&FILENAME_$1, -1ll, *(void**)&T1$1, -1ll, 0 );
	int32 vr$10 = fb_MkDir( (FBSTRING*)&FILENAME_$1 );
	ERR_$1 = (int64)vr$10;
	int32 vr$12 = fb_ErrorGetNum(  );
	if( (int64)vr$12 == 0ll ) goto label$3206;
	{
		FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (uint8*)"Cannot create a directory: system error ", 40ll );
		fb_PrintString( 0, (FBSTRING*)vr$14, 0 );
		fb_PrintLongint( 0, ERR_$1, 1 );
		label$3206:;
	}
	fb_StrDelete( (FBSTRING*)&FILENAME_$1 );
	label$3200:;
}

void DO_MODE( void )
{
	FBSTRING TMP$859$1;
	FBSTRING TMP$860$1;
	label$3207:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 30ll ) goto label$3210;
	{
		*(int64*)&T1$1 = fb_D2L( *(double*)&T1$1 );
		label$3210:;
	}
	if( (int64)*(uint32*)((uint8*)&T1$1 + 8ll) != 31ll ) goto label$3212;
	{
		double vr$5 = fb_VAL( *(FBSTRING**)&T1$1 );
		*(int64*)&T1$1 = fb_D2L( vr$5 );
		label$3212:;
	}
	{
		int64 TMP$858$2;
		TMP$858$2 = *(int64*)&T1$1;
		if( TMP$858$2 != 0ll ) goto label$3214;
		label$3215:;
		{
			FONT$ = 1ll;
			INK$ = 154ll;
			KEYCLICK$ = 1ll;
			PAPER$ = 147ll;
			SETFONTFAMILY( 4ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		goto label$3213;
		label$3214:;
		if( TMP$858$2 != 1ll ) goto label$3216;
		label$3217:;
		{
			FONT$ = 0ll;
			INK$ = 23ll;
			KEYCLICK$ = 0ll;
			PAPER$ = 0ll;
			SETFONTFAMILY( 0ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		goto label$3213;
		label$3216:;
		if( TMP$858$2 != 2ll ) goto label$3218;
		label$3219:;
		{
			FONT$ = 0ll;
			INK$ = 181ll;
			KEYCLICK$ = 0ll;
			PAPER$ = 0ll;
			SETFONTFAMILY( 0ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		goto label$3213;
		label$3218:;
		if( TMP$858$2 != 3ll ) goto label$3220;
		label$3221:;
		{
			FONT$ = 0ll;
			INK$ = 15ll;
			KEYCLICK$ = 0ll;
			PAPER$ = 0ll;
			SETFONTFAMILY( 0ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		goto label$3213;
		label$3220:;
		if( TMP$858$2 != 4ll ) goto label$3222;
		label$3223:;
		{
			FONT$ = 1ll;
			INK$ = 1ll;
			KEYCLICK$ = 1ll;
			PAPER$ = 14ll;
			SETFONTFAMILY( 4ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		goto label$3213;
		label$3222:;
		if( TMP$858$2 != 5ll ) goto label$3224;
		label$3225:;
		{
			FONT$ = 2ll;
			INK$ = 1ll;
			KEYCLICK$ = 1ll;
			PAPER$ = 7ll;
			SETFONTFAMILY( 8ll );
			SETWRITECOLORS( (uint8)INK$, (uint8)PAPER$ );
		}
		label$3224:;
		label$3213:;
	}
	NOSTALGIC_MODE$ = (uint32)*(int64*)&T1$1;
	FBSTRING* vr$22 = fb_LongintToStr( (int64)MEMTOP$ - PROGRAMPTR$ );
	fb_StrAssign( (void*)&FREE_$, -1ll, (void*)vr$22, -1ll, 0 );
	fb_StrConcatAssign( (void*)&FREE_$, -1ll, (void*)" BASIC bytes free", 18ll, 0 );
	CLS1( (uint8)INK$, (uint8)PAPER$ );
	__builtin_memset( &TMP$859$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$859$1, -1ll, (void*)"", 1ll, 0 );
	WRITELN( &TMP$859$1 );
	fb_StrDelete( (FBSTRING*)&TMP$859$1 );
	__builtin_memset( &TMP$860$1, 0, 24ll );
	fb_StrAssign( (void*)&TMP$860$1, -1ll, (void*)"RPi5 Retromachine BASIC version 0.01", 37ll, 0 );
	WRITELN( &TMP$860$1 );
	fb_StrDelete( (FBSTRING*)&TMP$860$1 );
	WRITELN( &FREE_$ );
	label$3208:;
}

void DO_MOUSE( void )
{
	label$3226:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	struct $11EXPR_RESULT vr$1 = POP(  );
	T1$1 = vr$1;
	if( (int64)*(uint32*)&T1$1 != 0ll ) goto label$3229;
	{
		SETSPRITESIZE( 16ll, 0ll, 0ll );
	}
	goto label$3228;
	label$3229:;
	{
		SETSPRITESIZE( 16ll, 32ll, 32ll );
		label$3228:;
	}
	label$3227:;
}

void DO_MOUSEK( void )
{
	label$3230:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = MOUSEK$;
	PUSH( &T1$1 );
	label$3231:;
}

void DO_MOUSEW( void )
{
	label$3232:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 28u;
	*(int64*)&T1$1 = (int64)MOUSEW$;
	PUSH( &T1$1 );
	label$3233:;
}

void DO_MOUSEX( void )
{
	label$3234:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = MOUSEX$;
	PUSH( &T1$1 );
	label$3235:;
}

void DO_MOUSEY( void )
{
	label$3236:;
	struct $11EXPR_RESULT T1$1;
	__builtin_memset( &T1$1, 0, 16ll );
	*(uint32*)((uint8*)&T1$1 + 8ll) = 29u;
	*(uint32*)&T1$1 = MOUSEY$;
	PUSH( &T1$1 );
	label$3237:;
}
