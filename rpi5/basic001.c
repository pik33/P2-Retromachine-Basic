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
struct $8SDL_Rect {
	int32 X;
	int32 Y;
	int32 W;
	int32 H;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileGetArrayLarge( int32, int64, struct $7FBARRAYIvE* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
void fb_Init( int32, uint8**, int32 );
void fb_End( int32 );
int32 fb_SleepEx( int32, int32 );
void* fb_ThreadCreate( tmp$1, void*, int64 );
void* SDL_CreateWindow( uint8*, int32, int32, int32, int32, uint32 );
void SDL_DestroyWindow( void* );
void SDL_PumpEvents( void );
int32 SDL_PeepEvents( union $9SDL_Event*, int32, int32, uint32, uint32 );
int32 SDL_PollEvent( union $9SDL_Event* );
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
void CLS1( uint8 );
void PUTPIXEL( uint32, uint32, uint8 );
void DRAW1( int64, int64, int64, int64, uint8 );
void FASTLINE( int64, int64, int64, uint8 );
void LINE1( int64, int64, int64, int64, uint8 );
void FCIRCLE( int64, int64, int64, uint8 );
void PUTCHARXYCF( int64, int64, uint8, uint8 );
void PUTCHARXYCG( int64, int64, uint8, uint8, uint8 );
void OUTTEXTXYCG( int64, int64, FBSTRING*, uint8, uint8 );
void OUTTEXTXYCF( int64, int64, FBSTRING*, uint8 );
void TRANSLATE_SCREEN( void );
void SDLTHREAD( void* );
union $13MACHINE_UNION {
	uint8 BYTES[1073741824];
	uint16 WORDS[536870912];
	uint32 LONGS[268435456];
};
__FB_STATIC_ASSERT( sizeof( union $13MACHINE_UNION ) == 1073741824 );
static union $13MACHINE_UNION MACHINE$;
static uint32 T2$[2073600];
static uint32 BUFPTR$ = 1071668223u;
static int64 A$;
static int64 UPDATED$;
static int64 FONT_FAMILY$ = 0ll;
static uint8 FONTS$[12288];
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
static struct $8FBARRAY1IjE tmp$173$ = { (uint32*)ATARIPALETTE$, (uint32*)ATARIPALETTE$, 1024ll, 4ll, 1ll, 49ll, { { 256ll, 0ll, 255ll } } };

void CLS1( uint8 B$1 )
{
	label$35:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	{
		I$1 = 0ll;
		label$40:;
		{
			*(uint8*)((uint8*)&MACHINE$ + ((int64)BUFPTR$ + I$1)) = B$1;
		}
		label$38:;
		I$1 = I$1 + 1ll;
		label$37:;
		if( I$1 <= 2073599ll ) goto label$40;
		label$39:;
	}
	label$36:;
}

void PUTPIXEL( uint32 X$1, uint32 Y$1, uint8 C$1 )
{
	label$41:;
	*(uint8*)((uint8*)&MACHINE$ + (((int64)BUFPTR$ + (int64)X$1) + ((int64)Y$1 * 960ll))) = C$1;
	label$42:;
}

void DRAW1( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$43:;
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
	X$1 = X1$1;
	Y$1 = Y1$1;
	if( X1$1 >= X2$1 ) goto label$46;
	{
		XI$1 = 1ll;
		DX$1 = X2$1 - X1$1;
	}
	goto label$45;
	label$46:;
	{
		XI$1 = -1ll;
		DX$1 = X1$1 - X2$1;
	}
	label$45:;
	if( Y1$1 >= Y2$1 ) goto label$48;
	{
		YI$1 = 1ll;
		DY$1 = Y2$1 - Y1$1;
	}
	goto label$47;
	label$48:;
	{
		YI$1 = -1ll;
		DY$1 = Y1$1 - Y2$1;
	}
	label$47:;
	PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
	if( DX$1 <= DY$1 ) goto label$50;
	{
		AI$1 = (DY$1 - DX$1) << (1ll & 63ll);
		BI$1 = DY$1 << (1ll & 63ll);
		D$1 = BI$1 - DX$1;
		label$51:;
		if( X$1 == X2$1 ) goto label$52;
		{
			if( D$1 < 0ll ) goto label$54;
			{
				X$1 = X$1 + XI$1;
				Y$1 = Y$1 + YI$1;
				D$1 = D$1 + AI$1;
			}
			goto label$53;
			label$54:;
			{
				D$1 = D$1 + BI$1;
				X$1 = X$1 + XI$1;
			}
			label$53:;
			PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
		}
		goto label$51;
		label$52:;
	}
	goto label$49;
	label$50:;
	{
		AI$1 = (DX$1 - DY$1) << (1ll & 63ll);
		BI$1 = DX$1 << (1ll & 63ll);
		D$1 = BI$1 - DY$1;
		label$55:;
		if( Y$1 == Y2$1 ) goto label$56;
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
				Y$1 = Y$1 + YI$1;
			}
			label$57:;
			PUTPIXEL( (uint32)X$1, (uint32)Y$1, C$1 );
		}
		goto label$55;
		label$56:;
	}
	label$49:;
	label$44:;
}

