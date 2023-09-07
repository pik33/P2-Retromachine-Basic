5  rem the program simulates the motor noise using 8-bit Atari Pokey waveform
6  rem
10 setwave 0,30 : setenv 0,8 : setlen 0,1 : setdelay 0,100
12 play 0,0.1 : for i=1 to 80 : print i, : changefreq 0,i/10 : waitms 20 : next i
15 waitms 5000
20 for i=80 to 300 : print i, : changefreq 0,i/10 : waitms 30 : next i
22 waitms 5000
25 for i=300 to 80 step -1 : print i, : changefreq 0,i/10 : waitms 30 : next i
27 waitms 5000
28 for i=80 to 1 step -1 : print i, : changefreq 0,i/10 : waitms 20 : next i
30 shutup : waitms 2000 : goto 10
