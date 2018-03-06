# electronic-die

This is an arduino project, built around an Arduino Nano board, to make a simple electronic die, which is intended for teaching beginners. There are four different versions of the code which controls the operation of the die (the firmware), which build up from a simple automatic counter to a complete electronic die with a visual rolling effect and random numbers. The idea is to start by looking at how the first version works, and then see how this is built on to make it do more complex things.

Each version is in a separate directory, in the normal format for an arduino project. See the [arduino website](https://www.arduino.cc/) for information on how to load the firmware onto the arduino Nano. For every version, there is an 'extension', which is something you can try yourself to change the way it works.

The four versions are as follows:

* **v1\_counter** - counts up repeatedly from 1 to 6 in die numbers. Extension: make it count downwards.
* **v2\_random** - automatically picks random numbers on a continuous loop. Extension: speed up or slow down the loop.
* **v3\_switched** - the same as above but with a switch to step from one random number to the next. Extension: add an extra number 7 to the die, where all the LEDs are on.
* **v4\_rolling** - a visual effect is added to indicate the die is rolling while the switch is held down. This also adds extra randomness. Extension: reverse the action of the switch, so the die rolls when the switch is open and stops when you press it.

In the top directory, there are some files which set out how to build the hardware:

* **die-layout.fzz** - the schematic project file, done in [Fritzing](http://fritzing.org/home/).
* **die-layout_schem.pdf** - a PDF of the schematics, in traditional format.
* **die-layout_bb.pdf** - the schematics, laid out in Fritzing's breadboard view.
* **die-layout_bom.html** - the bill of materials (parts list) in HTML format.
