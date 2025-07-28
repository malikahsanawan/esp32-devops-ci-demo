#include "Arduino.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Hello from ESP32 DevOps Demo");
}

void loop() {
  Serial.println(millis());
  delay(1000);
}
