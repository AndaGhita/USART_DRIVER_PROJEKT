#include "My_stm32f4_uart_lib.h"

int main() {
    // Initialize UART with desired communication type and baud rate
    LIB_UART_Init(UART_COM_TYPE_POLLING, _MY_UART_BAUDRATE_9600); 


while(1){

    //Print message over UART

    LIB_UART_Write('H');
    LIB_UART_Write('e');
    LIB_UART_Write('j');
}

return 0;
}