.cpu cortex-m3
.thumb

.global TIM1_IRQHandler
.global TIM2_IRQHandler
.global TIM3_IRQHandler
.global DefaultHandler

.weak TIM2_IRQHandler
.thumb_set TIM1_IRQHandler, DefaultHandler
.thumb_set TIM2_IRQHandler, DefaultHandler
.thumb_set TIM3_IRQHandler, DefaultHandler

.global _reset

.section .isr_vector
.align 2
.word 0x20002800     // end of RAM (10KB), so that the bitchass SP can point to the end of the SRAM 
.word _reset         // ResetHandler code, so the CPU can jump to the main function after main
.word DefaultHandler //NMI_IRQHandler
.word DefaultHandler //HardFault_Handler
.word DefaultHandler //MemManage_Handler
.word DefaultHandler //BusFault
.word DefaultHandler //Usage Fault
.word 0
.word 0
.word 0
.word 0
.word DefaultHandler //SVCll
.word DefaultHandler //DebugMonitor
.word 0
.word DefaultHandler //PendSV
.word DefaultHandler //SysTick
.word DefaultHandler //WWDG
.word DefaultHandler //PVD
.word DefaultHandler //Tampler
.word DefaultHandler //RTC
.word DefaultHandler //FLASH
.word DefaultHandler //RCC
.word DefaultHandler //EXTI0
.word DefaultHandler //EXTI1
.word DefaultHandler //EXTI2
.word DefaultHandler //EXTI3
.word DefaultHandler //EXTI4
.word DefaultHandler //DMA1_CH1
.word DefaultHandler //DMA1_CH2
.word DefaultHandler //DMA1_CH3
.word DefaultHandler //DMA1_CH4
.word DefaultHandler //DMA1_CH5
.word DefaultHandler //DMA1_CH6
.word DefaultHandler //DMA1_CH7
.word DefaultHandler //ADC1_2
.word DefaultHandler //USB_HP_CAN_TX
.word DefaultHandler //USB_LP_CAN_RX0
.word DefaultHandler //CAN RX1
.word DefaultHandler //CAN SCE
.word DefaultHandler //EXTI9_5
.word DefaultHandler //TIM1_BRK
.word TIM1_IRQHandler //TIM1_UP
.word DefaultHandler //TIM1_TRG_COM
.word DefaultHandler //TIM1_CC
.word TIM2_IRQHandler //TIM2
.word TIM3_IRQHandler //TIM3
.word DefaultHandler //TIM4
.word DefaultHandler //I2C1_EV
.word DefaultHandler //I2C1_ER
.word DefaultHandler //I2C2_EV
.word DefaultHandler //I2C_ER
.word DefaultHandler //SP1 
.word DefaultHandler //SP2
.word DefaultHandler //USART1
.word DefaultHandler //USART2
.word DefaultHandler //USART3
.word DefaultHandler //EXTI15_10
.word DefaultHandler //RTCAlarm
.word DefaultHandler //USBWakeup
.word DefaultHandler //TIM8_BRK
.word DefaultHandler //TIM8_UP
.word DefaultHandler //TIM8_TRG_COM
.word DefaultHandler //TIM8_CC
.word DefaultHandler //ADC3
.word DefaultHandler //FSMC
.word DefaultHandler //SDIO
.word DefaultHandler //TIM5
.word DefaultHandler //SPI3
.word DefaultHandler //UART4
.word DefaultHandler //UART5
.word DefaultHandler //TIM6 
.word DefaultHandler //TIM7
.word DefaultHandler //DMA2_CH1
.word DefaultHandler //DMA2_CH2
.word DefaultHandler //DMA2_CH3
.word DefaultHandler //DMA2_CH4_5

// .text section contains all the fking thumb_func
.section .text 

.thumb_func
_reset:
	bl ResetHandler
    	bl main
    	b .

//.thumb_func
//DefaultHandler:
//	b .
