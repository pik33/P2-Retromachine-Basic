5 ' You can draw with a mouse. Left button draws, right clears, middle fills, wheel canges color
6 ' You need a mouse that can report the wheel in a boot mode (aka Logitech, but not only)
7 '
10 mode 3 : cursor off : cls : s=0 : oldmousew=mousew
20 if (s=1) and (mousek=1) then waitclock : draw mousex, mousey : goto 20
30 if mousew<>oldmousew then color mousew : box 1008,0,1023,16
40 if (s=0) and (mousek=1) then plot mousex,mousey : s=1
50 if mousek=0 then s=0
60 if mousek=2 then cls
70 if mousek=4 then p=getpixel(mousex,mousey): fill mousex,mousey,mousew,p
300 goto 20
