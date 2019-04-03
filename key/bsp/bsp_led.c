#include "bsp_led.h"



void Led_Init(void)
{
      P1CON |= 0X80;
      P1PH    &= ~0X80;
      P2CON |=0X08;
      P2PH    &= ~0X08;
}






