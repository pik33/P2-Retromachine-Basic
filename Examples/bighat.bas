10  ' A big colorful hat function
20  ' adapted from Atari Basic
30  ' with the horizontal width extended to 960 pixels
100 SX=144*3:SY=56*3:SZ=64+3:CX=960:CY=576
110 C1=2.2*SY:C2=1.6*SY
120 DIM RR(961)
130 FOR I=0 TO CX:RR(I)=CY:NEXT I
140 PAPER 0:CLS:COLOR 40
150 CX=CX*0.5:CY=CY*0.46875:FX=SX/64:FZ=SZ/64
160 XF=4.71238905/SX
170 FOR ZI=64 TO -64 STEP -1
175 COLOR ZI+64
180   ZT=ZI*FX:ZS=ZT*ZT
190   XL=INT(SQR(SX*SX-ZS)+0.5)
200   ZX=ZI*FZ+CX:ZY=CY+ZI*FZ
210   FOR XI=0 TO XL
220     A=SIN(SQR(XI*XI+ZS)*XF)
230     Y1=ZY-A*(C1-C2*A*A)
240     X1=XI+ZX
250     IF RR(X1)>Y1 THEN RR(X1)=Y1:PLOT X1,Y1
260     X1=ZX-XI
270     IF RR(X1)>Y1 THEN RR(X1)=Y1:PLOT X1,Y1
280   NEXT XI
290 NEXT ZI
