# Mini Macro Pad

Here's a quick project to create a simple 2-button macro pad to do simple things like muting conference calls.

## Hardware

This device consists of the following parts:
* Arduino Pro Micro (with an ATMega32u4)
* 2 SPST Arcade buttons (NO)
    * SPST = Single Pole, Single Throw (one switch that only moves one way)
    * NO = normally open (switch circuit is disconnected until pressed, when contacts close)
* Wire, 24AWG (pretty much anything works for simple buttons)
* MicroUSB cable for programming and connecting as keyboard

## Instructions

1. 3D-Print the enclosure
2. Solder tail wires to the buttons
3. Install buttons into enclosure
4. Solder end of wires to the Arduino
    * Button 0 wire to pin 2 and GND
    * Button 1 wire to pin 3 and GND
5. Open software project and make any changes to button presses.
    * Note: you may need to install the Keyboard libraries for PlatformIO
6. Compile for Arduino target - verify no errors
7. Plug in Arduino and upload compiled code
8. Unplug, replug, and test that the buttons work