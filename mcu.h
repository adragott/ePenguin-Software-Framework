#ifndef __MCU_H__
#define __MCU_H__

#include "epenguin_conf.h"

#ifndef EP_UARCH
	#error You must specify an architecture!
#elifndef EP_MCU_FAMILY
	#error You must specify a mcu family!
#elifndef EP_MCU
	#error You must specify a mcu!
#else
	#if EP_UARCH	== __UARCH_ARM__
		#if EP_MCU_FAMILY == __SAM_D2X__
			#if EP_MCU == __ATSAMD21J18A__
			#else
			#endif
		#elif EP_MCU
		#endif
	#elif EP_UARCH	== __UARCH_ARM64__

	#elif EP_UARCH	== __UARCH_AVR__

	#elif EP_UARCH	== __UARCH_AVR32__

	#elif EP_UARCH	== __UARCH_RISCV__

	#elif EP_UARCH	== __UARCH_X86__

	#else
		#error Selected uarch not found! Try again =(
	#endif
#endif

#endif
