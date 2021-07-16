#include <Arduino.h>
#include "interrupts.h"
#include "control.h"

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  interrupt_init();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  // check_micros();
}
