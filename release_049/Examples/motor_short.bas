5  ' the program simulates the motor noise using 8-bit Atari Pokey waveform
6  ' this version using abbreviated commands
7  '
10 sw.0,30:se.0,8:sl.0,1:sd.0,100
12 p.0,0.1:f.i=1 to 80:?i,:cf.0,i/10:w.20:n.i
15 w.5000
20 f.i=80 to 300:?i,:cf.0,i/10:w.30:n.i
22 w.5000
25 f.i=300 to 80 s.-1 :?i,:cf.0,i/10:w.30:n.i
27 w.5000
28 f.i=80 to 1 s.-1:?i,:cf.0,i/10:w.20:n.i
30 sh.:w.2000:g.10