void FASTLINE( int64 X1$1, int64 X2$1, int64 Y$1, uint8 C$1 )
{
	label$59:;
	DRAW1( X1$1, Y$1, X2$1, Y$1, C$1 );
	label$60:;
}

void LINE1( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$61:;
	DRAW1( X1$1, Y1$1, X2$1, Y2$1, C$1 );
	label$62:;
}

void FCIRCLE( int64 X0$1, int64 Y0$1, int64 R$1, uint8 C$1 )
{
	label$63:;
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
	label$65:;
	if( X$1 > Y$1 ) goto label$66;
	{
		FASTLINE( X0$1 - X$1, X0$1 + X$1, Y0$1 - Y$1, C$1 );
		FASTLINE( X0$1 - X$1, X0$1 + X$1, Y0$1 + Y$1, C$1 );
		FASTLINE( X0$1 - Y$1, X0$1 + Y$1, Y0$1 - X$1, C$1 );
		FASTLINE( X0$1 - Y$1, X0$1 + Y$1, Y0$1 + X$1, C$1 );
		if( D$1 <= 0ll ) goto label$68;
		{
			D$1 = D$1 + DA$1;
			Y$1 = Y$1 + -1ll;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 16ll;
			DB$1 = DB$1 + 8ll;
		}
		goto label$67;
		label$68:;
		{
			D$1 = D$1 + DB$1;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 8ll;
			DB$1 = DB$1 + 8ll;
		}
		label$67:;
	}
	goto label$65;
	label$66:;
	label$64:;
}

void ECIRCLE( int64 X0$1, int64 Y0$1, int64 R$1, uint8 C$1 )
{
	label$69:;
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
	label$71:;
	if( X$1 > Y$1 ) goto label$72;
	{
		PUTPIXEL( (uint32)(X0$1 - X$1), (uint32)(Y0$1 - Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - X$1), (uint32)(Y0$1 + Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + X$1), (uint32)(Y0$1 - Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + X$1), (uint32)(Y0$1 + Y$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - Y$1), (uint32)(Y0$1 - X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 - Y$1), (uint32)(Y0$1 + X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + Y$1), (uint32)(Y0$1 - X$1), C$1 );
		PUTPIXEL( (uint32)(X0$1 + Y$1), (uint32)(Y0$1 + X$1), C$1 );
		if( D$1 <= 0ll ) goto label$74;
		{
			D$1 = D$1 + DA$1;
			Y$1 = Y$1 + -1ll;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 16ll;
			DB$1 = DB$1 + 8ll;
		}
		goto label$73;
		label$74:;
		{
			D$1 = D$1 + DB$1;
			X$1 = X$1 + 1ll;
			DA$1 = DA$1 + 8ll;
			DB$1 = DB$1 + 8ll;
		}
		label$73:;
	}
	goto label$71;
	label$72:;
	label$70:;
}

void FRAME( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$75:;
	FASTLINE( X1$1, X2$1, Y1$1, C$1 );
	FASTLINE( X1$1, X2$1, Y2$1, C$1 );
	LINE1( X1$1, Y1$1, X1$1, Y2$1, C$1 );
	LINE1( X2$1, Y1$1, X2$1, Y2$1, C$1 );
	label$76:;
}

void BOX( int64 X1$1, int64 Y1$1, int64 X2$1, int64 Y2$1, uint8 C$1 )
{
	label$77:;
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	{
		YY$1 = Y1$1;
		int64 TMP$175$2;
		TMP$175$2 = Y2$1;
		goto label$79;
		label$82:;
		{
			FASTLINE( X1$1, X2$1, YY$1, C$1 );
		}
		label$80:;
		YY$1 = YY$1 + 1ll;
		label$79:;
		if( YY$1 <= TMP$175$2 ) goto label$82;
		label$81:;
	}
	label$78:;
}

