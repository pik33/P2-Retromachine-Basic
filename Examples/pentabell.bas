5 ' plays a pentatonic melody using a predefined waveform
10 defsnd 0,"glocke.s2"
12 defenv 0,"percus.h2"
15 c!=2^(1/12)
20 r=rnd mod 6
25 a!=246.943
30 if r=5 then r=12
40 if r=4 then r=9
50 if r=3 then r=7
60 if r=2 then r=5
70 if r=1 then r=2
100 for i=0 to r : a!=a!*c! : next i
110 print a!,
115 q=(q+1) mod 15
120 if q=14 then sound 0,a!,0,16000,0 : waitms 400 : else sound 0,a!,0,16000,0 : waitms 200
130 goto 20
