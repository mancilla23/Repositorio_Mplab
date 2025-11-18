/*
 * File:   counter_boton.c
 * Author: angel
 *
 * Created on 30 de octubre de 2025, 07:25 AM
 */

#define __XTAL_FREQ 20000000
#include <xc.h>
unsigned char counter = 0;

void main(void) {
    
    TRISA = 0x01;
    TRISB = 0x00;
    PORTB = 0b00111111;
    
    while (1){
    
        unsigned char button = PORTAbits.RA0;
        
        if (counter == 10){
            counter = 0;
        }
        
        if (button == 1){
            counter++;
        }
        
        switch (counter){
            case 0:
                PORTB = 0b00000000;
        }
    }
    
    return;
}
