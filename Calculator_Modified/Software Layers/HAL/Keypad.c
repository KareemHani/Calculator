
#include "Keypad.h"
#include "Software Layers/LIB/tm4c123gh6pm.h"
#include "Software Layers/MCAL/DIO.h"
#include "Software Layers/MCAL/GPIO_INTERRUPT.h"


void Keypad_INIT()
{
    DIO_INIT(PORTB, 0b11110000, 0b00001111);

    interrupt_init(PORTB, 0);
    interrupt_init(PORTB, 1);
    interrupt_init(PORTB, 2);
    interrupt_init(PORTB, 3);

}




