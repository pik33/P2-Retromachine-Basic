10 mode 3 : cursor off : cls : s=0 : oldmousew=mousew
20 if (s=1) and (mousek=1) then waitclock : draw mousex, mousey : goto 20
30 if mousew<>oldmousew then color mousew : box 1008,0,1023,16
40 if (s=0) and (mousek=1) then plot mousex,mousey : s=1
50 if mousek=0 then s=0
60 if mousek=2 then cls
70 if mousek=4 then p=getpixel(mousex,mousey): fill mousex,mousey,mousew,p
300 goto 20
