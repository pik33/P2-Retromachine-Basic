90 ' A simple and buggy concept of a breakout game
100 paper 0 : ink 15 : cls : mouse off : cursor off : se.2,1
130 color 202 : box 254,30,770,546 : color 112 : box 258,34,766,542
160 f.i=10 to 1 s. -1 : c. 192+i : fc.256,32,i: fc.768,32,i : fc.256,544,i : fc.768,544,i : n.i
200 f.y=1 to 6 : f. x=1 to 15
240 c.16*(7-y)+4 : box 240+32*x, 48+16*y, 268+32*x, 60+16*y
260 c.16*(7-y)+8 : box 244+32*x, 48+16*y, 268+32*x, 56+16*y
280 n.x : n.y
310 for i=15 to 0 step -4 : color i : fcircle 100,300,i/4: next i
320 c. 0 : defsprite 0,96,296,9,9 : box 96,296,104,304 : sprite 0,507,512
360 color 248 : fcircle 20,200,4: fcircle 84,200,4 : box 20,196,84,204
380 defsprite 1,16,196,73,9 : sprite 1,512-31,520 : color 0 : box 10,190,90,210
900 s=0 : dx=-2 :dy=-2
1000 mx=mousex
1010 if mx<258 then mx=258
1020 if mx>694 then mx=694
1030 sprite 1,mx,520
1040 if s=0 then bx=mx+36 : by=512 : sprite 0,bx,by
1050 if mousek=1 then s=1
1060 if s=0 then goto 1000
1080 bx=bx+dx : by=by+dy
1090 if (bx<259) or (bx>758) then dx=-dx : play 2,#c3 : g.1300
1100 if by<32 then dy=-dy : play 2,#c3: g.1300
1110 if by>520 then goto 9999
1115 if (by<=512) or (bx<mx) or (bx>(mx+64)) then goto 1150
1120 dx=(bx-mx-31)/8 : dy=-5+abs(dx)
1125 play 1,#c5
1150 if getpixel(bx+5,by+5)=112 then goto 1300
1170 rx=(bx-235) div 32
1171 ry=(by-27) div 16
1177 dy=0-dy
1180 color 112
1185 play 1,#a5
1190 box 240+32*rx,32+16*ry,271+32*rx,47+16*ry
1300 waitvbl : sprite 0,bx,by
1400 goto 1000
9999 setdelay 6,5 : setwave 6,32 : setenv 6,0
10000 f.i=10000 to 100 step -1 : i=i*0.99 : play 6,i : next i
11000 print "game over"
