#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"

/*�ļ�Ŀ��
    ͨ��TIM4CH1�������������������������ٶ�Ϊ15r/min
    ������:STM32c8t6
    ����ʹ��:   PB6    TIM4CH1����ͨ��
                PB5    ���Ʒ���IO��
                
                
    ��������ϵ�ҹ���QQ��2460693657
*/

int main(void)
{		
    LED_Init();
    DIR_Init();		
    TIM4_PWM_Init(200,450);
    TIM_SetCompare1(TIM4,200/2);	//����ռ�ձ�Ϊ50%=arr/2
   	while(1)
	{		
		LED1 = !LED1;
        delay_ms(500);
	}
}




