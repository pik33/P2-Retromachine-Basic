' A Retromachine Basic interpreter
' v. 0.51 - 20250102
' MIT license
' Piotr Kardasz pik33@o2.pl 
'-------------------------------------------------------------------
'memory map
'7FF00 - PSRAM mboxes
'7FC00..7FF00 768 bytes free - sys variables? (now unused)
'7EC00..7FBFF 4k buffer for a video driver
'7E800..7EBFF 1k buffer for video driver blit
'7E000..7E7FF 2k audio cache

#include "dir.bi"

const HEAPSIZE=96000
'#define PSRAM4
#define PSRAM16

#ifdef PSRAM16
'const _clkfreq = 344064000 '48000*28*256 - test
const _clkfreq = 338688000 '44100*30*256 - test
'paula*96=340501920 - 96 is 3/8*256

dim v as class using "hg010b.spin2"
dim psram as class using "psram.spin2"
#endif

'' this version doesn't support 4 bit: video driver needs synchroonizing. To do after reaching a beta phase

#ifdef PSRAM4
const _clkfreq = 340500000
dim v as class using "hg010b-4.spin2"
dim psram as class using "psram4.spin2"
#endif

dim kbm as class using "usbnew.spin2"
'dim audio as class using "audio096.spin2"
dim audio as class using "audio2-004.spin2"
''-----------------------------------------------------------------------------------------
''---------------------------------- Constants --------------------------------------------
''-----------------------------------------------------------------------------------------

const ver$="P2 Retromachine BASIC version 0.51"
const ver=49

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
const token_setamode=218
const token_getrealfreq=219

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
const memlo=$80000

'----------------------------- Audio stuff

dim envbuf(7,255) as ushort			' envelope buffer
declare envbuf8 alias envbuf as ubyte(7,512)	' the same for 8-bit access
dim notetable(11) as single			' one octave note frequencies		' 
dim noteperiods(11) as integer			' Paula periods for notes, one octave
dim beepsample as short(16)

''-----------------------------------------------------------------------------------------
''---------------------------------- Classes and types ------------------------------------
''-----------------------------------------------------------------------------------------

class part                       ' source code line part
  dim part$ as string
  dim token as integer
end class

union aresult			' one long for all result types (until I implement double and int64)
  dim iresult as integer
  dim uresult as ulong
  dim sresult as string
  dim fresult as double
  dim ulresult as ulongint     	' make an 8 byte placeholder for in64 and double
  dim twowords(1) as ulong 	' and allow single word access to it
end union
  
class expr_result		' general variable, not only expression result :) 
  dim result as aresult
  dim result_type as ulong  
end class

class variable			' variable table enttry
  dim name as string
  dim value as aresult
  dim vartype as ulong
end class  

class for_entry			' for-next loop table entry
  dim lineptr as ulong 		' line that will be executed after next
  dim cmdptr as ulong  		' pointer to a command in this line
  dim varnum as integer  	' variable to modify and check
  dim stepval as integer
  dim endval as integer
end class  

class gosub_entry		' gosub stack entry
  dim lineptr as ulong 		' line that will be executed after next
  dim cmdptr as ulong  		' command# in this line
end class 

class audiochannel		' a set of predefined values for audio channels
  dim freq as single		' frequency
  dim wave as ubyte		' waveform #
  dim env as ubyte		' envelope #
  dim delay as ushort		' delay in ms
  dim length as single		' length in seconds
  dim vol as single		' volume (1/1000, 0.0..16.384)
  dim pan as single		' -1.0 left, 1.0 right
  dim sus as ushort		' sustain point on the envelope
  dim amode as ushort		' freq/skip computing mode
  dim realfreq as single
end class

type parts as part(125)         ' parts to split the line into, line has 125 chars max
type asub as sub()		' sub type to make a sub table

''-----------------------------------------------------------------------------------------
''---------------------------------- Global variables ------------------------------------
''-----------------------------------------------------------------------------------------

dim channels(7) as audiochannel
dim variables as variable(maxvars)
dim varnum as integer
dim lparts as parts

dim audiocog,videocog,usbcog,pscog,pslock as integer
dim base as ulong
dim mbox as ulong
dim ansibuf(3) as ubyte
dim line$ as string
dim fullline$ as string
dim cont as integer

dim plot_color,plot_x,plot_y as integer
dim editor_spaces as integer
dim paper,ink, font as integer
dim ct as integer
dim progend as integer
dim stack(maxstack) as expr_result
dim stackpointer as integer
dim programptr as integer

dim commands(255) as asub 'this is a function table
dim tokennum as integer
dim compiledslot as integer
dim test as expr_result 
dim key , key2 as ulong
dim errors$(255)

dim compiledline(127) as expr_result
declare ucompiledline alias compiledline as ulong(383)
dim lineptr as integer
dim lineptr_e, ilineptr_e as integer
dim programstart as ulong
dim lastline as ulong
dim lastlineptr as ulong
'dim stringtable(maxvars) as string
'dim stringptr as integer
dim currentdir$ as string
dim fortable(maxfor) as for_entry
dim gosubtable(maxgosub) as gosub_entry

dim sample(255) as ubyte ' for csave
dim block(1023) as ubyte ' for csave and get/put/copy
dim blockptr as ulong
dim runptr,runptr2,oldrunptr as ulong
dim getres(9) as integer ' det  function result  for channel
dim inrun as ulong
dim runheader as ulong(5)
dim dataheader as ulong(8)
dim dataptr as ulong
dim fortop,gosubtop as integer
dim free$ as string
dim keyclick as integer
dim housekeeper_cog as integer
dim housekeeper_stack as integer(128)
dim mousex,mousey,mousek, mousew as ulong
dim padx,pady,padz,padh,padrx,padry,padrz,pads,padw as integer(6)
dim stick(6) as ulong
dim strig(6) as ulong
dim sprite(15) as ubyte pointer
dim hkcnt as ulong
dim memtop as ulong
dim nostalgic_mode, spl_len as ulong
dim keyclick_spl as any pointer
dim trig_coeff as single
dim trig_coeff2 as single
dim linenum as ulong
dim suspoints(7) as ushort
dim loadname as string
dim do_insert as integer
dim cy,cx as integer
dim inload,err as integer
dim readline as string


'----------------------------------------------------------------------------
'-----------------------------Program start ---------------------------------
'----------------------------------------------------------------------------

startpsram

audiocog,base=audio.start(mbox,0,$7E000)
waitms(50)
'dpoke base+20,16384
usbcog=kbm.start()
startvideo


kbm.mouse_set_limits(1023,599)
kbm.mouse_set_outptr(varptr(v.spr1ptr)+16*12+4)
v.setspriteptr(16,@mouse)
v.setspritesize(16,32,32) 
kbm.mouse_move(512,300)
housekeeper_cog=cpu(housekeeper(),@housekeeper_stack(0)) : hkcnt=0
editor_spaces=2
paper=147: ink=154 : font=4
plot_color=ink : plot_x=0: plot_y=0
keyclick=1 : nostalgic_mode=0 : keyclick_spl=@atari_spl : spl_len=1694
compiledslot=sizeof(test)
init_commands
init_error_strings
init_audio
do_new
cls(ink, paper)
v.setfontfamily(font) 				' use ST Mono font
v.setleadingspaces(2)
mount "/sd", _vfs_open_sdcard()
chdir "/sd/bas"
currentdir$="/sd/bas"
position 2*editor_spaces,1 : print ver$
free$=decuns$(memtop-programptr)+" BASIC bytes free" : print free$
position 2*editor_spaces,4 : print "Ready"
pinwrite 38,0 : pinwrite 39,0 ' LEDs off
loadname="noname.bas"
do_insert=-1
inload=0
for i=0 to 1 : beepsample(i)=32767  : next i : for i=2 to 3: beepsample(i)=-32767 : next i

open "/sd/bas/autorun.bas" for input as #9
err=geterr()
close #9
if err=0 then line$="run autorun.bas" : interpret


'-------------------------------------------------------------------------------------------------------- 
'-------------------------------------- MAIN LOOP -------------------------------------------------------
'--------------------------------------------------------------------------------------------------------

do
  line$=edit()
  interpret: line$="" 
loop

'-------------------------------------------------------------------------------------------------------- 
'------------------------------------ MAIN LOOP END -----------------------------------------------------
'--------------------------------------------------------------------------------------------------------

''-------------------------------------------------------------------------------------------------------
'                     A full screen editor for programming and entering data
''-------------------------------------------------------------------------------------------------------

function edit() as string

dim key,key2,key3,key4,rpt,rptcnt,ch as ulong
dim line$ as string
rpt=0 : rptcnt=0 : key=0 : key2=0 : key3=0 : key4=0 
do
waitvbl
'' Do key repeat

let key=kbm.get_key() 
let leds=kbm.ledstates() 'numlock 1 capslock 2 scrollock 4
if key>0 andalso key<4 andalso keyclick=1 then audio.play16(7,@atari2_spl,43,4096,1758,0,300) : audio.stop(7)
if key>3 andalso key<$80000000 andalso (key and 255) <$E0 then key2=key : rpt=1 : key3=key2 
if key>$80000000 then rptcnt=0 : rpt=0
if key=0 andalso rpt=1 then rptcnt+=1
if key<$80000000 then if rptcnt=25 then key3=key2 : rptcnt=21

'' there is a key pressed and it needs to be processed

if key3<>0 then
  if keyclick=1 then audio.play16(7,keyclick_spl,43,4096,spl_len,spl_len,0) ' make a click
  let key4=scantochar(key3)          
  if leds and 2 = 2 then 						' caps lock
    if key4>96 andalso key4<123 then                 
      key4-=32
    else if key4>64 andalso key4<91 then 
      key4+=32
    else if key4>22 andalso key4<32 then 				' 2x9 slots from #13 to #31 for intenational chars. 
      key4-=9								' ST type font used has Polish characters there
    else if key4>13 andalso key4<23 then 				
      key4+=39
    endif
  endif
 
  if key4>0 andalso key4<127 andalso v.cursor_x<254 then		' put the char on the screen 
    if do_insert then							' move the characters right
      for i=  v.textbuf_ptr+128*v.cursor_y+127 to v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2)+1 step -1 : pspoke i,pspeek(i-1) : next i 
      let j=0 : for i=v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2) to v.textbuf_ptr+128*v.cursor_y+127: v.putcharxycgf(v.cursor_x+2*j,16*v.cursor_y+4,pspeek(i),v.write_color,v.write_background) : j+=1 : next i 
    endif
    v.putchar(key4)
  endif  
  if key4>0 andalso key4<127 andalso v.cursor_x=254 andalso keyclick=1 then
    audio.play16(7,@atari2_spl,43,4096,1758,0,300) 
    audio.stop(7) 'end of line reached
  endif
    
  if key4=key_enter then 						' get the line from the  screen and return it
    line$="" 
    for i=editor_spaces to 127
      ch=pspeek(v.textbuf_ptr+128*v.cursor_y+i) 
      line$=line$+chr$(ch)
    next i
    if do_insert andalso v.cursor_y<35 then v.scrolldown(v.cursor_y+1)
    v.crlf() 
    return  line$
    endif 
  
  ' process tab, bksp, arrows, pgup/down, home,end
  
  key4=key3 and 255
  
  if key4 = 43 andalso v.cursor_x>=240 andalso keyclick=1 then audio.play16(7,@atari2_spl,43,4096,1758,0,300) : audio.stop(7)  			' tab
  if key4=77 then i=127 : do: 															' end
    if pspeek(v.textbuf_ptr+128*v.cursor_y+i)<>32 then 
      if i<127 then v.setcursorx(2*i+2) else v.setcursorx(254)
      exit loop
      endif 
    i=i-1
  loop until i=editor_spaces
  if i=editor_spaces then v.setcursorx(2*editor_spaces)
    
  if key4=74 then v.setcursorx(editor_spaces*2)													' home
  if key4=75 then v.setcursory(0)														' pgup
  if key4=78 then v.setcursory(36) 														' pgdn, todo: parameter instead 36
  if key4=76 then 																' del
    for i=v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2) to v.textbuf_ptr+128*v.cursor_y+127 : pspoke i,pspeek(i+1) : next i : pspoke v.textbuf_ptr+128*v.cursor_y+127,32
    let j=0 : for i=v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2) to v.textbuf_ptr+128*v.cursor_y+127: v.putcharxycgf(v.cursor_x+2*j,16*v.cursor_y+4,pspeek(i),v.write_color,v.write_background) : j+=1 : next i 
  endif

  if key4 = 42 then  'backspace
    if v.cursor_x>editor_spaces*2 then 
      position v.cursor_x-2,v.cursor_y
      for i=v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2) to v.textbuf_ptr+128*v.cursor_y+127 : pspoke i,pspeek(i+1) : next i : pspoke v.textbuf_ptr+128*v.cursor_y+127,32
      let j=0 : for i=v.textbuf_ptr+128*v.cursor_y+(v.cursor_x/2) to v.textbuf_ptr+128*v.cursor_y+127: v.putcharxycgf(v.cursor_x+2*j,16*v.cursor_y+4,pspeek(i),v.write_color,v.write_background) : j+=1 : next i 
    else
      line$="" : v.cursor_x=4
    endif   
  endif   

  if key4=82 then 						' arrow up
    cy=v.getcursory()-1 : if cy<0 then cy=0 
    v.setcursory(cy)
  endif   
  if key4=81 then						' arrow down,  todo: remove hardcoded 36
    cy=v.getcursory()+1 : if cy>36  then cy=36
    v.setcursory(cy)
  endif
  if key4=80 then
    cx=v.getcursorx()-2 					' arrow left
    if cx<editor_spaces then cx=editor_spaces			
    v.setcursorx(cx)
  endif
  if key4=79 then						' arrow right
    cx=v.getcursorx()+2 
    if cx>254  then cx=254 
    v.setcursorx(cx)
  endif

  if key4=73 then 						' ins
    do_insert=not do_insert 
    if do_insert then v.setcursorshape(14) else  v.setcursorshape(0)
  endif
key3=0 
endif
loop
end function

''-----------------------------------------------------------------------------------------------------------
' 					A housekeepeer.
' A dedicated cog that is intended to do things in the background, for example tracking GUI elements
' or playing audio tracks in  the background.  In the current version it reads the mouse pointer and
' a digital joystick position. It also implements a 200 Hz clock that's ticks are synchronized with vblanks 
''-----------------------------------------------------------------------------------------------------------

sub housekeeper

do
  do: loop until v.vblank=1 : hkcnt+=1 :gethdi
  waitms(5) : hkcnt+=1 : gethdi
  waitms(5) : hkcnt+=1 : gethdi
  waitms(5) : hkcnt+=1 : gethdi
loop
end sub

'----------------------------------------------------------------------------------------------------------
' gethdi is called from the houseekeeper to read HDI related values
'----------------------------------------------------------------------------------------------------------

sub gethdi

dim  dummy,i,j,x,y,z,h,rx,ry,rz,s,w as ulong

mousex,mousey=kbm.mouse_xy()
dummy,mousew=kbm.mouse_scroll()
mousek=kbm.mouse_buttons()
i=0
for j=0 to 6
  if kbm.hidpad_id(j)>0 then
    x=kbm.hidpad_axis(j,0) : y=kbm.hidpad_axis(j,1) : z=kbm.hidpad_axis(j,2) : h=kbm.hidpad_hat(j,0)
    rx=kbm.hidpad_axis(j,3) : ry=kbm.hidpad_axis(j,4) : rz=kbm.hidpad_axis(j,5) 
    s=kbm.hidpad_axis(j,6) : w=kbm.hidpad_axis(j,7)  
    padx(i)=x: pady(i)=y: padz(i)=z :padh(i)=h 
    padrx(i)=rx: padry(i)=ry: padrz(i)=rz  
    pads(i)=s: padw(i)=w 
    x=1+(x+49152) shr 15 : y=1+(y+49152) shr 15 : stick(i)=x+(y shl 2) 
    strig(i)=kbm.hidpad_buttons(j) 
    i=i+1
  endif
next j  
for j=i to 6 : stick(j)=0 : strig(j)=0 : next j 

'joystick positions:
'	                5     6     7
'			9    10    11
'		       13    14    15
end sub

'-------------------------------------------------------------------------------------------------------------
'---------------------------------- Housekeeper stuff ends here ----------------------------------------------
'-------------------------------------------------------------------------------------------------------------

'-------------------------------------------------------------------------------------------------------------
'
'                                     LINE INTERPRETER/TOKENIZER
'
'-------------------------------------------------------------------------------------------------------------


sub interpret
 
dim i,j,k,q,d,b1,b2,b3,addptr,dot as integer 
dim result as expr_result
dim etype as integer
dim separators(125)
dim note_val as single
dim err as integer
dim c$,p$,s1$,s2$,lp$ as string

' -------------------------    Pass 1: Split the line to parts, strip unneded spaces, lowercase parts, detect and concatenate strings

fullline$=trim$(line$): cont=-1  : linenum=0 : lineptr=0 : err=0

108 
for i=0 to 125: separators(i)=0 :next i
for i=0 to 125: lparts(i).part$="": lparts(i).token=0: next i

' 1a : extract the first command, split the line to first command and the rest

line$=trim$(line$):let d$="" : let l=len(line$) 
if l=0 then goto 101					' empty line,  nothing to do except print "ready"
d=0							' before we split the line, we have to find colons that are inside a string, 
for i=1 to len(line$)
  if mid$(line$,i,1)="""" andalso d=0 then 		' they are inside a string if there is an odd number of " before :
    d=1
  else if mid$(line$,i,1)="""" andalso d=1 then 
    d=0
  endif
lparts(i).token=d  
next i 
i=1: do until (mid$(line$,i,1)=":" andalso lparts(i).token=0)  orelse i>=l : i=i+1 : loop 		' find the first : that is not in a string
if i<l then let rest$=trim$(right$(line$,len(line$)-i)):line$=trim$(left$(line$,i-1)) else rest$="" 	' and separate the part of the line before the first : from the rest

if cont=-1 andalso rest$<>"" then cont=0 : goto 107       	' this is the first and not the last part
if cont=-1 andalso rest$= "" then cont=3 : goto 107		' this is the first AND the last part
if cont=4  andalso rest$<>"" then cont=1 : goto 107		' this is not the first and not the last part
if cont=4  andalso rest$= "" then cont=2 : goto 107		' this is the last, and not the first, part

' 1b: find separators

107
separators(0)=0
i=0: j=1
do: 
  i+=1 : c$=mid$(line$,i,1) : if isseparator(c$) then separators(j)=i: j+=1 
loop until i>l
separators(j)=i

' 1c : split the command to parts

let k=0
for i=0 to j-1 
  let p1=separators(i) : let p2=separators(i+1)' : print p1,p2
  if p1>0 then let p$=mid$(line$,p1,1) : if p$<>"" then lparts(k).part$=p$ : k+=1 
  p$=mid$(line$,p1+1,p2-p1-1) : if p$<>"" then lparts(k).part$=p$ : k+=1 
next i

' 1d  : first part has to have a line number, if not, add 0 for the immediate line

if (cont=0 orelse cont=3) andalso (not isdec(lparts(0).part$))  then for i=k to 1 step -1: lparts(i)=lparts(i-1) : next i: lparts(0).part$="0" : k+=1

' 1e : find strings

