#include "bsp_USART1_Init.h"

void USART1_Init(void)
{
	USART_InitTypeDef USART1_InitStructure;
	
	USART1_InitStructure.USART_BaudRate=115200;
	USART1_InitStructure.USART_HardwareFlowControl=USART_HardwareFlowControl_None;
	USART1_InitStructure.USART_Mode=USART_Mode_Tx|USART_Mode_Rx;
	USART1_InitStructure.USART_Parity=USART_Parity_No;
	USART1_InitStructure.USART_StopBits=USART_StopBits_1;
	USART1_InitStructure.USART_WordLength=USART_WordLength_8b;
	
	USART_Init(USART1,&USART1_InitStructure);
	
	USART_Cmd(USART1,ENABLE);
	
	USART_ITConfig(USART1,USART_IT_RXNE,ENABLE);  //开启接收中断


}
