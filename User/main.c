#include "stm32f10x.h"   
#include "delay.h"
#include "usart.h"

extern uint8_t ReceiveBuff[RECEIVEBUFF_SIZE];

void SystemConfig(void)
{
	DelayInit();
	USART_Config();
	USARTx_DMA_Config();
}

int main(void)
{
	SystemConfig();
	while(1)
	{
		
	}
}


