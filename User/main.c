//转发从串口1接收到的数据发回PC
//
//
#include "stm32f10x.h"
#include "misc.h"
#include "bsp_RCC_Configuration.h"
#include "bsp_NVIC_Configuration.h"
#include "bsp_GPIO_Configuration.h"
#include "bsp_USART1_Init.h"

#define SEND_BUF_SIZE 8200	//发送数据长度,最好等于sizeof(TEXT_TO_SEND)+2的整数倍.

u8 SendBuff[SEND_BUF_SIZE];	//发送数据缓冲区
const u8 TEXT_TO_SEND[]={"ALIENTEK WarShip STM32F1 DMA 串口实验"};


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
