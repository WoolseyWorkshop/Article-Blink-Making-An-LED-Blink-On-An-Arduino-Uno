/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  An LED is connected to pin D2 via a 330 Ω resistor.

  Based on the Blink sketch in Main Menu > File > Examples > 01.Basics.

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 10 Jan 2023
  by John Woolsey

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 2 as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);            // wait for a second
  digitalWrite(2, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);            // wait for a second
}
