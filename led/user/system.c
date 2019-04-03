#include "system.h"

TIMEOUT_PARA TimeOut_Para[2];

LED_MSG Led_Msg;

static void(*GetValueCb)(unsigned char);

LED_MSG Led_Scanf(void)
{
	if(P21 == 0)
	{
		return LED1_VALUE;
	}
	else
	{
		return LED0_VALUE;
	}
}


void Led_Function(unsigned char GetValue)
{
	if(GetValue == LED0_VALUE)
	{
		LED1_SET(0);
	}
	else if(GetValue == LED1_VALUE)
	{
		LED1_SET(1);
	}
}

void Led_Register(void (*Cb)(unsigned char))
{
	if(Cb)
	{
		GetValueCb = Cb;
	}
}

void Led_Poll(void)
{
	Led_Msg = Key_Scanf();
	if(GetValueCb)
	{
		GetValueCb(Led_Msg);
	}
}

void System_Init(void)
{
	 TimeOutDet_Init();
	 Led_Init();
	 P2CON &= ~0X02;
	 P2PH   |= 0X02;
	 Led_Register(Led_Function);
	 Timer_Init();
}

void System_Handle(void)
{
	 static unsigned char Cnts;
	 if(TimeOutDet_Check(&TimeOut_Para[0]))
	 {
	        TimeOut_Record( &TimeOut_Para[0],4000);
		 ++ Cnts;
		 if(Cnts & 0x01)
		 {
		 	//LED1_SET(1);
		 }
		 else
		 {
		 	//LED1_SET(0);
		 }
	 }
	Led_Poll();
}



