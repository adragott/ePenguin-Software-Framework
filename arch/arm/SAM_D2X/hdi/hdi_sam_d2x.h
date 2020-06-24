#ifndef _HDI_SAM_D2X_H_
#define _HDI_SAM_D2X_H_
#include "hal_arm.hpp"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

#if !(EP_MCU == __SAM_D2X__)
	#error Shouldn't have gotten here
#endif
typedef enum IRQn
{
	// Cortex-M0+ Processor Exception Numbers
	NonMaskableInt_IRQn 			= -14,
	HardFault_IRQn					= -13,
	SVCall_IRQn 					= -5,
	PendSV_IRQn					= -2,
	SysTick_IRQn 					= -1,
	// samd21j18a specific interrupt numbers
	PM_IRQn 						= 0,
	SYSCTRL_IRQn 					= 1,
	WDT_IRQn 						= 2,
	RTC_IRQn 						= 3,
	EIC_IRQn						= 4,
	NVMCTRL_IRQn 					= 5,
	DMAC_IRQn						= 6,
	USB_IRQn						= 7,
	EVSYS_IRQ						= 8,
	SERCOM0_IRQn					= 9,
	SERCOM1_IRQn					= 10,
	SERCOM2_IRQn					= 11,
	SERCOM3_IRQn					= 12,
	#if !()
	SERCOM4_IRQn					= 13,
	SERCOM5_IRQn					= 14,

}IRQn_Type;
#ifdef __cplusplus
}
#endif
#endif
