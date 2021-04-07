#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"

#define DIR PBout(5)// 定义方向DIR=PB5

void DIR_Init(void);
void TIM4_PWM_Init(u16 arr,u16 psc);

#endif

