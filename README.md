# ECE_387_Midterm

This project will be a part of a group project with John Kessinger, Jon Schaff, and Mark Sullivan to create the popular game "Keep Talking and Nobody Explodes"

For my midterm chip interface I worked with controlling an LEDs using an H-Bridge and getting familiar with H-bridge the chipset. The specific module I uses is the L298N Dual H-Bridge Motor Controller. I want to use this chip in the final project as a way to drive an LEDs to represent the morse code as well as use a servo on the other side to act as a latch. The LEDs will produce various words in morse code with LEDs which are then to be decoded by a manual by entering a passcode into a keypad. Each word will have a single unique passcode and the word that comes out is pseudo-random. For the midterm I used the LEDs to make the word "midterm" in morse code. The LEDs are controlled by the H-bridge by the reversing polarity and how the LEDs are arranged (green, anode-cathode red, cathode-anode). There is a 330 ohm resistor to lower the current for the LEDs.

Example Manual: http://www.bombmanual.com/manual/1/html/index.html

Game Website: http://www.keeptalkinggame.com/
