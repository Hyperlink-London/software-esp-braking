#include <HardwareSerial.h>

HardwareSerial mySerial(1);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(millis());
  delay(1000);
}
