#ifndef BUTTON_INTERRUPTS_H
#define BUTTON_INTERRUPTS_H
#include <Arduino.h>

const int BUTTON1 = 22;
const int BUTTON2 = 23;

/* add the interrupts to the buttons */
void interrupt_init();
#endif // BUTTON_INTERRUPTS_H