 #include <main.h>
 #include "..\library\delay.h"
 void UART_mode0_write(unsigned char a)
 {
    SBUF = a;
    while(TI==0);
    TI = 0;
    P3_2 = 0;
    P3_2 = 1;
 }

 void main()
 {
   SM0 = SM1 = 0;
   UART_mode0_write(0x04);
   while(1)
   {
     delay(1);
   }
 }