void PUTCHARXYCF( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1 )
{
	label$83:;
	int64 XX$1;
	__builtin_memset( &XX$1, 0, 8ll );
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	int64 BB$1;
	__builtin_memset( &BB$1, 0, 8ll );
	{
		YY$1 = 0ll;
		label$88:;
		{
			BB$1 = (int64)*(uint8*)((int64)(uint8*)FONTS$ + (((FONT_FAMILY$ << (12ll & 63ll)) + ((int64)ACHAR$1 << (4ll & 63ll))) + YY$1));
			{
				XX$1 = 0ll;
				label$92:;
				{
					if( (BB$1 & (1ll << (XX$1 & 63ll))) == 0ll ) goto label$94;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), F$1 );
					}
					label$94:;
					label$93:;
				}
				label$90:;
				XX$1 = XX$1 + 1ll;
				label$89:;
				if( XX$1 <= 7ll ) goto label$92;
				label$91:;
			}
		}
		label$86:;
		YY$1 = YY$1 + 1ll;
		label$85:;
		if( YY$1 <= 15ll ) goto label$88;
		label$87:;
	}
	label$84:;
}

void PUTCHARXYCG( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1, uint8 B$1 )
{
	label$95:;
	int64 XX$1;
	__builtin_memset( &XX$1, 0, 8ll );
	int64 YY$1;
	__builtin_memset( &YY$1, 0, 8ll );
	int64 BB$1;
	__builtin_memset( &BB$1, 0, 8ll );
	{
		YY$1 = 0ll;
		label$100:;
		{
			BB$1 = (int64)*(uint8*)((int64)(uint8*)FONTS$ + (((FONT_FAMILY$ << (12ll & 63ll)) + ((int64)ACHAR$1 << (4ll & 63ll))) + YY$1));
			{
				XX$1 = 0ll;
				label$104:;
				{
					if( (BB$1 & (1ll << (XX$1 & 63ll))) == 0ll ) goto label$106;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), F$1 );
					}
					goto label$105;
					label$106:;
					{
						PUTPIXEL( (uint32)(XX$1 + X$1), (uint32)(YY$1 + Y$1), B$1 );
					}
					label$105:;
				}
				label$102:;
				XX$1 = XX$1 + 1ll;
				label$101:;
				if( XX$1 <= 7ll ) goto label$104;
				label$103:;
			}
		}
		label$98:;
		YY$1 = YY$1 + 1ll;
		label$97:;
		if( YY$1 <= 15ll ) goto label$100;
		label$99:;
	}
	label$96:;
}

void PUTCHARXYCGF( int64 X$1, int64 Y$1, uint8 ACHAR$1, uint8 F$1, uint8 B$1 )
{
	label$107:;
	PUTCHARXYCG( X$1, Y$1, ACHAR$1, F$1, B$1 );
	label$108:;
}

void OUTTEXTXYCG( int64 X$1, int64 Y$1, FBSTRING* TEXT$1, uint8 F$1, uint8 B$1 )
{
	label$109:;
	int64 III$1;
	__builtin_memset( &III$1, 0, 8ll );
	{
		III$1 = 1ll;
		int64 TMP$176$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$176$2 = vr$1;
		goto label$111;
		label$114:;
		{
			FBSTRING* vr$2 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$3 = fb_ASC( (FBSTRING*)vr$2, 1ll );
			PUTCHARXYCG( X$1 + (III$1 << (3ll & 63ll)), Y$1, (uint8)vr$3, F$1, B$1 );
		}
		label$112:;
		III$1 = III$1 + 1ll;
		label$111:;
		if( III$1 <= TMP$176$2 ) goto label$114;
		label$113:;
	}
	label$110:;
}

void OUTTEXTXYCF( int64 X$1, int64 Y$1, FBSTRING* TEXT$1, uint8 F$1 )
{
	label$115:;
	int64 III$1;
	__builtin_memset( &III$1, 0, 8ll );
	{
		III$1 = 1ll;
		int64 TMP$177$2;
		int64 vr$1 = fb_StrLen( (void*)TEXT$1, -1ll );
		TMP$177$2 = vr$1;
		goto label$117;
		label$120:;
		{
			FBSTRING* vr$2 = fb_StrMid( (FBSTRING*)TEXT$1, III$1, 1ll );
			uint32 vr$3 = fb_ASC( (FBSTRING*)vr$2, 1ll );
			PUTCHARXYCF( X$1 + (III$1 << (3ll & 63ll)), Y$1, (uint8)vr$3, F$1 );
		}
		label$118:;
		III$1 = III$1 + 1ll;
		label$117:;
		if( III$1 <= TMP$177$2 ) goto label$120;
		label$119:;
	}
	label$116:;
}

