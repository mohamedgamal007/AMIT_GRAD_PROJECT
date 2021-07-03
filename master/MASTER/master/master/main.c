/*
 * master.c
 *
 * Created: 30/06/2021 08:30:27 م
 * Author : Dell
 */ 

#include <avr/io.h>
#include "Utilites.h"
#include "Std_Types.h"
#include "Dio_Int.h"
#include "UART_INTERFACE.h"
#include "SPI_Int.h"


int main(void)
{
    SPI_initMaster();
	UART_Init();
	u8 data;
    while (1) 
    {
		data = UART_RecieveByte();
		SPI_sendByte(data);
    }
}

