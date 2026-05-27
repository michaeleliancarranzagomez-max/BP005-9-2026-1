#include <Arduino.h>

const int pinpote=A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorADC = analogRead(pinpote);
  Serial.print("ADC = ");
  Serial.println(valorADC);
  delay(500);
}
