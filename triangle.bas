const _clkfreq = 338688000
const pin=0

dim v as class using "hg010b.spin2"
dim psram as class using "psram.spin2"
dim hello as class using "hello.b"
dim pscog,videocog as ubyte
dim mbox as ulong

dim list as ulong(2400)

pscog=psram.startx(0, 1024, 11, 7)
mbox=psram.getMailbox(0)

videocog=v.start(pin,mbox)
for thecog=0 to 7:psram.setQos(thecog, 80 << 16) :next thecog
psram.setQoS(videocog, $0400f400) 
open SendRecvDevice(@v.putchar, nil, nil) as #0
waitms(100)
v.cls(154,147)
print "Test ready"
hello.program

'triangle (1,2,3,4,5,6) 'abc acb bac bca cab cba
'triangle (1,2,5,6,3,4) 'abc acb bac bca cab cba
'triangle (3,4,1,2,5,6) 'abc acb bac bca cab cba
'triangle (3,4,5,6,1,2) 'abc acb bac bca cab cba
'triangle (5,6,1,2,3,4) 'abc acb bac bca cab cba
'triangle (5,6,3,4,1,2) 'abc acb bac bca cab cba
'waitms(5000)
'testtriangle

sub triangle(x1,y1,x2,y2,x3,y3)

if y1>y2 then x2,x1=x1,x2 : y2,y1=y1,y2
if y1>y3 then x3,x1=x1,x3 : y3,y1=y1,y3
if y2>y3 then x3,x2=x2,x3 : y3,y2=y2,y3

print x1,y1,x2,y2,x3,y3
end sub

sub testtriangle

var pixels=0
do
for j=0 to 255
  for i=0 to 511
    list(4*i)=$C000_0000+v.buf_ptr+1024*i+(511-i)
    list(4*i+1)=j
    list(4*i+2)=2*(i+1)
    list(4*i+3)=varptr(list(4*i+4))
    pixels+=2*(i+1)
  next i
  list(2399)=0
  i=getct()
  psram.execlist(mbox,varptr(list),0)
'i=getct()-i: print i: print i/337 : print i/pixels
  v.waitvbl(1)
  next j
  loop
end sub


function sphere(xp,yp,zp,xc,yc,zc,r) as ulong

return sqrt((xc-xp)*(xc-xp)+(yc-yp)*(yc-yp)+(zc-zp)*(zc-zp))-r
end function
