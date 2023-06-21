#include "My_stm32f4_uart_lib.h"

//Variables for baud rate

static const uint32_t baudrate_9600 = 9600;
static const uint32_t baudrate_115200 = 115200;

//Variables for Uart settings

static const uint8_t enable_tx = 1;
static const uint8_t enable_uart = 1;
static const uint8_t disable_uart = 0;
static const uint8_t stop_bit = 1;
static const uint8_t flow_control = 0;

void LIB_UART_Write(char data){}
void LIB_UART_Read(){}
void LIB_UART_INIT(UART_ComType comType, UART_BaudrateType baudrate){}

