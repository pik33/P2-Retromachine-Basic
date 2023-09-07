80 rem animated Atari rainbows
90 mouse off : cursor off
100 j=0
110 for i=0 to 599 : color i+j : plot 0,i : draw 1023,i : next i
120 j=j+1 : waitvbl : goto 110
