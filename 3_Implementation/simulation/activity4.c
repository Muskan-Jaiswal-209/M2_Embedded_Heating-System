/**
 * @file activity4.c
 * @author KaaviyaP (kaaviya2881999@gmail.com)
 * @brief Functions to print the Temperature in Oscilloscope 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity4.h"

void USARTInit()
{
    UBRR0H = (uint8_t)(UBRR_VALUE>>8);
    UBRR0L = (uint8_t)UBRR_VALUE;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

int USARTRead()
{
    while(!(UCSR0A &(1<<RXC0)))
    {
        //Do nothing
    }
    return UDR0;
}

void activity4_USARTWrite(uint16_t temp)
{ 
    int i=0;
        if(temp>=0 && temp<=200){
            unsigned char data1[]="Temperature: 20 degree C\n";
            i=0;
            while(data1[i]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data1[i];        // Put data into buffer, sends the data
            i++;
            }
            _delay_ms(2000);
        }
        else if(temp>=210 && temp<=500){
            unsigned char data2[]="Temperature: 25 degree C\n";
            i=0;
            while(data2[i]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data2[i];        // Put data into buffer, sends the data
            i++;
            }
            _delay_ms(2000);
        }
        else if(temp>=510 && temp<=700){        
             unsigned char data3[]="Temperature: 29 degree C\n";
            i=0;
            while(data3[i]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data3[i];        // Put data into buffer, sends the data
            i++;
            }
            _delay_ms(2000);
        }
        else if(temp>=710 && temp<=1024){         
            unsigned char data4[]="Temperature: 33 degree C\n";     
            i=0;
            while(data4[i]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data4[i];        // Put data into buffer, sends the data
            i++;
            }
            _delay_ms(2000);
        }
        else{
              unsigned char data5[]="Temperature: 0 degree C\n";
            i=0;
            while(data5[i]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data5[i];        // Put data into buffer, sends the data
            i++;
            }
            _delay_ms(2000);
            
        }
}


