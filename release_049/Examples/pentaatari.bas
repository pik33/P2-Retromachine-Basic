5  ' plays the random pentatonic melody using Pokey waveforms
10 dim n(6)
15 n(0)=#c2 : n(1)=#d2 : n(2)=#f2 : n(3)=#g2 : n(4)=#a2 : n(5)=#c3
20 r=rnd(6)
30 q=(q+1) mod 7
40 if q=6 then qq=(qq+1) mod 2 : play 0,n(r),400 : else play 0, n(r),200
45 ?n(r),
50 w=30+qq : setpan 0,0.5-qq : setwave 0,w
60 goto 20