void TRANSLATE_SCREEN( void )
{
	label$121:;
	void* P2P$1;
	__builtin_memset( &P2P$1, 0, 8ll );
	void* P3P$1;
	__builtin_memset( &P3P$1, 0, 8ll );
	void* PP$1;
	__builtin_memset( &PP$1, 0, 8ll );
	int64 SW$1;
	__builtin_memset( &SW$1, 0, 8ll );
	P2P$1 = (void*)T2$;
	P3P$1 = (void*)((uint8*)&MACHINE$ + (int64)BUFPTR$);
	PP$1 = (void*)ATARIPALETTE$;
	SW$1 = 576000ll;
	__asm__ __volatile__( "ldr x0,%0          " : "+m" (P2P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x1,%0          " : "+m" (P3P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x2,%0           " : "+m" (PP$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w3,%0" : "+m" (SW$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p1:   ldrb w5,[x1],#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x5,x2,x5,lsl #2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w6,[x5]  " :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs w3,w3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cmp w3,#0" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "b.ne p1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	label$122:;
}

void TRANSLATE_SCREEN_2( void )
{
	label$123:;
	void* P2P$1;
	__builtin_memset( &P2P$1, 0, 8ll );
	void* P3P$1;
	__builtin_memset( &P3P$1, 0, 8ll );
	void* PP$1;
	__builtin_memset( &PP$1, 0, 8ll );
	int64 SW$1;
	__builtin_memset( &SW$1, 0, 8ll );
	P2P$1 = (void*)T2$;
	P3P$1 = (void*)((uint8*)&MACHINE$ + (int64)BUFPTR$);
	PP$1 = (void*)ATARIPALETTE$;
	SW$1 = 2073600ll;
	__asm__ __volatile__( "ldr x0,%0          " : "+m" (P2P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x1,%0          " : "+m" (P3P$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr x2,%0           " : "+m" (PP$1) :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "mov w7,#540" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p3:    mov w3,#960" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "mov x8,#7676" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "p2:   ldrb w5,[x1],#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x5,x2,x5,lsl #2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "ldr w6,[x5]  " :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0]" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x0,x0,x8" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0],#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "str w6,[x0]" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "sub x0,x0,x8" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs w3,w3,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cmp w3,#0" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "b.ne p2" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x0,x0,x8" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "add x0,x0,#4" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "subs w7,w7,#1" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "cmp w7,#0" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	__asm__ __volatile__( "b.ne p3" :  :  : "cc", "memory", "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27", "r28", "r30" );
	label$124:;
}

void SDLTHREAD( void* QQ$1 )
{
	label$125:;
	SDL_Init( 32u );
	void* WIN$1;
	void* vr$0 = SDL_CreateWindow( (uint8*)"The Retromachine", 536805376, 536805376, 960, 540, 4u );
	WIN$1 = vr$0;
	void* RENDERER$1;
	void* vr$1 = SDL_CreateRenderer( WIN$1, -1, 14u );
	RENDERER$1 = vr$1;
	void* SDLTEXTURE$1;
	void* vr$2 = SDL_CreateTexture( RENDERER$1, 372645892u, 1, 960, 540 );
	SDLTEXTURE$1 = vr$2;
	SDL_RenderSetLogicalSize( RENDERER$1, 960, 540 );
	uint32 I$1;
	__builtin_memset( &I$1, 0, 4ll );
	uint32 J$1;
	__builtin_memset( &J$1, 0, 4ll );
	double Q$1;
	__builtin_memset( &Q$1, 0, 8ll );
	{
		I$1 = 0u;
		label$130:;
		{
			{
				J$1 = 0u;
				label$134:;
				{
					*(uint32*)((int64)(uint32*)T2$ + ((((int64)I$1 * 1920ll) + (int64)J$1) << (2ll & 63ll))) = (uint32)((((int64)I$1 % 256ll) << (8ll & 63ll)) + (((int64)J$1 % 256ll) << (16ll & 63ll)));
				}
				label$132:;
				J$1 = (uint32)((int64)J$1 + 1ll);
				label$131:;
				if( (int64)J$1 <= 1023ll ) goto label$134;
				label$133:;
			}
		}
		label$128:;
		I$1 = (uint32)((int64)I$1 + 1ll);
		label$127:;
		if( (int64)I$1 <= 599ll ) goto label$130;
		label$129:;
	}
	label$135:;
	{
		UPDATED$ = 0ll;
		TRANSLATE_SCREEN(  );
		SDL_UpdateTexture( SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (void*)T2$, 3840 );
		SDL_RenderClear( RENDERER$1 );
		SDL_RenderCopy( RENDERER$1, SDLTEXTURE$1, (struct $8SDL_Rect*)0ull, (struct $8SDL_Rect*)0ull );
		SDL_RenderPresent( RENDERER$1 );
		union $9SDL_Event EVENT$2;
		__builtin_memset( &EVENT$2, 0, 56ll );
		label$138:;
		int32 vr$29 = SDL_PollEvent( &EVENT$2 );
		if( (int64)vr$29 == 0ll ) goto label$139;
		{
			{
				uint32 TMP$179$4;
				TMP$179$4 = *(uint32*)&EVENT$2;
				if( (int64)TMP$179$4 != 256ll ) goto label$141;
				label$142:;
				{
					goto label$136;
				}
				goto label$140;
				label$141:;
				if( (int64)TMP$179$4 != 768ll ) goto label$143;
				label$144:;
				{
					if( (int64)*(int32*)((uint8*)&EVENT$2 + 20ll) != 27ll ) goto label$146;
					{
						goto label$136;
						label$146:;
					}
				}
				label$143:;
				label$140:;
			}
		}
		goto label$138;
		label$139:;
	}
	label$137:;
	goto label$135;
	label$136:;
	SDL_DestroyTexture( SDLTEXTURE$1 );
	SDL_DestroyRenderer( RENDERER$1 );
	SDL_DestroyWindow( WIN$1 );
	SDL_Quit(  );
	A$ = 0ll;
	label$126:;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	FBSTRING TMP$181$0;
	FBSTRING TMP$183$0;
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
	FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"ataripalettep2.def", 18ll );
	fb_FileOpen( (FBSTRING*)vr$7, 2u, 0u, 0u, 3, 0 );
	fb_FileGetArrayLarge( 3, 0ll, (struct $7FBARRAYIvE*)&tmp$173$ );
	fb_FileClose( 3 );
	{
		I$0 = 0ll;
		label$34:;
		{
			*(uint32*)((int64)(uint32*)ATARIPALETTE$ + (I$0 << (2ll & 63ll))) = (uint32)((int64)*(uint32*)((int64)(uint32*)ATARIPALETTE$ + (I$0 << (2ll & 63ll))) >> (8ll & 63ll));
		}
		label$32:;
		I$0 = I$0 + 1ll;
		label$31:;
		if( I$0 <= 255ll ) goto label$34;
		label$33:;
	}
	A$ = 1ll;
	fb_ThreadCreate( (tmp$1)&SDLTHREAD, (void*)0ull, 0ll );
	fb_SleepEx( 1000, 1 );
	{
		J$0 = 0ll;
		label$150:;
		{
			{
				I$0 = 1ll;
				label$154:;
				{
					PUTPIXEL( (uint32)J$0, (uint32)I$0, (uint8)((I$0 + J$0) % 256ll) );
				}
				label$152:;
				I$0 = I$0 + 1ll;
				label$151:;
				if( I$0 <= 255ll ) goto label$154;
				label$153:;
			}
		}
		label$148:;
		J$0 = J$0 + 1ll;
		label$147:;
		if( J$0 <= 255ll ) goto label$150;
		label$149:;
	}
	DRAW1( 100ll, 100ll, 300ll, 200ll, (uint8)120u );
	FCIRCLE( 300ll, 300ll, 100ll, (uint8)40u );
	PUTCHARXYCF( 300ll, 300ll, (uint8)65u, (uint8)200u );
	PUTCHARXYCG( 308ll, 300ll, (uint8)98u, (uint8)15u, (uint8)0u );
	__builtin_memset( &TMP$181$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$181$0, -1ll, (void*)"Hello,World", 12ll, 0 );
	OUTTEXTXYCG( 300ll, 100ll, &TMP$181$0, (uint8)248u, (uint8)0u );
	fb_StrDelete( (FBSTRING*)&TMP$181$0 );
	fb_SleepEx( 3000, 1 );
	CLS1( (uint8)147u );
	__builtin_memset( &TMP$183$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$183$0, -1ll, (void*)"Ready", 6ll, 0 );
	OUTTEXTXYCF( 16ll, 16ll, &TMP$183$0, (uint8)154u );
	fb_StrDelete( (FBSTRING*)&TMP$183$0 );
	FBSTRING R$0;
	__builtin_memset( &R$0, 0, 24ll );
	label$155:;
	{
		fb_SleepEx( 1000, 1 );
	}
	label$157:;
	if( A$ != 0ll ) goto label$155;
	label$156:;
	fb_StrDelete( (FBSTRING*)&R$0 );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}
