#include <stdint.h>
#include <register.h>

extern uint8_t _etext;
extern uint8_t _sdata;
extern uint8_t _edata;
extern uint8_t _sbss;
extern uint8_t _ebss;

void ResetHandler();

void DefaultHandler();

void TIM1_IRQHandler();
void TIM2_IRQHandler();
void TIM3_IRQHandler();
void TIM4_IRQHandler();

void DefaultHandler(void) {
	GPIOC_ODR ^= (1 << 13);
}

int main(void) {
	RCC_CR |= (1 << 16);
	while(!(RCC_CR & (1 << 17)));
	
	FLASH_ACR |= 0x02;
		
	RCC_CFGR = 0x001D0402;
	
	RCC_CR |= (1 << 24);
	while(!(RCC_CR & (1 << 25)));

	ResetHandler();

	
	while(1) {
		
	}
}

void ResetHandler(void) {
	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
	uint8_t *pSrc = &_etext;
	uint8_t *pDst = &_sdata;
	for (int i = 0; i < size; i++)	{
		*pDst = *pSrc;
		pDst++;
	}

	size = (uint32_t)&_ebss - (uint32_t)&_sbss;
	pDst = &_sbss;
	for (int i = 0; i < size; i++) {
		*pDst = 0;
		pDst++;
	}
	 
} 

void TIM1_IRQHandler(void) {
	TIM1_SR = 0x0000;
}
void TIM2_IRQHandler(void) {
	TIM2_SR = 0x0000;
}
void TIM3_IRQHandler(void) {
	TIM3_SR = 0x0000;
}
void TIM4_IRQHandler(void) {
	TIM4_SR = 0x0000;
}
