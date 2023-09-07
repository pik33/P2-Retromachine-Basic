1 rem draws a mandelbrot, slow. You can change maxiter in line 30
5 paper 0 :ink 120 : cls : mouse off : cursor off
10 xmin!=-2.5 : xmax!=1.8
20 ymin!=-1.2 : ymax!=1.2
30 maxiter=48
40 mpx=1023 : mpy=599
50 dx!=(xmax!-xmin!)/mpx
60 dy!=(ymax!-ymin!)/mpy
70 c4!=4.0
80 cy!=ymin!
90 for py=0 to mpy
100   cx!=xmin!
110   for px=0 to mpx
120     x!=0 : y!=0 : x2!=0 : y2!=0 : iter=0
130     if (iter>=maxiter) or (x2!+y2!>c4!) then goto 300
140     y!=2.0*x!*y!+cy!
150     x!=x2!-y2!+cx!
160     iter=iter+1
170     x2!=x!*x!
180     y2!=y!*y!
190     goto 130
300     cx!=cx!+dx!
310     color 8+16*iter
312     if iter=maxiter then color 0
315     plot px,py
320   next px
330   cy!=cy!+dy!
340 next py
350 if inkey$="" then goto 350
