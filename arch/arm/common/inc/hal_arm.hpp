#ifndef _HAL_ARM_HPP_
#define _HAL_ARM_HPP_

#include "epenguin_conf.h"

#if !(EP_UARCH == __UARCH_ARM__)
	#error This shouldnt be included unless arm is the uarch of choice!
#endif


#if !(defined(__ASSEMBLY__))
#include <stdint.h>
// #ifndef __cplusplus
// 	typedef volatile const 	uint32_t RoReg; 	// Read only 32-bit register (volatile const unsigned int)
// 	typedef volatile const 	uint16_t RoReg16; 	// Read only 16-bit register (volatile const unsigned int)
// 	typedef volatile const 	uint8_t  RoReg8; 	// Read only 8-bit register (volatile const unsigned int)
// #else
// 	typedef volatile 			uint32_t RoReg; 	// Read only 32-bit register (volatile const unsigned int)
// 	typedef volatile 			uint16_t RoReg16;	// Read only 16-bit register (volatile const unsigned int)
// 	typedef volatile 			uint8_t  RoReg8;	// Read only 8-bit register (volatile const unsigned int)
// #endif
typedef volatile const 	uint32_t RoReg; 	// Read only 32-bit register (volatile const unsigned int)
typedef volatile const 	uint16_t RoReg16; 	// Read only 16-bit register (volatile const unsigned int)
typedef volatile const 	uint8_t  RoReg8; 	// Read only 8-bit register (volatile const unsigned int Ts)
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

namespace hal::arm
{
	
}
#endif
