const clkfreq=340000000
dim audio as class using "sa001.spin2"
dim psram as class using "psram.spin2"

psram.start()
psram.write(varptr(sinewave)+16,0,2048)
audio.start($7FF00,0,$70000)
audio.test()
do: 
  if lpeek($30)<>0 then print lpeek($30): lpoke $30,0
loop

asm shared
sinewave file "sinus.s2"
end asm
