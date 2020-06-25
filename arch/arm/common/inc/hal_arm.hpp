#ifndef _HAL_ARM_HPP_
#define _HAL_ARM_HPP_

#include "epenguin_conf.h"

#if !(EP_UARCH == __UARCH_ARM__)
	#error This shouldnt be included unless arm is the uarch of choice!
#endif


namespace hal::arm
{
	
}
#endif
