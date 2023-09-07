5 ' A mouse theremin. Up/down volume, left/rigt frequency, keys 1..8 change the waveform
6 ' Try waves 6 and 7 :) if you had been using an 8-bit Atari while being young
7 '
10 m.4:cls:cursor off:pos.120,0:?"Mouse theremin"
15 pos.100,35:?"press 1..8 to change a waveform";
20 f.i=0 to 47:f.j=0 to 15:c.10+16*(i div 12)+2*(i mod 2):box 32+20*i,60+30*j,32+20*i+19,60+30*j+29:n.j:n.i
30 f.i=0 to 47:f.j=0 to 15:c.0:fr.32+20*i,60+30*j,32+20*i+19,60+30*j+29:n.j:n.i
40 sw.1,2:se.1,8:p.1,440,0,0:w=2
44 pos.2,4:?16: pos.4,32:?1
45 pos.8,2:?"c2":pos.68,2:?"c3":pos.128,2:?"c4":pos.188,2:?"c5"
150 ww=int(inkey$): if ww>0 then w=ww : pos. 8,35: ? "Selected wave: ";w; : if w>5 then w=24+w
152 if w>0 then cw.1,w
155 if mousek=0 then shutup : g.150
160 v=(540-mousey)/30 : if v<0 then v=0
170 if v>16 then v=16
180 f=#c2*(2^((mousex-32)/240)))
185 if w=31 then f=f/32
186 if w=32 then f=f*8
187 if w=30 then f=f/16
190 cf.1,f: cv.1,v: g.150
