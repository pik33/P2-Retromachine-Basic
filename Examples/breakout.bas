100 paper 0: cls
120 mouse off : cursor off
130 color 202 : box 254,30,770,546 : color 112 : box 258,34,766,542
140 for i=10 to 1 step -1 : color 192+i
160 fcircle 256,32,i: fcircle 768,32,i : fcircle 256,544,i : fcircle 768,544,i
180 next i
200 for y=1 to 6
220 for x=1 to 15
240 color 16*y+4 : box 240+32*x, 32+16*y, 266+32*x, 42+16*y
260 color 16*y+8 : box 244+32*x, 32+16*y, 266+32*x, 38+16*y
280 next x
300 next y
310 for i=15 to 0 step -4 : color i : fcircle 100,300,i/4: next i 
319 color 0
320 defsprite 0,95,295,10,10 : box 95,295,105,305
340 sprite 0,507,512
360 color 248 : fcircle 20,200,4: fcircle 84,200,4 : box 20,196,84,204
380 defsprite 1,15,195,74,10 : sprite 1,512-37,520 : color 0 : box 10,190,90,210
900 s=0 : dx=-2 :dy=-2
1000 mx=mousex
1010 if mx<260 then mx=260
1020 if mx>690 then mx=690
1030 sprite 1,mx,520
1040 if s=0 then bx=mx+36 : by=512 : sprite 0,bx,by
1050 if mousek=1 then s=1
1060 if s=0 then goto 1000
1080 bx=bx+dx : by=by+dy
1090 if (bx<260) or (bx>756) then dx=0-dx
1100 if by<32 then dy=0-dy
1110 if by>520 then goto 9999
1120 if (by>512) and (bx>mx) and (bx<mx+8) then dy=-1: dx=-3
1125 if (by>512) and (bx>mx+7) and (bx<mx+16) then dx=-2 : dy=-2
1130 if (by>512) and (bx>mx+15) and (bx<mx+33) then dx=-1 : dy=-3
1135 if (by>512) and (bx>mx+32) and (bx<mx+49) then dx=1 : dy=-3
1140 if (by>512) and (bx>mx+48) and (bx<mx+57) then dx=2 : dy=-2
1145 if (by>512) and (bx>mx+56) and (bx<mx+64) then dx=3 : dy=-1
1150 if getpixel(bx+5,by+5)=112 then goto 1300
1170 rx=(bx-235) div 32 
1171 ry=(by-27) div 16
1177 dy=0-dy
1180 color 112
1190 box 240+32*rx,32+16*ry,271+32*rx,47+16*ry
1300 waitvbl : sprite 0,bx,by
1400 goto 1000
9999 print "Game over"