i=0
do
  if lparts(i).part$<>"""" then i+=1 : goto 109
  let q=i: do: let p$=lparts(i+1).part$ : lparts(q).part$=lparts(q).part$+p$: for j=i+1 to k: lparts(j)=lparts(j+1) : next j: k-=1 :  loop until p$="""" orelse i>=k  
  if p$<>"""" then k+=1:i+=1
109 loop until i>=k

' 1f : concatenate strings if "" detected between
 
i=0
do
  if right$(lparts(i).part$,1)="""" andalso left$(lparts(i+1).part$,1)=""""  then 
    lparts(i).part$=lparts(i).part$+right$(lparts(i+1).part$,len(lparts(i+1).part$)-1)
    for j=i+1 to k: lparts(j)=lparts(j+1): next j  
    i-=1 : k-=1 ' do not move i if concatenated
  endif
  i+=1 
loop until i>=k 
 
' 1g: concatenate >=, <=, ++, --, +=, *=, -=, /=, ^=, <>
 
i=0 
do
  s1$=lparts(i).part$ : s2$=lparts(i+1).part$
  if ((s1$=">" orelse s1$="<" orelse s1$="+" orelse s1$="-" orelse s1$="*" orelse s1$="/" orelse s1$="^") andalso s2$="=") orelse (s1$="+" andalso s2$="+") orelse (s1$="-" andalso s2$="-") orelse (s1$="<" andalso s2$=">") then
    lparts(i).part$=s1$+s2$
    for j=i+1 to k : lparts(j)=lparts(j+1) : next j
    i-=1 : k-=1 	' do not move i if concatenated
  endif
  i+=1 
loop until i>=k  
 
' 1h : now remove parts that are spaces

for i=0 to k: lparts(i).part$=trim$(lparts(i).part$): next i
i=0
do 
  if len(lparts(i).part$)=0 then 
    if i=k-1 then k-=1  :  exit
    if i<k-1 then 
      for j=i to k-2 : lparts(j)=lparts(j+1): next j: k-=1  
      if i>0 then i-=1 
    endif  
  endif
  i+=1
loop until i>k-1

' 1i: lowercase all that is not a string

for j=0 to k-1
  if left$(lparts(j).part$,1)<>"""" orelse right$(lparts(j).part$,1)<>"""" then lparts(j).part$=lcase$(lparts(j).part$) 
next j

'-------------------------------------------------------- Pass 2: Tokenize the line

for i=0 to k: lparts(i).token=-1: next i					' initialize all tokens to -1=invalid

if isdec(lparts(0).part$) then addptr=1 else addptr=0				' check if the abbreviated command are on the line start, or after linenum, 'then' or 'else'
if lparts(0).part$="else" then addptr=1 					' else is always the first
i=0 : do 
  if lparts(i).part$="then" then exit loop 					' try to find 'then'
  i=i+1 
loop until i>k
if i<k then addptr=i+1	 							' then found
lp$=lparts(addptr).part$ 

if left$(lparts(addptr).part$,1)="?" andalso len(lparts(addptr).part$)>1 then ' ? is abbreviation of print, but it has no dots, so it has to be treated here
  k+=1
  for i=k to addptr+1 step -1 : lparts(i)=lparts(i-1) : next i
  lparts(addptr+1).part$=right$(lparts(addptr).part$,len(lparts(addptr).part$)-1)
  lparts(addptr).part$="?"
  goto 825
endif  

dot=instr(1,lparts(addptr).part$,".")						' find a dot	
if dot>0 andalso dot<len(lparts(addptr).part$) then 				' split the part
  k+=1
  for i=k to addptr+1 step -1 : lparts(i)=lparts(i-1) : next i
  lparts(addptr+1).part$=right$(lparts(addptr).part$,len(lparts(addptr).part$)-dot)
  lparts(addptr).part$=left$(lparts(addptr).part$,dot)
endif  

825
lp$=lparts(addptr).part$ 

' process mouse/cursor/click on/off

if (lp$="mouse" orelse lp$="cursor" orelse lp$="click") then 
  if lparts(addptr+1).part$="on" then lparts(addptr+1).part$="1" :lparts(2).token=token_decimal
  if lparts(addptr+1).part$="off" then lparts(addptr+1).part$="0" :lparts(2).token=token_decimal
endif		
		
' process text constant for 'mode' - TO DO all predefined constants should have # before				

if (lp$="mode" orelse lp$="m.") then 
  if lparts(addptr+1).part$="atari" then lparts(addptr+1).part$="0"       
  if lparts(addptr+1).part$="pc_amber" then lparts(addptr+1).part$="1"  
  if lparts(addptr+1).part$="pc_green" then lparts(addptr+1).part$="2"  
  if lparts(addptr+1).part$="pc_white" then lparts(addptr+1).part$="3"  
  if lparts(addptr+1).part$="st" then lparts(addptr+1).part$="4"  
  if lparts(addptr+1).part$="amiga" then lparts(addptr+1).part$="5"  
endif

' find part types 

for i=0 to k-1
lparts(i).token=isseparator(lparts(i).part$)	: if lparts(i).token>0 then goto 102
lparts(i).token=isoperator(lparts(i).part$)	: if lparts(i).token>0 then goto 102
lparts(i).token=isassign(lparts(i).part$) 	: if lparts(i).token>0 then goto 102
lparts(i).token=iscommand(lparts(i).part$)	: if lparts(i).token>0 then goto 102
lparts(i).token=isfunction(lparts(i).part$)	: if lparts(i).token>0 then goto 102
lparts(i).token=isnotename(lparts(i).part$) 
if lparts(i).token>0 then 
  note_val=getnoteval(lparts(i).token)
  lparts(i).part$=str$(note_val) 
  lparts(i).token=token_float
  goto 102
endif

' if it is #channel, make it a number from 0 to 9 while setting a token_channel

lparts(i).token=ischannel(lparts(i).part$) : if lparts(i).token>0 then lparts(i).part$=right$(lparts(i).part$,1) : lparts(i).token=token_channel : goto 102
lparts(i).token=isconstant(lparts(i).part$) : if lparts(i).token>0 then lparts(i).part$=str$(lparts(i).token) : lparts(i).token=token_integer : goto 102

b1=isnum(lparts(i).part$) : b2=isint(lparts(i).part$) : b3=isdec(lparts(i).part$)
if b1 andalso b2 andalso b3 then lparts(i).token=token_decimal 			: goto 102 	' pure decimal for line num
if b1 andalso b2 andalso (not b3) then lparts(i).token=token_integer 		: goto 102 	' integer
if b1 andalso (not b2) andalso (not b3) then lparts(i).token=token_float 	: goto 102 	' float

if isstring(lparts(i).part$) then 
  lparts(i).token=token_string : lparts(i).part$=mid$(lparts(i).part$,2,len(lparts(i).part$)-2) :goto 102	' string, get rid of ""!
endif
if isname(lparts(i).part$) then lparts(i).token=token_name : goto 102						' name
102 next i 

lparts(k).token=token_end : lparts(k).part$="": tokennum=k

' process the case when simple load or save is called without "". This cannot be done earlier, as tokens has to be known                                    					 
 
if (lp$="load" orelse lp$="save" orelse lp$="brun" orelse lp$="run" orelse lp$="lo." orelse lp$="s." orelse lp$="br." orelse lp$="enter" orelse lp$="e.") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part$,1)<>"$" then lparts(addptr+1).token=token_string
if (lp$="delete" orelse lp$="mkdir") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part$,1)<>"$" then lparts(addptr+1).token=token_string
if (lp$="copy") andalso lparts(addptr+1).token=token_name andalso right$(lparts(addptr+1).part$,1)<>"$" then lparts(addptr+1).token=token_string
if (lp$="copy") andalso lparts(addptr+3).token=token_name andalso right$(lparts(addptr+3).part$,1)<>"$" then lparts(addptr+3).token=token_string

' cd needs special treatment..

if lp$="cd" then lparts(addptr+1).token=token_string
if lp$="cd." andalso lparts(addptr+1).part$="." then lparts(addptr+1).token=token_string : lparts(addptr+1).part$=".." : lparts(addptr).token=token_cd
if lp$="cd" andalso lparts(addptr+1).part$="/" then lparts(addptr+1).token=token_string : for i=(addptr+2) to k: lparts(addptr+1).part$+=lparts(i).part$ : next i

' determine a type of the line and compile it

if isdec(lparts(0).part$) then linenum=val%(lparts(0).part$)
if linenum>0 andalso k=1 andalso cont=3 then deleteline(linenum) : goto 104   ' this was an empty numbered line, delete it

if (cont=0 orelse cont=3) andalso lparts(2).token<>token_eq  then  		' first part, commans
  err=compile(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto 101
  if rest$<>"" then  line$=rest$ : cont=4 : goto 108 else goto 104
endif
      							
if (cont=1 orelse cont=2) andalso lparts(1).token<>token_eq  then 		' not a first part, command
  err=compile(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto 101
  if rest$<>"" then line$=rest$: cont=4 : goto 108 else goto 104  	
endif
							 
if (cont=0 orelse cont=3) andalso lparts(2).token=token_eq then  		' first part, assign
  err=compile_assign(linenum,0,cont)
  if err<>0 then printerror(err,linenum): goto 101
  if rest$<>"" then line$=rest$: cont=4 : goto 108 else goto 104
endif
    							 
if (cont=1 orelse cont=2) andalso lparts(1).token=token_eq then 		' not a first part, assign
  err=compile_assign(linenum,0,cont) 
  if err<>0 then printerror(err,linenum): goto 101
  if rest$<>"" then line$=rest$: cont=4 : goto 108 else goto 104  								 
endif

104 if linenum=0 then 								' line 0 is for immediate execution
  execute_line(2)
101 if inload=0 then v.writeln("") : v.writeln("Ready") 
    if inload=1 andalso err>0 then print fullline$
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
dim nn,token as integer
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
dim nn,token as integer
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

function isseparator(s as string) as ubyte

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
  case "r."	     	: return token_run
  case "save"	     	: return token_save
  case "s."	      	: return token_save
  case "setcolor"	: return token_setcolor
  case "sc."		: return token_setcolor
  case "setamode"	: return token_setamode
  case "sa."		: return token_setamode
  case "setdelay"	: return token_setdelay 
  case "sd."	 	: return token_setdelay 
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
  case "getrealfreq"	: return token_getrealfreq
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

dim i,l as integer
dim m$ as string
 
l=len(s): if l=0 then return false
m$=mid$(s,1,1) : if (m$<"a" orelse m$>"z")  andalso m$<>"_" then return false
if l>2 then 
  for i=2 to l
    m$=mid$(s,i,1) : if (i<l) andalso (m$<"a" orelse m$>"z") andalso (m$<"0" orelse m$>"9") andalso m$<>"_" andalso m$<>"." then return false 
    if (i=l) andalso (m$<"a" orelse m$>"z") andalso (m$<"0" orelse m$>"9") andalso m$<>"_" andalso m$<>"$" andalso m$<>"%" andalso m$<>"!" then return false
  next i
endif
return true
end function  

' Check if the part is a number.  

function isnum(s as string) as boolean 

dim i,l,ds,es,hex,bin,b as integer
dim m$ as string

ds=0: es=0
l=len(s): if l=0 then return false
m$=mid$(s,1,1) : if (m$<"0" orelse m$>"9") andalso m$<>"." andalso m$<>"$" andalso m$<>"%" andalso m$<>"-" then return false
if m$="." then ds=1
if m$="$" then hex=1 else hex=0
if m$="%" then bin=1 else bin=0
if l>1 then 
  for i=2 to l
    m$=mid$(s,i,1) : b=false
    if m$>="0" andalso m$<="9" then b=true  
    if m$="_" orelse m$="." orelse m$="E" orelse m$="e" orelse m$="-" then b=true 
    if hex=1 andalso m$>="a" andalso m$<="f" then b=true
    if bin=1 andalso (m$<"0" orelse m$>"1") andalso m$<>"_" then return false
    if not b then return false
    if m$="-" andalso lcase$(mid$(s,i-1,1))<>"e" then return false
    if m$="." then ds+=1: if ds>1 then return false
    if m$="E" orelse m$="e" then es+=1: if hex=0 andalso es>1 then return false
  next i
endif
return true
end function    
  
' Check if the part is an integer number.    
  
function isint(s as string) as boolean

dim i,l,ds,es,hex,bin as integer
dim m$ as string

l=len(s): if l=0 then return false
m$=mid$(s,1,1) : if (m$<"0" orelse m$>"9") andalso m$<>"$" andalso m$<>"%" andalso m$<>"-" then return false
if m$="$" then hex=1 else hex=0
if m$="%" then bin=1 else bin=0
if l>1 then 
  for i=2 to l
    m$=mid$(s,i,1) 
    if hex=0 andalso (m$<"0" orelse m$>"9") andalso m$<>"_"  then return false
    if hex=1 andalso (m$<"0" orelse m$>"9") andalso (m$<"a" orelse m$>"f") andalso m$<>"_"  then return false
    if bin=1 andalso (m$<"0" orelse m$>"1") andalso m$<>"_"  then return false
  next i
endif
return true
end function  

' Check if the part is a positive decimal number.  

function isdec(s as string) as boolean

dim i,l,m$,ds,es

l=len(s): if l=0 then return false
for i=1 to l
    m$=mid$(s,i,1) : if (m$<"0" orelse m$>"9") andalso m$<>"_"  then return false
  next i
return true
end function 

' Check if the part is a string.  

function isstring(s as string) as boolean
if left$(s,1)="""" andalso right$(s,1)="""" then return true else return false
end function

' getnoteval. Returns the frequency of note token

function getnoteval(token) as single

dim note,noteexp as integer
dim notebase,a as single

note = token-token_notename 
notebase=notetable(note mod 12) 
noteexp=1+(note/12) 
return (2.0^noteexp)*notebase
end function

'---------------------------------------------------------------------------------------------------------------------------------------
'--------------------- The end of interpreter/tokenizer functions ----------------------------------------------------------------------
'---------------------------------------------------------------------------------------------------------------------------------------

'---------------------------------------------------------------------------------------------------------------------------------------
'
'               		REVERSE POLISH NOTATION PRECOMPILER
'
' A precompiler gets the tokenized line at the input, and outputs the precompiled line that uses the reverse Polish notation.
' That means the operation is done by firs placing the arguments on the stack, and then do the operation on a top of this stack.
' The expression a=b*(c+d) is translated to push c, push d, add, push b, mul, push variable#, assign
' If the precompiled line has a number that is >0, then it is added to the program and saved in the PSRAM using the 2-way list structure
' If the line number=0, it is not saved, and instead it is immediately executed in the "interpret" function
' 
'---------------------------------------------------------------------------------------------------------------------------------------

'---------------------------------------------------------------------------------------------------------------------------------------
' Helper functions to manage program lines
'---------------------------------------------------------------------------------------------------------------------------------------

'----- delete a line from a program

function deleteline(aline as ulong) as integer

dim lineptr2,oldsearchptr,searchptr as ulong
dim header as ulong(5) 

searchptr=programstart
do
  psram.read1(varptr(header),searchptr,24)
  lineptr2=searchptr
  searchptr=header(5)
loop until header(0)>=aline orelse header(5)=$7FFF_FFFF  			' we have a line that number is >= new line
if header(0)<>aline then return -1						' if not =, then there is no line, return
pslpoke(lineptr2,$FFFF_FFFF) 							' flag the deleted line

if header(5)=$7FFF_FFFF andalso header(4)=$FFFF_FFFF then  			' this is one and only line in the program
  programstart=memlo : programptr=memlo : lastline=0 : lastlineptr=-1 
  pslpoke(0,$FFFFFFFF) : pslpoke 16,$FFFFFFFF : pslpoke 20,$7FFFFFFF : runptr=memlo : runptr2=memlo
endif

if header(5)=$7FFF_FFFF andalso header(4)<>$FFFF_FFFF then 			' this is the last, and not first, line of the program
  pslpoke(header(4)+20,$7FFF_FFFF) 						' unlink the previous line
  lastlineptr=header(4)           						' keep the last line pointer to avoid searching while sequentially adding a new line
  lastline=pslpeek(header(4))
  return 0
endif   

if header(5)<>$7FFF_FFFF andalso header(4)=$FFFF_FFFF then 			' this is the first line, but not the last
'   print "deleted first line"
  pslpoke(header(5)+16,$FFFF_FFFF) 
  programstart=header(5) 							' adjust the program start to point on the first new line
  return 0
endif

if header(5)<>$7FFF_FFFF andalso header(4)<>$FFFF_FFFF then 			' the line is not first and not last
   pslpoke(header(5)+16,header(4))  
   pslpoke(header(4)+20, header(5))
   return 0
endif   
end function

'----- Save a line to the PSRAM. Called from insertline and add_line_at_end

sub save_line

dim llength,llength2,llength3 as ulong

llength=compiledslot*(lineptr+1)
llength2=len (fullline$): if llength2 mod 4 <>0 then llength2=4*((llength2/4)+1)
llength3=llength+llength2
ucompiledline(2)=programptr+llength
ucompiledline(3)=llength2 
psram.write(varptr(compiledline),programptr,llength)
psram.write(lpeek(varptr(fullline$)),programptr+llength,llength2)
programptr+=llength3
end sub

'----- Insert a new line into the middle of the program

function insertline(aline as ulong) as integer
   
dim searchptr,lineptr2 as ulong

searchptr=programstart
dim header as ulong(5) 

do
  psram.read1(varptr(header),searchptr,24)
  lineptr2=searchptr
  searchptr=header(5)
loop until header(0)>=aline orelse header(5)=$7FFF_FFFF  	' we have a line that number is >= new line

if header(0)=aline then return -1 				' delete it first
if header(0)<aline then return -2 				' end of program reached

if  header(4)=$FFFF_FFFF then 					' this is the first line in the program so the inserted line will be new first
  programstart=programptr
  pslpoke(lineptr2+16,programptr)
  ucompiledline(4)=$FFFF_FFFF
  ucompiledline(5)=lineptr2
  save_line
  return 0
endif

if header(4)<>$FFFF_FFFF then 					' this is not first line of the program. It doesn't matter if it is last as we will insert a new line before
  ucompiledline(4)=header(4)
  ucompiledline(5)=lineptr2
  pslpoke(lineptr2+16,programptr)
  pslpoke(header(4)+20,programptr)
  save_line
  return 0
endif  
end function

'----- Adds a new line at the end of the program

sub add_line_at_end(aline) 

lastline=aline: ucompiledline(4)=lastlineptr : pslpoke(lastlineptr+20,programptr) : lastlineptr=programptr : ucompiledline(5)=$7FFF_FFFF 
if programptr=memlo then ucompiledline(4)=$FFFFFFFF ' that is the first line
save_line
pslpoke(programptr,$FFFFFFFF) ' write end flag ' is it eeded at all here? 
end sub

'--------------------------------------------------------------------------------------------------------------------------
'---------------------------------- End of line managing helper functions -------------------------------------------------
'--------------------------------------------------------------------------------------------------------------------------

'--------------------------------------------------------------------------------------------------------------------------
'--------------------------------------- Compilers ------------------------------------------------------------------------
'--------------------------------------------------------------------------------------------------------------------------

'--- Do a main compilation task for commands, called from compile(), returns an error code

function compile_immediate(linetype as ulong, aline as ulong) as integer

dim cmd,err,vars as ulong
dim t3 as expr_result

' linetype=cont+1
' 1 : this is the first part of the line that will continue
' 2 - this is the continuation of the line
' 3 - this is the last continued line
' 4 - this is the one and only part
' 5 - continued after if/else

err=0
cmd=0
vars=0
if linetype=2 orelse linetype=3 then cmd=lparts(0).token : ct=1 
if linetype=4 orelse linetype=1 then cmd=lparts(1).token : ct=2 : lineptr=2
if linetype=5 then cmd=lparts(ct).token : ct+=1 

'print  "In compile_immediate cmd=:", cmd
451 select case cmd
  case token_beep	: err=compile_fun_2p()
  case token_blit	: vars,err=compile_fun_varp()
  case token_box      	: vars,err=compile_fun_varp()  
  case token_brun    	: vars,err=compile_fun_varp()  		' for arguments 
  case token_cd		: err=compile_fun_1p()   	 
  case token_circle   	: vars,err=compile_fun_varp()  		
  case token_click	: err=compile_fun_1p()
  case token_cls      	: compile_nothing()                    	' no params, do nothing, only add a command to the line, but case needs something to do after 
  case token_close     	: err=compile_fun_1p()                    
  case token_color    	: err=compile_fun_1p()  
  case token_copy	: err=compile_fun_2p()
  case token_changefreq	: err=compile_fun_2p()  
  case token_changewave	: err=compile_fun_2p()  
  case token_changevol 	: err=compile_fun_2p()  
  case token_changepan  : err=compile_fun_2p()  
  case token_cogstop	: err=compile_fun_1p()
  case token_cursor	: err=compile_fun_1p()
  case token_data	: compile_nothing()
  case token_defchar	: err=compile_fun_2p()
  case token_defenv     : vars,err=compile_fun_varp()   
  case token_defsnd     : vars,err=compile_fun_varp()   
  case token_defsprite	: vars,err=compile_fun_varp()		' defsprite now has only one syntax, but other are planned (defsprite pointer, defsprite file)
  case token_deg	: compile_nothing()
  case token_delete	: err=compile_fun_1p()
  case token_dim	: err=compile_dim() : goto 450		' non-standard command with its own compiler
  case token_dir	: vars,err=compile_fun_varp()		' now only dir without params, but they are planned (dir *.bas)
  case token_dpoke	: err=compile_fun_2p()
  case token_draw     	: vars, err=compile_fun_varp()   	' 4 or 5 parameters draw planned for speedup - draw x1,y1,x2,y2,color
  case token_else    	: err=compile_else(aline) : goto 450
  case token_progend	: compile_nothing() 			' 'end' command
  case token_enter	: vars,err=compile_fun_varp() 
  case token_get	: vars,err=compile_fun_varp()
  case token_fast_goto  : if aline>0 then compile_goto()  : goto 450 else printerror(25) : goto 450
  case token_gosub      : if aline>0 then compile_gosub() : goto 450 else printerror(25) : goto 450
  case token_fcircle  	: vars,err=compile_fun_varp()  
  case token_fill	: err=compile_fun_4p()
  case token_font	: err=compile_fun_1p()
  case token_for     	: err=compile_for() :goto 450
  case token_frame     	: vars,err=compile_fun_varp()  
  case token_if      	: err=compile_if(aline) :goto 450
  case token_ink	: err=compile_fun_1p()
  case token_input	: vars,err=compile_input()
  case token_int	: err=compile_fun_1p()
  case token_list     	: vars,err=compile_fun_varp()   
  case token_load    	: vars,err=compile_fun_varp() 
  case token_lpoke	: err=compile_fun_2p()
  case token_mkdir	: err=compile_fun_1p()
  case token_mode	: err=compile_fun_1p()
  case token_mouse	: err=compile_fun_1p()
  case token_new      	: compile_nothing()   
  case token_next     	: err=compile_next() :goto 450
  case token_on		: err=compile_on() : goto 450
  case token_open	: err=compile_fun_3p()
  case token_paper	: err=compile_fun_1p()
  case token_pinfloat	: err=compile_fun_1p()
  case token_pinlo	: err=compile_fun_1p()
  case token_pinhi	: err=compile_fun_1p()
  case token_pinstart	: err=compile_fun_4p()
  case token_pintoggle 	: err=compile_fun_1p()
  case token_pinwrite   : err=compile_fun_2p()
  case token_play     	: vars,err=compile_fun_varp()   
  case token_plot     	: vars,err=compile_fun_varp()   
  case token_poke	: err=compile_fun_2p()
  case token_pop	: compile_nothing
  case token_position	: err=compile_fun_2p()
  case token_print    	: err=compile_print()  : goto 450
  case token_put	: vars,err=compile_fun_varp()
  case token_rad	: compile_nothing()
  case token_read	: vars,err=compile_read()
  case token_release	: err=compile_fun_1p()
  case token_rem	: compile_nothing() : goto 450
  case token_restore	: compile_nothing()
  case token_restorepalette :compile_nothing()
  case token_return:	: compile_nothing()
  case token_run      	: vars,err=compile_fun_varp()   
  case token_save    	: vars,err=compile_fun_varp()  
  case token_setamode   : err=compile_fun_2p()
  case token_setcolor   : vars,err=compile_fun_varp()
  case token_setdelay   : err=compile_fun_2p()
  case token_setenv 	: err=compile_fun_2p()
  case token_setlen   	: err=compile_fun_2p()
  case token_setpan 	: err=compile_fun_2p()
  case token_setsustain	: err=compile_fun_2p()
  case token_setvol 	: err=compile_fun_2p()
  case token_setwave 	: err=compile_fun_2p()
  case token_shutup	: vars,err=compile_fun_varp()
  case token_sprite	: err=compile_fun_3p()
  case token_waitclock  : compile_nothing()
  case token_waitms    	: err=compile_fun_1p()
  case token_waitvbl    : compile_nothing()
  case token_wrpin	: err=compile_fun_2p()
  case token_wxpin	: err=compile_fun_2p()
  case token_wypin	: err=compile_fun_2p()
  case token_name       : err=compile_array_assign() : if err=14 then  err=compile_unknown() : goto 450  else goto 450
  case else	     	: compile_unknown() : goto 450
end select

t3.result_type=cmd : t3.result.uresult=vars : compiledline(lineptr)=t3:  lineptr+=1
450 if linetype=3 orelse linetype=4 then compiledline(lineptr).result_type=token_end 				' the last part 
' if there is token_adr somewhere, change fun_getvar to fun_getaddr
for i=lineptr to 1 step -1: if compiledline(i).result_type=token_adr andalso compiledline(i-1).result_type=fun_getvar then compiledline(i-1).result_type=fun_getaddr
next i
''''print "In compile_immediate:" : for i=0 to lineptr: print compiledline(i).result_type;" ";compiledline(i).result.uresult, compiledline(i).result.twowords(1) : next i
return err
end function

'--- Do a main compilation task for assigns, called from compile_assign(), returns an error code

function compile_immediate_assign(linetype as ulong) as ulong

dim t1 as expr_result
dim i,j,numpar,err as integer
dim  suffix2$ as string
dim varname2$ as string

t1.result_type=result_error : t1.result.uresult=0
i=-1: j=-1 : err=0

if linetype=2 orelse linetype=3 then varname2$=lparts(0).part$ : ct=2 ' don't set lineptr
if linetype=4 orelse linetype=1 then varname2$=lparts(1).part$ : ct=3 : lineptr=2
if linetype=5 then varname2$=lparts(ct).part$ : ct+=2 ' continued after if/else

suffix2$=right$(varname2$,1)
expr()
if varnum>0 then					' try to find a variable
  for i=0 to varnum-1
    if variables(i).name=varname2$ then j=i : exit
  next i
endif
if  j=-1 andalso varnum<maxvars then   			' not found, add a new one
  variables(varnum).name=varname2$
  j=varnum
  varnum+=1
endif
if varnum>=maxvars then
  err=45
else  
  t1.result.uresult=j: t1.result_type=fun_assign  
  compiledline(lineptr)=t1:  lineptr+=1 
  if linetype=3 orelse linetype=4 then compiledline(lineptr).result_type=token_end
  for i=lineptr to 1 step -1: if compiledline(i).result_type=token_adr andalso compiledline(i-1).result_type=fun_getvar then compiledline(i-1).result_type=fun_getaddr
  next i
' print "In compile_immediate_assign: " : for i=0 to lineptr: print compiledline(i).result_type;" ";compiledline(i).result.uresult;" ";compiledline(i).result.twowords(1) : next i
  endif
return err
end function

' ------------------ compile the line that is calling a command, and save it if linenum>0, called from the interpreter 

function compile (alinemajor as ulong, alineminor=0 as ulong, cont=0 as ulong) as ulong

dim err as ulong
'line header: num major, num minor,list start, list length, prev, next. That implements 2-way list of program lines 
ucompiledline(0)=alinemajor
ucompiledline(1)=alineminor		' this is for the future when maybe linenums will be optional.

' cont: 
' 0 - this is the first part of the line that will continue
' 1 - this is the continuation of the line
' 2 - this is the last continued line
' 3 - this is the one and only part

err=compile_immediate(cont+1,alinemajor) 
if err=0 andalso alinemajor>0 then
  if cont=3 orelse cont=2 then 
    if alinemajor >lastline then 
      add_line_at_end(alinemajor)
    else
      deleteline(alinemajor)  
      if alinemajor>lastline then add_line_at_end(alinemajor)  else insertline(alinemajor)   ' TODO: that's not optimal    
    endif 
  endif   
endif 
return err
end function

' ------------------ compile the line that is assigning to a variable and save it if linenum>0, called from the interpreter 

function compile_assign (alinemajor as ulong, alineminor=0 as ulong, cont=0 as ulong)  as ulong

dim err as ulong

ucompiledline(0)=alinemajor
ucompiledline(1)=alineminor

err=compile_immediate_assign(cont+1) 
if alinemajor>0 then
  if cont=3 orelse cont=2 then 
    if alinemajor >lastline then 
      add_line_at_end(alinemajor)
    else
      deleteline(alinemajor)  
      if alinemajor>lastline then add_line_at_end(alinemajor) else insertline(alinemajor)   
    endif 
  endif
endif   
return err
end function


'--------------------------------------------------------------------------------------------------
' ----------------------------------- Helper compile functions ------------------------------------
'--------------------------------------------------------------------------------------------------

'------ A dummy function to have something to call from compile_immediate if the command has no parameters

sub compile_nothing
end sub

'------ A dummy function that returns error "unknown command" when the command is unknown :) As in compile_nothing

function compile_unknown() as ulong 
return 23
end function

'----- A function that prepares one parameter for an one-parameter command

function compile_fun_1p() as ulong
return expr()
end function

'----- A function that prepares 2 parameters for a 2-parameter command

function compile_fun_2p() as ulong

dim err as ulong
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1 ' todo error
err=expr() : if err>0 then return err
return 0
end function

'----- A function that prepares 3 parameters for a 3-parameter command

function compile_fun_3p() as ulong

dim err as ulong
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1 ' todo error
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1 ' todo error
err=expr() : if err>0 then return err
return 0
end function

'----- A function that prepares 4 parameters for a 4-parameter command

function compile_fun_4p() as ulong

dim err as ulong
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1 
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1 
err=expr() : if err>0 then return err
if lparts(ct).token<> token_comma then return 21 else ct+=1  
err=expr() : if err>0 then return err
return 0
end function

'----  Compile a command that can have variable number of parameters. Return num of params and error code

function compile_fun_varp() as ulong,ulong 

dim t1 as expr_result
dim i,err as integer

i=0 : err=0
if lparts(ct).token<>token_end then
  do
    expr()
    i+=1
    if lparts(ct).token=token_comma then ct+=1
    if lparts(ct).token=token_end then exit loop
   ' if lparts(ct).token<> token_comma then exit loop else ct+=1
  loop 
endif
return i,err
end function

'----  Compile read. The same as compile_input() except printing a prompt

function compile_read() as ulong,ulong 

dim t1 as expr_result
dim i,err,oldlineptr as integer

i=0 : err=0
if lparts(ct).token<>token_end then
  do
    err=getaddr() :ct+=1
    i+=1 
    if lparts(ct).token=token_comma then ct+=1 
    if lparts(ct).token=token_end then exit loop
   ' if lparts(ct).token<> token_comma then exit loop else ct+=1
  loop 
else
  err=54
endif
return i,err
end function

'----  Compile input. The same as compile_varp() except these has to be variables, and not expressions, and also we need getaddr and not getvar

function compile_input() as ulong,ulong 

dim t1 as expr_result
dim i,err,oldlineptr as integer

if lparts(ct).token=token_string then
  l=len(lparts(ct).part$)    								' place the literal in the psram
  memtop=(memtop-l-4) and $FFFFFFFC
  pslpoke memtop,l
  for i=1 to l : pspoke memtop+3+i, asc(mid$(lparts(ct).part$,i,1)) : next i
  t1.result.uresult=memtop
  t1.result_type=result_string2  
  compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  if lparts(ct).token=token_comma then t1.result_type=print_mod_comma : compiledline(lineptr)=t1:  lineptr+=1 : t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1
  if lparts(ct).token=token_semicolon then t1.result_type=print_mod_semicolon : compiledline(lineptr)=t1:  lineptr+=1 : t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1
  if lparts(ct).token<>token_semicolon  andalso lparts(ct).token<>token_comma then t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1 : ct-=1
  ct+=1
endif
i=0 : err=0
if lparts(ct).token<>token_end then
  do
    err=getaddr() :ct+=1
    i+=1 
    if lparts(ct).token=token_comma then ct+=1 
    if lparts(ct).token=token_end then exit loop
   ' if lparts(ct).token<> token_comma then exit loop else ct+=1
  loop 
else
  err=54
endif
return i,err
end function

'----- compile assign to an array element

function compile_array_assign() as ulong 

dim numpar, i, j, err as ulong
dim varname$ as string
dim t1 as expr_result
numpar=0 : err=0
varname$=lparts(ct-1).part$
if lparts(ct).token=token_lpar then
  ct+=1 											' omit this lpar, this is for expr list
  do
    expr()
    ct+=1  										 
    numpar+=1
  loop until lparts(ct-1).token=token_rpar    orelse lparts(ct).token=token_end  ' generate error if end
  ct+=1 : expr()
  j=-1 : i=0 
  do 
    if variables(i).name=varname$ then j=i: exit loop
    i+=1
  loop until i>varnum
  t1.result.twowords(0)=j: t1.result.twowords(1)=numpar : t1.result_type=fun_assign : compiledline(lineptr)=t1: lineptr +=1 
  if numpar>3 then err=45
  if i>varnum then err=20
else
  err=14 ' no rpar
endif
return err
end function

'----- compile print command with its ";" and "," modifiers

function compile_print() as ulong ' todo reconfigurable editor start position

dim t1 as expr_result
t1.result.uresult=0 : t1.result_type=result_uint
if lparts(ct).token=token_end then t1.result_type=print_mod_empty: compiledline(lineptr)=t1:  lineptr+=1 : t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1 :return 0 	'print without parameters
do
  expr()  ': print "In compile_print token= "; lparts(ct).token; " part$= "; lparts(ct).part$ :
  if lparts(ct).token=token_comma then t1.result_type=print_mod_comma : compiledline(lineptr)=t1:  lineptr+=1 : t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1
  if lparts(ct).token=token_semicolon then  t1.result_type=print_mod_semicolon : compiledline(lineptr)=t1:  lineptr+=1 : t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1
  if lparts(ct).token=token_end then t1.result_type=token_print : compiledline(lineptr)=t1:  lineptr+=1
  if lparts(ct).token <>token_comma andalso lparts(ct).token <>token_semicolon andalso lparts(ct).token <>token_end then return 22
  ct+=1  
loop until lparts(ct).token=token_end orelse ct>=tokennum
return 0
end function

'----- compile 'if' command. Gets the linenum as it can call compile_immediate() and compile_immediate_assign()

function compile_if(aline as ulong) as ulong  

dim t1 as expr_result
dim cmd,err as ulong

err=compile_fun_1p()
cmd=lparts(ct).token : ct+=1 : if cmd<>token_then then return 52
t1.result_type=token_if : compiledline(lineptr)=t1:  lineptr+=1
if isassign(lparts(ct+1).part$) then err=compile_immediate_assign(5) else err=compile_immediate(5,aline)
return err
end function

'----- compile 'else' command. Gets the linenum as it can call compile_immediate() and compile_immediate_assign()

function compile_else(aline as ulong) as ulong  

dim t1 as expr_result
dim err as ulong
t1.result_type=token_else : compiledline(lineptr)=t1:  lineptr+=1
if isassign(lparts(ct+1).part$) then err=compile_immediate_assign(5) else err=compile_immediate(5,aline)
return err
end function

'----- compile 'dim' command. Also it allocates the psram for an aray from the top of the memory

function compile_dim() as ulong  
 
dim t1 as expr_result
dim cmd, esize as ulong
dim dims(2) as ulong
dim i,j,l,m as integer
dim varname2$ as string
dim arraytype,arraysize,arrayptr as ulong

dims(0)=1: dims(1)=1: dims(2)=1
if isname(lparts(ct).part$) then 
  varname2$=lparts(ct).part$ 
  j=-1
  if varnum>0 then
    for i=0 to varnum-1
      if variables(i).name=varname2$ then j=i : exit
    next i
  endif 
  if j=-1 then j=varnum else print "Dim: at line ";linenum;": warning: the variable existed."
  if lparts(ct+1).part$ <>"(" andalso lparts(ct+1).part$<>"as" then return 43
  if lparts(ct+1).part$ = "as" then l=ct+1: goto 1350	' allocate a typed array
  l=ct+2 : m=0 : do
  if isdec(lparts(l).part$) then 
    dims(m)=val%(lparts(l).part$) : m+=1  
  else 
    return(17)
  endif  
  if (lparts(l+1).part$<>"," andalso lparts(l+1).part$<>")" ) then return 44 
  l+=2
  loop until lparts(l-1).part$=")" orelse m>2
  if m>3 then return 45
  arraytype=array_no_type : esize=12
1350 
  if lparts(l).part$="as" then
    select case lparts(l+1).part$
      case "byte" 	: arraytype=array_byte		: esize=1
      case "ubyte" 	: arraytype=array_ubyte		: esize=1
      case "short" 	: arraytype=array_short		: esize=2
      case "ushort" 	: arraytype=array_ushort	: esize=2
      case "long" 	: arraytype=array_long		: esize=4
      case "integer" 	: arraytype=array_long		: esize=4
      case "ulong" 	: arraytype=array_ulong		: esize=4
      case "int64" 	: arraytype=array_int64		: esize=8
      case "uint64" 	: arraytype=array_uint64	: esize=8
      case "single" 	: arraytype=array_float		: esize=4
      case "double" 	: arraytype=array_double	: esize=8
      case "string" 	: arraytype=array_string	: esize=4
      case else		: return 47
    end select
  endif  
else
  return 46
endif
arraysize=esize*dims(0)*dims(1)*dims(2)
arrayptr=memtop-arraysize-16
arrayptr=arrayptr and $FFFFFFF0 					' aligned, or miracles happen
memtop=arrayptr
psdpoke arrayptr,arraytype 
psdpoke arrayptr+2,esize 
pslpoke arrayptr+4,dims(0)
pslpoke arrayptr+8,dims(1)
pslpoke arrayptr+12,dims(2)
variables(j).name=varname2$
variables(j).value.uresult=arrayptr
variables(j).vartype=arraytype
if j=varnum then varnum+=1
return 0
end function

'----- compile 'for' command. 

function compile_for() as ulong  

dim t1 as expr_result
dim cmd,varnum,b1,b2,b3 as ulong
dim note_val as single

if isassign(lparts(ct+1).part$) then compile_immediate_assign(5) else return 32
t1=compiledline(lineptr-1): if t1.result_type<>fun_assign  then  return 34'		' after this we should have fun_assign_i or fun_assign_u with var# as uresult.
varnum=t1.result.uresult
if lparts(ct).part$<>"to" then return 33
ct+=1
expr()  										' there is "to" value pushed on the stack
if lparts(ct).part$="step" orelse left$(lparts(ct).part$,2)="s." then
  if left$(lparts(ct).part$,2)="s." andalso len(lparts(ct).part$)>2 then ' correct the part
    lparts(ct).part$=right$(lparts(ct).part$,len(lparts(ct).part$)-2) ' strip 's.'
    lparts(ct).token=isfunction(lparts(ct).part$) : if lparts(ct).token>0 then goto 2102
    lparts(ct).token=isnotename(lparts(ct).part$) :
    if lparts(ct).token>0 then 
      note_val=getnoteval(lparts(ct).token)
      lparts(ct).part$=str$(note_val) 
      lparts(ct).token=token_float
      goto 2102
    endif
    lparts(ct).token=isconstant(lparts(ct).part$) : if lparts(ct).token>0 then lparts(ct).part$=str$(lparts(ct).token) : lparts(ct).token=token_integer : goto 2102
    b1=isnum(lparts(ct).part$) : b2=isint(lparts(ct).part$) : b3=isdec(lparts(ct).part$)
    if b1 andalso b2 andalso b3 then lparts(ct).token=token_decimal 			: goto 2102 	' pure decimal for line num
    if b1 andalso b2 andalso (not b3) then lparts(ct).token=token_integer 		: goto 2102 	' integer
    if b1 andalso (not b2) andalso (not b3) then lparts(ct).token=token_float 		: goto 2102 	' float
    if isname(lparts(ct).part$) then lparts(ct).token=token_name : goto 2102	
2102
    ct-=1
  endif     
  ct+=1
  expr()
else
  compiledline(lineptr).result_type=result_int : compiledline(lineptr).result.iresult=1 : lineptr+=1	' if no "step", push 1 instead
endif
compiledline(lineptr).result_type=result_int : compiledline(lineptr).result.iresult=varnum :lineptr+=1
compiledline(lineptr).result_type=token_for : compiledline(lineptr).result.iresult=0 :lineptr+=1
return 0
end function

'----- compile 'next' command. 

function compile_next() as ulong

dim t1 as expr_result
dim cmd,i,j as ulong
dim varname$ as string

varname$=lparts(ct).part$ 
if varnum=0 then return 35
j=-1
for i=0 to varnum-1
  if variables(i).name=varname$ then j=i : exit
next i
if j=-1 then return 35
compiledline(lineptr).result_type=result_int : compiledline(lineptr).result.iresult=j :lineptr+=1
compiledline(lineptr).result_type=token_next : compiledline(lineptr).result.iresult=0 :lineptr+=1
return 0
end function

'----- compile 'gosub' command. Gosub is "goto" that saves the return address, so add token_gosub, then compile goto

function compile_gosub() as ulong

dim err as ulong
compiledline(lineptr).result_type=token_gosub
lineptr+=1
err=compile_goto()
return err
end function

'----- compile 'goto' 

function compile_goto() as ulong

dim gotoline, gotoptr,oldgotoptr as integer
dim gotoheader as ulong(5)
dim t3 as expr_result
if lparts(ct).token=token_decimal andalso lparts(ct+1).token=token_end then 	' we have a goto to a constant
  gotoline=val%(lparts(ct).part$) 
  compiledline(lineptr).result_type=token_fast_goto
  gotoptr=programstart 							    	' now try to find a pointer to goto
  do
    psram.read1(varptr(gotoheader),gotoptr,24)  : 
    if gotoheader(0)<>$FFFFFFFF then
      oldgotoptr=gotoptr
      gotoptr=gotoheader(5)
    endif
  loop until gotoheader(5)=$7FFF_FFFF orelse gotoheader(0)=-1 orelse gotoheader(0)=gotoline
  if gotoheader(0)=gotoline then
    compiledline(lineptr).result.twowords(0)=oldgotoptr 			' we got the pointer, compile fast_goto
    compiledline(lineptr).result.twowords(1)=gotoline				' save the target line# in case it is deleted/changed
  else
    compiledline(lineptr).result.twowords(0)=$80000000				' no pointer, set the flag
    compiledline(lineptr).result.twowords(1)=gotoline				' and the target line
    compiledline(lineptr).result_type=token_find_goto				' compile find_goto instead, the runtime will find a pointer 
  endif  
  lineptr+=1
else										' there is expression, target line not known 
  expr()
  t3.result_type=token_slow_goto : t3.result.uresult=0 : compiledline(lineptr)=t3:  lineptr+=1   ' compile slow_goto
endif
return 0
end function

'----- compile 'on' (on..goto, on..gosub) 

function compile_on() as ulong

dim numpar,onlineptr,i as integer
expr()
'print lparts(ct).part$ 'ok
numpar=0
compiledline(lineptr).result_type=token_on : onlineptr=lineptr : lineptr+=1' we need onlineptr to save param# there
if lparts(ct).part$="goto" then
  i=ct+1
  do
    if lparts(i).token=token_decimal then
      compiledline(lineptr).result.twowords(0)=$80000000
      compiledline(lineptr).result.twowords(1)=val%(lparts(i).part$)  
      compiledline(lineptr).result_type=token_find_goto
      lineptr+=1
      numpar+=1
    else
      return 17
    endif  
    i+=1
    if lparts(i).token<>token_comma andalso lparts(i).token<>token_end then return 21
    if lparts(i).token=token_end then exit loop
    i+=1
  loop until lparts(i).token=token_end  
  compiledline(onlineptr).result.twowords(1)=1
endif    

if lparts(ct).part$="gosub" then
  i=ct+1
  do
    if lparts(i).token=token_decimal then
      compiledline(lineptr).result_type=token_gosub
      lineptr+=1
      compiledline(lineptr).result.twowords(0)=$80000000
      compiledline(lineptr).result.twowords(1)=val%(lparts(i).part$)  
      compiledline(lineptr).result_type=token_find_goto
      lineptr+=1
      numpar+=1
      compiledline(lineptr).result_type=token_skip
      lineptr+=1
    else
      return 17
    endif  
    i+=1
    if lparts(i).token<>token_comma andalso lparts(i).token<>token_end then return 21
    if lparts(i).token=token_end then exit loop
    i+=1
  loop until lparts(i).token=token_end  
  compiledline(onlineptr).result.twowords(1)=3
endif   
compiledline(onlineptr).result.uresult=numpar
for i=lineptr to onlineptr step -1 : if compiledline(i).result_type=token_skip then compiledline(i).result.uresult=lineptr-2
next i 
return 0
end function

'----- A helper for compile_input and compile_read
 
function getaddr() as ulong

dim i,j,numpar,err as integer
dim t2 as expr_result
dim varname$,suffix$  as string

varname$=lparts(ct).part$
j=-1

for i=0 to varnum-1
  if variables(i).name=varname$ then j=i : exit
next i
if  j=-1 andalso varnum<maxvars then   
  variables(varnum).name=varname$
  variables(varnum).value.iresult=0
  variables(varnum).vartype=result_int
  j=varnum
  varnum+=1 
endif     
numpar=0
if lparts(ct+1).token=token_lpar then								' check if it is an array
  ct+=1 											' omit this lpar, this is for expr list
  do
    ct+=1  											': print "In getfun, ct=",ct,"lparts(ct).token=",lparts(ct).token, "part$=",lparts(ct).part$
    if lparts(ct).token=token_lpar then ct+=1 : err=expr() : ct+=1 else err=expr()
    if err>0 then return err
    numpar+=1
  loop until lparts(ct).token=token_rpar orelse lparts(ct).token=token_end  ' generate error if end
    if lparts(ct).token=token_end then return 14
endif  
t2.result.twowords(1)=numpar
t2.result_type=fun_getaddr:t2.result.twowords(0)=j
compiledline(lineptr)=t2: lineptr+=1   ' if t2.result.uresult=-1, generate error
return 0
end function

'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------------- 

'---------------------------------------------------------------------------------------------------------------------------------------
'------------------------------------------ The end of the precompiler  ----------------------------------------------------------------
'---------------------------------------------------------------------------------------------------------------------------------------

'---------------------------------------------------------------------------------------------------------------------------------------
'
'     			   	    COMPILE TIME EXPRESSION DECODER/EVALUATOR
'
'---------------------------------------------------------------------------------------------------------------------------------------

function expr() as ulong 

' On input: ct = current token position
' On output: new ct and compiled line filled with the expression converted to RPN
' Returns the error code

dim t3 as expr_result
dim op as integer
dim err as ulong

op=lparts(ct).token : if op=token_end then t3.result.uresult=29 : t3.result_type=result_error : compiledline(lineptr)=t3 : lineptr+=1: return 29
t3.result.uresult=0
err=addsub()             			' call higher priority operator check. It will itself call muldiv, which then calls getval/getvar 
if err>0 then return err
op = lparts(ct).token				' Lowest priority : comparison operators
do while (op = token_eq orelse op = token_gt orelse op = token_lt orelse op=token_ge orelse op=token_le orelse op=token_ne)
  ct+=1
  err=addsub() : if err>0 then return err
  t3.result_type=op: compiledline(lineptr)=t3: lineptr+=1
  op = lparts(ct).token
  loop
return 0  
end function

' Second level operators : add, sub, logic

function addsub() as ulong

dim t3 as expr_result
dim op as integer
dim err as ulong

t3.result.uresult=0
err=muldiv() : if err>0 then return err           			 
op = lparts(ct).token				 
do while (op = token_plus orelse op = token_minus orelse op = token_and orelse op=token_or)
  ct+=1
  err=muldiv() : if err>0 then return err   
  t3.result_type=op: compiledline(lineptr)=t3: lineptr+=1
  op = lparts(ct).token
  loop
return 0
end function

' Third level operators : mul,div,shift,power

function muldiv() as ulong

dim t3 as expr_result 
dim op as integer
dim err as ulong

t3.result.uresult=0
err=getvalue() : if err>0 then return err     
op = lparts(ct).token
do while (op = token_mul orelse op = token_div orelse op = token_fdiv orelse op=token_mod orelse op=token_shl orelse op=token_shr orelse op=token_power)
  ct+=1
  err=getvalue() :if err>0 then return err   
  t3.result_type=op: compiledline(lineptr)=t3: lineptr+=1
  op = lparts(ct).token
  loop
return 0
end function

' Get a value for operations

function getvalue()  as ulong

dim t1 as expr_result
dim op,m,err as integer

m=1											' for negative numbers
t1.result.uresult=0: t1.result_type=result_uint
op=lparts(ct).token
if op=token_minus then m=-1: ct+=1 : op=lparts(ct).token				' '-' operator found
select case op
  case token_decimal
    if m=1 then t1.result.uresult=m*val%(lparts(ct).part$): t1.result_type=result_int  
    if m=-1 then t1.result.iresult=m*val%(lparts(ct).part$): t1.result_type=result_int 	' todo token_int64?
    compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  case token_integer
    if left$(lparts(ct).part$,1)="$" then lparts(ct).part$="&h"+right$(lparts(ct).part$,len(lparts(ct).part$)-1)
    if left$(lparts(ct).part$,1)="%" then lparts(ct).part$="&b"+right$(lparts(ct).part$,len(lparts(ct).part$)-1)
    t1.result.iresult=m*val%(lparts(ct).part$)
    t1.result_type=result_int  
    compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  case token_float
    if m=1 then t1.result.fresult=1.0*val(lparts(ct).part$): t1.result_type=result_float  
    if m=-1 then t1.result.fresult=-1.0*val(lparts(ct).part$): t1.result_type=result_float
    compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  case token_string
    l=len(lparts(ct).part$)    								' place the literal in the psram
    memtop=(memtop-l-4) and $FFFFFFFC
    pslpoke memtop,l
    for i=1 to l : pspoke memtop+3+i, asc(mid$(lparts(ct).part$,i,1)) : next i
    t1.result.uresult=memtop
    t1.result_type=result_string2  
    compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  case token_channel
    t1.result_type=token_channel: t1.result.iresult=val%(lparts(ct).part$)
    compiledline(lineptr)=t1: lineptr+=1 :ct+=1
  case token_name 				
    err=getvar(m) : ct+=1 : if err>0 then return err 
  case token_lpar
    ct+=1
    err=expr() : if err>0 then return err 
    if lparts(ct).token=token_rpar then ct+=1
  case else
    err=getfun(m) : ct+=1 : if err>0 then return err 
end select  
return 0  
end function

' Get a function result 

function getfun(m as integer) as ulong
 
dim oldct,numpar,err as ulong
dim t2 as expr_result
oldct=ct
numpar=0
if lparts(ct+1).token=token_lpar then
  ct+=1 											' omit this lpar, this is for expr list
  do
    ct+=1  											': print "In getfun, ct=",ct,"lparts(ct).token=",lparts(ct).token, "part$=",lparts(ct).part$
    if lparts(ct).token=token_lpar then ct+=1 : err=expr() : ct+=1 else err=expr()
    if err>0 then return err
    numpar+=1
  loop until lparts(ct).token=token_rpar orelse lparts(ct).token=token_end  ' generate error if end
  if lparts(ct).token=token_end then return 14
endif  
t2.result.uresult=numpar
t2.result_type=lparts(oldct).token  ' todo here: expression lists..... 
compiledline(lineptr)=t2: lineptr+=1   ' if t2.result.uresult=-1, generate error
if m=-1 then t2.result_type=fun_negative: compiledline(lineptr)=t2: lineptr+=1
return 0
end function
  
  
function getvar(m as integer) as ulong

dim i,j,numpar,err as integer
dim t2 as expr_result
dim varname$,suffix$  as string

varname$=lparts(ct).part$
j=-1

for i=0 to varnum-1
  if variables(i).name=varname$ then j=i : exit
next i
if  j=-1 andalso varnum<maxvars then   
  variables(varnum).name=varname$
  variables(varnum).value.iresult=0
  variables(varnum).vartype=result_int
  j=varnum
  varnum+=1 
endif     
numpar=0
if lparts(ct+1).token=token_lpar then								' check if it is an array
  ct+=1 											' omit this lpar, this is for expr list
  do
    ct+=1  											': print "In getfun, ct=",ct,"lparts(ct).token=",lparts(ct).token, "part$=",lparts(ct).part$
    if lparts(ct).token=token_lpar then ct+=1 : err=expr() : ct+=1 else err=expr()
    if err>0 then return err
    numpar+=1
  loop until lparts(ct).token=token_rpar orelse lparts(ct).token=token_end  ' generate error if end
    if lparts(ct).token=token_end then return 14
endif  
t2.result.twowords(1)=numpar
t2.result_type=fun_getvar:t2.result.twowords(0)=j
compiledline(lineptr)=t2: lineptr+=1   ' if t2.result.uresult=-1, generate error
if m=-1 then t2.result_type=fun_negative: compiledline(lineptr)=t2: lineptr+=1
return 0
end function

'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------------- End of expression evaluator --------------------------------------------------------------
'----------------------------------------------------------------------------------------------------------------------------------------


'----------------------------------------------------------------------------------------------------------------------------------------
'                                                                                                                                       -
'                                              RUNTIME STARTS HERE                                                                      - 
'                                                                                                                                       -
'----------------------------------------------------------------------------------------------------------------------------------------

'---------------------------------------------------------------------------------------------------------------------------------------
'----------------------------------------- A main execute line function ----------------------------------------------------------------
'---------------------------------------------------------------------------------------------------------------------------------------

function execute_line (astart=0 as integer) as integer

'' This executes a line either in immediate mode or loaded from PSRAM in the program executing mode

dim cmd as asub

runptr2=0
for lineptr_e=astart to lineptr-1
  cmd=commands(compiledline(lineptr_e).result_type and 255)
  cmd
next lineptr_e
return runptr2
end function


'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------- Runtime helper functions -----------------------------------------------------------------------
'----------------------------------------------------------------------------------------------------------------------------------------

' ------------------- pop and push functions called by do_xxx functions to pop arguments and push results

function pop() as expr_result

dim t1 as expr_result
if stackpointer=0 then
  t1.result_type=result_error
  t1.result.uresult=24
else
  stackpointer -=1
  t1=stack(stackpointer)
endif
return t1
end function 

sub push(t1 as expr_result )
if stackpointer<maxstack then 
  stack(stackpointer)=t1
  stackpointer+=1
' error reporting here  
endif
end sub

' -------------------------------- Runtime converting functions

' converts the PSRAM based string to 'normal' string. A PSRAM pointer at input, a string at output

function  convertstring(psaddr as ulong) as string
dim i as integer

dim s as string
dim l as ulong
l=pslpeek(psaddr) 
s="" 
for i=1 to l : s+=chr$(pspeek(psaddr+3+i)) :next i
return s
end function

' converts a variable to an integer

function converttoint (t1 as expr_result) as integer 

select case t1.result_type
  case result_int:  return t1.result.iresult
  case result_uint: return t1.result.uresult
  case result_float: return round(t1.result.fresult)
  case result_string: return round(val(t1.result.sresult))
  case result_string2: return round(val(convertstring(t1.result.uresult))) 
  case result_channel: return t1.result.iresult
  case else: return 0
end select
end function

' converts a variable to float

function converttofloat (t1 as expr_result) as single

dim s as single

select case t1.result_type
  case result_int:  s=t1.result.iresult : return s
  case result_uint: s=t1.result.uresult : return s
  case result_float: return t1.result.fresult
  case result_string: return val(t1.result.sresult)
  case result_string2: return val(convertstring(t1.result.uresult)) :r=result_int
  case else: return 0.0
end select
end function

'----------------- End of converting 

'----------------------------------------------------------------------------------------------------------------------------------------
'----- A nostalgic experiment with saving the program on a cassette tape ----------------------------------------------------------------
'----------------------------------------------------------------------------------------------------------------------------------------

sub csave_block(address as ulong)

for i=0 to 63 step 2
  do: loop until lpeek(base+64*7)>32768
  q=lpeek(address+4*i)
     for bit=0 to 31
      if (q and (1 shl bit)) then sample(4*bit)=127: sample(4*bit+1)=128 : sample(4*bit+2)=127 : sample (4*bit+3)=128 else sample(4*bit)=128: sample(4*bit+1)=128 : sample(4*bit+2)=127 : sample (4*bit+3)=127
    next bit  
  do: loop until lpeek(base+64*7)<32768
  q=lpeek(address+4+4*i)
     for bit=0 to 31
      if (q and (1 shl bit)) then sample(128+4*bit)=127: sample(128+4*bit+1)=128 : sample(128+4*bit+2)=127 : sample (128+4*bit+3)=128 else sample(128+4*bit)=128: sample(128+4*bit+1)=128 : sample(128+4*bit+2)=127 : sample (128+4*bit+3)=127
    next bit  
next i
do: loop until lpeek(base+64*7)>32768
for i=0 to 127: if i mod 8 < 4 then sample(i)=127 else sample(i)=128 
next i

do: loop until lpeek(base+64*7)<32768
for i=128 to 255: if i mod 8 < 4 then sample(i)=127 else sample(i)=128 
next i
end sub

sub csave_addtoblock(d as ubyte, force as ubyte)

if force=0 then
  block(blockptr)=d
  blockptr+=1
  if blockptr>=255 then
    csave_block(varptr(block(0)))
    blockptr=0
    waitms(300)
  endif
else
  block(blockptr)=d
  if blockptr<255 then for i=blockptr to 255 : block(i)=0 : next i 
  csave_block(varptr(block(0)))
  blockptr=0
  waitms(300)
endif
end sub  

'----------------------- csave

sub test_csave

dim i,j as integer
dim qqq as ulong
 
dim linebuf(127) as ubyte ' todo : 127
dim name$ as string
dim t1 as expr_result
dim saveptr as ulong
dim header(5) as ulong
'dim fileheader,savestart, saveptr as ulong

if pslpeek(programstart)=$FFFFFFFF then printerror(27): return
t1=pop()
if t1.result_type<>result_string then name$=loadname else name$=t1.result.sresult

' prepare 1 kHz header wave

for i=0 to 255: if i mod 8 < 4 then sample(i)=127 else sample(i)=128 
next i
'audio.play8(7,varptr(sample),8000,16384,256,0)
waitms 3000 

blockptr=0
csave_addtoblock($72,0): csave_addtoblock($62,0): csave_addtoblock($61,0): csave_addtoblock($0D,0) ' rba+ver(13)
for i=1 to len(name$): csave_addtoblock(asc(mid$(name$,i,1)),0) : next i : csave_addtoblock(0,0) 
csave_addtoblock($72,0): csave_addtoblock($62,0): csave_addtoblock($73,0): csave_addtoblock($0D,0) ' rbs+ver(13)

saveptr=programstart
do

  psram.read1(varptr(header(0)),saveptr,24)
  psram.read1(varptr(linebuf(0)),header(2),header(3))  
  csave_addtoblock(header(3),0) ' that's always <255
  for i=0 to header(3)-1: csave_addtoblock(linebuf(i),0)  :next i
  saveptr=header(5)
loop until header(5)=$7FFFFFFF

csave_addtoblock(0,1)

dpoke base+7*64+20,0
end sub

'----------------------------------------------------------------------------------------------------------------------------------------
'----- End of cassette procedures -------------------------------------------------------------------------------------------------------
'----------------------------------------------------------------------------------------------------------------------------------------


'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------- Runtime functions ------------------------------------------------------------------------------
'----------------------------------------------------------------------------------------------------------------------------------------

'-------------------- abs

sub do_abs

dim t1 as expr_result

t1=pop()
if t1.result_type=result_int then 
  t1.result.iresult=abs(t1.result.iresult)
'uresult is always positive
else if t1.result_type=result_float then 
  t1.result.fresult=abs(t1.result.fresult)
else 
  t1.result_type=result_error : t1.result.uresult=40
endif
push t1
end sub

'-------------------- acos

sub do_acos

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "acos: "; : printerror(39) : return
t1=pop()
t1.result.fresult=acos(converttofloat(t1))*trig_coeff2
t1.result_type=result_float   
push t1  
end sub

'-------------------- asc

sub do_asc

dim t1 as expr_result
dim numpar,arg as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "asc: "; : printerror(39) : return
t1=pop() : if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "asc: "; : printerror(15) : return 
t1.result.iresult=asc(t1.result.sresult)
t1.result_type=result_int
push t1  
end sub

'-------------------- asin

sub do_asin

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "asin: "; : printerror(39) : return
t1=pop()
t1.result.fresult=asin(converttofloat(t1))*trig_coeff2
t1.result_type=result_float   
push t1  
end sub

'-------------------- atn

sub do_atn

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "atn: "; : printerror(39) : return
t1=pop()
t1.result.fresult=atan(converttofloat(t1))*trig_coeff2
t1.result_type=result_float   
push t1  
end sub

'-------------------- beep

sub do_beep

dim t1,t2 as expr_result
dim freq as ulong


t2=pop()
t1=pop()
if (t1.result_type=result_int orelse t1.result_type=result_uint) then freq=t1.result.iresult else freq=converttoint(t1)
audio.beep(7,varptr(beepsample),freq,4096,8,0,0) 
push t2
do_waitms
audio.stop(7)
end sub

'-------------------- blit

' blit buf1,x1,y1,x2,y2,s1,buf2,x2,y2,s2
sub do_blit

dim t1 as expr_result
dim p(9) as ulong
dim i,numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar<>10 andalso numpar<>6 then print "blit: "; : printerror (39,runheader(0)) : return
for i=numpar-1 to 0 step -1: t1=pop() : p(i)=converttoint(t1): next i
if numpar=10 then 
  v.blit(p(0),p(1),p(2),p(3),p(4),p(5),p(6),p(7),p(8),p(9))
else
  v.blit(v.buf_ptr,p(0),p(1),p(2),p(3),1024,v.buf_ptr,p(4),p(5),1024) 
endif  
end sub


'-------------------- bin$

sub do_bin

dim t1 as expr_result
dim numpar,arg,num as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>2 orelse numpar=0 then print "bin$: "; : printerror(39) : return
if numpar=2 then t1=pop() : num=converttoint(t1) else num=0
t1=pop() : arg=converttoint(t1)
t1.result.sresult=bin$(arg,num)
t1.result_type=result_string
push t1  
end sub

'-------------------- box

sub do_box
dim t1,t2,t3,t4 as expr_result 

t4=pop()
t3=pop()
t2=pop()
t1=pop()
if (t1.result_type=result_int orelse t1.result_type=result_uint) andalso (t2.result_type=result_int orelse t2.result_type=result_uint) andalso (t3.result_type=result_int orelse t3.result_type=result_uint) andalso (t4.result_type=result_int orelse t4.result_type=result_uint) then
   v.box(t1.result.iresult,t2.result.iresult,t3.result.iresult,t4.result.iresult,plot_color) : return
else
   v.box(converttoint(t1), converttoint(t2), converttoint(t3), converttoint(t4),plot_color)
endif   
end sub

'-------------------- brun

sub do_brun

dim t1 as expr_result
dim pos,r,psramptr as integer
dim filename, fullfilename as string

t1=pop() 
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult): t1.result_type=result_string
if t1.result_type=result_string then
  filename=t1.result.sresult
  if left$(filename,1)="/" then 
    fullfilename=filename
  else
    fullfilename="/sd/bin/"+filename  
  endif  
  open fullfilename for input as #9
  r=geterr() : if r then print "System error ";r;": ";strerror$(r) :close #9 : return
  let pos=1: let r=0 : let psramptr=0
  do
    get #9,pos,block(0),1024,r : pos+=r	
    psram.write(varptr(block(0)),psramptr,1024)	
    psramptr+=r   									' move the buffer to the RAM and update RAM position. Todo: this can be done all at once
  loop until r<>1024  orelse psramptr>=$7C000  					        ' do until eof or memory full
  cpustop(audiocog)									' stop all driver cogs except PSRAM
  cpustop(videocog)
  cpustop(usbcog)
  cpustop(housekeeper_cog)
  let loadingcog=cpu(@loadcog,@pslock) 							' start loading cog
  cpustop(cpuid())									' stop itself
  endif  
end sub

'-------------------- cd

sub do_cd

dim slash,err as integer
dim newdir$,filename as string
dim t1 as expr_result

filename = dir$("*", fbNormal or fbDirectory )   
t1=pop()
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then printerror(15): return
newdir$=t1.result.sresult
if newdir$=".." then 
  slash=instrrev(len(currentdir$),currentdir$,"/") 
  if slash>1 then newdir$=left$(currentdir$,slash-1) else newdir$="/"
  chdir newdir$
  err=geterr() : if err<>0 andalso err<>5 then print "System error ";err;": " ;errors$(53) : chdir(currentdir$) else currentdir$=newdir$
  print "Current directory: ";currentdir$
  return
endif  
if left$(newdir$,1)="/" then 
  chdir(newdir$)
  err=geterr() : if err<>0 andalso err<>5 then print "System error ";err;": " ;errors$(53) : chdir(currentdir$) else currentdir$=newdir$
  print "Current directory: ";currentdir$
  return
else
  if currentdir$<>"/" then newdir$=currentdir$+"/"+newdir$ else newdir$=currentdir$+newdir$ 
  if right$(newdir$,1)="/" then newdir$=left$(newdir$,len(newdir$)-1)
  chdir(newdir$)
  err=geterr() : if err<>0 andalso err<>5 then print "System error ";err;": " ;errors$(53) : chdir(currentdir$) else currentdir$=newdir$
  print "Current directory: ";currentdir$
endif
end sub

'-------------------- changefreq

sub do_changefreq

dim t1 as expr_result
dim channel,lfreq,skip,i,period,amode as integer
dim ps as ulong
dim freq as single

t1=pop()

freq=converttofloat(t1)
t1=pop()
channel=converttoint(t1) mod 16
audio.changefreq(channel,round(1000*freq))
end sub

'-------------------- changepan

sub do_changepan

dim t1 as expr_result
dim channel,pan as integer

t1=pop()
pan=8192+round(8192*converttofloat(t1)) 
if pan<0 then pan=0
if pan>16384 then pan=16384
t1=pop()
channel=converttoint(t1) mod 8
dpoke base+64*channel+22,pan
end sub

'-------------------- changevol

sub do_changevol

dim t1 as expr_result
dim channel,vol as integer

t1=pop()
vol=round(converttofloat(t1)*1000) mod 16384
t1=pop()
channel=converttoint(t1) mod 16
dpoke base+64*channel+20,vol
end sub

'-------------------- changewav

sub do_changewav

dim t1 as expr_result
dim channel,wave as integer

t1=pop()
wave=converttoint(t1)
if wave<0 then wave=0
t1=pop()
channel=converttoint(t1) mod 16
if wave <32 then 
  audio.changewav(channel,$2000000+2048*wave)
else
  audio.changewav(channel,$0800_0000)
endif
end sub

'-------------------- chr$

sub do_chr

dim t1 as expr_result
dim numpar,arg as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "chr$: "; : printerror(39) : return
t1=pop() : arg=converttoint(t1)
t1.result.sresult=chr$(arg)
t1.result_type=result_string
push t1  
end sub

'-------------------- circle

sub do_circle

dim t1,t2,t3 as expr_result 

t3=pop()
t2=pop()
t1=pop()
if (t1.result_type=result_int orelse t1.result_type=result_uint) andalso (t2.result_type=result_int orelse t2.result_type=result_uint) andalso (t3.result_type=result_int orelse t3.result_type=result_uint) then
   v.circle(t1.result.iresult,t2.result.iresult,t3.result.iresult,plot_color) : return
else
   v.circle(converttoint(t1), converttoint(t2), converttoint(t3),plot_color)
endif   
end sub

'-------------------- click

sub do_click

dim t1 as expr_result

t1=pop()
if t1.result.uresult=0 then keyclick=0 else keyclick=1
end sub

'-------------------- close

sub do_close

dim numpar, channel as integer
dim  t1 as expr_result

numpar=compiledline(lineptr_e).result.uresult
t1=pop()
if t1.result_type<>result_channel then print "channel# expected" : return  
channel  = t1.result.iresult
close #channel
end sub

'-------------------- cls

sub do_cls
cls(ink,paper): plot_color=ink
end sub


'-------------------- coginit

function do_coginit_2(cog,addrval,ptra_val as integer) as integer

 asm
 setq ptra_val
 coginit cog,addrval wc
 end asm
 
return cog 
end function

sub do_coginit

dim numpar,ptra_val,addrval,cog as integer
dim tempbuf(4095) as ubyte
dim t1 as expr_result
numpar=compiledline(lineptr_e).result.uresult
if numpar<2 orelse numpar>3 then print "coginit: "; : printerror(39) : return
t1=pop()
ptra_val=converttoint(t1)
t1=pop()
addrval=converttoint(t1)
if numpar=3 then 
  t1=pop()
  cog=converttoint(t1)
else
  cog=16
endif
    
if addrval>$80000 then psram.read1(varptr(tempbuf(0)),addrval,4096) : addrval=varptr(tempbuf(0))
cog=do_coginit_2(cog,addrval,ptra_val)
t1.result.uresult=cog
t1.result_type=result_int
push t1
end sub

'-------------------- cogstop

sub do_cogstop
dim t1 as expr_result
t1=pop()
cpustop(converttoint(t1))
end sub

'-------------------- color

sub do_color

dim t1 as expr_result

t1=pop()
plot_color=t1.result.iresult
end sub

'-------------------- copy

sub do_copy

dim t1,t2 as expr_result
dim filename_1,filename_2 as string

t1=pop()
t2=pop()
if t2.result_type=result_string2 then 
  filename_1=convertstring(t2.result.uresult)
else if t2.result_type=result_string then 
  filename_1=t2.result.sresult
else 
  printerror(15,runheader(0)) : return
endif
if t1.result_type=result_string2 then 
  filename_2=convertstring(t1.result.uresult)
else if t1.result_type=result_string then 
  filename_2=t1.result.sresult
else 
  printerror(15,runheader(0)) : return
endif

open filename_1 for input as #9 : err=geterr(): if err<>0 then print "System error - ";err; " in line ";runheader(0);": ";strerror$(err);", file name: ";filename_1 : close #9 : return
open filename_2 for output as #8 : err=geterr(): if err<>0 then print "System error - ";err; " in line ";runheader(0);": ";strerror$(err);", file name: ";filename_2  : close #8 : return

do
  get #9,,block(0),1024,r
  put #8,,block(0),r
loop until r<>1024  
close #8
close #9

end sub

'-------------------- cos

sub do_cos

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "cos: "; : printerror(39) : return
t1=pop()
t1.result.fresult=cos(trig_coeff*converttofloat(t1))
t1.result_type=result_float   
push t1  
end sub

'-------------------- cursor

sub do_cursor

dim t1 as expr_result
t1=pop()
if t1.result.uresult=0 then  v.setspritesize(17,0,0) else v.setspritesize(17,8,16) 
end sub

'-------------------- defchar

sub do_defchar

dim t1 as expr_result
dim c,cptr as ulong
dim buf as ubyte(15)

t1=pop() : cptr=converttoint(t1)
t1=pop() : c=converttoint(t1)
if cptr<$80000 then 
  v.defchar(c,cptr)
else
  for i=0 to 15: buf(i)=pspeek(cptr+i): next i
  v.defchar(c,varptr(buf))
endif      
end sub

'-------------------- defenv

sub do_defenv

dim a,d,s,r,numpar,i,channel,wptr  as integer
dim aa,dd,ss,rr,fulltime,timeunit,da,dr as single 
dim t1 as expr_result
dim s1 as string

numpar=compiledline(lineptr_e).result.uresult
if numpar<>2 andalso numpar<>5 then return 			' TODO and print error

if numpar=2 then						' env from .h2 or from a pointer
  t1=pop()
  if t1.result_type=result_string2 then 
    s1=convertstring(t1.result.uresult)
  else if t1.result_type=result_string then 
    s1=t1.result.sresult
  else 
    s1=""
    wptr=converttoint(t1)
  endif  
  if s1<>"" then 
    t1=pop()
    channel=converttoint(t1) 
    close #9 : open "/sd/media/h/"+s1 for input as #9
    r=geterr() : if r then print "System error ";r;": ";strerror$(r) :close #9 : return   
    get #9,17,envbuf8(channel,0),256
    for i=255 to 0 step -1 : envbuf(channel,i)=envbuf8(channel,i)*256 : next i
    close #9
    envbuf(channel,255)=0                                                              
    return
  else
    if wptr < $80000 then 
      for i=0 to 255: envbuf(channel,i)=dpeek(wptr+2*i): next i
    else
      for i=0 to 255: envbuf(channel,i)=psdpeek(wptr+2*i) : next i
    endif
    envbuf(channel,255)=0
    return   
  endif
endif  

if numpar=5 then   						 'simple adsr
  t1=pop() : rr=converttofloat(t1)
  t1=pop() : ss=converttofloat(t1) 
  t1=pop() : dd=converttofloat(t1)
  t1=pop() : aa=converttofloat(t1)
  t1=pop() : channel=converttoint(t1)
  if ss<0.0 then ss=0.0 
  if ss>1.0 then ss=1.0
  fulltime=aa+dd+rr
  timeunit=256/fulltime : a=round(aa*timeunit) : d=round(dd*timeunit) : r=round(rr*timeunit)  
  da=65520.0/a : dd=(65520.0-65520.0*ss)/d : dr=(65520.0*ss)/r  
  suspoints(channel)=a+d
  aa=0.0 : for i=0 to a-1  : envbuf(channel,i)=round(aa): aa+=da : next i
  for i=a to (a+d-1) : envbuf(channel,i)=round(aa) : aa=aa-dd : if aa<0.0 then aa=0.0
  next i
  for i=(a+d) to 255 : envbuf(channel,i)=round(aa): aa=aa-dr : if aa<0.0 then aa=0.0
  next i
  envbuf(channel,255)=0
endif
envbuf(channel,255)=0
end sub

'-------------------- defsnd

sub do_defsnd
dim numpar,i,j,par,channel,wptr as integer
dim even,odd, max,spl,qqq as single 
dim t1 as expr_result
dim s as string
dim harm(15) as single
dim sample as short

numpar=compiledline(lineptr_e).result.uresult

' defsnd channel, string - tries to load from /media/s an s2 file from PC-Softsynth
' defsnd channel, h1,h2.... h15 - defines harmonics
' defsnd channel, negfloat, negfloat - defines even and odd harmonics dampening
' defsnd channel, oneint - loads the wave from the pointer

if numpar<2 then return
 
if numpar=2 then
  t1=pop()
  if t1.result_type=result_string2 then 
    s=convertstring(t1.result.uresult)
  else if t1.result_type=result_string then 
    s=t1.result.sresult
  else 
    s=""
    wptr=converttoint(t1)
  endif  
  if s<>"" then 
    t1=pop()
    channel=converttoint(t1) : if channel>31 then return
    close #9 : open "/sd/media/s/"+s for input as #9
    r=geterr() : if r then print "System error ";r;": ";strerror$(r) :close #9 : return   
    for i=0 to 1024 : get #9,17+2*i,sample,1 : psdpoke 2048*channel+2*i, sample : next i
    close #9
    return
  else
    if wptr < ($80000 - 2048) then 
      for i=0 to 1023: psdpoke 2048*channel+2*i,dpeek(wptr+2*i): next i
    else
      for i=0 to 1023 : psdpoke 2048*channel+2*i,psdpeek(wptr+2*i) : next i
    endif
    return 
  endif
  return
endif
for i=0 to 15 : harm(i)=0: next i  
for i=numpar to 2 step -1 
  t1=pop() 
  harm(i-2)=converttofloat(t1) 
next i
t1=pop()
channel=converttoint(t1) : : if channel>31 then return
max=0
if harm(0)<0 then
  even=abs(harm(0))
  odd=abs(harm(1)) 
  harm(0)=1
  harm(1)=even
  harm(2)=odd
  for i=3 to 15 step 2 : harm(i)=harm(i-2)*even : next i
  for i=4 to 14 step 2 : harm(i)=harm(i-2)*odd : next i
endif
if harm(0)>=0 then ' synthesize with harmonics
  for i=0 to 1023
    spl=0
    for j=0 to 15 : spl+=harm(j)*sin((1.0/512)*3.14159265359*i*(j+1)) : next j 
    if abs(spl)>max then max=abs(spl)  
  next i  
  for i=0 to 1023
    spl=0
    for j=0 to 15: spl+=harm(j)*(32600.0/max)*sin(1.0/512*3.14159265359*i*(j+1)) :next j 
    psdpoke 2048*channel+2*i, round(spl)
  next i  
endif 
end sub

'-------------------- defsprite

sub do_defsprite

dim t1,t2,t3,t4,t5 as expr_result  	' todo parameters # control, more formats
dim a1,a2,a3,a4,a5 as integer

t5=pop()
t4=pop()
t3=pop()
t2=pop()
t1=pop()
a1=converttoint(t1) : a2=converttoint(t2) : a3=converttoint(t3) : a4=converttoint(t4) : a5=converttoint(t5) ' do convert, defsprite is not a racing command
if sprite(a1)<> nil then delete(sprite(a1))	' todo: check parameters for limits
sprite(a1)=new ubyte(a4*a5-1)
for y=a3 to a3+a5-1
  for x=a2 to a4+a2-1
    sprite(a1,(x-a2)+(y-a3)*(a4))=pspeek(v.buf_ptr+x+1024*y)
  next x
next y
v.setspriteptr(a1,sprite(a1))
v.setspritesize(a1,a4,a5)
end sub

'-------------------- deg

sub do_deg
trig_coeff=0.01745329251994329576923690768489
trig_coeff2=57.295779513082320876798154814105
end sub

'-------------------- delete

sub do_delete

dim err as integer
dim filename$ as string
dim t1 as expr_result

t1=pop()
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then printerror(15): return
if currentdir$<>"/" then filename$=currentdir$+"/"+t1.result.sresult else filename$="/"+t1.result.sresult
kill filename$
err=geterr() : if err<>0 then print "Cannot delete file or file doesn't exist: system error "; err
end sub

'-------------------- dir

sub do_dir

dim filename as string
dim px,py,i,j,n,swapped as integer
dim filelist(128) as string

print "Current directory: "; currentdir$ 
px=0
for i=0 to 127: filelist(i)="" : next i
filename=dir$("*", fbDirectory)
n=0
while filename <> "" andalso filename <> nil andalso n<128
  filename="[dir] "+filename
  filelist(n)=filename
  n=n+1
  filename = dir$()     	' continue scan
end while
for i=0 to n-1			' now sort this
  swapped=false
  for j=0 to n-i-2
    if filelist(j) > filelist(j+1) then
      filelist(j), filelist(j+1) = filelist(j+1),filelist(j)
      swapped=true
    endif
  next j
if not swapped then exit for
next i
for i=0 to n-1
  print filelist(i); : px=px+64: v.setcursorx(px) : if px>255 then px=0: print
next i  
if n>=128  then print "More than 128 entries found: clean your directory"
print
n=0
px=0: py=v.getcursory()
filename = dir$("*", fbNormal )   
do while filename <> "" andalso filename <> nil andalso n<128
  filelist(n)=filename: n=n+1 
  filename = dir$()       
loop
for i =0 to n-1
  swapped=false
  for j=0 to n-i-2
    if filelist(j) > filelist(j+1) then
      filelist(j), filelist(j+1) = filelist(j+1),filelist(j)
      swapped=true
    endif
  next j
if not swapped then exit for
next i
for i=0 to n-1
  print filelist(i); : px=px+64: v.setcursorx(px) : if px>255 then px=0: print
next i  
if n>=128  then print "More than 128 entries found: clean your directory"
print
end sub

'-------------------- dpeek

sub do_dpeek

dim t1 as  expr_result
dim a, r as ulong

t1=pop()
a=converttoint(t1)
if a<$80000 then r=dpeek(a) else r=psdpeek(a)
t1.result_type=result_uint : t1.result.uresult=r : push t1
end sub 

'-------------------- dpoke

sub do_dpoke

dim t1,t2 as expr_result
dim a,v as ulong

t1=pop() 'value
t2=pop() 
a=converttoint(t2) : v=converttoint(t1)
if a<$80000 then dpoke a,v else psdpoke a,v
end sub
'-------------------- draw

sub do_draw
dim t1,t2 as expr_result 
dim x,y as integer

t2=pop()
t1=pop()
x=converttoint(t1)
y=converttoint(t2)
v.draw(plot_x,plot_y,x,y,plot_color) 
plot_x=x
plot_y=y
end sub

'-------------------- else

sub do_else
lineptr_e=lineptr-1
end sub

'-------------------- end

sub do_end
lineptr_e=lineptr-1
runptr=$7FFF_FFFF
end sub

'-------------------- enter

sub do_enter
do_load(1234)
end sub

'------------------- error processing

sub do_error

dim r as ulong
r=compiledline(lineptr_e).result.uresult
print "Error ";r;": ";errors$(r)
end sub

'-------------------- fcircle

sub do_fcircle
dim t1,t2,t3 as expr_result 

t3=pop()
t2=pop()
t1=pop()
v.fcircle(converttoint(t1), converttoint(t2), converttoint(t3),plot_color)
end sub

'-------------------- fill

sub do_fill
dim t1,t2,t3,t4 as expr_result 

t4=pop()
t3=pop()
t2=pop()
t1=pop()
v.fill(converttoint(t1), converttoint(t2), converttoint(t3), converttoint(t4))
end sub

'-------------------- findfirst

sub do_findfirst

dim numpar,c1 as ulong
dim t1 as expr_result
dim s1,s2 as string

numpar=compiledline(lineptr_e).result.uresult
if numpar=2 then
  t1=pop()
  if t1.result_type=result_string2 then 
    s2=convertstring(t1.result.uresult) 
  else if t1.result_type=result_string then 
    s2=t1.result.sresult
  else 
    print "findfirst: "; : printerror(30) : return  
  endif  
  t1=pop()
  if t1.result_type=result_string2 then 
    s1=convertstring(t1.result.uresult) 
  else if t1.result_type=result_string then 
    s1=t1.result.sresult
  else 
    print "findfirst: "; : printerror(30) : return  
  endif  
else if numpar=1 then
  t1=pop()
  if t1.result_type=result_string2 then 
    s1=convertstring(t1.result.uresult) 
  else if t1.result_type=result_string then 
    s1=t1.result.sresult
  else 
    print "findfirst: "; : printerror(30) : return  
  endif  
  s2=""
else  
  print "findfirst: "; : printerror(39) : return     
endif

if s2="" then
  c1=fbDirectory or fbNormal
else if lcase$(s2)="dir" then 
  c1=fbDirectory
else 
  c1=fbNormal
endif  
s2=dir$(s1,c1)
t1.result_type=result_string
t1.result.sresult=s2
push t1

end sub

'-------------------- findnext

sub do_findnext


dim t1 as expr_result
dim s2 as string

if compiledline(lineptr_e).result.uresult>0 then print "findnext: "; : printerror(39) : return    
s2=dir$()
t1.result_type=result_string
t1.result.sresult=s2
push t1

end sub

'-------------------- font

sub do_font

dim t1 as expr_result

t1=pop() 
if t1.result_type=result_float then t1.result.iresult=t1.result.fresult
if t1.result_type=result_string then t1.result.iresult=val(t1.result.sresult)
font=t1.result.iresult : v.setfontfamily(font*4)
end sub

'-------------------- for

sub do_for()

dim t1 as expr_result
dim i as integer
fortop+=1
t1=pop() : fortable(fortop).varnum=t1.result.iresult
t1=pop() : fortable(fortop).stepval=converttoint(t1)
t1=pop() : fortable(fortop).endval=converttoint(t1)
if compiledline(lineptr_e).result_type=token_end then	' end of line after for, set the pointer to the start of the next line
  fortable(fortop).lineptr=runptr
  fortable(fortop).cmdptr=0
else
  fortable(fortop).lineptr=oldrunptr
  fortable(fortop).cmdptr=lineptr_e+1
endif
end sub

'-------------------- frame

sub do_frame
dim t1,t2,t3,t4 as expr_result 

t4=pop()
t3=pop()
t2=pop()
t1=pop()
v.frame(converttoint(t1), converttoint(t2), converttoint(t3), converttoint(t4),plot_color)
end sub

'-------------------- framebuf

sub do_framebuf

dim t1 as expr_result 

t1.result_type=result_uint : t1.result.uresult=v.buf_ptr
push t1
end sub
'-------------------- fre

sub do_fre

dim t1 as  expr_result

r=memtop-programptr
t1.result_type=result_uint : t1.result.uresult=r : push t1
end sub 

'-------------------- get

sub do_get		' get  #chn,addr,(amount,(pos))

dim numpar,channel,amount,adr,i,j,r as integer
dim  t1 as expr_result

numpar=compiledline(lineptr_e).result.uresult
if numpar=4  then t1=pop() : pos=converttoint(t1)   else pos=-1
if numpar>=3  then t1=pop() : amount=converttoint(t1) else amount=1
if numpar>=2  then t1=pop() : adr=converttoint(t1)
t1=pop() : channel=converttoint(t1)
getres(j)=0
if pos>=0 then
  for i=0 to  amount/1024
    get #channel,pos+1,block(0),amount,r
    if adr<$80000 then for j=0 to r-1 : poke adr+1024*i+j,block(j):  next j else  for j=0 to r-1 : pspoke adr+1024*i+j,block(j):  next j  
    getres(j)+=r
  next  i  
else
  for i=0 to  amount/1024
    get #channel,,block(0),amount,r
    if adr<$80000 then for j=0 to r-1 : poke adr+1024*i+j,block(j):  next j else  for j=0 to r-1 : pspoke adr+1024*i+j,block(j):  next j  
    getres(j)+=r
  next  i  
endif  
end sub  

'-------------------- getcolor

sub do_getcolor

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "getcolor "; : printerror(39) : return
t1=pop()
t1.result.iresult=(v.getpalettecolor(converttoint(t1)) shr 8) and $FFFFFF
t1.result_type=result_uint
push t1  
end sub

'-------------------- getenvsustain

sub do_getenvsustain

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "getenvsustain: "; : printerror(39) : return
t1=pop()
t1.result.iresult=suspoints(converttoint(t1))
t1.result_type=result_int
push t1  
end sub

'-------------------- getnotevalue

sub do_getnotevalue

dim r,notebase,noteexp as single
dim a as integer
dim t1 as expr_result

t1=pop()
a=converttoint(t1) 
notebase=notetable(a mod 12) 
noteexp=(a/12) 
r=(2.0^noteexp)*notebase
t1.result.fresult=r: t1.result_type=result_float : push t1
end sub

'-------------------- getpixel

sub do_getpixel

dim t1,t2 as expr_result
dim numpar,a1,a2 as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar<>2 then print "getpixel: "; : printerror(39) : return
t2=pop()
t1=pop()
a1=converttoint(t1) : a2=converttoint(t2)
t1.result.uresult=pspeek(v.buf_ptr+a1+1024*a2)
t1.result_type=result_uint
push t1
end sub


sub do_getrealfreq

dim numpar as ulong
dim t1 as expr_result
dim a1 as single

numpar=compiledline(lineptr_e).result.uresult
if numpar<>1 then print "getrealfreq: "; : printerror(39) : return
t1=pop() 
a1=channels(converttoint(t1)).realfreq
t1.result.fresult=a1
t1.result_type=result_float
push t1
end sub


'-------------------- gettime

sub do_gettime

dim hi2, lo2 as ulong

dim t1 as expr_result
hi2,lo2=do_gettime2()
t1.result_type=result_uint
t1.result.twowords(0)=lo2
t1.result.twowords(1)=hi2
push t1
end sub

'----- A helper for gettime

function do_gettime2() as ulong,ulong

dim lo1, hi1 as ulong

const asm 
   getct hi1 wc
   getct lo1
end asm   
return hi1, lo1
end function  

'-------------------- gosub

sub do_gosub()

dim t1 as expr_result
dim i as integer
gosubtop+=1
if compiledline(lineptr_e+1).result_type=token_end then
  gosubtable(gosubtop).lineptr=runptr
  gosubtable(gosubtop).cmdptr=0
else
  gosubtable(gosubtop).lineptr=oldrunptr
  gosubtable(gosubtop).cmdptr=lineptr_e+2
endif
end sub

'--------------------- goto

'------- fast goto

sub do_fast_goto

dim testptr,flag as ulong

testptr=compiledline(lineptr_e).result.uresult
flag=pslpeek(testptr)' :print " In goto:",flag , testptr : waitms(1000)
if flag=compiledline(lineptr_e).result.twowords(1) then
  runptr=testptr
  lineptr_e=lineptr-1
  if runheader(5)=$7FFF_FFFF  then runheader(5)=0
else
  do_find_goto  
endif  
end sub 

'------- find goto  

sub do_find_goto

dim gotoline,gotoptr,oldgotoptr as integer
dim gotoheader(5) as ulong

gotoline=compiledline(lineptr_e).result.twowords(1)
gotoptr=programstart
do
  psram.read1(varptr(gotoheader),gotoptr,24)  : 
  if gotoheader(0)<>$FFFFFFFF then
    oldgotoptr=gotoptr
    gotoptr=gotoheader(5)
  endif
  loop until gotoheader(5)=$7FFF_FFFF orelse gotoheader(0)=-1 orelse gotoheader(0)=gotoline

if gotoheader(0)=gotoline then
    compiledline(lineptr_e).result.uresult=oldgotoptr ' we got the pointer
    compiledline(lineptr_e).result_type=token_fast_goto
    psram.write(varptr(compiledline(lineptr_e)),oldrunptr+(2+lineptr_e)*compiledslot,compiledslot)   
    do_fast_goto
  else
    printerror(38)
  endif  
end sub

'------- slow goto  

sub do_slow_goto

dim gotoline,gotoptr,oldgotoptr as integer
dim gotoheader(5) as ulong
dim t1 as expr_result

t1=pop() : gotoline=converttoint(t1)
gotoptr=programstart
do
  psram.read1(varptr(gotoheader),gotoptr,24)  : 
  if gotoheader(0)<>$FFFFFFFF then
    oldgotoptr=gotoptr
    gotoptr=gotoheader(5)
  endif
  loop until gotoheader(5)=$7FFF_FFFF orelse gotoheader(0)=-1 orelse gotoheader(0)=gotoline
if gotoheader(0)=gotoline then  
   runptr=oldgotoptr
   lineptr_e=lineptr-1
  if runheader(5)=$7FFF_FFFF  then runheader(5)=0 
  endif
end sub

' ----------------  hex$

sub do_hex

dim t1 as expr_result
dim numpar,arg,num as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>2 orelse numpar=0 then print "hex$: "; : printerror(39) : return
if numpar=2 then t1=pop() : num=converttoint(t1) else num=8
t1=pop() : arg=converttoint(t1)
t1.result.sresult=hex$(arg,num)
t1.result_type=result_string
push t1  
end sub

' ----------------  if

sub do_if

dim t1 as expr_result
t1=pop()
' if uresult=0, jump over else
if t1.result.uresult = 0 then 
  for i=lineptr_e to lineptr-1
    t1=compiledline(i)
    if t1.result_type=token_else then lineptr_e=i : return
  next i  
  lineptr_e=lineptr-1
endif
end sub

' ----------------  inkey$

sub do_inkey

dim t1 as expr_result
let key=kbm.get_key() 
if key<>0 andalso key<$80000000 andalso (key and 255) <$E0 then  
  if keyclick=1 then audio.play(7,keyclick_spl,44100,4096,spl_len) 
 endif
if key<>0 andalso key<$80000000 andalso (key and 255) <$E0 then
  if leds and 2 = 2 then 
    if key>96 andalso key<123 then
      key-=32
    else if key>64 andalso key<91 then 
      key+=32
    else if key>22 andalso key<32 then 
      key-=9
    else if key>13 andalso key<23 then 
      key4+=39
    endif
  endif

t1.result.sresult=chr$(scantochar(key)) else t1.result.sresult=""
t1.result_type=result_string
push t1
end sub 

' ----------------  ink

sub do_ink

dim t1 as expr_result

t1=pop() 
ink=converttoint(t1) : v.setwritecolors(ink,paper) : v.setcursorcolor(ink)
end sub

' ----------------  int

sub do_int

dim t1 as expr_result

t1=pop()
select case t1.result_type
  case result_float: t1.result.iresult=int(t1.result.fresult)
  case result_string: t1.result.iresult=int(val(t1.result.sresult))
  case result_string2: t1.result.iresult=int(val(convertstring(t1.result.uresult))) 
end select
t1.result_type=result_int
push t1
end sub

' ----------------  input

sub do_input
dim line$,part$ as string
dim numpar,comma,stringaddr,vartype,esize as ulong
dim t1 as expr_result
dim fval as single
dim args(64) as string
dim i,j,l,cpx,cpy as integer

numpar=compiledline(lineptr_e).result.uresult
if numpar<1 orelse numpar>64 then print "In input: ";: printerror(39,runheader(0)) : return
i=numpar-1
cpx=v.cursor_x/2 : cpy=v.cursor_y
do

  line$=edit()

  if v.cursor_y=cpy+1 then
    line$=trim$(right$(line$,len(line$)-cpx+editor_spaces)) 
  else
   line$=trim$(line$) 
  endif
  do
   comma=instr(1,line$,",")  
   if comma>0  then 
     part$=left$(line$,comma-1): line$=right$(line$,len(line$)-comma)  
   else 
     part$=trim$(line$) : line$=""
   endif
   args(i)=part$  
   i=i-1
   loop until i<0 orelse line$=""
loop until i<0

for i=0 to numpar-1

  if isnum(args(i)) and not isint(args(i)) then r=result_float 
  if isint(args(i)) then r=result_int 
  if isdec(args(i)) then r=result_uint 
  if not isnum(args(i)) then 
    r=result_string2
    l=len(part$)    								' place the literal in the psram
    memtop=(memtop-l-4) and $FFFFFFFC
    pslpoke memtop,l
    for j=1 to l : pspoke memtop+3+j, asc(mid$(args(i),j,1)) : next j
    stringaddr=memtop 
  endif  
  t1=pop() : vartype=t1.result.twowords(1)
  select case vartype
    case 0			: esize=12
    case array_no_type	: esize=12
    case array_byte		: esize=1
    case array_ubyte		: esize=1
    case array_short		: esize=2
    case array_ushort	        : esize=2
    case array_long		: esize=4
    case array_ulong		: esize=4
    case array_int64		: esize=8
    case array_uint64		: esize=8
    case array_float		: esize=6 ' dummy, for float
    case array_double		: esize=8
    case array_string		: esize=5 ' dummy, for string
    case else			: esize=12
  end select
  if esize=12 andalso t1.result.uresult<$80000 then
    if r=result_int then lpoke t1.result.uresult, val%(args(i))
    if r=result_uint then lpoke t1.result.uresult, val%(args(i))
    if r=result_float then fval=val(args(i)): lpoke t1.result.uresult,lpeek(varptr(fval))
    if r=result_string2 then lpoke t1.result.uresult,stringaddr
    lpoke t1.result.uresult+8,r
  endif
  if esize=12 andalso t1.result.uresult>=$80000 then
    if r=result_int then pslpoke t1.result.uresult, val%(args(i))
    if r=result_uint then pslpoke t1.result.uresult, val%(args(i))
    if r=result_float then fval=val(args(i)): pslpoke t1.result.uresult,lpeek(varptr(fval))
    if r=result_string2 then pslpoke t1.result.uresult,stringaddr
    pslpoke t1.result.uresult+8,r
  endif
  if esize=5 andalso r=result_string2 then pslpoke t1.result.uresult,stringaddr
  if esize=4 andalso r<>result_string2 then pslpoke t1.result.uresult,val%(args(i))
  if esize=2 andalso r<>result_string2 then psdpoke t1.result.uresult,val%(args(i))
  if esize=1 andalso r<>result_string2 then pspoke t1.result.uresult,val%(args(i))
  if esize=6 andalso r<>result_string2 then fval=val(args(i)): pslpoke t1.result.uresult,lpeek(varptr(fval))
next i 

end sub

' ----------------  left$

sub do_left

dim t1 as expr_result
dim numpar,arg as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar<>2  then print "left$: "; : printerror(39) : return
t1=pop() : arg=converttoint(t1)
t1=pop(): if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "left$: "; : printerror(15) : return 
t1.result.sresult=left$(t1.result.sresult,arg)
push t1  
end sub

' ----------------  len

sub do_len

dim t1 as expr_result
dim numpar,arg as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "len: "; : printerror(39) : return
t1=pop() : if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "len: "; : printerror(15) : return 
t1.result.iresult=len(t1.result.sresult)
t1.result_type=result_int
push t1  
end sub

' ----------------  list

sub do_list
dim numpar, startline,endline
dim t1 as expr_result
dim aend as integer
dim newlist as integer
dim header as ulong(5)
dim linebuf(127) as ubyte

startline=0 : endline=$7FFFFFFF
numpar=compiledline(lineptr_e).result.uresult
if numpar=1 then t1=pop() : startline=converttoint(t1)
if numpar=2 then t1=pop() : endline=converttoint(t1) : t1=pop() : startline=converttoint(t1)


print
let listptr=programstart 
do 
  psram.read1(varptr(header),listptr,24) ': print header(0),header(1),header(2),header(3),header(4),header(5), programstart : waitms 7000 : waitms 7000 : waitms 7000
  
  if header(0)<> $FFFFFFFF then
    longfill(linebuf,0,64)
    psram.read1(varptr(linebuf),header(2),header(3))
    if header(0)>=startline andalso header(0)<=endline then v.writeln(varptr(linebuf))  
    listptr=header(5)
    endif

loop until header(5)=$7FFF_FFFF orelse header(0)=-1
end sub

'-------------------- load

sub do_load(amode=0 as integer)  

dim t1 as expr_result
dim i, r, amount,numpar as integer
dim header,linelength as ulong
dim line2 as ubyte(125)
dim line2$ as string 

inload=1
numpar=compiledline(lineptr_e).result.uresult
lpoke varptr(line2$),varptr(line2)
if numpar>0 then t1=pop() else t1.result.sresult=loadname : t1.result_type=result_string 
'print "popped "; t1.result.uresult, t1.result_type
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult): t1.result_type=result_string ': print t1.result.sresult
if t1.result_type=result_string then
  if amode<>1234 then do_new
  if t1.result.sresult="" then t1.result.sresult=loadname else loadname=t1.result.sresult
  close #9: open currentdir$+"/"+t1.result.sresult for input as #9
  r=geterr() 
  if r then 
    close #9: open currentdir$+"/"+t1.result.sresult+".bas" for input as #9 
    r=geterr() 
    if r then 
      print "System error ";r;": ";strerror$(r) :close #9 : return
    else
      loadname=loadname+".bas"
    endif
  endif      
  close #9: open currentdir$+"/"+loadname for input as #9
  do
    line input #9,line$
    interpret
  loop until line$=""
  close #9   
else
  printerror(30)  ' line$="": for j=0 to header(3)-1: line$+=chr$(linebuf(j)): next j
endif
print "Loaded ";currentdir$+"/"+loadname
inload=0
end sub

'-------------------- log

sub do_log

dim t1  as expr_result
dim numpar as ulong
dim base as single

numpar=compiledline(lineptr_e).result.uresult
if numpar=0 orelse numpar>2 then print "log: "; : printerror(39) : return
if numpar=2 then 
  t1=pop()
  base=log(converttofloat(t1))
else
  base=1.0
endif
t1=pop()
t1.result.fresult=log(converttofloat(t1))/base
t1.result_type=result_float
push t1
end sub

'-------------------- lpeek

sub do_lpeek

dim t1 as  expr_result
dim a, r as ulong

t1=pop()
a=converttoint(t1)
if a<$80000 then r=lpeek(a) else r=pslpeek(a)
t1.result_type=result_uint : t1.result.uresult=r : push t1
end sub 

'-------------------- lpoke

sub do_lpoke

dim t1,t2 as expr_result
dim a,v as ulong

t1=pop() 'value
t2=pop() 
a=converttoint(t2) : v=converttoint(t1)
if a<$80000 then lpoke a,v else pslpoke a,v
end sub

'-------------------- memlo

sub do_memlo

dim t1 as expr_result
t1.result.uresult=programptr
t1.result_type=result_uint
push t1
end sub

'-------------------- memtop

sub do_memtop

dim t1 as expr_result
t1.result.uresult=memtop
t1.result_type=result_uint
push t1
end sub

'-------------------- mid$

sub do_mid

dim t1 as expr_result
dim numpar,arg1,arg2 as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar<>3  then print "mid$: "; : printerror(39) : return
t1=pop() : arg2=converttoint(t1)
t1=pop() : arg1=converttoint(t1)
t1=pop(): if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "mid$: "; : printerror(15) : return 
t1.result.sresult=mid$(t1.result.sresult,arg1,arg2)
push t1  
end sub

'-------------------- mkdir

sub do_mkdir

dim err as integer
dim filename$ as string
dim t1 as expr_result

t1=pop()
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then printerror(15): return
filename$=t1.result.sresult
err=mkdir(filename$)
'err=geterr() : 
if err<>0 then print "Cannot create a directory: system error "; err
end sub

'-------------------- mode

sub do_mode
dim t1 as expr_result
t1=pop() 
if t1.result_type=result_float then t1.result.iresult=t1.result.fresult
if t1.result_type=result_string then t1.result.iresult=val(t1.result.sresult)
select case t1.result.iresult
   case 0: font=1 :ink=154 : keyclick=1 : paper=147 : v.setfontfamily(4) : v.setwritecolors(ink,paper) : keyclick_spl=@atari_spl : spl_len=1684+4
   case 1: font=0 :ink=23 :  keyclick=0 : paper=0 : v.setfontfamily(0) : v.setwritecolors(ink,paper)
   case 2: font=0 :ink=181 : keyclick=0 : paper=0 : v.setfontfamily(0) : v.setwritecolors(ink,paper)
   case 3: font=0 :ink=15 :  keyclick=0 : paper=0 : v.setfontfamily(0) : v.setwritecolors(ink,paper)
   case 4: font=1 :ink=1 :  keyclick=1  : paper=14 : v.setfontfamily(4) : v.setwritecolors(ink,paper) : keyclick_spl=@atarist_spl : spl_len=1684+4
   case 5: font=2 :ink=1 :  keyclick=1  : paper=7 : v.setfontfamily(8) : v.setwritecolors(ink,paper) : keyclick_spl=@atarist_spl : spl_len=1684+4
end select
nostalgic_mode=t1.result.iresult
free$=decuns$(memtop-programptr)+" BASIC bytes free"
v.cls(ink,paper) : v.writeln("") : v.writeln(ver$) : v.writeln(free$) ' todo free has to be computed in the real time
end sub

'-------------------- mouse

sub do_mouse

dim t1 as expr_result

t1=pop()
if t1.result.uresult=0 then v.setspritesize(16,0,0) else v.setspritesize(16,32,32)
end sub

'-------------------- mousek

sub do_mousek

dim t1 as expr_result
'dim k as ulong
'k=kbm.mouse_buttons()
t1.result_type=result_uint
t1.result.uresult=mousek
push t1
end sub

'-------------------- mousew

sub do_mousew

dim t1 as expr_result
'dim x,y,z as ulong
'x,y=kbm.mouse_scroll()
t1.result_type=result_int
t1.result.iresult=mousew
push t1
end sub

'-------------------- mousex

sub do_mousex

dim t1 as expr_result
'dim x,y as ulong
'x,y=kbm.mouse_xy()
t1.result_type=result_uint
t1.result.uresult=mousex
push t1
end sub

'-------------------- mousey

sub do_mousey

dim t1 as expr_result
'dim x,y as ulong
'x,y=kbm.mouse_xy()
t1.result_type=result_uint
t1.result.uresult=mousey
push t1
end sub

'------------------ new

sub do_new

if inrun=1 then inrun=2
pslpoke(memlo,$FFFFFFFF)
varnum=0 : for i=0 to maxvars: variables(i).name="" : variables(i).vartype=0: next i
programstart=memlo :runptr=memlo : runptr2=memlo
stackpointer=0
lineptr=0 
programptr=memlo ': stringptr=0
dataptr=0 : readline=""
lastline=0 : lastlineptr=-1 :fortop=0 :gosubtop=0
for i=0 to maxfor: fortable(i).varnum=-1 : next i
for i=0 to 15: if sprite(i)<> nil then v.setspritesize(i,0,0) : delete(sprite(i)) 
next i
trig_coeff=1.0 : trig_coeff2=1.0
memtop=v.textbuf_ptr
v.setspritesize(17,8,16)
v.setspritesize(16,32,32)
loadname="noname.bas"
init_audio
end sub

'-------------------- next

sub do_next()

dim t1 as expr_result
dim varnum as integer
t1=pop() :varnum=t1.result.uresult
if fortable(fortop).varnum<>t1.result.uresult then printerror(37) : return
if variables(varnum).vartype=result_float then variables(varnum).vartype=result_int : variables(varnum).value.iresult=round(variables(varnum).value.fresult)
variables(varnum).value.iresult+=fortable(fortop).stepval 
if fortable(fortop).stepval>=0 then
  if variables(varnum).value.iresult>fortable(fortop).endval then fortop-=1 : return ' do nothing 
else
  if variables(varnum).value.iresult<fortable(fortop).endval then fortop -=1 : return ' do nothing 
endif
' if not returned, goto pointer 
if inrun>0 andalso runptr<>fortable(fortop).lineptr then
  runptr=fortable(fortop).lineptr
  runptr2=fortable(fortop).cmdptr
  lineptr_e=lineptr-1
else
  lineptr_e=fortable(fortop).cmdptr-1
endif  
end sub

'-------------------- no command (print "Unknown command")

sub do_no_command
printerror(23,runheader(0))
end sub

'-------------------- nothing

sub do_nothing					' a placeholder for tokens that don't do anything by themselves
end sub

'-------------------- on

sub do_on

dim t1 as expr_result
dim skip, t, numpar as integer

numpar=compiledline(lineptr_e).result.uresult
skip=compiledline(lineptr_e).result.twowords(1)
t1=pop()
t=converttoint(t1)
if t<1 orelse t>numpar then return
lineptr_e+=skip*(t-1)
end sub

'-------------------- open

sub do_open

dim t1 as expr_result
dim filename as string
dim numpar, mode,channel as integer

numpar=compiledline(lineptr_e).result.uresult

t1=pop()
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then  print "filename expected" : return  ' error here
filename=t1.result.sresult
t1=pop()
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
mode=0
if t1.result_type=result_string then
  if t1.result.sresult="read" then mode=1
  if t1.result.sresult="write" then mode=2
  if t1.result.sresult="append" then mode=4
else
  mode=converttoint(t1)
endif
t1=pop()
if t1.result_type<>result_channel then print "channel# expected" : return  
channel  = t1.result.iresult
select case  mode
  case 1 	: open filename for input as #channel 
  case 2 	: open filename for output as #channel  
  case 4 	: open filename for append as #channel  
  case else	: print "Open: invalid mode"
end  select
end sub

' ------------------ padh

sub do_padh

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padh: "; : printerror(39) : return
if numpar=0 then 
  t1.result.uresult=padh(0): t1.result_type=result_int : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    t1.result.uresult=padh(q): t1.result_type=result_int : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padrx

sub do_padrx

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padrx: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padrx(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padrx(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padry

sub do_padry

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padry: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padry(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padry(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padrz

sub do_padrz

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padrz: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padrz(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padrz(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ pads

sub do_pads

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "pads: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+pads(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+pads(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padw

sub do_padw

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padw: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padw(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padw(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padx

sub do_padx

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padx: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padx(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padx(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ pady

sub do_pady

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "pady: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+pady(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+pady(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

' ------------------ padz

sub do_padz

dim t1 as expr_result
dim numpar as ulong
dim fpad as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "padz: "; : printerror(39) : return
if numpar=0 then 
  fpad=(1.0/65536.0)+padz(0)/32767.0 : if abs(fpad) < 0.001 then fpad=0
  t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return
endif
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    fpad=(1.0/65536.0)+padz(q)/32767.0 : if abs(fpad) < 0.001 then fpad=0
    t1.result.fresult=fpad: t1.result_type=result_float : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub

'-------------------- paper

sub do_paper
dim t1 as expr_result
t1=pop() 
if t1.result_type=result_float then t1.result.iresult=t1.result.fresult
if t1.result_type=result_string then t1.result.iresult=val(t1.result.sresult)
paper=t1.result.iresult : v.setwritecolors(ink,paper)
end sub

'-------------------- peek

sub do_peek

dim t1 as  expr_result
dim a, r as ulong

t1=pop()
a=converttoint(t1)
if a<$80000 then r=peek(a) else r=pspeek(a)
t1.result_type=result_uint : t1.result.uresult=r : push t1
end sub 

'-------------------- pinfloat

sub do_pinfloat

dim t1 as expr_result

t1=pop() 'value
pinfloat(converttoint(t1))
end sub

'-------------------- pinhi

sub do_pinhi

dim t1  as expr_result

t1=pop() 'value
pinhi(converttoint(t1))
end sub

'-------------------- pinlo

sub do_pinlo

dim t1 as expr_result

t1=pop() 'value
pinlo(converttoint(t1))
end sub

'-------------------- pinread

sub do_pinread

dim t1 as expr_result

t1=pop()
r=pinread(converttoint(t1))
t1.result_type=result_uint
t1.result.uresult=4
push t1
end sub

'-------------------- pinstart

sub do_pinstart

dim t1,t2,t3,t4 as expr_result

t1=pop() 'value
t2=pop() ' pint1=pop() 'value
t3=pop() ' pint1=pop() 'value
t4=pop() ' pin
pinstart(converttoint(t4),converttoint(t3),converttoint(t2), converttoint(t1))
end sub

'-------------------- pintoggle

sub do_pintoggle

dim t1  as expr_result

t1=pop() 'value
pintoggle(converttoint(t1))
end sub

'-------------------- pinwrite

sub do_pinwrite

dim t1,t2 as expr_result

t1=pop() 'value
t2=pop() ' pin
pinwrite(converttoint(t2), converttoint(t1))
end sub

'-------------------- play

sub do_play

' play channel, freq, wait, volume, waveform, envelope, length, pan, sus

dim numpar,i,base2,channel,skip,speed, ipan, ivol,wave,env,delay,sus,lfreq, period,amode,ifreq as integer
dim params(9) as single
dim t1 as expr_result
dim speed_coeff, freq,pan ,vol,slen as single
speed_coeff=305.873

for i=0 to 9 : params(i)=-2.0 : next i
numpar=compiledline(lineptr_e).result.uresult
for i=numpar to 1 step -1 
  t1=pop() 
  params(i-1)=converttofloat(t1) 
next i

if params(0)<0 then channel=0 else channel=round(params(0)) mod 8
if params(1)<0 then freq=channels(channel).freq else freq=params(1) : channels(channel).freq=freq
if params(2)<0 orelse params(2)>10000.0 then delay=channels(channel).delay else delay=round(params(2)) : channels(channel).delay=delay
if params(3)<0 orelse params(3)>16.384 then vol=channels(channel).vol else vol=params(3) : channels(channel).vol=vol
if params(4)<0 orelse params(4)>32 then wave=channels(channel).wave else wave=round(params(4)) : channels(channel).wave=wave
if params(5)<0 orelse params(5)>8.0 then env=channels(channel).env else env=round(params(5)) : channels(channel).env=env
if params(6)<0 orelse params(6)>1000.0 then slen=channels(channel).length else slen=params(6) : channels(channel).length=slen
if params(7)<-1.0 orelse params(7)>1.0 then pan=channels(channel).pan else pan= params(7) : channels(channel).pan=pan
if params(8)<0 orelse params(8)>255 then sus=channels(channel).sus else sus= round(params(8)) : channels(channel).sus=sus
if params(9)<0 orelse params(9)>255 then amode=channels(channel).amode else amode= round(params(9)) : channels(channel).amode=amode
'print wave

ifreq=round(freq*1000)
if wave <32 then 
  wave=2048*wave+$2000000
else
  wave=$C800_0000 
endif
if env=8 then env=0 else env=varptr(envbuf(env,0))
speed=round(speed_coeff/slen)
ipan=8192+round(8192*pan)
ivol=round(1000.0*vol)
'for i=0 to 1023: print psdpeek(2*i),:next i
audio.play(channel,ifreq,delay,ivol,wave,env,round(slen*1000),ipan,sus)
'audio.play(1,440000,200,4096,$2_000_800,$0,600) 
'audio.play(1,440000,200,4096,$2_000_800,364028,600) 
'print channel, ifreq, delay, ivol,hex$(wave),env,slen,ipan, sus
'if delay>0 then waitms(delay) 
end sub

'-------------------- plot

sub do_plot

dim t1,t2 as expr_result 
dim x,y as integer

t2=pop() 					 
t1=pop()
x=converttoint(t1)
y=converttoint(t2)
plot_x=x: plot_y=y
v.putpixel(plot_x,plot_y,plot_color)      
end sub

'-------------------- poke

sub do_poke
dim t1,t2 as expr_result
dim a,v as ulong
t1=pop() 'value
t2=pop() 
a=converttoint(t2) : v=converttoint(t1)
if a<$80000 then poke a,v else pspoke a,v
end sub

'-------------------- pop

sub do_pop()
if gosubtop>0 then  gosubtop -=1 
end sub

'-------------------- position

sub do_position

dim t1,t2 as expr_result

t1=pop() 'value
t2=pop() ' pin
v.setcursorpos(converttoint(t2), converttoint(t1))
end sub

'-------------------- print

sub do_print  

dim t1,t2 as expr_result
dim r as integer
 
r=0
t1=pop() 
if t1.result_type=print_mod_comma orelse t1.result_type=print_mod_semicolon then r=t1.result_type :  t1=pop()
if t1.result_type=print_mod_empty then r=t1.result_type 
if t1.result_type=result_error then printerror(t1.result.uresult): goto 811
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult)  :  t1.result_type=result_string  

if t1.result_type=token_channel then print "Print to channel (not yet implemented)"; t1.result.iresult : t1=pop()

if r=print_mod_comma  then
  if t1.result_type=result_int then print t1.result.iresult,
  if t1.result_type=result_uint then print t1.result.uresult,
  if t1.result_type=result_float then print t1.result.fresult,
  if t1.result_type=result_string then print t1.result.sresult,
endif  
if r=print_mod_semicolon then 
  if t1.result_type=result_int then print t1.result.iresult;
  if t1.result_type=result_uint then print t1.result.uresult;
  if t1.result_type=result_float then print t1.result.fresult;
  if t1.result_type=result_string then print t1.result.sresult;
endif
if r=0 then 
  if t1.result_type=result_int then print t1.result.iresult
  if t1.result_type=result_uint then print t1.result.uresult
  if t1.result_type=result_float then print t1.result.fresult
  if t1.result_type=result_string then print t1.result.sresult
endif 
if r=print_mod_empty then print
'waitms(10)
811 end sub

' ------------------- push a variable on the stack. No command for this, a variable is a command

sub do_push
if stackpointer<maxstack then 
  stack(stackpointer)=compiledline(lineptr_e)
  stackpointer+=1
endif
end sub

'-------------------- put

sub do_put			' put  #chn,addr,(amount,(pos))

dim numpar, channel,amount,adr,i,j,r as integer
dim  t1 as expr_result

numpar=compiledline(lineptr_e).result.uresult
if numpar=4  then t1=pop() : pos=converttoint(t1)   else pos=-1
if numpar>=3 then t1=pop() : amount=converttoint(t1) else amount=1
if numpar>=2 then t1=pop() : adr=converttoint(t1)
t1=pop() : channel=converttoint(t1)
getres(j)=0
if pos>=0 then
   i=0: do
   j=0: do    
   if adr<$80000 then block(j)=peek(adr+1024*i+j) else block(j)=pspeek(adr+1024*i+j)
   j=j+1 : loop until j>=1024 orelse 1024*i+j>amount
   put #channel, pos+1,block(0),amount, r : getres(channel)=r
   if 1024*i+j>amount then exit loop
   i=i+1 : loop
else  
   i=0: do
   j=0: do  
   if adr<$80000 then block(j)=peek(adr+1024*i+j) else block(j)=pspeek(adr+1024*i+j)
   j=j+1 : loop until j>=1024 orelse 1024*i+j>amount
   put #channel,,block(0),amount, r : getres(channel)=r
   if 1024*i+j>amount then exit loop
   i=i+1 : loop
endif
end sub  

'-------------------- rad

sub do_rad
trig_coeff=1.0
trig_coeff2=1.0
end sub

'-------------------- rdpin

sub do_rdpin

dim t1 as expr_result

t1=pop()
r=rdpin(converttoint(t1))
t1.result_type=result_uint
t1.result.uresult=4
push t1
end sub

' ----------------  read

function read_next_line() as string
dim readline as string
if dataptr=$7FFFFFFF then return("")
do
 ' print dataptr
  psram.read1(varptr(dataheader),dataptr,36) 
  if dataheader(0)<>$FFFFFFFF then dataptr=dataheader(5)
loop until dataheader(5)=$7FFF_FFFF orelse dataheader(0)=$ffffffff orelse dataheader(8)=token_data
if dataheader(8)=token_data then 
 'print "data found at line "; dataheader(0)
  l=dataheader(2) : j=dataheader(3) : for i=0 to j-1: readline+=chr$(pspeek(l+i)): next i 
  i=instr(1,readline,"data")
  readline=trim$(right$(readline,len(readline)-i-4))  
else
  return ("") 'todo proper err
endif
return readline
end function

sub do_read
dim line$,part$ as string
dim numpar,comma,stringaddr,vartype,esize as ulong
dim t1 as expr_result
dim fval as single
dim args(64) as string
dim i,j,l,cpx,cpy ,qqqqq as integer
dim olddataptr as ulong


numpar=compiledline(lineptr_e).result.uresult
if numpar<1 orelse numpar>64 then print "In read: ";: printerror(39,runheader(0)) : return
i=numpar-1
if readline="" then readline=read_next_line() ': print readline
if readline="" then printerror(55,runheader(0)) :return
j=0
i=numpar-1
do
  do
    comma=instr(1,readline,"'") : if comma>0 then readline=left$(readline,comma-1) ' allows comments in data
    comma=instr(1,readline,",")  
      if comma>0  then 
      part$=left$(readline,comma-1): readline=right$(readline,len(readline)-comma)  
     else 
       part$=trim$(readline) : readline=""
     endif
     
     if part$<>"" then j=j+1
     args(i)=part$  
     i=i-1
    if readline="" then readline=read_next_line() 
  loop until i<0 orelse readline=""
loop until i<0
if j<numpar then printerror(55,runheader(0))

for i=0 to numpar-1
  if isnum(args(i)) and not isint(args(i)) then r=result_float 
  if isint(args(i)) then r=result_int 
  if isdec(args(i)) then r=result_uint 
  if not isnum(args(i)) then 
    r=result_string2
    l=len(args(i))   						' place the literal in the psram
    memtop=(memtop-l-4) and $FFFFFFFC
    pslpoke memtop,l
    for j=1 to l : pspoke memtop+3+j, asc(mid$(args(i),j,1)) : next j
    stringaddr=memtop 
  endif  
  t1=pop() 
  if i>=numpar-j then
    vartype=t1.result.twowords(1)
    select case vartype
      case 0			: esize=12
      case array_no_type	: esize=12
      case array_byte		: esize=1
      case array_ubyte		: esize=1
      case array_short		: esize=2
      case array_ushort	        : esize=2
      case array_long		: esize=4
      case array_ulong		: esize=4
      case array_int64		: esize=8
      case array_uint64		: esize=8
      case array_float		: esize=6 ' dummy, for float
      case array_double		: esize=8
      case array_string		: esize=5 ' dummy, for string
      case else			: esize=12
    end select
    if esize=12 andalso t1.result.uresult<$80000 then
      if r=result_int then lpoke t1.result.uresult, val%(args(i))
      if r=result_uint then lpoke t1.result.uresult, val%(args(i))
      if r=result_float then fval=val(args(i)): lpoke t1.result.uresult,lpeek(varptr(fval))
      if r=result_string2 then lpoke t1.result.uresult,stringaddr
      lpoke t1.result.uresult+8,r
    endif
    if esize=12 andalso t1.result.uresult>=$80000 then
      if r=result_int then pslpoke t1.result.uresult, val%(args(i))
      if r=result_uint then pslpoke t1.result.uresult, val%(args(i))
      if r=result_float then fval=val(args(i)): pslpoke t1.result.uresult,lpeek(varptr(fval))
      if r=result_string2 then pslpoke t1.result.uresult,stringaddr
      pslpoke t1.result.uresult+8,r
    endif
    if esize=5 andalso r=result_string2 then pslpoke t1.result.uresult,stringaddr
    if esize=4 andalso r<>result_string2 then pslpoke t1.result.uresult,val%(args(i))
    if esize=2 andalso r<>result_string2 then psdpoke t1.result.uresult,val%(args(i))
    if esize=1 andalso r<>result_string2 then pspoke t1.result.uresult,val%(args(i))
    if esize=6 andalso r<>result_string2 then fval=val(args(i)): pslpoke t1.result.uresult,lpeek(varptr(fval))
  endif
next i 

end sub

'------------------- release

sub do_release

dim t1 as expr_result
dim channel as integer

t1=pop()
channel=converttoint(t1)
if channel>=0 andalso channel<=7 then lpoke base+64*channel+44,255  
end sub

'------------------- restore

sub do_restore()
dataptr=programstart : readline="" ' reset the data pointer
end sub

'------------------- restorepalette

sub do_restorepalette()
v.restorepalette()
end sub
'------------------- return

sub do_return()
if gosubtop>0 then
  runptr=gosubtable(gosubtop).lineptr
  runptr2=gosubtable(gosubtop).cmdptr
  lineptr_e=lineptr-1
  gosubtop -=1 
endif   
end sub

'------------------- right$

sub do_right

dim t1 as expr_result
dim numpar,arg as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar<>2  then print "right$: "; : printerror(39) : return
t1=pop() : arg=converttoint(t1)
t1=pop(): if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "right$: "; : printerror(15) : return 
t1.result.sresult=right$(t1.result.sresult,arg)
push t1  
end sub

'------------------- rnd

sub do_rnd

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "rnd: "; : printerror(39) : return
if numpar=0 then
  t1.result_type=result_uint
  t1.result.uresult=getrnd()
  push t1
else
  t1=pop()
  if t1.result_type=result_int orelse t1.result_type=result_uint then
'   print " In do_rnd got int  param"
   t1.result.uresult=getrnd() mod t1.result.uresult
   t1.result_type=result_uint   
   push t1  
 else if t1.result_type=result_float then
'   print " In do_rnd got float  param"
   t1.result.fresult=(t1.result.fresult/1048576.0)*(getrnd() mod 1048576)
   t1.result_type=result_float   
   push t1    
  else 
    print "rnd: "; : printerror(40) 
    push t1
  endif  
endif  
end sub

'-------------------- round

sub do_round

dim t1 as expr_result

t1=pop()
t1.result.iresult=converttoint(t1) : t1.result_type=result_int
push t1
end sub

'-------------------- rqpin

sub do_rqpin

dim t1 as expr_result

t1=pop()
r=rqpin(converttoint(t1))
t1.result_type=result_uint
t1.result.uresult=4
push t1
end sub

' ------------------ run

sub do_run

dim numpar as integer
dim r_lineptr_e, r_runptr, r_runptr2 as ulong

r_lineptr_e=lineptr_e
r_runptr=runptr
r_runptr2=runptr2

numpar=compiledline(lineptr_e).result.uresult
if numpar=1 then do_load ' todo also run linenum so check the param
runptr=programstart : runptr2=0 : oldrunptr=-1 
dataptr=programstart : readline="" ' reset the data pointer
if inrun>0 then 
  psram.read1(varptr(runheader),runptr,24)  
  return
endif
inrun=1
psram.read1(varptr(runheader),runptr,24) 
if runheader(0)=$FFFFFFFF then inrun=0: return 
do 
  if runptr<>oldrunptr then
    psram.read1(varptr(runheader),runptr,24) 					     
    psram.read1(varptr(compiledline(0)),runptr+2*compiledslot,runheader(2)-runptr)    
    lineptr=((runheader(2)-runptr)/compiledslot)-3  					 
    oldrunptr=runptr	 	 							 
  endif
  runptr=runheader(5)	  							 
  runptr2=execute_line(runptr2)										 
loop until runptr=$7FFF_FFFF orelse ((kbm.keystate(kbm.KEY_LCTRL) orelse kbm.keystate(kbm.KEY_RCTRL)) andalso kbm.keystate(kbm.KEY_C)) orelse inrun=2
  ''do whatever kbm.peek_latest_key()=$106 
if runptr<>$7FFF_FFFF andalso inrun=1 then 
  print: print "Stopped at line ";runheader(0) 
endif
inrun=0
lineptr_e=r_lineptr_e
runptr=r_runptr
runptr2=r_runptr2
v.setspritesize(17,8,16)
v.setspritesize(16,32,32)
end sub

' ------------------ save

sub do_save                        
dim t1 as expr_result
dim i,numpar as integer
dim header(5) as ulong
dim linebuf(125) as ubyte
dim saveline$ as string
dim saveptr as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>0 then t1=pop() else t1.result.sresult=loadname : t1.result_type=result_string 
if pslpeek(programstart)=$FFFFFFFF then printerror(27): return
if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult): t1.result_type=result_string
if t1.result_type=result_string then
  if t1.result.sresult="" then t1.result.sresult=loadname else loadname=t1.result.sresult
  close #9: open currentdir$+"/"+t1.result.sresult for output as #9
  saveptr=programstart
  do
    psram.read1(varptr(header(0)),saveptr,24)
    psram.read1(varptr(linebuf(0)),header(2),header(3)) 
    saveline$="" : for i=1 to header(3) : saveline$=saveline$+chr$(linebuf(i-1)) : next i 
    print #9, saveline$
    saveptr=header(5)
  loop until header(5)=$7FFFFFFF
  close #9  
  print "Saved as ";currentdir$+"/"+loadname
endif  
end sub

' ------------------ setamode

sub do_setamode

dim t1,t2 as expr_result

t1=pop() 
t2=pop()  
channels(converttoint(t2)).amode=converttoint(t1)
end sub


' ------------------ setcolor

sub do_setcolor

dim t1 as expr_result
dim r,g,b,c,numpar as integer

numpar=compiledline(lineptr_e).result.uresult

if numpar=4 then
  t1=pop(): b=converttoint(t1)
  t1=pop(): g=converttoint(t1)
  t1=pop(): r=converttoint(t1)
  t1=pop(): c=converttoint(t1)
else if numpar=2 then
  t1=pop(): c=converttoint(t1)
  b=c and 255
  g=(c shr 8) and 255
  r=(c shr 16) and 255
  t1=pop(): c=converttoint(t1)
else
  print "setcolor: "; : printerror(39,runheader(0)) : return  
endif
v.setcolor(c,r,g,b)

end sub

' ------------------ setdelay

sub do_setdelay

dim t1,t2 as expr_result

t1=pop() 
t2=pop()  
channels(converttoint(t2)).delay=converttoint(t1)
end sub

' ------------------ setenv

sub do_setenv

dim t1,t2 as expr_result

t1=pop() 
t2=pop() 
channels(converttoint(t2)).env=converttoint(t1)
end sub

' ------------------ setlen

sub do_setlen

dim t1,t2 as expr_result

t1=pop()  
t2=pop()  
channels(converttoint(t2)).length=converttofloat(t1)
end sub

' ------------------ setpan

sub do_setpan

dim t1,t2 as expr_result

t1=pop() 'value
t2=pop() ' pin
channels(converttoint(t2)).pan=converttofloat(t1)
end sub

' ------------------ setsustain

sub do_setsustain

dim t1,t2 as expr_result

t1=pop() 
t2=pop() 
channels(converttoint(t2)).sus=converttoint(t1)
end sub

' ------------------ setvol

sub do_setvol

dim t1,t2 as expr_result

t1=pop()  
t2=pop()  
channels(converttoint(t2)).vol=converttofloat(t1)
end sub

' ------------------ setwave

sub do_setwave

dim t1,t2 as expr_result

t1=pop() 
t2=pop() 
channels(converttoint(t2)).wave=converttoint(t1)
end sub

' ------------------ shutup

sub do_shutup

dim t1 as expr_result
dim channel,i,numpar as integer

numpar=compiledline(lineptr_e).result.uresult
if numpar=0 then
  for i=0 to 7 : dpoke base+64*i+20,0 : next i
else   
  t1=pop()
  channel=converttoint(t1) mod 8
  dpoke base+64*channel+20,0
endif  
end sub

' ------------------ sin

sub do_sin

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "sin: "; : printerror(39) : return
t1=pop()
t1.result.fresult=sin(trig_coeff*converttofloat(t1))
t1.result_type=result_float   
push t1  
end sub

' ------------------ skip
' A helper token for on-gosub: skips the rest of gosubs

sub do_skip

lineptr_e=compiledline(lineptr_e).result.uresult-1
end sub

' ------------------ sprite

sub do_sprite

dim t1,t2,t3 as expr_result 
dim a1,a2,a3 as integer

t3=pop()
t2=pop()
t1=pop()
a1=converttoint(t1) : a2=converttoint(t2) : a3=converttoint(t3)
v.setspritepos(a1,a2,a3)
end sub

' ------------------ sqr

sub do_sqr

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "sqr: "; : printerror(39) : return
t1=pop()
t1.result.fresult=sqr(converttofloat(t1))
t1.result_type=result_float   
push t1  
end sub

' ------------------ stick

sub do_stick

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "stick: "; : printerror(39) : return
if numpar=0 then t1.result.uresult=stick(0) : t1.result_type=result_uint : push t1 : return
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    t1.result.uresult=stick(q) : t1.result_type=result_uint : push t1 : return 
  else 
     printerror(41) : return
  endif
else
  printerror(41) 
endif    
end sub


sub do_str

dim t1 as expr_result
dim numpar as ulong
dim s as string

numpar=compiledline(lineptr_e).result.uresult
if numpar<>1 then print "str$: "; : printerror(39) : return

t1=pop()
if t1.result_type=result_int then 
  s=str$(t1.result.iresult)
else if t1.result_type=result_uint then 
  s=str$(t1.result.uresult)
else if t1.result_type=result_float then 
  s=str$(t1.result.fresult)
else if t1.result_type=result_string2 then 
  s=convertstring(t1.result.uresult)
else if t1.result_type=result_string then 
  s=t1.result.sresult
endif
    t1.result.sresult=s : t1.result_type=result_string : push t1 : return 
  
end sub
' ------------------ strig

sub do_strig

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 then print "strig: "; : printerror(39) : return
if numpar=0 then t1.result.uresult=strig(0) : t1.result_type=result_uint : push t1 : return
t1=pop()
if t1.result_type=result_int orelse t1.result_type=result_uint then  
  q=t1.result.uresult
  if q<7 then 
    t1.result.uresult=strig(q) : t1.result_type=result_uint : push t1 : return 
  else 
     printerror(41) : return
  endif
 else
  printerror(41) 
endif    
end sub

' ------------------ tan

sub do_tan

dim t1 as expr_result
dim numpar as ulong

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "tan: "; : printerror(39) : return
t1=pop()
t1.result.fresult=tan(trig_coeff*converttofloat(t1))
t1.result_type=result_float   
push t1  
end sub

' ------------------ val

sub do_val

dim t1 as expr_result
dim numpar,arg,num as ulong
dim ival as integer
dim fval as single

numpar=compiledline(lineptr_e).result.uresult
if numpar>1 orelse numpar=0 then print "val: "; : printerror(39) : return
t1=pop() : if t1.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult) : t1.result_type=result_string
if t1.result_type<>result_string then print "val: "; : printerror(15) : return 
if left$(t1.result.sresult,1)="$" then t1.result.sresult="&h"+right$(t1.result.sresult,len(t1.result.sresult)-1)
if left$(t1.result.sresult,1)="%" then t1.result.sresult="&b"+right$(t1.result.sresult,len(t1.result.sresult)-1)
fval=val(t1.result.sresult)
ival=val%(t1.result.sresult)
if fval=ival then
  t1.result.iresult=ival
  t1.result_type=result_int
else
  if fval=0 andalso ival<>0 then
    t1.result.iresult=ival
    t1.result_type=result_int
  else  
    t1.result.fresult=fval
    t1.result_type=result_float  
  endif  
endif
push t1  
end sub

' ------------------ waitclock

sub do_waitclock
waitclock
end sub

' ------------------ waitms

sub do_waitms
dim t1 as expr_result
dim t as integer

t1=pop()  
t=converttoint(t1)
if t<0 then return
if t < 1000 then 
  waitms(t)
else
  for i=1 to t/1000
    waitms(1000)
    if ((kbm.keystate(kbm.KEY_LCTRL) orelse kbm.keystate(kbm.KEY_RCTRL)) andalso kbm.keystate(kbm.KEY_C)) then return
  next i
  waitms(t mod 1000)
endif
end sub

' ------------------ waitvbl

sub do_waitvbl
waitvbl
end sub

' ------------------ wrpin

sub do_wrpin
dim t1,t2 as expr_result
t1=pop() 'value
t2=pop() ' pin
wrpin(converttoint(t2), converttoint(t1))
end sub

' ------------------ wxpin

sub do_wxpin
dim t1,t2 as expr_result
t1=pop() 'value
t2=pop() ' pin
wxpin(converttoint(t2), converttoint(t1))
end sub

' ------------------ wypin

sub do_wypin
dim t1,t2 as expr_result
t1=pop() 'value
t2=pop() ' pin
wypin(converttoint(t2), converttoint(t1))
end sub








'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------- Runtime variable processing--------------------------------------------------------------------- 
'----------------------------------------------------------------------------------------------------------------------------------------


'------------------ Assign

sub do_assign

dim t1,t2 as expr_result
dim varnum,i,numpar,arrptr,arrtype,esize,arridx as ulong
dim arrid as ulong(2)

varnum=compiledline(lineptr_e).result.uresult ' numpar is in twowords(1), pop numpar 
if variables(varnum).vartype<array_no_type then 
  t1=pop() 
  variables(varnum).value=t1.result : variables(varnum).vartype=t1.result_type 
  if variables(varnum).vartype<>result_string2 then return
  variables(varnum).value.sresult=convertstring(variables(varnum).value.uresult)
  variables(varnum).vartype=result_string
  return
endif
for i=0 to 2 : arrid(i)=0 : next i
numpar=compiledline(lineptr_e).result.twowords(1) 
t1=pop() ' var value
if numpar>0 then
  for i=numpar to 1 step -1
    t2=pop()
    arrid(i-1)=converttoint(t2) ': print "in do_assign arrid(";i;")=";arrid(i-1)
  next i
endif  
'print "In do_assign value to assign=";t1.result.uresult, "type to assign=";t1.result_type
arrptr=variables(varnum).value.uresult ': print  "In do_assign arrptr="; arrptr
arrtype=pslpeek(arrptr) and 65535 ': print   "In do_assign arrtype="; arrtype
esize=pspeek(arrptr+2)
if arrid(0)>=pslpeek(arrptr+4) orelse arrid(1)>=pslpeek(arrptr+8) orelse arrid(2)>=pslpeek(arrptr+12) then printerror(49) : return

arridx=arrptr+16+esize*(arrid(0)+pslpeek(arrptr+4)*arrid(1)+pslpeek(arrptr+8)*pslpeek(arrptr+4)*arrid(2))
select case arrtype
      case array_no_type 	: psram.write(varptr(t1),arridx,12)  ': print "in do_assign, write at "; arridx
      case array_byte		: pspoke(arridx,t1.result.uresult)   'todo: signed
      case array_ubyte		: pspoke(arridx,t1.result.uresult)
      case array_short		: pspoke(arridx,t1.result.uresult) : pspoke(arridx+1,t1.result.uresult shr 8) ' todo :signed
      case array_ushort		: pspoke(arridx,t1.result.uresult) : pspoke(arridx+1,t1.result.uresult shr 8)
      case array_long		: pslpoke(arridx,t1.result.uresult)
      case array_ulong		: pslpoke(arridx,t1.result.uresult)
      case array_int64		: pslpoke(arridx,t1.result.uresult) ' dummy filler, not supported
      case array_uint64	        : pslpoke(arridx,t1.result.uresult)
      case array_float		: pslpoke(arridx,t1.result.uresult)
      case array_double         : pslpoke(arridx,t1.result.uresult)
      case array_string	        : pslpoke(arridx,t1.result.uresult)
      case else		: printerror(50) : return
    end select
end sub


'------------------ getvar.  Read a variable and push it to the RPN stack

sub do_getvar

dim t1 as expr_result
dim arrptr,vartype,numpar,esize,dim1,dim2,dim3,i1,i2,i3,varidx as ulong
if compiledline(lineptr_e).result.twowords(1)=0 then
  t1.result=variables(compiledline(lineptr_e).result.uresult).value
  t1.result_type=variables(compiledline(lineptr_e).result.uresult).vartype
  if t1.result_type<array_no_type then push t1 : return else goto 2100
endif  
' if we are here, this is the array
2100
arrptr=variables(compiledline(lineptr_e).result.uresult).value.uresult
vartype=pslpeek(arrptr) and 65535
numpar=compiledline(lineptr_e).result.twowords(1) ':print "in do_getvar numpar=",numpar
esize=pspeek(arrptr+2)
dim1=pslpeek(arrptr+4) ' todo :do one read from psram for speed
dim2=pslpeek(arrptr+8) ' todo :do one read from psram for speed
dim3=pslpeek(arrptr+12) ' todo :do one read from psram for speed
if numpar>2 then t1=pop() : i3=converttoint(t1)   else i3=0 
if numpar>1 then t1=pop() : i2=converttoint(t1)   else i2=0 
if numpar>0 then t1=pop() : i1=converttoint(t1)   else i1=0 

varidx=arrptr+16+(i1+i2*dim1+i3*dim1*dim2)*esize 

select case vartype
  case array_no_type 	:  psram.read1(varptr(t1),varidx,12) ':print "in do_getvar notype array=",t1.result_type,t1.result.twowords(0),t1.result.twowords(1),pslpeek(varidx),pslpeek(varidx+4),pslpeek(varidx+8) 
  case array_byte	:  t1.result_type=result_int: t1.result.iresult=pspeek(varidx) : if t1.result.uresult>=128 then t1.result.uresult=$FFFFFF00 or t1.result.uresult
  case array_ubyte	:  t1.result_type=result_uint : t1.result.uresult=pspeek(varidx) 
  case array_short	:  t1.result_type=result_int : t1.result.uresult=pslpeek(varidx) and 65535 : if t1.result.uresult>=32768 then t1.result.uresult=$FFFF00 or t1.result.uresult
  case array_ushort	:  t1.result_type=result_uint : t1.result.uresult=pslpeek(varidx) and 65535  
  case array_long	:  t1.result_type=result_int : t1.result.uresult=pslpeek(varidx)
  case array_ulong	:  t1.result_type=result_uint : t1.result.uresult=pslpeek(varidx)
  case array_int64	:  t1.result_type=result_error : t1.result.uresult=48	
  case array_uint64	:  t1.result_type=result_error : t1.result.uresult=48	
  case array_float	:  t1.result_type=result_float : t1.result.uresult=pslpeek(varidx)
  case array_double	:  t1.result_type=result_error : t1.result.uresult=48	
  case array_string	:  t1.result_type=result_string : t1.result.uresult=pslpeek(varidx) : if t1.result.uresult>=$80000 then t1.result_type=result_string2 ' todo a proper memory map
end select
push t1   
end sub

'------------------ getaddr.  Get a pointer to a variable and push it to the RPN stack

sub do_getaddr

dim t1 as expr_result
dim arrptr,vartype,numpar,esize,dim1,dim2,dim3,i1,i2,i3,varidx as ulong
'print "in do_getvar, compiledline(lineptr_e) rt,ttw0,tw1="; compiledline(lineptr_e).result_type, compiledline(lineptr_e).result.twowords(0),compiledline(lineptr_e).result.twowords(1)
if compiledline(lineptr_e).result.twowords(1)=0 then
  t1.result_type=variables(compiledline(lineptr_e).result.uresult).vartype
   if t1.result_type>=array_no_type then goto 2200
  t1.result.uresult=varptr(variables(compiledline(lineptr_e).result.uresult).value)
  t1.result.twowords(1)=variables(compiledline(lineptr_e).result.uresult).vartype
  t1.result_type=result_uint
  push t1 : return
endif  
' if we are here, this is the array
2200 
arrptr=variables(compiledline(lineptr_e).result.uresult).value.uresult
t1.result.twowords(1)=variables(compiledline(lineptr_e).result.uresult).vartype
vartype=pslpeek(arrptr) and 65535
numpar=compiledline(lineptr_e).result.twowords(1) ':print "in do_getvar numpar=",numpar
esize=pspeek(arrptr+2)
dim1=pslpeek(arrptr+4) ' todo :do one read from psram for speed
dim2=pslpeek(arrptr+8) ' todo :do one read from psram for speed
dim3=pslpeek(arrptr+12) ' todo :do one read from psram for speed
if numpar>2 then t1=pop() : i3=converttoint(t1)   else i3=0 
if numpar>1 then t1=pop() : i2=converttoint(t1)   else i2=0 
if numpar>0 then t1=pop() : i1=converttoint(t1)   else i1=0 
'print "dim1=",dim1,"dim2=",dim2,"dim3=",dim3, "esize=",esize, "i1=", i1,"i2=", i2, "i3=", i3
if numpar>0 then
  varidx=arrptr+16+(i1+i2*dim1+i3*dim1*dim2)*esize ': print "arrptr=",arrptr,"varidx=",varidx,"memtop=",memtop,"bufptr=",v.buf_ptr
  t1.result_type=result_uint : t1.result.uresult=varidx 
else
  t1.result_type=result_uint : t1.result.uresult=arrptr
endif  
push t1   
end sub



'----------------------------------------------------------------------------------------------------------------------------------------
'--------------------------------------- Operators ------------------------------------------------------------------------------------- 
'----------------------------------------------------------------------------------------------------------------------------------------

'--------------------------------- AND 

sub do_and 

dim t1,t2 as expr_result

t2=pop()
t1=pop()
if t1.result_type=result_int then t1.result.uresult=cast(ulong,t1.result.iresult) : t1.result_type=result_uint
if t2.result_type=result_int then t2.result.uresult=cast(ulong,t2.result.iresult) : t2.result_type=result_uint
if t1.result_type=result_string orelse t2.result_type=result_string orelse t1.result_type=result_float orelse t2.result_type=result_float then t1.result.uresult=6: t1.result_type=result_error: goto 1060
t1.result.uresult=t1.result.uresult and t2.result.uresult : goto 1060
t1.result.uresult=7 : t1.result_type=result_error
1060 push t1
end sub

'--------------------------------- DIV (integer divide)

sub do_div 

dim t1,t2 as expr_result  ' todo: return error at attempting divide by zero

t2=pop()
t1=pop()
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=10: t1.result_type=result_error: goto 1090
if t1.result_type=result_float then t1.result_type=result_int : t1.result.iresult=cast(integer,t1.result.fresult)
if t2.result_type=result_float then t2.result_type=result_int : t2.result.iresult=cast(integer,t2.result.fresult)
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult/=t2.result.uresult :goto 1090
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.iresult=t1.result.uresult/t2.result.iresult: t1.result_type=result_int :goto 1090
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.iresult/=t2.result.uresult :goto 1090
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.iresult=t1.result.iresult/t2.result.iresult: goto 1090
t1.result.uresult=11 : t1.result_type=result_error 
1090 push t1
end sub

'--------------------------------- equal (=)

sub do_eq

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult=t2.result.sresult) : goto 1150
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult=t2.result.fresult) : goto 1150
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult=t2.result.iresult) : goto 1150
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult=t2.result.uresult) : goto 1150
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult=t2.result.fresult) : goto 1150
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult=t2.result.iresult) : goto 1150
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult=t2.result.uresult) : goto 1150
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult=t2.result.fresult) : goto 1150
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult=t2.result.iresult) : goto 1150
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult=t2.result.uresult) : goto 1150
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)=t2.result.sresult):goto 1150
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult=convertstring(t2.result.uresult)) :goto 1150
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)=convertstring(t2.result.uresult)) :goto 1150
t1.result.uresult=0: if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
1150 t1.result_type=result_int 
push t1
end sub

'--------------------------------- fdiv (/) - float divide

sub do_fdiv 

dim t1,t2 as expr_result  ' todo: return error at attempting divide by zero

t2=pop()
t1=pop()
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=10: t1.result_type=result_error: goto 1100
if t1.result_type=result_int then t1.result_type=result_float : t1.result.fresult=cast(single,t1.result.iresult) 
if t1.result_type=result_uint then t1.result_type=result_float : t1.result.fresult=cast(single,t1.result.uresult)
if t2.result_type=result_int then t2.result_type=result_float : t2.result.fresult=cast(single,t2.result.iresult) 
if t2.result_type=result_uint then t2.result_type=result_float : t2.result.fresult=cast(single,t2.result.uresult) 
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.fresult/=t2.result.fresult: goto 1100
t1.result.uresult=11 : t1.result_type=result_error
1100 push t1
end sub

'--------------------------------- greater or equal (>=)

sub do_ge

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult>=t2.result.sresult) : goto 1180
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult>=t2.result.fresult) : goto 1180
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult>=t2.result.iresult) : goto 1180
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult>=t2.result.uresult) : goto 1180
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult>=t2.result.fresult) : goto 1180
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult>=t2.result.iresult) : goto 1180
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult>=t2.result.uresult) : goto 1180
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult>=t2.result.fresult) : goto 1180
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult>=t2.result.iresult) : goto 1180
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult>=t2.result.uresult) : goto 1180
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)>=t2.result.sresult):goto 1180
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult>=convertstring(t2.result.uresult)) :goto 1180
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)>=convertstring(t2.result.uresult)) :goto 1180
t1.result.uresult=0: if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
1180 t1.result_type=result_int : if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
push t1
end sub

'--------------------------------- greater than (>)

sub do_gt

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult>t2.result.sresult) : goto 1160
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult>t2.result.fresult) : goto 1160
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult>t2.result.iresult) : goto 1160
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult>t2.result.uresult) : goto 1160
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult>t2.result.fresult) : goto 1160
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult>t2.result.iresult) : goto 1160
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult>t2.result.uresult) : goto 1160
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult>t2.result.fresult) : goto 1160
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult>t2.result.iresult) : goto 1160
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult>t2.result.uresult) : goto 1160
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)>t2.result.sresult):goto 1160
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult>convertstring(t2.result.uresult)) :goto 1160
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)>convertstring(t2.result.uresult)) :goto 1160
t1.result.uresult=0
1160 t1.result_type=result_int : if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
push t1
end sub

'--------------------------------- less or equal (<=)

sub do_le

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult<=t2.result.sresult) : goto 1190
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult<=t2.result.fresult) : goto 1190
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult<=t2.result.iresult) : goto 1190
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult<=t2.result.uresult) : goto 1190
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult<=t2.result.fresult) : goto 1190
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult<=t2.result.iresult) : goto 1190
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult<=t2.result.uresult) : goto 1190
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult<=t2.result.fresult) : goto 1190
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult<=t2.result.iresult) : goto 1190
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult<=t2.result.uresult) : goto 1190
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)<=t2.result.sresult):goto 1190
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult<=convertstring(t2.result.uresult)) :goto 1190
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)<=convertstring(t2.result.uresult)) :goto 1190
t1.result.uresult=0: if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
1190 t1.result_type=result_int 
push t1
end sub

'--------------------------------- less than (<)

sub do_lt

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult<t2.result.sresult) : goto 1170
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult<t2.result.fresult) : goto 1170
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult<t2.result.iresult) : goto 1170
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult<t2.result.uresult) : goto 1170
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult<t2.result.fresult) : goto 1170
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult<t2.result.iresult) : goto 1170
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult<t2.result.uresult) : goto 1170
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult<t2.result.fresult) : goto 1170
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult<t2.result.iresult) : goto 1170
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult<t2.result.uresult) : goto 1170
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)<t2.result.sresult):goto 1170
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult<convertstring(t2.result.uresult)) :goto 1170
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)<convertstring(t2.result.uresult)) :goto 1170
t1.result.uresult=0: if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
1170 t1.result_type=result_int 
push t1
end sub

'--------------------------------- minus (-)

sub do_minus

dim t1,t2 as expr_result

t2=pop()
t1=pop()
if t1.result_type=result_uint andalso t2.result_type=result_uint then 
    if t2.result.uresult<t1.result.uresult then  t1.result.uresult-=t2.result.uresult : goto 1050 else t1.result.iresult=t1.result.uresult-t2.result.uresult : t1.result_type=result_int : goto 1050
    endif
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.iresult=t1.result.uresult-t2.result.iresult: t1.result_type=result_int :goto 1050
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.uresult)-t2.result.fresult: t1.result_type=result_float :goto 1050
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.iresult-=t2.result.uresult:goto 1050
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.iresult-=t2.result.iresult:goto 1050
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.iresult)-t2.result.fresult: t1.result_type=result_float :goto 1050
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.fresult=t1.result.fresult-cast(single,t2.result.uresult) :goto 1050
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.fresult=t1.result.fresult-cast(single,t2.result.iresult) :goto 1050
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.fresult-=t2.result.fresult:goto 1050
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=3: t1.result_type=result_error: goto 1050
t1.result.uresult=5 : t1.result_type=result_error 
1050 push t1
end sub

'--------------------------------- negative (-), one argument negative

sub do_negative

dim t1 as expr_result

t1=pop()
if t1.result_type=result_int then 
  t1.result.iresult=-t1.result.iresult
else if t1.result_type=result_uint then 
  t1.result.iresult=-t1.result.uresult : t1.result_type=result_int
else if t1.result_type=result_float then 
  t1.result.fresult=-t1.result.fresult
else 
  t1.result_type=result_error : t1.result.uresult=40
endif
push t1
end sub

'--------------------------------- MOD (modulo)

sub do_mod 

dim t1,t2 as expr_result  

t2=pop()
t1=pop()
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=10: t1.result_type=result_error: goto 1110
if t1.result_type=result_float then t1.result_type=result_int : t1.result.iresult=cast(integer,t1.result.fresult)
if t2.result_type=result_float then t2.result_type=result_int : t2.result.iresult=cast(integer,t2.result.fresult)
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=t1.result.uresult mod t2.result.uresult :goto 1110
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.iresult=t1.result.uresult mod t2.result.iresult: t1.result_type=result_int :goto 1110
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.iresult=t1.result.iresult mod t2.result.uresult :goto 1110
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.iresult=t1.result.iresult mod t2.result.iresult: goto 1110
t1.result.uresult=11 : t1.result_type=result_error
1110 push t1
end sub

'--------------------------------- mul (*)

sub do_mul

dim t1,t2 as expr_result

t2=pop()
t1=pop()
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult*=t2.result.uresult :goto 1080
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.iresult=t1.result.uresult*t2.result.iresult: t1.result_type=result_int :goto 1080
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.uresult)*t2.result.fresult: t1.result_type=result_float :goto 1080
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.iresult*=t2.result.uresult:goto 1080
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.iresult*=t2.result.iresult:goto 1080
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.iresult)*t2.result.fresult: t1.result_type=result_float :goto 1080
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.fresult=t1.result.fresult*cast(single,t2.result.uresult) :goto 1080
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.fresult=t1.result.fresult*cast(single,t2.result.iresult) :goto 1080
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.fresult*=t2.result.fresult:goto 1080
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=8: t1.result_type=result_error: goto 1080
t1.result.uresult=9 : t1.result_type=result_error 
1080 push t1
end sub

'--------------------------------- not equal (<>)

sub do_ne

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.uresult=(t1.result.sresult<>t2.result.sresult) : goto 1192
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.uresult=(t1.result.fresult<>t2.result.fresult) : goto 1192
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.uresult=(t1.result.fresult<>t2.result.iresult) : goto 1192
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.fresult<>t2.result.uresult) : goto 1192
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.uresult=(t1.result.iresult<>t2.result.fresult) : goto 1192
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.uresult=(t1.result.iresult<>t2.result.iresult) : goto 1192
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.iresult<>t2.result.uresult) : goto 1192
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.uresult=(t1.result.uresult<>t2.result.fresult) : goto 1192
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.uresult=(t1.result.uresult<>t2.result.iresult) : goto 1192
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult=(t1.result.uresult<>t2.result.uresult) : goto 1192
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.uresult=(convertstring(t1.result.uresult)<>t2.result.sresult):goto 1192
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.uresult=(t1.result.sresult<>convertstring(t2.result.uresult)) :goto 1192
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.uresult=(convertstring(t1.result.uresult)<>convertstring(t2.result.uresult)) :goto 1192
t1.result.uresult=0: if t1.result.uresult<>0 then t1.result.uresult=1 ' for Atari Basic on.. goto compatibility
1192 t1.result_type=result_int 
push t1
end sub

'--------------------------------- OR

sub do_or 

dim t1,t2 as expr_result

t2=pop()
t1=pop()
if t1.result_type=result_int then t1.result.uresult=cast(ulong,t1.result.iresult) : t1.result_type=result_uint
if t2.result_type=result_int then t2.result.uresult=cast(ulong,t2.result.iresult) : t2.result_type=result_uint
if t1.result_type=result_string orelse t2.result_type=result_string orelse t1.result_type=result_float orelse t2.result_type=result_float then t1.result.uresult=6: t1.result_type=result_error: goto 1070
t1.result.uresult=t1.result.uresult or t2.result.uresult : goto 1070
t1.result.uresult=7 : t1.result_type=result_error 
1070 push t1
end sub

'--------------------------------- plus (+)

sub do_plus 

dim t1,t2 as expr_result

t2=pop()
t1=pop()
if t1.result_type=result_uint andalso t2.result_type=result_uint then t1.result.uresult+=t2.result.uresult :goto 1040
if t1.result_type=result_uint andalso t2.result_type=result_int then t1.result.iresult=t1.result.uresult+t2.result.iresult: t1.result_type=result_int :goto 1040
if t1.result_type=result_uint andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.uresult)+t2.result.fresult: t1.result_type=result_float :goto 1040
if t1.result_type=result_int andalso t2.result_type=result_uint then t1.result.iresult+=t2.result.uresult: goto 1040
if t1.result_type=result_int andalso t2.result_type=result_int then t1.result.iresult+=t2.result.iresult:goto 1040
if t1.result_type=result_int andalso t2.result_type=result_float then t1.result.fresult=cast(single,t1.result.iresult)+t2.result.fresult: t1.result_type=result_float :goto 1040
if t1.result_type=result_float andalso t2.result_type=result_uint then t1.result.fresult=t1.result.fresult+cast(single,t2.result.uresult) :goto 1040
if t1.result_type=result_float andalso t2.result_type=result_int then t1.result.fresult=t1.result.fresult+cast(single,t2.result.iresult) :goto 1040
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.fresult+=t2.result.fresult:goto 1040
if t1.result_type=result_string andalso t2.result_type<>result_string then t1.result.uresult=2 :t1.result_type=result_error:goto 1040
if t2.result_type=result_string andalso t1.result_type<>result_string then t1.result.uresult=2 :t1.result_type=result_error:goto 1040
if t1.result_type=result_string andalso t2.result_type=result_string then t1.result.sresult=t1.result.sresult+t2.result.sresult :goto 1040
if t1.result_type=result_string2 andalso t2.result_type=result_string then t1.result.sresult=convertstring(t1.result.uresult)+t2.result.sresult : t1.result_type=result_string:goto 1040
if t1.result_type=result_string andalso t2.result_type=result_string2 then t1.result.sresult=t1.result.sresult+convertstring(t2.result.uresult) :goto 1040
if t1.result_type=result_string2 andalso t2.result_type=result_string2 then t1.result.sresult=convertstring(t1.result.uresult)+convertstring(t2.result.uresult) : t1.result_type=result_string :goto 1040
t1.result.uresult=4 : t1.result_type=result_error
1040 push t1
end sub

'--------------------------------- power (^)

sub do_power 

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_string orelse t2.result_type=result_string then t1.result.uresult=12: t1.result_type=result_error: goto 1140
if t1.result_type=result_int then t1.result_type=result_float : t1.result.fresult=cast(single,t1.result.iresult) 
if t1.result_type=result_uint then t1.result_type=result_float : t1.result.fresult=cast(single,t1.result.uresult) 
if t2.result_type=result_int then t2.result_type=result_float : t2.result.fresult=cast(single,t2.result.iresult) 
if t2.result_type=result_uint then t2.result_type=result_float : t2.result.fresult=cast(single,t2.result.uresult) 
if t1.result_type=result_float andalso t2.result_type=result_float then t1.result.fresult=t1.result.fresult^t2.result.fresult: goto 1140
t1.result.uresult=13 : t1.result_type=result_error 
1140 push t1
end sub

'--------------------------------- SHL

sub do_shl 

dim t1,t2 as expr_result  

t2=pop()
t1=pop()
if t1.result_type=result_int then t1.result.uresult=cast(ulong,t1.result.iresult) : t1.result_type=result_uint
if t2.result_type=result_int then t2.result.uresult=cast(ulong,t2.result.iresult) : t2.result_type=result_uint
if t1.result_type=result_string orelse t2.result_type=result_string orelse t1.result_type=result_float orelse t2.result_type=result_float then t1.result.uresult=6: t1.result_type=result_error: goto 1120
t1.result.uresult=t1.result.uresult shl t2.result.uresult : goto 1120
t1.result.uresult=7 : t1.result_type=result_error 
1120 push t1
end sub

'--------------------------------- SHR

sub do_shr 

dim t1,t2 as expr_result 

t2=pop()
t1=pop()
if t1.result_type=result_int then t1.result.uresult=cast(ulong,t1.result.iresult) : t1.result_type=result_uint
if t2.result_type=result_int then t2.result.uresult=cast(ulong,t2.result.iresult) : t2.result_type=result_uint
if t1.result_type=result_string orelse t2.result_type=result_string orelse t1.result_type=result_float orelse t2.result_type=result_float then t1.result.uresult=6: t1.result_type=result_error: goto 1130
t1.result.uresult=t1.result.uresult shr t2.result.uresult : goto 1130
t1.result.uresult=7 : t1.result_type=result_error
1130 push t1
end sub

'--------------------------- THE END OF THE MAIN PROGRAM ------------------------------------------------------

''----------------------------------------------------------------------------------------------------
''------------------ Initialization procedures and helper procedures ---------------------------------
''----------------------------------------------------------------------------------------------------

''--------------------------- Command function pointers

sub init_commands

for i=0 to 255 : commands(i)=@do_no_command : next i
commands(token_plus)=@do_plus 
commands(token_minus)=@do_minus 
commands(token_or)=@do_or 
'commands(token_xor)=@do_xor    ' TODO  !!!!!
commands(token_mul)=@do_mul
commands(token_fdiv)=@do_fdiv
commands(token_and)=@do_and
commands(token_div)=@do_div
commands(token_mod)=@do_mod
commands(token_shl)=@do_shl
commands(token_shr)=@do_shr
commands(token_power)=@do_power
commands(fun_getvar)=@do_getvar
commands(fun_pushu)=@do_push 
commands(fun_pushi)=@do_push  
commands(fun_pushf)=@do_push  
commands(fun_pushs)=@do_push  
commands(fun_pushs2)=@do_push  
commands(fun_assign)=@do_assign
commands(token_channel)=@do_push
commands(print_mod_empty)=@do_push
commands(print_mod_comma)=@do_push
commands(print_mod_semicolon)=@do_push
commands(token_cls)=@do_cls
commands(token_new)=@do_new
commands(token_plot)=@do_plot
commands(token_draw)=@do_draw
commands(token_print)=@do_print
commands(token_circle)=@do_circle
commands(token_fcircle)=@do_fcircle
commands(token_box)=@do_box
commands(token_frame)=@do_frame
commands(token_color)=@do_color
commands(token_for)=@do_for
commands(token_next)=@do_next
commands(token_list)=@do_list
commands(token_run)=@do_run
commands(token_error)=@do_error
commands(token_fast_goto)=@do_fast_goto
commands(token_find_goto)=@do_find_goto
commands(token_slow_goto)=@do_slow_goto
commands(fun_converttoint)=@do_nothing
commands(token_save)=@do_save
commands(token_load)=@do_load
commands(token_pinwrite)=@do_pinwrite
commands(token_waitms)=@do_waitms
commands(token_waitvbl)=@do_waitvbl
commands(token_if)=@do_if
commands(token_else)=@do_else
commands(token_then)=@do_nothing
commands(token_eq)=@do_eq
commands(token_ge)=@do_ge
commands(token_le)=@do_le
commands(token_gt)=@do_gt
commands(token_lt)=@do_lt
commands(token_ne)=@do_ne
commands(token_rnd)=@do_rnd
commands(token_brun)=@do_brun
commands(token_beep)=@do_beep
commands(token_dir)=@do_dir
commands(token_paper)=@do_paper
commands(token_ink)=@do_ink
commands(token_font)=@do_font
commands(token_mode)=@do_mode
commands(token_find_goto)=@do_find_goto
commands(token_mouse)=@do_mouse
commands(token_gettime)=@do_gettime
commands(token_cursor)=@do_cursor
commands(token_click)=@do_click
commands(token_mousex)=@do_mousex
commands(token_mousey)=@do_mousey
commands(token_mousek)=@do_mousek
commands(token_mousew)=@do_mousew
commands(token_sin)=@do_sin
commands(token_stick)=@do_stick
commands(token_strig)=@do_strig
commands(token_sprite)=@do_sprite
commands(token_defsprite)=@do_defsprite
commands(token_getpixel)=@do_getpixel
commands(token_waitclock)=@do_waitclock
commands(fun_negative)=@do_negative
commands(token_rdpin)=@do_rdpin
commands(token_rqpin)=@do_rqpin
commands(token_pinread)=@do_pinread
commands(token_wrpin)=@do_wrpin
commands(token_wxpin)=@do_wxpin
commands(token_wypin)=@do_wypin
commands(token_pinfloat)=@do_pinfloat	 
commands(token_pinlo)=@do_pinlo	 
commands(token_pinhi)=@do_pinhi	 
commands(token_pinstart)=@do_pinstart	  
commands(token_pintoggle)=@do_pintoggle 	 
commands(token_position)=@do_position	 
commands(token_cos)=@do_cos	 
commands(token_tan)=@do_tan	 
commands(token_atn)=@do_atn	 
commands(token_asin)=@do_asin	 
commands(token_acos)=@do_acos	 
commands(token_sqr)=@do_sqr	 
commands(token_fill)=@do_fill
commands(token_defsnd)=@do_defsnd
commands(token_defenv)=@do_defenv
commands(token_rad)=@do_rad
commands(token_deg)=@do_deg
commands(token_int)=@do_int
commands(token_play)=@do_play
commands(token_setdelay)=@do_setdelay
commands(token_setenv)=@do_setenv
commands(token_setlen)=@do_setlen
commands(token_setpan)=@do_setpan
commands(token_setvol)=@do_setvol
commands(token_setwave)=@do_setwave
commands(token_setsustain)=@do_setsustain
commands(token_release)=@do_release
commands(token_getenvsustain)=@do_getenvsustain
commands(token_poke)=@do_poke
commands(token_dpoke)=@do_dpoke
commands(token_lpoke)=@do_lpoke
commands(token_peek)=@do_peek
commands(token_dpeek)=@do_dpeek
commands(token_lpeek)=@do_lpeek
commands(token_adr)=@do_nothing
commands(token_fre)=@do_fre
commands(token_getnotevalue)=@do_getnotevalue
commands(fun_getaddr)=@do_getaddr
commands(token_inkey)=@do_inkey
commands(token_abs)=@do_abs
commands(token_hex)=@do_hex
commands(token_bin)=@do_bin
commands(token_val)=@do_val
commands(token_chr)=@do_chr
commands(token_asc)=@do_asc
commands(token_left)=@do_left
commands(token_right)=@do_right
commands(token_mid)=@do_mid
commands(token_len)=@do_len
commands(token_gosub)=@do_gosub
commands(token_return)=@do_return
commands(token_progend)=@do_end
commands(token_pop)=@do_pop
commands(token_log)=@do_log
commands(token_changevol)=@do_changevol
commands(token_changewave)=@do_changewav
commands(token_changepan)=@do_changepan
commands(token_changefreq)=@do_changefreq
commands(token_shutup)=@do_shutup
commands(token_round)=@do_round
commands(token_enter)=@do_enter
commands(token_open)=@do_open
commands(token_close)=@do_close
commands(token_get)=@do_get
commands(token_put)=@do_put
commands(token_cd)=@do_cd
commands(token_delete)=@do_delete
commands(token_mkdir)=@do_mkdir
commands(token_blit)=@do_blit
commands(token_framebuf)=@do_framebuf
commands(token_on)=@do_on

commands(token_skip)=@do_skip
commands(token_input)=@do_input
commands(token_data)=@do_nothing
commands(token_read)=@do_read
commands(token_restore)=@do_restore
commands(token_padx)=@do_padx
commands(token_pady)=@do_pady
commands(token_padz)=@do_padz
commands(token_padrx)=@do_padrx
commands(token_padry)=@do_padry
commands(token_padrz)=@do_padrz
commands(token_padw)=@do_padw
commands(token_pads)=@do_pads
commands(token_copy)=@do_copy
commands(token_coginit)=@do_coginit
commands(token_cogstop)=@do_cogstop
commands(token_memlo)=@do_memlo
commands(token_memtop)=@do_memtop
commands(token_setcolor)=@do_setcolor
commands(token_getcolor)=@do_getcolor
commands(token_defchar)=@do_defchar
commands(token_restorepalette)=@do_restorepalette
commands(token_findfirst)=@do_findfirst
commands(token_findnext)=@do_findnext
commands(token_setamode)=@do_setamode
commands(token_getrealfreq)=@do_getrealfreq
commands(token_str)=@do_str

end sub

''-------------------------------- Audio subsystem init  -------------------------------------

sub init_audio

dim i,j as integer
dim a as single
'v.cls(147,154)
dim k as single : k=1.0

for i=0 to 1023 : psdpoke  2*i,round(32600*sin(i*3.1415926535/512.0)) : next i               		' 0 : sinewave  
for i=0 to 511  : psdpoke  2048+2*i, -32512+127*i: psdpoke 2048+2*(512+i),32512-127*i : next i   		' 1 : triangle 
for i=0 to 1023 : psdpoke  4096+2*i, -32256+63*i : next i 							' 2 saw 4 sqr 8 noise 3567 
for i=0 to 127  : psdpoke  6144+2*i, -32600 : next i : for i=128 to 1023 :  psdpoke 6144+2*i, 32600 : next i 	' 3 pulse 12.5%
for i=0 to 511  : psdpoke  8192+2*i, -32600 : next i : for i=512 to 1023 :  psdpoke 8192+2*i, 32600 : next i 	' 4 square
for i=0 to 255  : psdpoke 10240+2*i, -32600 : next i : for i=256 to 1023 : psdpoke 10240+2*i, 32600 : next i 	' 5 pulse 25%
for i=12288 to 61436 step 4 : pslpoke i,0 : next i 
for i=0 to 1023 : psdpoke 61440+2*i, dpeek(varptr(atari12)+16+2*i) : next i 				' 6 pokey waveform 12	
for i=0 to 1023 : psdpoke 63488+2*i, dpeek(varptr(atari2)+16+2*i) : next i 				' 7 pokey waveform 2	
for i=0 to 255 : envbuf(0,i)=65280-256*i : next i							' instant attack, linear release	
for i=0 to 255 : envbuf(1,i)=round(65280.0*k) : k=k*0.975 :  next i : envbuf(1,255)=0			' instant attack, log release
for i=0 to 254 : envbuf(2,i)=65280 : next i : envbuf(2,255)=0						' instant attack, instant release
for i=0 to 15 :  envbuf(3,i)=4096*i : next i 
for i=16 to 239: envbuf(3,i)=65280 : next i
for i=240 to 255 : envbuf(3,i)=4096*(255-i) : next i							' smooth attack, smooth release
for i=0 to 255 : envbuf(4,i)=256*i : next i : envbuf(4,255)=0						' slow attack, instant release
for i=0 to 239 : envbuf(5,i)=272*i : next i : for i=240 to 255 : envbuf(5,i)=4096*(255-i) : next i	' slow attack, smooth release
for i=0 to 127 : envbuf(6,i)=512*i : envbuf(6,255-i)=512*i : next i 					' triangle
for i=0 to 7: envbuf(7,i)=8192*i : next i
for i=8 to 23 : envbuf(7,i)=65280-2048*(i-8) : next i 	
for i=24 to 128 : envbuf(7,i)=32768 : next i
for i=129 to 255: envbuf(7,i)=256*(255-i) : next i : suspoints(7)=128							' classic adsr
for i=0 to 7
  channels(i).freq=440.0
  channels(i).wave=i
  channels(i).env=i
  channels(i).delay=0
  channels(i).length=1.0
  channels(i).vol=4.0
  channels(i).pan=0.0
  channels(i).sus=255
  channels(i).amode=0
  suspoints(i)=255
 ' lpoke base+64*i+28,$80000100 : waitms(2) : lpoke base+28,$40000000  
next i
a=6.875 : for i=1 to 3 : a=a*(2.0^(1.0/12.0)) : next i : for i=0 to 11 : notetable(i) = a : a=a*(2.0^(1.0/12.0)) : next i
noteperiods(0)=424 : noteperiods(1)=400 : noteperiods(2)=377 : noteperiods(3)=356 :  noteperiods(4)=336 :  noteperiods(5)=317
noteperiods(6)=300 : noteperiods(7)=283 : noteperiods(8)=267 : noteperiods(9)=252 : noteperiods(10)=238 : noteperiods(11)=224
 suspoints(7)=128	
 suspoints(6)=128	
end sub

'------------------- Error messages

sub init_error_strings

errors$(0)=""
errors$(1)="Expected number, got something else"
errors$(2)="Cannot add a number to a string"
errors$(3)="Cannot substract strings"
errors$(4)="Unknown error while adding"
errors$(5)="Unknown error while substracting"
errors$(6)="Cannot do logic operation on string or float"
errors$(7)="Unknown error while doing logic operation"
errors$(8)="Cannot multiply strings"
errors$(9)="Unknown error while multiplying"
errors$(10)="Cannot divide strings"
errors$(11)="Unknown error while dividing"
errors$(12)="Cannot compute a power of a string"
errors$(13)="Unknown error while computing a power"
errors$(14)="Right parenthesis expected"
errors$(15)="Expected string"
errors$(16)="Expected float"
errors$(17)="Expected unsigned integer"
errors$(18)="Expected integer"
errors$(19)="No more variable slots"
errors$(20)="Variable not found"
errors$(21)="Comma expected"
errors$(22)="Comma or semicolon expected"
errors$(23)="Unknown command"
errors$(24)="Stack underflow"
errors$(25)="Cannot execute goto or gosub in the immediate mode"
errors$(26)="Cannot load from this file"
errors$(27)="The program is empty"
errors$(28)="If after if"
errors$(29)="Empty expression"
errors$(30)="String expected"  '' ==15!!!!!
errors$(31)="Interpreter internal error"
errors$(32)="Expected assign"
errors$(33)="Expected 'to'"
errors$(34)="Expected integer variable"
errors$(35)="Uninitialized variable in 'next', use 'for' before"
errors$(36)="No more slots for 'for'"
errors$(37)="'Next' doesn't match 'for'"
errors$(38)="'Goto' target line not found"
errors$(39)="Bad number of parameters"
errors$(40)="Function undefined for strings"
errors$(41)="Bad parameter"
errors$(42)="Cannot declare an array: the variable exists"
errors$(43)="Expected '('"
errors$(44)="Expected ')' or ','"
errors$(45)="No more than 3 dimensions supported"
errors$(46)="Variable name expected"
errors$(47)="Type name expected"
errors$(48)="Type not supported yet"
errors$(49)="Array index out of range"
errors$(50)="Bad type while assigning to array"
errors$(51)="Too many variables"
errors$(52)="'Then' expected"
errors$(53)="Directory doesn't exist"
errors$(54)="Unexpected end of line"
errors$(55)="No more data"
end sub
        
sub printerror(err as integer, linenum=0 as integer)
v.write("Error " ): v.write(v.inttostr(err)) : v.write(" - ")  : v.write(errors$(err))
if linenum>0 then v.write(" in line " ): v.writeln(v.inttostr(linenum)) else v.writeln("")
end sub

'' ------------------------------- Hardware start/stop/initialization 

sub startpsram
pscog,mbox=psram.startx(0, 1024, 11, 7)
'mbox=psram.getMailbox(0)
end sub

sub startaudio
audiocog,base=audio.start(mbox,0,$7F700)
end sub 

sub stopaudio
cpustop(audiocog)
audiocog=-1
end sub

sub cls(fg=154,bg=147)
v.cls(fg,bg)
end sub

function startvideo(mode=64, pin=0, mb=0) 'todo return a cog#

videocog=v.start(pin,mbox)
for thecog=0 to 7:psram.setQos(thecog, 80 << 16) :next thecog
psram.setQoS(videocog, $0400f400) 
open SendRecvDevice(@v.putchar, nil, nil) as #0
return videocog
waitms(100)
end function

#define plot v.plot1

'' ------------------------------- Convenient psram peek/poke

sub pslpoke(addr as ulong,value as ulong)
psram.write(varptr(value),addr and $1FF_FFFF,4)
end sub

sub psdpoke(addr as ulong,value as ulong)
psram.write(varptr(value),addr and $1FF_FFFF,2)
end sub

sub pspoke(addr as ulong,value as ulong)
psram.write(varptr(value),addr and $1FF_FFFF,1)
end sub

function pspeek(adr as ulong) as ubyte
dim res as ubyte
psram.read1(varptr(res),adr and $1FF_FFFF,1)
return res
end function

function pslpeek(adr as ulong) as ulong
dim res as ulong
psram.read1(varptr(res),adr and $1FF_FFFF,4)
return res
end function

function psdpeek(adr as ulong) as ulong
dim res as ushort
psram.read1(varptr(res),adr and $1FF_FFFF,2)
return res
end function

'' ------------------------------- More convenient video driver function aliases

sub position(x,y)
v.setcursorpos(x,y)
end sub

sub waitvbl
  v.waitvbl(1)
end sub

'' ------------------------------- Wait for the internal 200 Hz clock

sub waitclock
dim c as ulong
c=hkcnt
do: loop until hkcnt<>c
end sub

'' ------------------------------- USB keyboard scan to char translator

function scantochar(key)

select case (key shr 8) and 255
case 0     : return keys(4*(key and 127))
case 2,32  : return keys(4*(key and 127)+1) ' shift
case 64	   : return keys(4*(key and 127)+2) ' RAlt
case 66,96 : return keys(4*(key and 127)+3) ' RAlt+shift

end select
end function

'' ------------------------------- USB keyboard scan to char translation table

dim shared as ubyte keys(511)={
 0,0,0,0, 			 
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 97,65,23,14,_
 98,66,0,0,_
 99,67,25,16,_
 100,68,0,0,_
 101,69,24,15,_
 102,70,0,0,_
 103,71,0,0,_
 104,72,0,0,_
 105,73,0,0,_
 106,74,0,0,_
 107,75,0,0,_
 108,76,31,22,_
 109,77,0,0,_
 110,78,26,17,_
 111,79,30,21,_
 112,80,0,0,_
 113,81,0,0,_
 114,82,0,0,_
 115,83,27,18,_
 116,84,0,0,_
 117,85,0,0,_
 118,86,0,0,_
 119,87,0,0,_
 120,88,28,19,_
 121,89,0,0,_
 122,90,29,20,_
 49,33,4,0,_
 50,64,5,0,_
 51,35,6,0,_
 52,36,7,0,_
 53,37,8,0,_
 54,94,9,0,_
 55,38,10,0,_
 56,42,11,0,_
 57,40,12,0,_
 48,41,13,0,_
 141,141,0,0,_
 155,155,0,0,_
 136,136,0,0,_
 137,137,0,0,_
 32,32,0,0,_
 45,95,0,0,_
 61,43,0,0,_
 91,123,0,0,_
 93,125,0,0,_
 92,124,0,0,_
 35,126,0,0,_
 59,58,0,0,_
 39,34,0,0,_
 96,126,3,0,_
 44,60,0,0,_
 46,62,0,0,_
 47,63,0,0,_
 185,185,0,0,_
 186,0,0,0,_
 187,0,0,0,_
 188,0,0,0,_
 189,0,0,0,_
 190,0,0,0,_
 191,0,0,0,_
 192,0,0,0,_
 193,0,0,0,_
 194,0,0,0,_
 195,0,0,0,_
 196,0,0,0,_
 197,0,0,0,_
 198,0,0,0,_
 199,0,0,0,_
 200,0,0,0,_
 201,0,0,0,_
 202,0,0,0,_
 203,0,0,0,_
 127,127,0,0,_
 204,0,0,0,_
 205,0,0,0,_
 206,0,0,0,_
 207,0,0,0,_
 208,0,0,0,_
 209,0,0,0,_
 210,0,0,0,_
 47,47,0,0,_
 42,42,0,0,_
 45,45,0,0,_
 43,43,0,0,_
 141,141,0,0,_
 49,49,0,0,_
 50,50,0,0,_
 51,51,0,0,_
 52,52,0,0,_
 53,53,0,0,_
 54,54,0,0,_
 55,55,0,0,_
 56,56,0,0,_
 57,57,0,0,_
 48,48,0,0,_
 46,127,0,0,_
 92,124,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 61,61,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0,_
 0,0,0,0}


 '' ------------------------------ Atari 8-bit sounds, mouse definition
  
asm shared
atari_spl file "atari.spl"
atari2_spl file "atari2.spl" '1758
atarist_spl file "atarist.spl" '512
atari2 file "atari2.s2"
atari12 file "atari12.s2"
mouse  file "mouse2.def"
end asm

'' ------------------------------- the loader cog for BRUN

		asm shared

             	org
loadcog      	cogid   t11              		' get a cogid
                mul     t11, #12                        ' compute the offset to PSRAM mailbox 
                add     mailbox, t11                     ' add offset to find this COG's mailbox

                mov     psramaddr,#0

p101            mov     buf1,psramaddr			' psramaddr=hubaddr
                mov     buf2,##16384			' loading size
                mov     cmd,psramaddr                   ' set the address for reading
                setnib  cmd, #%1011, #7                 ' attach the command - read burst
                setq    #2			 	' write 3 longs to the mailbox
                wrlong  cmd, mailbox			' read the PSRAM
p102            rdlong  cmd, mailbox                	' poll mailbox for result
                tjs     cmd, #p102                 	' retry until valid 

                add 	psramaddr,##16384
		cmp 	psramaddr,##$7C000 wcz
	if_lt	jmp 	#p101				' loop until full hub loaded

                
                cogstop #7				' stop psram driver
    
                cogid 	t11				' get id
                coginit #0,#0				' start the new program
                cogstop t11				' stop the loader

t11 		long 	0
mailbox 	long 	$7FF00
psramaddr 	long 	0
pslockval	long 	0
cmd             long    0
buf1            long    0
buf2            long    16384

		end asm
		
'----- The end ---------------------------------------------------------------------------------------------------
