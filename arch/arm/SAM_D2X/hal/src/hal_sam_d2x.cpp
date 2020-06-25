#include "hal_sam_d2x.hpp"

#define __SYSTEM_CLOCK		(1000000)
uint32_t SystemCoreClock = __SYSTEM_CLOCK;

void hal::arm::sam_d2x::init()
{
	// Keep the default device state after reset
	SystemCoreClock = __SYSTEM_CLOCK;
	return;
}

void hal::arm::sam_d2x::clock_update()
{
	SystemCoreClock = __SYSTEM_CLOCK;
	return;
}
