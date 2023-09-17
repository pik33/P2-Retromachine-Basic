5  rem simply draw circles in a loop
10 cls : i=-10 : j=-10
20 color (i+j) mod 256 : fcircle i,j,30
30 i=i+1
40 if i>1054 then i=0 : j=j+13
50 if j>576 then j=j-576
60 goto 20
