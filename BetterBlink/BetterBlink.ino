// BetterBlink - BetterBlink.ino
//
// Description:
// An Arduino sketch that blinks an LED without using the delay() function.
//
// Circuit:
// - An LED is connected to pin D2 via a 330 Ω resistor.
//
// Created by John Woolsey on 10/22/2020.
// Modified by John Woolsey on 01/14/2023.
// Copyright (c) 2020 Woolsey Workshop.  All rights reserved.

const uint8_t RedLED = 2;                // reference digital pin 2 as RedLED
const unsigned long BlinkPeriod = 2000;  // blinking period in milliseconds

void setup() {
   pinMode(RedLED, OUTPUT);  // set RedLED pin as an output
}

void loop() {
   static unsigned long previousBlinkTime = 0;              // capture initial previous time
   unsigned long currentTime = millis();                    // capture current time
   if (currentTime - previousBlinkTime >= BlinkPeriod/2) {  // run every half blinking period (1 s)
      digitalWrite(RedLED, !digitalRead(RedLED));           // toggle on/off LED
      previousBlinkTime = currentTime;                      // save previous time
   }
}
