#include <stdint.h>

#define FLASH_ACR (*(volatile uint32_t*)(0x40022000))

#define RCC_BASE 0x40021000
#define RCC_CR (*(volatile uint32_t *)(RCC_BASE))
#define RCC_CFGR (*(volatile uint32_t *)(RCC_BASE + 0x04))
#define RCC_APB2ENR (*(volatile uint32_t *)(RCC_BASE + 0x18))
#define RCC_APB1ENR (*(volatile uint32_t *)(RCC_BASE + 0x1C))
#define RCC_AHBENR (*(volatile uint32_t *)(RCC_BASE + 0x14))

#define TIM2_BASE 0x40000000
#define TIM2_CR1 (*(volatile uint32_t *)(TIM2_BASE))
#define TIM2_CR2 (*(volatile uint32_t *)(TIM2_BASE + 0x04))
#define TIM2_DIER (*(volatile uint32_t *)(TIM2_BASE + 0x0C))
#define TIM2_SR (*(volatile uint32_t *)(TIM2_BASE + 0x10))
#define TIM2_PSC (*(volatile uint32_t *)(TIM2_BASE + 0x28))
#define TIM2_ARR (*(volatile uint32_t *)(TIM2_BASE + 0x2C))
#define TIM2_EGR (*(volatile uint32_t *)(TIM2_BASE + 0x14))
#define TIM2_SMCR (*(volatile uint32_t *)(TIM2_BASE + 0x08))
#define TIM2_CCMR1 (*(volatile uint32_t *)(TIM2_BASE + 0x18))
#define TIM2_CCR1 (*(volatile uint32_t *)(TIM2_BASE + 0x34))
#define TIM2_CCR2 (*(volatile uint32_t *)(TIM2_BASE + 0x38))
#define TIM2_CNT (*(volatile uint32_t *)(TIM2_BASE + 0x24))
#define TIM2_CCER (*(volatile uint32_t *)(TIM2_BASE + 0x20))


#define TIM3_BASE 0x40000400
#define TIM3_CR1 (*(volatile uint32_t *)(TIM3_BASE))
#define TIM3_DIER (*(volatile uint32_t *)(TIM3_BASE + 0x0C))
#define TIM3_SR (*(volatile uint32_t *)(TIM3_BASE + 0x10))
#define TIM3_PSC (*(volatile uint32_t *)(TIM3_BASE + 0x28))
#define TIM3_ARR (*(volatile uint32_t *)(TIM3_BASE + 0x2C))
#define TIM3_EGR (*(volatile uint32_t *)(TIM3_BASE + 0x14))
#define TIM3_CCMR1 (*(volatile uint32_t *)(TIM3_BASE + 0x18))
#define TIM3_SMCR (*(volatile uint32_t *)(TIM3_BASE + 0x08))
#define TIM3_CCR1 (*(volatile uint32_t *)(TIM3_BASE + 0x34))
#define TIM3_CCR2 (*(volatile uint32_t *)(TIM3_BASE + 0x38))
#define TIM3_CCR3 (*(volatile uint32_t *)(TIM3_BASE + 0x3C))
#define TIM3_CNT (*(volatile uint32_t *)(TIM3_BASE + 0x24))
#define TIM3_CCER (*(volatile uint32_t *)(TIM3_BASE + 0x20))

#define TIM1_BASE 0x40012C00
#define TIM1_CR1 (*(volatile uint32_t *)(TIM1_BASE))
#define TIM1_CR2 (*(volatile uint32_t *)(TIM1_BASE + 0x04))
#define TIM1_DIER (*(volatile uint32_t *)(TIM1_BASE + 0x0C))
#define TIM1_SR (*(volatile uint32_t *)(TIM1_BASE + 0x10))
#define TIM1_PSC (*(volatile uint32_t *)(TIM1_BASE + 0x28))
#define TIM1_ARR (*(volatile uint32_t *)(TIM1_BASE + 0x2C))
#define TIM1_EGR (*(volatile uint32_t *)(TIM1_BASE + 0x14))
#define TIM1_CCMR1 (*(volatile uint32_t *)(TIM1_BASE + 0x18))
#define TIM1_SMCR (*(volatile uint32_t *)(TIM1_BASE + 0x08))
#define TIM1_CCR1 (*(volatile uint32_t *)(TIM1_BASE + 0x34))
#define TIM1_CCR2 (*(volatile uint32_t *)(TIM1_BASE + 0x38))
#define TIM1_CCR3 (*(volatile uint32_t *)(TIM1_BASE + 0x3C))
#define TIM1_CNT (*(volatile uint32_t *)(TIM1_BASE + 0x24))
#define TIM1_CCER (*(volatile uint32_t *)(TIM1_BASE + 0x20))

