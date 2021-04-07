#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"

/*文件目的
    通过TIM4CH1输出脉冲匀速启动步进电机，速度为15r/min
    开发板:STM32c8t6
    引脚使用:   PB6    TIM4CH1脉冲通道
                PB5    控制方向IO口
                
                
    有问题联系我哈，QQ：2460693657
*/

int main(void)
{		
    LED_Init();
    DIR_Init();		
    TIM4_PWM_Init(200,450);
    TIM_SetCompare1(TIM4,200/2);	//设置占空比为50%=arr/2
   	while(1)
	{		
		LED1 = !LED1;
        delay_ms(500);
	}
}




