# Arduino Ohmmeter


Aim : Use the analog inputs and digital outputs (and probably a voltage divider) to determine the value of resistors. 
      The measurement must be continously and the result must be shown on a display (TFT or Nokia or LED-display).

Hardware Used: Arduino Uno with Screw Schield, Waterott MI0283QT-2 TFT Display, mSD Shield, Jumper Wires, Bread board, several resistors with different values, USB Cable.

Software Used: Arduino version 1.6.3



An ohmmeter is a device that can measure resistance. Using the correct hardware interface and uploaded code, we can turn the arduino into a device that can measure resistance.
How this ohmmeter circuit works is that the 2 resistors in series forms a voltage divider circuit. One end of the resistor pair is hooked up to 5V and the other end is hooked up to ground. The 5 volts that the arduino provides gets divided up between the 2 resistors, depending on the value of the 2 resistors. 
The resistor which holds the greater resistance gets more of the voltage, according to ohm's law formula, V=IR. The voltage that falls across a component is directly proportional to the amount of resistance it contains. Using this principle, we can set up a mathematical model to determine the resistance, based on the voltage division.


