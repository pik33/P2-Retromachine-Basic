4 rem the program draws and beeps. Adapted from Atari Basic and extended to draw a circle and fill the area
5 cls
6 cursor off: mouse off
30 for i=0 to 270 step 10
40 plot 377,152+i
50 draw 377+i,422
60 beep 200+10*i,100
70 plot 377+i,152
80 draw 647,i+152
90 next i
95 color rnd(256)
96 fill 477,252,rnd(256),getpixel(477,252)
97 fcircle 512,288,40
100 for i=270 to 0 step -10
101 plot 377,152+i : draw  377+i,422
102 beep 200+10*i,100
103 plot 377+i,152 : draw 647,i+152
104 next i
110 color rnd(256)
120 fill 477,252,rnd(256),getpixel(477,252)
130 fcircle 512,288,40
140 goto 30
