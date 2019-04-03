#ifndef _BSP_LED_H_
#define _BSP_LED_H_


#include "sc92f732x_c.h"


#define LED_PORT     P1
#define LED_PIN       P17
#define LED_SET(X)   ((X)?(LED_PIN=1):(LED_PIN=0))


#define LED1_PORT    P2
#define LED1_PIN       P23
#define LED1_SET(X)   ((X)?(LED1_PIN=1):(LED1_PIN=0))










void Led_Init(void);




#endif





