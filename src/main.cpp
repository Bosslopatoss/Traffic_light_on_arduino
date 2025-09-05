#include "Arduino.h"
#define LED_PIN_1 2
#define LED_PIN_2 3
#define LED_PIN_3 4

const int ledPins[] = {LED_PIN_1, LED_PIN_2, LED_PIN_3};  // Используем реальные номера пинов
const int pinCount = sizeof(ledPins) / sizeof(ledPins[0]);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < pinCount; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);  // Гасим все светодиоды при старте
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < pinCount; i++) {
    digitalWrite(ledPins[i], 1);
    delay(1000);
    digitalWrite(ledPins[i], 0);
    Serial.print("Activating pin: ");
	Serial.println(ledPins[i]);
  }
  for(int i = 2; i > -1; i--) {
    digitalWrite(ledPins[i], 1);
    delay(1000);
    digitalWrite(ledPins[i], 0);
    Serial.print("Activating pin: ");
	Serial.println(ledPins[i]);
  }
}