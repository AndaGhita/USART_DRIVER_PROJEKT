#ifndef _MY_STM32F4_UART_DRIVER_H_
#define _MY_STM32F4_UART_DRIVER_H_

#include <stdint.h>

//Define output bases for proper communication bus and USART peripherals

#define USART1_BASE (0x40011000)
#define USART2_BASE (0x40004400)
#define USART6_BASE (0x40011400)

//Struct containing the registers for the USART

typedef struct 
{
    volatile uint32_t SR; //Status register
    volatile uint32_t DR; //Data register
    volatile uint32_t BRR; ///Baud rate register
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t GTPR; // Guard time and prescale register
}USART_Registers;

//Define pointers to the USART registers

#define USART1 ((USART_Registers*)USART1_BASE)
#define USART2 ((USART_Registers*)UASRT2_BASE)
#define USART6 ((USART_Registers*)USART6_BASE)

#endif
