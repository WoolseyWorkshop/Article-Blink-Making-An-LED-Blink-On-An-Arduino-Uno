// BetterBlink - BetterBlink.ino
//
// Description:
// Blinks an LED without using delay().
//
// Circuit:
// - A red LED is connected to pin D2.
//
// Copyright (c) 2020 Woolsey Workshop.  All rights reserved.


const byte RedLED = 2;                   // reference digital pin 2 as RedLED
const unsigned long BlinkPeriod = 1000;  // blinking period in milliseconds

void setup() {
   pinMode(RedLED, OUTPUT);  // set RedLED pin as an output
}

void loop() {
   static unsigned long previousBlinkTime = 0;              // capture initial previous time
   unsigned long currentTime = millis();                    // capture current time
   if (currentTime - previousBlinkTime >= BlinkPeriod/2) {  // run every half blinking period (500 ms)
      digitalWrite(RedLED, !digitalRead(RedLED));           // toggle on/off LED
      previousBlinkTime = currentTime;                      // save previous time
   }
}
