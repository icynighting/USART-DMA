//ת���Ӵ���1���յ������ݷ���PC
//
//
#include "stm32f10x.h"
#include "misc.h"
#include "bsp_RCC_Configuration.h"
#include "bsp_NVIC_Configuration.h"
#include "bsp_GPIO_Configuration.h"
#include "bsp_USART1_Init.h"

#define SEND_BUF_SIZE 8200	//�������ݳ���,��õ���sizeof(TEXT_TO_SEND)+2��������.

u8 SendBuff[SEND_BUF_SIZE];	//�������ݻ�����
const u8 TEXT_TO_SEND[]={"ALIENTEK WarShip STM32F1 DMA ����ʵ��"};


int main(void)	
{
	

 
	RCC_Configuration();
	NVIC_Configuration();
	GPIO_Configuration();
	
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	USART1_Init();
	while (1) 
		{
			
		}

}
