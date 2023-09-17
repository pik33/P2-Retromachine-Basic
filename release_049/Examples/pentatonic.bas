10 dim n(6) : n(0)=261.63 : n(1)=293.67 : n(2)=349.23 : n(3)=392.00 : n(4)=440.00 : n(5)=523.25
20 r=rnd(6)
30 q=(q+1) mod 7
40 if q=6 then qq=(qq+1) mod 2 : setdelay 0,400 : else setdelay 0,200
41 ?n(r),
42 play 0,n(r)
45 setpan 0,0.25-qq/2 : w=2+2*qq
47 setwave 0,w
60 goto 20
