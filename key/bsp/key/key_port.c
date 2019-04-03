//#include "sys_config.h"
#include "sc92f732x_c.h"

#if 0
#define KEY1_PIN						P00   //head_up
#define KEY2_PIN						P21   //head_down
#define KEY3_PIN						P03   //reset
#define KEY4_PIN						P02   //open
#define KEY5_PIN						P20   //close
#define KEY6_PIN						P01   //heat_on/heat_off
#define KEY7_PIN						P22   //mass_on/mass_off
#else

#define    KEY1_PIN          P21 


#endif
unsigned char Key_Port_Read(unsigned char num){
       #if 0
	if(num == 1){
		return KEY1_PIN;
	}else if(num == 2){
		return KEY2_PIN;
	}else if(num == 3){
		return KEY3_PIN;
	}else if(num == 4){
		return KEY4_PIN;
	}else if(num == 5){
		return KEY5_PIN;
	}else if(num == 6){
		return KEY6_PIN;
	}else if(num == 7){
		return KEY7_PIN;
	}else{
		return 0XFF;
	}
	#else
       if(num == 1){
	   	return KEY1_PIN;
	 }else{
             return 0xff;
	 }
	#endif
}

unsigned char Key_Port_Init(void){
       #if 0
	CLR_REG_CON(0, 0);
	SET_IO_PU(0, 0);
	
	CLR_REG_CON(0, 1);
	SET_IO_PU(0, 1);
	
	CLR_REG_CON(0, 2);
	SET_IO_PU(0, 2);
		
	CLR_REG_CON(0, 3);
	SET_IO_PU(0, 3);
	
	CLR_REG_CON(2, 0);
	SET_IO_PU(2, 0);
	
	CLR_REG_CON(2, 1);
	SET_IO_PU(2, 1);
	
	CLR_REG_CON(2, 2);
	SET_IO_PU(2, 2);
	#endif
	P2CON &= ~0X02;
	P2PH    |= 0X02;
	return 1;
}
