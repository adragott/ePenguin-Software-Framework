/* -- ePenguin Master --

   This master file dictates all supported hardware. It lists supported
   architectures, mcu families, and specific mcus. This software framework
   targets hardware at the mcu level--not at the board level. Board layers can
   be applied, but this framework targets the mcu and the mcu alone.

*/
#ifndef _EPENGUIN_MASTER_H_
#define _EPENGUIN_MASTER_H_

#ifndef __UARCHITECTURES__
#define __UARCHITECTURES__
	#define __UARCH_ARM__			(0)
	#define __UARCH_ARM64__		(1)
	#define __UARCH_AVR__			(2)
	#define __UARCH_AVR32__		(3)
	#define __UARCH_X86__			(4)
	#define __UARCH_RISCV__		(5)
#endif

#ifndef __UFAMILIES__
#define __UFAMILIES__
	/* Support ARM MCU Families */

	/*  Microchip */
	#define __SAM_D1X__			(0)
	#define __SAM_C1X__			(1)
	#define __SAM_D2X__			(2)
	#define __SAM_E_D5X__			(3)
	#define __SAM_C2X__			(4)
	#define __SAM_L2X__			(5)

	/* STMicroelectronics */

	/* NXP */

#endif

#endif
