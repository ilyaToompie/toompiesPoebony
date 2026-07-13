#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println("ESP32 is starting...");
}

void loop() {
  Serial.println("penes");
  delay(500);
}
