/*
 * slave.c
 *
 * Created: 30/06/2021 08:43:38 م
 * Author : Dell
 */ 

#include <avr/io.h>
#include "Utilites.h"
#include "Std_Types.h"
#include "Dio_Int.h"
#include "UART_INTERFACE.h"
#include "SPI_Int.h"



int main(void)
{   Dio_SetPinDirection(GroupC,PIN0,OUTPUT);
    SPI_initSlave();
	u8 recieved_data ;
    while (1) 
    {
		recieved_data =SPI_recieveByte();
		if(recieved_data=='R'){
			TOG_BIT(PORTC,PIN0);
		}		
		
    }
}

