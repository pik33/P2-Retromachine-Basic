4 ' draws and plays, abusing abbreviations
5 sd.1,100
6 sv.1,12
10 m.st:cursor off:mouse off:cls
20 f.i=0 to 270 s. 10
30 pl.377,152+i:dr.377+i,422:p.1,200+10*i:pl.377+i,152:dr.647,i+152
40 n.i
90 c.rnd(256):fi.477,252,rnd(256),ge.(477,252):fc.512,288,40
100 f.i=270 to 0 s. -10
110 pl.377,152+i:dr.377+i,422:p.1,200+10*i:pl.377+i,152:dr.647,i+152
120 n.i
130 c.rnd(256):fi.477,252,rnd(256),ge.(477,252):fc.512,288,40
140 g.20
