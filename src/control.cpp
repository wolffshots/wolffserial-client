#include <Arduino.h>
#include "control.h"

#define DEBOUNCE_TIME 250 // ms
volatile uint32_t last_run_time_0 = 0;
volatile uint32_t last_run_time_1 = 0;

void IRAM_ATTR button_0_handler()
{
    if (millis() - DEBOUNCE_TIME >= last_run_time_0)
    {
        last_run_time_0 = millis();
        Serial.println("BUTTON:0");
        digitalWrite(LED_BUILTIN, HIGH);
    }
}

void IRAM_ATTR button_1_handler()
{
    if (millis() - DEBOUNCE_TIME >= last_run_time_1)
    {
        last_run_time_1 = millis();
        Serial.println("BUTTON:1");
        digitalWrite(LED_BUILTIN, LOW);
    }
}
