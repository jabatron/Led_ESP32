#include <Arduino.h>

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(21, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(21, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(5, LOW);
  delay(1000);                       // wait for a second
}