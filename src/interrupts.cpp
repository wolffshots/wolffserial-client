#include "interrupts.h"
#include "control.h"

void interrupt_init()
{
    pinMode(BUTTON1, INPUT_PULLDOWN);                                           // set button one to input mode
    attachInterrupt(digitalPinToInterrupt(BUTTON1), button_0_handler, FALLING); // adds an interrupt to the button one falling edge to call button_0_handler
    pinMode(BUTTON2, INPUT_PULLDOWN);                                           // set button two to input mode
    attachInterrupt(digitalPinToInterrupt(BUTTON2), button_1_handler, FALLING); // adds an interrupt to the button two falling edge to call button_1_handler
}