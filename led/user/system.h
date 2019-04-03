#ifndef _SYSTEM_H_
#define _SYSTEM_H_



#include "sc92f732x_c.h"

#include "bsp_led.h"
#include "TimeOut.h"
#include "bsp_timer.h"


typedef enum
{
	LED0_VALUE,
	LED1_VALUE,
	LED2_VALUE,
	LED3_VALUE
}
LED_MSG;









void System_Init(void);
void System_Handle(void);




#endif
