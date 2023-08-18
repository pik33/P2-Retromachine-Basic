# P2 Retromachine Basic
 
This is a Basic interpreter for a Propeller 2 environment with external RAM. The current version works on P2-EC32 board.
The code is at alpha stage now, in the rapid development process.

The goal is to make a P2 based board an independent machine that can be programmed without an external PC. 

The current versions, although still very limited and buggy, allows to write simple example programs that can show the power of the retro style Basic language.
There are several of them in the Example directory:

* if_circles.bas : fills the screen with circles
* mandelbrot.bas : slowly draws a Mandelbrot fractal
* breakout.bas : destroy bricks using a ball
* pentabeepbas : beeps random sounds using a pentatonic scale, while writing their frequencies
* mousedraw.bas : draw with a mouse.

To run the precompiled binary you need P2-EC32 with a Digital Video accessory board on P0, AV board on P8 and Serial Host board at P16.
Connect the monitor using a HDMI cable to the DV board, an amplifier or headphones to the AV board and an USB hub to upper USB slot on the Serial Host board.
Connect a keyboard, a mouse and a joystick to the hub.

Prepare the SD card: it has to be FAT32 formatted and have /bas directory on it. Place example .bas files there.

If you want to run binary files compiled by other compilers from within the interpreter, make a /bin directory and place binaries there.
Insert the SD to the P2-EC32. Flash the interpreter's binary and run it. 

Read the attached documentation file for more informations about using this interpreter.

