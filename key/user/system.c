#include "system.h"




void Key_Function(unsigned char Get_Key)
{
	if(Get_Key == MSG_KEY_NONE)
	{
		LED_SET(0);
		LED1_SET(0);
	}
	else if(Get_Key == MSG_KEY1_PRESS)
	{
		LED1_SET(1);
	}
	#if 0
	else if(Get_Key == MSG_KEY1_SHORT_PRESS)
	{
		LED_SET(1);
	}
	else if(Get_Key == MSG_KEY1_LONGPRESS_HD)
	{
		LED1_SET(1);
	}
	else if(Get_Key == MSG_KEY1_LONGPRESS_RE)
	{
		
	}
	#endif
}


void System_Init(void)
{
       Led_Init();
	TimeOutDet_Init();
	Key_Init();
	Key_Register(Key_Function);
	Timer_Init();
}


void System_Handle(void)
{
	#if 0
	LED_SET(1);
	LED1_SET(1);
	#else
	Key_Poll();
	#endif
}