#define TIM4_BASE 0x40000800
#define TIM4_CR1 (*(volatile uint32_t *)(TIM4_BASE))
#define TIM4_CR2 (*(volatile uint32_t *)(TIM4_BASE + 0x04))
#define TIM4_DIER (*(volatile uint32_t *)(TIM4_BASE + 0x0C))
#define TIM4_SR (*(volatile uint32_t *)(TIM4_BASE + 0x10))
#define TIM4_PSC (*(volatile uint32_t *)(TIM4_BASE + 0x28))
#define TIM4_ARR (*(volatile uint32_t *)(TIM4_BASE + 0x2C))
#define TIM4_EGR (*(volatile uint32_t *)(TIM4_BASE + 0x14))
#define TIM4_CCMR1 (*(volatile uint32_t *)(TIM4_BASE + 0x18))
#define TIM4_SMCR (*(volatile uint32_t *)(TIM4_BASE + 0x08))
#define TIM4_CCR1 (*(volatile uint32_t *)(TIM4_BASE + 0x34))
#define TIM4_CCR2 (*(volatile uint32_t *)(TIM4_BASE + 0x38))
#define TIM4_CCR3 (*(volatile uint32_t *)(TIM4_BASE + 0x3C))
#define TIM4_CNT (*(volatile uint32_t *)(TIM4_BASE + 0x24))
#define TIM4_CCER (*(volatile uint32_t *)(TIM4_BASE + 0x20))

#define NVIC_BASE 0xE000E100
#define NVIC_ISER0 (*(volatile uint32_t *)(NVIC_BASE))

#define GPIOC_BASE 0x40011000
#define GPIOC_CRH (*(volatile uint32_t *)(GPIOC_BASE + 0x04))
#define GPIOC_ODR (*(volatile uint32_t *)(GPIOC_BASE + 0x0C))
#define GPIOC_BSRR (*(volatile uint32_t *)(GPIOC_BASE + 0x10))

#define GPIOB_BASE 0x40010C00
#define GPIOB_CRL (*(volatile uint32_t *)(GPIOB_BASE))
#define GPIOB_CRH (*(volatile uint32_t *)(GPIOB_BASE + 0x04))
#define GPIOB_ODR (*(volatile uint32_t *)(GPIOB_BASE + 0x0C))
#define GPIOB_BSRR (*(volatile uint32_t *)(GPIOB_BASE + 0x10))

#define GPIOA_BASE 0x40010800
#define GPIOA_CRL (*(volatile uint32_t *)(GPIOA_BASE))
#define GPIOA_CRH (*(volatile uint32_t *)(GPIOA_BASE + 0x04))
#define GPIOA_ODR (*(volatile uint32_t *)(GPIOA_BASE + 0x0C))
#define GPIOA_BSRR (*(volatile uint32_t *)(GPIOA_BASE + 0x10))

#define DMA_BASE 0x40020000
#define DMA_CCR5 (*(volatile uint32_t *)(DMA_BASE + 0x58))
#define DMA_CNDTR5 (*(volatile uint32_t *)(DMA_BASE + 0x5C))
#define DMA_CPAR5 (*(volatile uint32_t *)(DMA_BASE + 0x60))
#define DMA_CMAR5 (*(volatile uint32_t *)(DMA_BASE + 0x64))

extern uint8_t _etext;
extern uint8_t _sdata;
extern uint8_t _edata;
extern uint8_t _sbss;
extern uint8_t _ebss;

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
		
	RCC_APB2ENR |= (1 << 4);
	
	GPIOC_CRH = 0x44344444;	
	uint8_t count = 0;
	GPIOC_ODR &= ~(1 << 13);
	while(1) {
		count++;
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

