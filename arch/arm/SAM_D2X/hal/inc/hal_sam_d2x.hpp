#ifndef _HAL_SAM_D2X_HPP_
#define _HAL_SAM_D2X_HPP_

#include "hal_arm.hpp"
#include <cstdint>

namespace hal::arm::sam_d2x
{
	void init();
	void clock_update();
};
#include "hdi_sam_d2x.h"
#include <core_cm0plus.h>
#endif
