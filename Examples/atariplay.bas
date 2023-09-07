5  ' The program plays random notes using Atari Pokey waveform #2
10 setwave 1,31 : setlen 1,3 : setvol 1,4 : setdelay 1,300
20 play 1,20+rnd(100) : goto 20
