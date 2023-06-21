#ifndef _MY_STM32F4_UART_LIB_H_
#define _MY_STM32F4_UART_LIB_H_

#include "My_stm32f4_uart_driver.h"

//Variables for Uart settings

typedef enum {
    UART_COM_TYPE_POLLING,
    UART_COM_TYPE_INTERRUPT
}UART_ComType;

// Enumerationskonstant för UART baudhastighet

typedef enum {
    UART_BAUDRATE_9600,
    UART_BAUDRATE_115200

}UART_BaudrateType;

// Funktion för att skicka en karaktär över UART

void LIB_UART_Write(char data);

// Funktion för att läsa en karaktär från UART och skriva ut den

void LIB_UART_Read();

// Funktion för att initiera UART med angivna kommunikationtyp och baudhastighet

void LIB_UART_Init(UART_ComType comType, UART_BoudrateType baudrate);


#endif
