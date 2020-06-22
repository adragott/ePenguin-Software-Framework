#ifndef _HDI_SAM_D2X_H_
#define _HDI_SAM_D2X_H_
#include "hal_arm.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

#if !(defined(__ASSEMBLY__))
#ifndef __cplusplus
	typedef volatile const 	uint32_t RoReg; 	// Read only 32-bit register (volatile const unsigned int)
	typedef volatile const 	uint16_t RoReg16; 	// Read only 16-bit register (volatile const unsigned int)
	typedef volatile const 	uint8_t  RoReg8; 	// Read only 8-bit register (volatile const unsigned int)
#else
	typedef volatile 			uint32_t RoReg; 	// Read only 32-bit register (volatile const unsigned int)
	typedef volatile 			uint16_t RoReg16;	// Read only 16-bit register (volatile const unsigned int)
	typedef volatile 			uint8_t  RoReg8;	// Read only 8-bit register (volatile const unsigned int)
#endif
	typedef volatile			uint32_t WoReg;	// Write only 32-bit register (volatile unsigned int)
	typedef volatile			uint16_t WoReg16;	// Write only 16-bit register (volatile unsigned int)
	typedef volatile 			uint16_t WoReg8;	// Write only 8-bit register (volatile unsigned int)
	typedef volatile			uint32_t RwReg;	// Write only 32-bit register (volatile unsigned int)
	typedef volatile			uint16_t RwReg16;	// Write only 16-bit register (volatile unsigned int)
	typedef volatile 			uint8_t  RwReg8;	// Write only 8-bit register (volatile unsigned int)
#define CAST(type, value) ((type*)(value))
#define REG_ACCESS(type, address) (*(type*)(address))
#else
#define CAST(type, value) (value)
#define REG_ACCESS(type, address) (address)
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
	SERCOM4_IRQn					= 13,
	SERCOM5_IRQn					= 14
}IRQn_Type;
#ifdef __cplusplus
}
#endif
#endif
