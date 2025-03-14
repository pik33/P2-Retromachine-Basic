#include "dir.bi"

const HEAPSIZE=96000
'#define PSRAM4
#define PSRAM16


dim audiocog,base,usbcog,pscog,mbox,videocog,paper,ink,font as integer

#ifdef PSRAM16
'const _clkfreq = 344064000 '48000*28*256 - test
const _clkfreq = 338688000 '44100*30*256 - test
'paula*96=340501920 - 96 is 3/8*256

type vdrv as class using "hg010b.spin2"
dim v as vdrv
dim psram as class using "psram.spin2"
#endif

'' this version doesn't support 4 bit: video driver needs synchroonizing. To do after reaching a beta phase

#ifdef PSRAM4
const _clkfreq = 340500000
type vdrv as class using "hg010b-4.spin2"
dim v as vdrv
dim psram as class using "psram4.spin2"
#endif

dim kbm as class using "usbnew.spin2"
'dim audio as class using "audio096.spin2"
dim audio as class using "audio2-004.spin2"


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
paper=147: ink=154 : font=4
cls(ink, paper)
v.setfontfamily(font) 				' use ST Mono font
v.setleadingspaces(2)
mount "/sd", _vfs_open_sdcard()
chdir "/sd/bas"
let currentdir$="/sd/bas"
print: print "kwas"
pinwrite 38,0 : pinwrite 39,0 ' LEDs off



class trackbar

'type vdrv as class using "hg010b-4.spin2"
dim state,x,y,w,h,min,max,ticks,c1,c2 as integer
dim label as string

dim v as vdrv

sub create(avdrv as vdrv,ax=0,ay=0,aw=16,ah=128,amin=0,amax=10,aticks=11,ac1=244,ac2=248,alabel$="")
x=ax:y=ay:w=aw:h=ah:min=amin:max=amax:ticks=aticks:c1=ac1:c2=ac2
label=alabel$
v=avdrv
draw()
end sub


sub draw
v.box(x,y,x+w-1,y+h-1,c1)
v.box(x+3,y+3,x+w-4,y+h-4,c2)
dim hr as single: hr=h: hr=hr/(ticks-1) :print hr
dim dv as single: dv=max-min: dv=dv/(ticks-1) : print dv

for i=0 to ticks-1: v.fastline(x,x+3,round(y+h-i*hr),0) : v.outtextxycf(x-8-4*len(str$(round(min+i*dv))),round(y+h-i*hr)-8,str$(round(min+i*dv)),c2):next i
end sub

end class


class window

'type vdrv as class using "hg010b-4.spin2"
dim state,x,y,w,h,min,max,ticks,c1,c2,c3 as integer
dim label as string
dim bufptr as ulong


dim v as vdrv

sub create(avdrv as vdrv,ax=0,ay=0,aw=16,ah=128,alabel$="",ac1=10,ac2=15, ac3=120 )
x=ax:y=ay:w=aw:h=ah:c1=ac1:c2=ac2:c3=ac3
label=alabel$
v=avdrv
draw()
end sub


sub draw
v.frame(x,y,x+w-1,y+h-1,c1)
v.box(x+1,y+1,x+w-2,y+h-2,c2)
v.box(x+2,y+2,x+w-3,y+20,c3)
v.outtextxycf (x+2+(w/2)-4*len(label),y+3,label,c2)
end sub

end class


dim trackbar1 as trackbar
dim window1 as window
trackbar1.create(v,100,100,16,300)
window1.create(v,200,200,300,300,"Window test 1234567890")


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
mouse  file "mouse2.def"
end asm
