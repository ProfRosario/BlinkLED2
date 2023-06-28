#include <Arduino.h>

#include <Arduino.h>

#define ONBOARD_LED  2

void setup() {
  Serial.begin(9600);
  pinMode(ONBOARD_LED,OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(ONBOARD_LED,HIGH);
  Serial.println("Hello World!");
  delay(1000);
  digitalWrite(ONBOARD_LED,LOW);
  Serial.println("Goodbye World!");
}