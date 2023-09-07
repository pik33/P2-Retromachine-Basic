4 'the program plays random pentatonic melody with 2 channels
5 setwave 1,2
10 dim n(6) : n(0)=#c4 : n(1)=#d4 : n(2)=#f4 : n(3)=#g4 : n(4)=#a4 : n(5)=#c5
20 r=rnd(6) : r2=rnd(6)
30 q=(q+1) mod 7
40 if q=6 then qq=(qq+1) mod 2 : setdelay 0,400 : else setdelay 0,200
41 ?n(r),
43 play 1,n(r2)
44 play 0,n(r)
45 setpan 0,0.25-qq/2 : w=2+2*qq : setwave 0,w
60 goto 20
