#include "PluggableUSBHID.h"
#include "USBMouseKeyboard.h"

USBMouseKeyboard Mouse;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Mouse.move(10, 10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Mouse.move(-10, -10);
}
