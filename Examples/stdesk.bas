5 ' draws Atari ST type green desktop, for fun
10 m.4 : cls : cursor off
20 pos.16,4: ?"  Desk  File  View  Options";
30 c.0: pl.72,86 : dr.952,86 : c.184
40 f.j=87 to 529 : f.i=72 to 952 step 2
50 pl.i+(j mod 2),j
60 n.i : n.j
70 g.70
