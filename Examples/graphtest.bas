10 mode 2 : cls
20 a$="10000 filled circles" : print a$
25 waitms 5000
30 for i=1 to 10000 : color rnd : fcircle rnd mod 1023, rnd mod 576, 30+rnd mod 60 : next i
40 waitms 5000
50 cls
60 b$="10000 filled boxes" : print b$
65 waitms 5000
70 for i=1 to 10000 : color rnd : box rnd mod 1024, rnd mod 576, rnd mod 1024, rnd mod 576 : next i
80 waitms 5000
90 cls
100 c$="10000 empty circles" :print c$
110 waitms 5000
120 for i=1 to 10000 : color rnd : circle rnd mod 1024, rnd mod 576, 30+rnd mod 60 : next i
130 waitms 5000
140 cls
150 d$="10000 frames" : print d$
160 waitms 5000
170 for i=1 to 10000 : color rnd : frame rnd mod 1024,rnd mod 576, rnd mod 1024, rnd mod 576 : next i
180 waitms 5000
190 cls : goto 20
