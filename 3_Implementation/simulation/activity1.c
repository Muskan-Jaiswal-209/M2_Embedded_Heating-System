/**
 * @file activity1.c
 * @author KaaviyaP (kaaviya2881999@gmail.com)
 * @brief User defined utilities, to define pins and ports to Blink an LED ON/OFF 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"


void peripheral_init(void)
{	
	DDRD |= (1<<PD2); // set PD2=1 for LED
    DDRD &= ~(1<<PD0); //clear bit
    PORTD |= (1<<PD0); //set bit PD0 for SeatSwitch
    DDRD &= ~(1<<PD1); //clear bit
    PORTD |= (1<<PD1); //set bit PD0 for HeaterSwitch
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN); 
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int activity1_LED(void)
{
       peripheral_init();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) //both the switches are pressed
        { 
            act1=1;
        }
        else  //in all other cases
        {
            act1=0;
        }
    return act1;
}
