#ifndef _HDI_SAM_D2X_H_
#define _HDI_SAM_D2X_H_
#ifdef __cplusplus
extern "C" {
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include "epenguin_dev_arm_util.h"
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */
#define CAST(type, value) ((type *)(value))
#define REG_ACCESS(type, address) (*(type*)(address)) /**< C code: Register value */
#else
#define CAST(type, value) (value)
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif

/* ************************************************************************** */
/**  CMSIS DEFINITIONS FOR SAMD21J18A */
/* ************************************************************************** */
/** \defgroup SAMD21J18A_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
  /******  Cortex-M0+ Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn      = -14,/**<  2 Non Maskable Interrupt                 */
  HardFault_IRQn           = -13,/**<  3 Cortex-M0+ Hard Fault Interrupt        */
  SVCall_IRQn              = -5, /**< 11 Cortex-M0+ SV Call Interrupt           */
  PendSV_IRQn              = -2, /**< 14 Cortex-M0+ Pend SV Interrupt           */
  SysTick_IRQn             = -1, /**< 15 Cortex-M0+ System Tick Interrupt       */
  /******  SAMD21J18A-specific Interrupt Numbers ***********************/
  PM_IRQn                  =  0, /**<  0 SAMD21J18A Power Manager (PM) */
  SYSCTRL_IRQn             =  1, /**<  1 SAMD21J18A System Control (SYSCTRL) */
  WDT_IRQn                 =  2, /**<  2 SAMD21J18A Watchdog Timer (WDT) */
  RTC_IRQn                 =  3, /**<  3 SAMD21J18A Real-Time Counter (RTC) */
  EIC_IRQn                 =  4, /**<  4 SAMD21J18A External Interrupt Controller (EIC) */
  NVMCTRL_IRQn             =  5, /**<  5 SAMD21J18A Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                =  6, /**<  6 SAMD21J18A Direct Memory Access Controller (DMAC) */
  USB_IRQn                 =  7, /**<  7 SAMD21J18A Universal Serial Bus (USB) */
  EVSYS_IRQn               =  8, /**<  8 SAMD21J18A Event System Interface (EVSYS) */
  SERCOM0_IRQn             =  9, /**<  9 SAMD21J18A Serial Communication Interface 0 (SERCOM0) */
  SERCOM1_IRQn             = 10, /**< 10 SAMD21J18A Serial Communication Interface 1 (SERCOM1) */
  SERCOM2_IRQn             = 11, /**< 11 SAMD21J18A Serial Communication Interface 2 (SERCOM2) */
  SERCOM3_IRQn             = 12, /**< 12 SAMD21J18A Serial Communication Interface 3 (SERCOM3) */
  SERCOM4_IRQn             = 13, /**< 13 SAMD21J18A Serial Communication Interface 4 (SERCOM4) */
  SERCOM5_IRQn             = 14, /**< 14 SAMD21J18A Serial Communication Interface 5 (SERCOM5) */
  TCC0_IRQn                = 15, /**< 15 SAMD21J18A Timer Counter Control 0 (TCC0) */
  TCC1_IRQn                = 16, /**< 16 SAMD21J18A Timer Counter Control 1 (TCC1) */
  TCC2_IRQn                = 17, /**< 17 SAMD21J18A Timer Counter Control 2 (TCC2) */
  TC3_IRQn                 = 18, /**< 18 SAMD21J18A Basic Timer Counter 3 (TC3) */
  TC4_IRQn                 = 19, /**< 19 SAMD21J18A Basic Timer Counter 4 (TC4) */
  TC5_IRQn                 = 20, /**< 20 SAMD21J18A Basic Timer Counter 5 (TC5) */
  TC6_IRQn                 = 21, /**< 21 SAMD21J18A Basic Timer Counter 6 (TC6) */
  TC7_IRQn                 = 22, /**< 22 SAMD21J18A Basic Timer Counter 7 (TC7) */
  ADC_IRQn                 = 23, /**< 23 SAMD21J18A Analog Digital Converter (ADC) */
  AC_IRQn                  = 24, /**< 24 SAMD21J18A Analog Comparators (AC) */
  DAC_IRQn                 = 25, /**< 25 SAMD21J18A Digital Analog Converter (DAC) */
  PTC_IRQn                 = 26, /**< 26 SAMD21J18A Peripheral Touch Controller (PTC) */
  I2S_IRQn                 = 27, /**< 27 SAMD21J18A Inter-IC Sound Interface (I2S) */

  PERIPH_COUNT_IRQn        = 28  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pvReservedM12;
  void* pvReservedM11;
  void* pvReservedM10;
  void* pvReservedM9;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pvReservedM4;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnPM_Handler;                    /*  0 Power Manager */
  void* pfnSYSCTRL_Handler;               /*  1 System Control */
  void* pfnWDT_Handler;                   /*  2 Watchdog Timer */
  void* pfnRTC_Handler;                   /*  3 Real-Time Counter */
  void* pfnEIC_Handler;                   /*  4 External Interrupt Controller */
  void* pfnNVMCTRL_Handler;               /*  5 Non-Volatile Memory Controller */
  void* pfnDMAC_Handler;                  /*  6 Direct Memory Access Controller */
  void* pfnUSB_Handler;                   /*  7 Universal Serial Bus */
  void* pfnEVSYS_Handler;                 /*  8 Event System Interface */
  void* pfnSERCOM0_Handler;               /*  9 Serial Communication Interface 0 */
  void* pfnSERCOM1_Handler;               /* 10 Serial Communication Interface 1 */
  void* pfnSERCOM2_Handler;               /* 11 Serial Communication Interface 2 */
  void* pfnSERCOM3_Handler;               /* 12 Serial Communication Interface 3 */
  void* pfnSERCOM4_Handler;               /* 13 Serial Communication Interface 4 */
  void* pfnSERCOM5_Handler;               /* 14 Serial Communication Interface 5 */
  void* pfnTCC0_Handler;                  /* 15 Timer Counter Control 0 */
  void* pfnTCC1_Handler;                  /* 16 Timer Counter Control 1 */
  void* pfnTCC2_Handler;                  /* 17 Timer Counter Control 2 */
  void* pfnTC3_Handler;                   /* 18 Basic Timer Counter 3 */
  void* pfnTC4_Handler;                   /* 19 Basic Timer Counter 4 */
  void* pfnTC5_Handler;                   /* 20 Basic Timer Counter 5 */
  void* pfnTC6_Handler;                   /* 21 Basic Timer Counter 6 */
  void* pfnTC7_Handler;                   /* 22 Basic Timer Counter 7 */
  void* pfnADC_Handler;                   /* 23 Analog Digital Converter */
  void* pfnAC_Handler;                    /* 24 Analog Comparators */
  void* pfnDAC_Handler;                   /* 25 Digital Analog Converter */
  void* pfnPTC_Handler;                   /* 26 Peripheral Touch Controller */
  void* pfnI2S_Handler;                   /* 27 Inter-IC Sound Interface */
  void* pvReserved28;
} DeviceVectors;
/* Cortex-M0+ processor handlers */
void Reset_Handler               ( void );
void NMI_Handler                 ( void );
void HardFault_Handler           ( void );
void SVC_Handler                 ( void );
void PendSV_Handler              ( void );
void SysTick_Handler             ( void );

/* Peripherals handlers */
void PM_Handler                  ( void );
void SYSCTRL_Handler             ( void );
void WDT_Handler                 ( void );
void RTC_Handler                 ( void );
void EIC_Handler                 ( void );
void NVMCTRL_Handler             ( void );
void DMAC_Handler                ( void );
void USB_Handler                 ( void );
void EVSYS_Handler               ( void );
void SERCOM0_Handler             ( void );
void SERCOM1_Handler             ( void );
void SERCOM2_Handler             ( void );
void SERCOM3_Handler             ( void );
void SERCOM4_Handler             ( void );
void SERCOM5_Handler             ( void );
void TCC0_Handler                ( void );
void TCC1_Handler                ( void );
void TCC2_Handler                ( void );
void TC3_Handler                 ( void );
void TC4_Handler                 ( void );
void TC5_Handler                 ( void );
void TC6_Handler                 ( void );
void TC7_Handler                 ( void );
void ADC_Handler                 ( void );
void AC_Handler                  ( void );
void DAC_Handler                 ( void );
void PTC_Handler                 ( void );
void I2S_Handler                 ( void );

/*
 * \brief Configuration of the Cortex-M0+ Processor and Core Peripherals
 */

#define LITTLE_ENDIAN          1
#define __CM0PLUS_REV          1         /*!< Core revision r0p1 */
#define __MPU_PRESENT          0         /*!< MPU present or not */
#define __NVIC_PRIO_BITS       2         /*!< Number of bits used for Priority Levels */
#define __VTOR_PRESENT         1         /*!< VTOR present or not */
#define __Vendor_SysTickConfig 0         /*!< Set to 1 if different SysTick Config is used */

/**
 * \brief CMSIS includes
 */
#include <core_cm0plus.h>
#if !defined(DONT_USE_CMSIS_INIT)
void SystemInit(void);
void SystemCoreClockUpdate(void);
#endif

// Hardware definitions for internal peripherals
#include "hdi_ac.h"
#include "hdi_adc.h"
#include "hdi_dmac.h"
#include "hdi_dsu.h"
#include "hdi_eic.h"
#include "hdi_evsys.h"
#include "hdi_gclk.h"
#include "hdi_hmatrixb.h"
#include "hdi_i2s.h"
#include "hdi_mtb.h"
#include "hdi_nvmctrl.h"
#include "hdi_pac.h"
#include "hdi_pm.h"
#include "hdi_port.h"
#include "hdi_rtc.h"
#include "hdi_sercom.h"
#include "hdi_sysctrl.h"
#include "hdi_tc.h"
#include "hdi_tcc.h"
#include "hdi_usb.h"
#include "hdi_wdt.h"

// Peripheral instances on HPB0 bridge
#define ID_PAC0           0 /**< \brief Peripheral Access Controller 0 (PAC0) */
#define ID_PM             1 /**< \brief Power Manager (PM) */
#define ID_SYSCTRL        2 /**< \brief System Control (SYSCTRL) */
#define ID_GCLK           3 /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT            4 /**< \brief Watchdog Timer (WDT) */
#define ID_RTC            5 /**< \brief Real-Time Counter (RTC) */
#define ID_EIC            6 /**< \brief External Interrupt Controller (EIC) */

// Peripheral instances on HPB1 bridge
#define ID_PAC1          32 /**< \brief Peripheral Access Controller 1 (PAC1) */
#define ID_DSU           33 /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       34 /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          35 /**< \brief Port Module (PORT) */
#define ID_DMAC          36 /**< \brief Direct Memory Access Controller (DMAC) */
#define ID_USB           37 /**< \brief Universal Serial Bus (USB) *\/ */
#define ID_MTB           38 /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_SBMATRIX      39 /**< \brief HSB Matrix (SBMATRIX) */

// Peripheral instances on HPB2 bridge
#define ID_PAC2          64 /**< \brief Peripheral Access Controller 2 (PAC2) */
#define ID_EVSYS         65 /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       66 /**< \brief Serial Communication Interface 0 (SERCOM0) */
#define ID_SERCOM1       67 /**< \brief Serial Communication Interface 1 (SERCOM1) */
#define ID_SERCOM2       68 /**< \brief Serial Communication Interface 2 (SERCOM2) */
#define ID_SERCOM3       69 /**< \brief Serial Communication Interface 3 (SERCOM3) */
#define ID_SERCOM4       70 /**< \brief Serial Communication Interface 4 (SERCOM4) */
#define ID_SERCOM5       71 /**< \brief Serial Communication Interface 5 (SERCOM5) */
#define ID_TCC0          72 /**< \brief Timer Counter Control 0 (TCC0) */
#define ID_TCC1          73 /**< \brief Timer Counter Control 1 (TCC1) */
#define ID_TCC2          74 /**< \brief Timer Counter Control 2 (TCC2) */
#define ID_TC3           75 /**< \brief Basic Timer Counter 3 (TC3) */
#define ID_TC4           76 /**< \brief Basic Timer Counter 4 (TC4) */
#define ID_TC5           77 /**< \brief Basic Timer Counter 5 (TC5) */
#define ID_TC6           78 /**< \brief Basic Timer Counter 6 (TC6) */
#define ID_TC7           79 /**< \brief Basic Timer Counter 7 (TC7) */
#define ID_ADC           80 /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            81 /**< \brief Analog Comparators (AC) */
#define ID_DAC           82 /**< \brief Digital Analog Converter (DAC) */
#define ID_PTC           83 /**< \brief Peripheral Touch Controller (PTC) */
#define ID_I2S           84 /**< \brief Inter-IC Sound Interface (I2S) */

#define ID_PERIPH_COUNT  85 /**< \brief Max number of peripheral IDs */
/*@}*/

#define AC                ((Ac       *)0x42004400UL) /**< \brief (AC) APB Base Address */
#define AC_INST_NUM       1                          /**< \brief (AC) Number of instances */
#define AC_INSTS          { AC }                     /**< \brief (AC) Instances List */

#define ADC               ((Adc      *)0x42004000UL) /**< \brief (ADC) APB Base Address */
#define ADC_INST_NUM      1                          /**< \brief (ADC) Number of instances */
#define ADC_INSTS         { ADC }                    /**< \brief (ADC) Instances List */

#define DAC               ((Dac      *)0x42004800UL) /**< \brief (DAC) APB Base Address */
#define DAC_INST_NUM      1                          /**< \brief (DAC) Number of instances */
#define DAC_INSTS         { DAC }                    /**< \brief (DAC) Instances List */

#define DMAC              ((Dmac     *)0x41004800UL) /**< \brief (DMAC) APB Base Address */
#define DMAC_INST_NUM     1                          /**< \brief (DMAC) Number of instances */
#define DMAC_INSTS        { DMAC }                   /**< \brief (DMAC) Instances List */

#define DSU               ((Dsu      *)0x41002000UL) /**< \brief (DSU) APB Base Address */
#define DSU_INST_NUM      1                          /**< \brief (DSU) Number of instances */
#define DSU_INSTS         { DSU }                    /**< \brief (DSU) Instances List */

#define EIC               ((Eic      *)0x40001800UL) /**< \brief (EIC) APB Base Address */
#define EIC_INST_NUM      1                          /**< \brief (EIC) Number of instances */
#define EIC_INSTS         { EIC }                    /**< \brief (EIC) Instances List */

#define EVSYS             ((Evsys    *)0x42000400UL) /**< \brief (EVSYS) APB Base Address */
#define EVSYS_INST_NUM    1                          /**< \brief (EVSYS) Number of instances */
#define EVSYS_INSTS       { EVSYS }                  /**< \brief (EVSYS) Instances List */

#define GCLK              ((Gclk     *)0x40000C00UL) /**< \brief (GCLK) APB Base Address */
#define GCLK_INST_NUM     1                          /**< \brief (GCLK) Number of instances */
#define GCLK_INSTS        { GCLK }                   /**< \brief (GCLK) Instances List */

#define SBMATRIX          ((Hmatrixb *)0x41007000UL) /**< \brief (SBMATRIX) APB Base Address */
#define HMATRIXB_INST_NUM 1                          /**< \brief (HMATRIXB) Number of instances */
#define HMATRIXB_INSTS    { SBMATRIX }               /**< \brief (HMATRIXB) Instances List */

#define I2S               ((I2s      *)0x42005000UL) /**< \brief (I2S) APB Base Address */
#define I2S_INST_NUM      1                          /**< \brief (I2S) Number of instances */
#define I2S_INSTS         { I2S }                    /**< \brief (I2S) Instances List */

#define MTB               ((Mtb      *)0x41006000UL) /**< \brief (MTB) APB Base Address */
#define MTB_INST_NUM      1                          /**< \brief (MTB) Number of instances */
#define MTB_INSTS         { MTB }                    /**< \brief (MTB) Instances List */

#define NVMCTRL           ((Nvmctrl  *)0x41004000UL) /**< \brief (NVMCTRL) APB Base Address */
#define NVMCTRL_CAL                   (0x00800000UL) /**< \brief (NVMCTRL) CAL Base Address */
#define NVMCTRL_LOCKBIT               (0x00802000UL) /**< \brief (NVMCTRL) LOCKBIT Base Address */
#define NVMCTRL_OTP1                  (0x00806000UL) /**< \brief (NVMCTRL) OTP1 Base Address */
#define NVMCTRL_OTP2                  (0x00806008UL) /**< \brief (NVMCTRL) OTP2 Base Address */
#define NVMCTRL_OTP4                  (0x00806020UL) /**< \brief (NVMCTRL) OTP4 Base Address */
#define NVMCTRL_TEMP_LOG              (0x00806030UL) /**< \brief (NVMCTRL) TEMP_LOG Base Address */
#define NVMCTRL_USER                  (0x00804000UL) /**< \brief (NVMCTRL) USER Base Address */
#define NVMCTRL_INST_NUM  1                          /**< \brief (NVMCTRL) Number of instances */
#define NVMCTRL_INSTS     { NVMCTRL }                /**< \brief (NVMCTRL) Instances List */

#define PAC0              ((Pac      *)0x40000000UL) /**< \brief (PAC0) APB Base Address */
#define PAC1              ((Pac      *)0x41000000UL) /**< \brief (PAC1) APB Base Address */
#define PAC2              ((Pac      *)0x42000000UL) /**< \brief (PAC2) APB Base Address */
#define PAC_INST_NUM      3                          /**< \brief (PAC) Number of instances */
#define PAC_INSTS         { PAC0, PAC1, PAC2 }       /**< \brief (PAC) Instances List */

#define PM                ((Pm       *)0x40000400UL) /**< \brief (PM) APB Base Address */
#define PM_INST_NUM       1                          /**< \brief (PM) Number of instances */
#define PM_INSTS          { PM }                     /**< \brief (PM) Instances List */

#define PORT              ((Port     *)0x41004400UL) /**< \brief (PORT) APB Base Address */
#define PORT_IOBUS        ((Port     *)0x60000000UL) /**< \brief (PORT) IOBUS Base Address */
#define PORT_INST_NUM     1                          /**< \brief (PORT) Number of instances */
#define PORT_INSTS        { PORT }                   /**< \brief (PORT) Instances List */

#define PTC_GCLK_ID       34
#define PTC_INST_NUM      1                          /**< \brief (PTC) Number of instances */
#define PTC_INSTS         { PTC }                    /**< \brief (PTC) Instances List */

#define RTC               ((Rtc      *)0x40001400UL) /**< \brief (RTC) APB Base Address */
#define RTC_INST_NUM      1                          /**< \brief (RTC) Number of instances */
#define RTC_INSTS         { RTC }                    /**< \brief (RTC) Instances List */

#define SERCOM0           ((Sercom   *)0x42000800UL) /**< \brief (SERCOM0) APB Base Address */
#define SERCOM1           ((Sercom   *)0x42000C00UL) /**< \brief (SERCOM1) APB Base Address */
#define SERCOM2           ((Sercom   *)0x42001000UL) /**< \brief (SERCOM2) APB Base Address */
#define SERCOM3           ((Sercom   *)0x42001400UL) /**< \brief (SERCOM3) APB Base Address */
#define SERCOM4           ((Sercom   *)0x42001800UL) /**< \brief (SERCOM4) APB Base Address */
#define SERCOM5           ((Sercom   *)0x42001C00UL) /**< \brief (SERCOM5) APB Base Address */
#define SERCOM_INST_NUM   6                          /**< \brief (SERCOM) Number of instances */
#define SERCOM_INSTS      { SERCOM0, SERCOM1, SERCOM2, SERCOM3, SERCOM4, SERCOM5 } /**< \brief (SERCOM) Instances List */

#define SYSCTRL           ((Sysctrl  *)0x40000800UL) /**< \brief (SYSCTRL) APB Base Address */
#define SYSCTRL_INST_NUM  1                          /**< \brief (SYSCTRL) Number of instances */
#define SYSCTRL_INSTS     { SYSCTRL }                /**< \brief (SYSCTRL) Instances List */

#define TC3               ((Tc       *)0x42002C00UL) /**< \brief (TC3) APB Base Address */
#define TC4               ((Tc       *)0x42003000UL) /**< \brief (TC4) APB Base Address */
#define TC5               ((Tc       *)0x42003400UL) /**< \brief (TC5) APB Base Address */
#define TC_INST_NUM       3                          /**< \brief (TC) Number of instances */
#define TC_INSTS          { TC3, TC4, TC5 }          /**< \brief (TC) Instances List */

#define TCC0              ((Tcc      *)0x42002000UL) /**< \brief (TCC0) APB Base Address */
#define TCC1              ((Tcc      *)0x42002400UL) /**< \brief (TCC1) APB Base Address */
#define TCC2              ((Tcc      *)0x42002800UL) /**< \brief (TCC2) APB Base Address */
#define TCC_INST_NUM      3                          /**< \brief (TCC) Number of instances */
#define TCC_INSTS         { TCC0, TCC1, TCC2 }       /**< \brief (TCC) Instances List */

#define USB               ((Usb      *)0x41005000UL) /**< \brief (USB) APB Base Address */
#define USB_INST_NUM      1                          /**< \brief (USB) Number of instances */
#define USB_INSTS         { USB }                    /**< \brief (USB) Instances List */

#define WDT               ((Wdt      *)0x40001000UL) /**< \brief (WDT) APB Base Address */
#define WDT_INST_NUM      1                          /**< \brief (WDT) Number of instances */
#define WDT_INSTS         { WDT }                    /**< \brief (WDT) Instances List */
#define PIN_PA00                           0  /**< \brief Pin Number for PA00 */
#define PORT_PA00                 (1ul <<  0) /**< \brief PORT Mask  for PA00 */
#define PIN_PA01                           1  /**< \brief Pin Number for PA01 */
#define PORT_PA01                 (1ul <<  1) /**< \brief PORT Mask  for PA01 */
#define PIN_PA02                           2  /**< \brief Pin Number for PA02 */
#define PORT_PA02                 (1ul <<  2) /**< \brief PORT Mask  for PA02 */
#define PIN_PA03                           3  /**< \brief Pin Number for PA03 */
#define PORT_PA03                 (1ul <<  3) /**< \brief PORT Mask  for PA03 */
#define PIN_PA04                           4  /**< \brief Pin Number for PA04 */
#define PORT_PA04                 (1ul <<  4) /**< \brief PORT Mask  for PA04 */
#define PIN_PA05                           5  /**< \brief Pin Number for PA05 */
#define PORT_PA05                 (1ul <<  5) /**< \brief PORT Mask  for PA05 */
#define PIN_PA06                           6  /**< \brief Pin Number for PA06 */
#define PORT_PA06                 (1ul <<  6) /**< \brief PORT Mask  for PA06 */
#define PIN_PA07                           7  /**< \brief Pin Number for PA07 */
#define PORT_PA07                 (1ul <<  7) /**< \brief PORT Mask  for PA07 */
#define PIN_PA08                           8  /**< \brief Pin Number for PA08 */
#define PORT_PA08                 (1ul <<  8) /**< \brief PORT Mask  for PA08 */
#define PIN_PA09                           9  /**< \brief Pin Number for PA09 */
#define PORT_PA09                 (1ul <<  9) /**< \brief PORT Mask  for PA09 */
#define PIN_PA10                          10  /**< \brief Pin Number for PA10 */
#define PORT_PA10                 (1ul << 10) /**< \brief PORT Mask  for PA10 */
#define PIN_PA11                          11  /**< \brief Pin Number for PA11 */
#define PORT_PA11                 (1ul << 11) /**< \brief PORT Mask  for PA11 */
#define PIN_PA12                          12  /**< \brief Pin Number for PA12 */
#define PORT_PA12                 (1ul << 12) /**< \brief PORT Mask  for PA12 */
#define PIN_PA13                          13  /**< \brief Pin Number for PA13 */
#define PORT_PA13                 (1ul << 13) /**< \brief PORT Mask  for PA13 */
#define PIN_PA14                          14  /**< \brief Pin Number for PA14 */
#define PORT_PA14                 (1ul << 14) /**< \brief PORT Mask  for PA14 */
#define PIN_PA15                          15  /**< \brief Pin Number for PA15 */
#define PORT_PA15                 (1ul << 15) /**< \brief PORT Mask  for PA15 */
#define PIN_PA16                          16  /**< \brief Pin Number for PA16 */
#define PORT_PA16                 (1ul << 16) /**< \brief PORT Mask  for PA16 */
#define PIN_PA17                          17  /**< \brief Pin Number for PA17 */
#define PORT_PA17                 (1ul << 17) /**< \brief PORT Mask  for PA17 */
#define PIN_PA18                          18  /**< \brief Pin Number for PA18 */
#define PORT_PA18                 (1ul << 18) /**< \brief PORT Mask  for PA18 */
#define PIN_PA19                          19  /**< \brief Pin Number for PA19 */
#define PORT_PA19                 (1ul << 19) /**< \brief PORT Mask  for PA19 */
#define PIN_PA20                          20  /**< \brief Pin Number for PA20 */
#define PORT_PA20                 (1ul << 20) /**< \brief PORT Mask  for PA20 */
#define PIN_PA21                          21  /**< \brief Pin Number for PA21 */
#define PORT_PA21                 (1ul << 21) /**< \brief PORT Mask  for PA21 */
#define PIN_PA22                          22  /**< \brief Pin Number for PA22 */
#define PORT_PA22                 (1ul << 22) /**< \brief PORT Mask  for PA22 */
#define PIN_PA23                          23  /**< \brief Pin Number for PA23 */
#define PORT_PA23                 (1ul << 23) /**< \brief PORT Mask  for PA23 */
#define PIN_PA24                          24  /**< \brief Pin Number for PA24 */
#define PORT_PA24                 (1ul << 24) /**< \brief PORT Mask  for PA24 */
#define PIN_PA25                          25  /**< \brief Pin Number for PA25 */
#define PORT_PA25                 (1ul << 25) /**< \brief PORT Mask  for PA25 */
#define PIN_PA27                          27  /**< \brief Pin Number for PA27 */
#define PORT_PA27                 (1ul << 27) /**< \brief PORT Mask  for PA27 */
#define PIN_PA28                          28  /**< \brief Pin Number for PA28 */
#define PORT_PA28                 (1ul << 28) /**< \brief PORT Mask  for PA28 */
#define PIN_PA30                          30  /**< \brief Pin Number for PA30 */
#define PORT_PA30                 (1ul << 30) /**< \brief PORT Mask  for PA30 */
#define PIN_PA31                          31  /**< \brief Pin Number for PA31 */
#define PORT_PA31                 (1ul << 31) /**< \brief PORT Mask  for PA31 */
#define PIN_PB00                          32  /**< \brief Pin Number for PB00 */
#define PORT_PB00                 (1ul <<  0) /**< \brief PORT Mask  for PB00 */
#define PIN_PB01                          33  /**< \brief Pin Number for PB01 */
#define PORT_PB01                 (1ul <<  1) /**< \brief PORT Mask  for PB01 */
#define PIN_PB02                          34  /**< \brief Pin Number for PB02 */
#define PORT_PB02                 (1ul <<  2) /**< \brief PORT Mask  for PB02 */
#define PIN_PB03                          35  /**< \brief Pin Number for PB03 */
#define PORT_PB03                 (1ul <<  3) /**< \brief PORT Mask  for PB03 */
#define PIN_PB04                          36  /**< \brief Pin Number for PB04 */
#define PORT_PB04                 (1ul <<  4) /**< \brief PORT Mask  for PB04 */
#define PIN_PB05                          37  /**< \brief Pin Number for PB05 */
#define PORT_PB05                 (1ul <<  5) /**< \brief PORT Mask  for PB05 */
#define PIN_PB06                          38  /**< \brief Pin Number for PB06 */
#define PORT_PB06                 (1ul <<  6) /**< \brief PORT Mask  for PB06 */
#define PIN_PB07                          39  /**< \brief Pin Number for PB07 */
#define PORT_PB07                 (1ul <<  7) /**< \brief PORT Mask  for PB07 */
#define PIN_PB08                          40  /**< \brief Pin Number for PB08 */
#define PORT_PB08                 (1ul <<  8) /**< \brief PORT Mask  for PB08 */
#define PIN_PB09                          41  /**< \brief Pin Number for PB09 */
#define PORT_PB09                 (1ul <<  9) /**< \brief PORT Mask  for PB09 */
#define PIN_PB10                          42  /**< \brief Pin Number for PB10 */
#define PORT_PB10                 (1ul << 10) /**< \brief PORT Mask  for PB10 */
#define PIN_PB11                          43  /**< \brief Pin Number for PB11 */
#define PORT_PB11                 (1ul << 11) /**< \brief PORT Mask  for PB11 */
#define PIN_PB12                          44  /**< \brief Pin Number for PB12 */
#define PORT_PB12                 (1ul << 12) /**< \brief PORT Mask  for PB12 */
#define PIN_PB13                          45  /**< \brief Pin Number for PB13 */
#define PORT_PB13                 (1ul << 13) /**< \brief PORT Mask  for PB13 */
#define PIN_PB14                          46  /**< \brief Pin Number for PB14 */
#define PORT_PB14                 (1ul << 14) /**< \brief PORT Mask  for PB14 */
#define PIN_PB15                          47  /**< \brief Pin Number for PB15 */
#define PORT_PB15                 (1ul << 15) /**< \brief PORT Mask  for PB15 */
#define PIN_PB16                          48  /**< \brief Pin Number for PB16 */
#define PORT_PB16                 (1ul << 16) /**< \brief PORT Mask  for PB16 */
#define PIN_PB17                          49  /**< \brief Pin Number for PB17 */
#define PORT_PB17                 (1ul << 17) /**< \brief PORT Mask  for PB17 */
#define PIN_PB22                          54  /**< \brief Pin Number for PB22 */
#define PORT_PB22                 (1ul << 22) /**< \brief PORT Mask  for PB22 */
#define PIN_PB23                          55  /**< \brief Pin Number for PB23 */
#define PORT_PB23                 (1ul << 23) /**< \brief PORT Mask  for PB23 */
#define PIN_PB30                          62  /**< \brief Pin Number for PB30 */
#define PORT_PB30                 (1ul << 30) /**< \brief PORT Mask  for PB30 */
#define PIN_PB31                          63  /**< \brief Pin Number for PB31 */
#define PORT_PB31                 (1ul << 31) /**< \brief PORT Mask  for PB31 */
/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PB14H_GCLK_IO0                46L  /**< \brief GCLK signal: IO0 on PB14 mux H */
#define MUX_PB14H_GCLK_IO0                 7L
#define PINMUX_PB14H_GCLK_IO0      ((PIN_PB14H_GCLK_IO0 << 16) | MUX_PB14H_GCLK_IO0)
#define PORT_PB14H_GCLK_IO0        (1ul << 14)
#define PIN_PB22H_GCLK_IO0                54L  /**< \brief GCLK signal: IO0 on PB22 mux H */
#define MUX_PB22H_GCLK_IO0                 7L
#define PINMUX_PB22H_GCLK_IO0      ((PIN_PB22H_GCLK_IO0 << 16) | MUX_PB22H_GCLK_IO0)
#define PORT_PB22H_GCLK_IO0        (1ul << 22)
#define PIN_PA14H_GCLK_IO0                14L  /**< \brief GCLK signal: IO0 on PA14 mux H */
#define MUX_PA14H_GCLK_IO0                 7L
#define PINMUX_PA14H_GCLK_IO0      ((PIN_PA14H_GCLK_IO0 << 16) | MUX_PA14H_GCLK_IO0)
#define PORT_PA14H_GCLK_IO0        (1ul << 14)
#define PIN_PA27H_GCLK_IO0                27L  /**< \brief GCLK signal: IO0 on PA27 mux H */
#define MUX_PA27H_GCLK_IO0                 7L
#define PINMUX_PA27H_GCLK_IO0      ((PIN_PA27H_GCLK_IO0 << 16) | MUX_PA27H_GCLK_IO0)
#define PORT_PA27H_GCLK_IO0        (1ul << 27)
#define PIN_PA28H_GCLK_IO0                28L  /**< \brief GCLK signal: IO0 on PA28 mux H */
#define MUX_PA28H_GCLK_IO0                 7L
#define PINMUX_PA28H_GCLK_IO0      ((PIN_PA28H_GCLK_IO0 << 16) | MUX_PA28H_GCLK_IO0)
#define PORT_PA28H_GCLK_IO0        (1ul << 28)
#define PIN_PA30H_GCLK_IO0                30L  /**< \brief GCLK signal: IO0 on PA30 mux H */
#define MUX_PA30H_GCLK_IO0                 7L
#define PINMUX_PA30H_GCLK_IO0      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0        (1ul << 30)
#define PIN_PB15H_GCLK_IO1                47L  /**< \brief GCLK signal: IO1 on PB15 mux H */
#define MUX_PB15H_GCLK_IO1                 7L
#define PINMUX_PB15H_GCLK_IO1      ((PIN_PB15H_GCLK_IO1 << 16) | MUX_PB15H_GCLK_IO1)
#define PORT_PB15H_GCLK_IO1        (1ul << 15)
#define PIN_PB23H_GCLK_IO1                55L  /**< \brief GCLK signal: IO1 on PB23 mux H */
#define MUX_PB23H_GCLK_IO1                 7L
#define PINMUX_PB23H_GCLK_IO1      ((PIN_PB23H_GCLK_IO1 << 16) | MUX_PB23H_GCLK_IO1)
#define PORT_PB23H_GCLK_IO1        (1ul << 23)
#define PIN_PA15H_GCLK_IO1                15L  /**< \brief GCLK signal: IO1 on PA15 mux H */
#define MUX_PA15H_GCLK_IO1                 7L
#define PINMUX_PA15H_GCLK_IO1      ((PIN_PA15H_GCLK_IO1 << 16) | MUX_PA15H_GCLK_IO1)
#define PORT_PA15H_GCLK_IO1        (1ul << 15)
#define PIN_PB16H_GCLK_IO2                48L  /**< \brief GCLK signal: IO2 on PB16 mux H */
#define MUX_PB16H_GCLK_IO2                 7L
#define PINMUX_PB16H_GCLK_IO2      ((PIN_PB16H_GCLK_IO2 << 16) | MUX_PB16H_GCLK_IO2)
#define PORT_PB16H_GCLK_IO2        (1ul << 16)
#define PIN_PA16H_GCLK_IO2                16L  /**< \brief GCLK signal: IO2 on PA16 mux H */
#define MUX_PA16H_GCLK_IO2                 7L
#define PINMUX_PA16H_GCLK_IO2      ((PIN_PA16H_GCLK_IO2 << 16) | MUX_PA16H_GCLK_IO2)
#define PORT_PA16H_GCLK_IO2        (1ul << 16)
#define PIN_PA17H_GCLK_IO3                17L  /**< \brief GCLK signal: IO3 on PA17 mux H */
#define MUX_PA17H_GCLK_IO3                 7L
#define PINMUX_PA17H_GCLK_IO3      ((PIN_PA17H_GCLK_IO3 << 16) | MUX_PA17H_GCLK_IO3)
#define PORT_PA17H_GCLK_IO3        (1ul << 17)
#define PIN_PB17H_GCLK_IO3                49L  /**< \brief GCLK signal: IO3 on PB17 mux H */
#define MUX_PB17H_GCLK_IO3                 7L
#define PINMUX_PB17H_GCLK_IO3      ((PIN_PB17H_GCLK_IO3 << 16) | MUX_PB17H_GCLK_IO3)
#define PORT_PB17H_GCLK_IO3        (1ul << 17)
#define PIN_PA10H_GCLK_IO4                10L  /**< \brief GCLK signal: IO4 on PA10 mux H */
#define MUX_PA10H_GCLK_IO4                 7L
#define PINMUX_PA10H_GCLK_IO4      ((PIN_PA10H_GCLK_IO4 << 16) | MUX_PA10H_GCLK_IO4)
#define PORT_PA10H_GCLK_IO4        (1ul << 10)
#define PIN_PA20H_GCLK_IO4                20L  /**< \brief GCLK signal: IO4 on PA20 mux H */
#define MUX_PA20H_GCLK_IO4                 7L
#define PINMUX_PA20H_GCLK_IO4      ((PIN_PA20H_GCLK_IO4 << 16) | MUX_PA20H_GCLK_IO4)
#define PORT_PA20H_GCLK_IO4        (1ul << 20)
#define PIN_PB10H_GCLK_IO4                42L  /**< \brief GCLK signal: IO4 on PB10 mux H */
#define MUX_PB10H_GCLK_IO4                 7L
#define PINMUX_PB10H_GCLK_IO4      ((PIN_PB10H_GCLK_IO4 << 16) | MUX_PB10H_GCLK_IO4)
#define PORT_PB10H_GCLK_IO4        (1ul << 10)
#define PIN_PA11H_GCLK_IO5                11L  /**< \brief GCLK signal: IO5 on PA11 mux H */
#define MUX_PA11H_GCLK_IO5                 7L
#define PINMUX_PA11H_GCLK_IO5      ((PIN_PA11H_GCLK_IO5 << 16) | MUX_PA11H_GCLK_IO5)
#define PORT_PA11H_GCLK_IO5        (1ul << 11)
#define PIN_PA21H_GCLK_IO5                21L  /**< \brief GCLK signal: IO5 on PA21 mux H */
#define MUX_PA21H_GCLK_IO5                 7L
#define PINMUX_PA21H_GCLK_IO5      ((PIN_PA21H_GCLK_IO5 << 16) | MUX_PA21H_GCLK_IO5)
#define PORT_PA21H_GCLK_IO5        (1ul << 21)
#define PIN_PB11H_GCLK_IO5                43L  /**< \brief GCLK signal: IO5 on PB11 mux H */
#define MUX_PB11H_GCLK_IO5                 7L
#define PINMUX_PB11H_GCLK_IO5      ((PIN_PB11H_GCLK_IO5 << 16) | MUX_PB11H_GCLK_IO5)
#define PORT_PB11H_GCLK_IO5        (1ul << 11)
#define PIN_PA22H_GCLK_IO6                22L  /**< \brief GCLK signal: IO6 on PA22 mux H */
#define MUX_PA22H_GCLK_IO6                 7L
#define PINMUX_PA22H_GCLK_IO6      ((PIN_PA22H_GCLK_IO6 << 16) | MUX_PA22H_GCLK_IO6)
#define PORT_PA22H_GCLK_IO6        (1ul << 22)
#define PIN_PB12H_GCLK_IO6                44L  /**< \brief GCLK signal: IO6 on PB12 mux H */
#define MUX_PB12H_GCLK_IO6                 7L
#define PINMUX_PB12H_GCLK_IO6      ((PIN_PB12H_GCLK_IO6 << 16) | MUX_PB12H_GCLK_IO6)
#define PORT_PB12H_GCLK_IO6        (1ul << 12)
#define PIN_PA23H_GCLK_IO7                23L  /**< \brief GCLK signal: IO7 on PA23 mux H */
#define MUX_PA23H_GCLK_IO7                 7L
#define PINMUX_PA23H_GCLK_IO7      ((PIN_PA23H_GCLK_IO7 << 16) | MUX_PA23H_GCLK_IO7)
#define PORT_PA23H_GCLK_IO7        (1ul << 23)
#define PIN_PB13H_GCLK_IO7                45L  /**< \brief GCLK signal: IO7 on PB13 mux H */
#define MUX_PB13H_GCLK_IO7                 7L
#define PINMUX_PB13H_GCLK_IO7      ((PIN_PB13H_GCLK_IO7 << 16) | MUX_PB13H_GCLK_IO7)
#define PORT_PB13H_GCLK_IO7        (1ul << 13)
/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA16A_EIC_EXTINT0             16L  /**< \brief EIC signal: EXTINT0 on PA16 mux A */
#define MUX_PA16A_EIC_EXTINT0              0L
#define PINMUX_PA16A_EIC_EXTINT0   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0     (1ul << 16)
#define PIN_PB00A_EIC_EXTINT0             32L  /**< \brief EIC signal: EXTINT0 on PB00 mux A */
#define MUX_PB00A_EIC_EXTINT0              0L
#define PINMUX_PB00A_EIC_EXTINT0   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0     (1ul <<  0)
#define PIN_PB16A_EIC_EXTINT0             48L  /**< \brief EIC signal: EXTINT0 on PB16 mux A */
#define MUX_PB16A_EIC_EXTINT0              0L
#define PINMUX_PB16A_EIC_EXTINT0   ((PIN_PB16A_EIC_EXTINT0 << 16) | MUX_PB16A_EIC_EXTINT0)
#define PORT_PB16A_EIC_EXTINT0     (1ul << 16)
#define PIN_PA00A_EIC_EXTINT0              0L  /**< \brief EIC signal: EXTINT0 on PA00 mux A */
#define MUX_PA00A_EIC_EXTINT0              0L
#define PINMUX_PA00A_EIC_EXTINT0   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0     (1ul <<  0)
#define PIN_PA17A_EIC_EXTINT1             17L  /**< \brief EIC signal: EXTINT1 on PA17 mux A */
#define MUX_PA17A_EIC_EXTINT1              0L
#define PINMUX_PA17A_EIC_EXTINT1   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1     (1ul << 17)
#define PIN_PB01A_EIC_EXTINT1             33L  /**< \brief EIC signal: EXTINT1 on PB01 mux A */
#define MUX_PB01A_EIC_EXTINT1              0L
#define PINMUX_PB01A_EIC_EXTINT1   ((PIN_PB01A_EIC_EXTINT1 << 16) | MUX_PB01A_EIC_EXTINT1)
#define PORT_PB01A_EIC_EXTINT1     (1ul <<  1)
#define PIN_PB17A_EIC_EXTINT1             49L  /**< \brief EIC signal: EXTINT1 on PB17 mux A */
#define MUX_PB17A_EIC_EXTINT1              0L
#define PINMUX_PB17A_EIC_EXTINT1   ((PIN_PB17A_EIC_EXTINT1 << 16) | MUX_PB17A_EIC_EXTINT1)
#define PORT_PB17A_EIC_EXTINT1     (1ul << 17)
#define PIN_PA01A_EIC_EXTINT1              1L  /**< \brief EIC signal: EXTINT1 on PA01 mux A */
#define MUX_PA01A_EIC_EXTINT1              0L
#define PINMUX_PA01A_EIC_EXTINT1   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1     (1ul <<  1)
#define PIN_PA18A_EIC_EXTINT2             18L  /**< \brief EIC signal: EXTINT2 on PA18 mux A */
#define MUX_PA18A_EIC_EXTINT2              0L
#define PINMUX_PA18A_EIC_EXTINT2   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2     (1ul << 18)
#define PIN_PA02A_EIC_EXTINT2              2L  /**< \brief EIC signal: EXTINT2 on PA02 mux A */
#define MUX_PA02A_EIC_EXTINT2              0L
#define PINMUX_PA02A_EIC_EXTINT2   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2     (1ul <<  2)
#define PIN_PB02A_EIC_EXTINT2             34L  /**< \brief EIC signal: EXTINT2 on PB02 mux A */
#define MUX_PB02A_EIC_EXTINT2              0L
#define PINMUX_PB02A_EIC_EXTINT2   ((PIN_PB02A_EIC_EXTINT2 << 16) | MUX_PB02A_EIC_EXTINT2)
#define PORT_PB02A_EIC_EXTINT2     (1ul <<  2)
#define PIN_PA03A_EIC_EXTINT3              3L  /**< \brief EIC signal: EXTINT3 on PA03 mux A */
#define MUX_PA03A_EIC_EXTINT3              0L
#define PINMUX_PA03A_EIC_EXTINT3   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3     (1ul <<  3)
#define PIN_PA19A_EIC_EXTINT3             19L  /**< \brief EIC signal: EXTINT3 on PA19 mux A */
#define MUX_PA19A_EIC_EXTINT3              0L
#define PINMUX_PA19A_EIC_EXTINT3   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3     (1ul << 19)
#define PIN_PB03A_EIC_EXTINT3             35L  /**< \brief EIC signal: EXTINT3 on PB03 mux A */
#define MUX_PB03A_EIC_EXTINT3              0L
#define PINMUX_PB03A_EIC_EXTINT3   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3     (1ul <<  3)
#define PIN_PA04A_EIC_EXTINT4              4L  /**< \brief EIC signal: EXTINT4 on PA04 mux A */
#define MUX_PA04A_EIC_EXTINT4              0L
#define PINMUX_PA04A_EIC_EXTINT4   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4     (1ul <<  4)
#define PIN_PA20A_EIC_EXTINT4             20L  /**< \brief EIC signal: EXTINT4 on PA20 mux A */
#define MUX_PA20A_EIC_EXTINT4              0L
#define PINMUX_PA20A_EIC_EXTINT4   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4     (1ul << 20)
#define PIN_PB04A_EIC_EXTINT4             36L  /**< \brief EIC signal: EXTINT4 on PB04 mux A */
#define MUX_PB04A_EIC_EXTINT4              0L
#define PINMUX_PB04A_EIC_EXTINT4   ((PIN_PB04A_EIC_EXTINT4 << 16) | MUX_PB04A_EIC_EXTINT4)
#define PORT_PB04A_EIC_EXTINT4     (1ul <<  4)
#define PIN_PA05A_EIC_EXTINT5              5L  /**< \brief EIC signal: EXTINT5 on PA05 mux A */
#define MUX_PA05A_EIC_EXTINT5              0L
#define PINMUX_PA05A_EIC_EXTINT5   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5     (1ul <<  5)
#define PIN_PA21A_EIC_EXTINT5             21L  /**< \brief EIC signal: EXTINT5 on PA21 mux A */
#define MUX_PA21A_EIC_EXTINT5              0L
#define PINMUX_PA21A_EIC_EXTINT5   ((PIN_PA21A_EIC_EXTINT5 << 16) | MUX_PA21A_EIC_EXTINT5)
#define PORT_PA21A_EIC_EXTINT5     (1ul << 21)
#define PIN_PB05A_EIC_EXTINT5             37L  /**< \brief EIC signal: EXTINT5 on PB05 mux A */
#define MUX_PB05A_EIC_EXTINT5              0L
#define PINMUX_PB05A_EIC_EXTINT5   ((PIN_PB05A_EIC_EXTINT5 << 16) | MUX_PB05A_EIC_EXTINT5)
#define PORT_PB05A_EIC_EXTINT5     (1ul <<  5)
#define PIN_PA06A_EIC_EXTINT6              6L  /**< \brief EIC signal: EXTINT6 on PA06 mux A */
#define MUX_PA06A_EIC_EXTINT6              0L
#define PINMUX_PA06A_EIC_EXTINT6   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6     (1ul <<  6)
#define PIN_PA22A_EIC_EXTINT6             22L  /**< \brief EIC signal: EXTINT6 on PA22 mux A */
#define MUX_PA22A_EIC_EXTINT6              0L
#define PINMUX_PA22A_EIC_EXTINT6   ((PIN_PA22A_EIC_EXTINT6 << 16) | MUX_PA22A_EIC_EXTINT6)
#define PORT_PA22A_EIC_EXTINT6     (1ul << 22)
#define PIN_PB06A_EIC_EXTINT6             38L  /**< \brief EIC signal: EXTINT6 on PB06 mux A */
#define MUX_PB06A_EIC_EXTINT6              0L
#define PINMUX_PB06A_EIC_EXTINT6   ((PIN_PB06A_EIC_EXTINT6 << 16) | MUX_PB06A_EIC_EXTINT6)
#define PORT_PB06A_EIC_EXTINT6     (1ul <<  6)
#define PIN_PB22A_EIC_EXTINT6             54L  /**< \brief EIC signal: EXTINT6 on PB22 mux A */
#define MUX_PB22A_EIC_EXTINT6              0L
#define PINMUX_PB22A_EIC_EXTINT6   ((PIN_PB22A_EIC_EXTINT6 << 16) | MUX_PB22A_EIC_EXTINT6)
#define PORT_PB22A_EIC_EXTINT6     (1ul << 22)
#define PIN_PA07A_EIC_EXTINT7              7L  /**< \brief EIC signal: EXTINT7 on PA07 mux A */
#define MUX_PA07A_EIC_EXTINT7              0L
#define PINMUX_PA07A_EIC_EXTINT7   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7     (1ul <<  7)
#define PIN_PA23A_EIC_EXTINT7             23L  /**< \brief EIC signal: EXTINT7 on PA23 mux A */
#define MUX_PA23A_EIC_EXTINT7              0L
#define PINMUX_PA23A_EIC_EXTINT7   ((PIN_PA23A_EIC_EXTINT7 << 16) | MUX_PA23A_EIC_EXTINT7)
#define PORT_PA23A_EIC_EXTINT7     (1ul << 23)
#define PIN_PB07A_EIC_EXTINT7             39L  /**< \brief EIC signal: EXTINT7 on PB07 mux A */
#define MUX_PB07A_EIC_EXTINT7              0L
#define PINMUX_PB07A_EIC_EXTINT7   ((PIN_PB07A_EIC_EXTINT7 << 16) | MUX_PB07A_EIC_EXTINT7)
#define PORT_PB07A_EIC_EXTINT7     (1ul <<  7)
#define PIN_PB23A_EIC_EXTINT7             55L  /**< \brief EIC signal: EXTINT7 on PB23 mux A */
#define MUX_PB23A_EIC_EXTINT7              0L
#define PINMUX_PB23A_EIC_EXTINT7   ((PIN_PB23A_EIC_EXTINT7 << 16) | MUX_PB23A_EIC_EXTINT7)
#define PORT_PB23A_EIC_EXTINT7     (1ul << 23)
#define PIN_PA28A_EIC_EXTINT8             28L  /**< \brief EIC signal: EXTINT8 on PA28 mux A */
#define MUX_PA28A_EIC_EXTINT8              0L
#define PINMUX_PA28A_EIC_EXTINT8   ((PIN_PA28A_EIC_EXTINT8 << 16) | MUX_PA28A_EIC_EXTINT8)
#define PORT_PA28A_EIC_EXTINT8     (1ul << 28)
#define PIN_PB08A_EIC_EXTINT8             40L  /**< \brief EIC signal: EXTINT8 on PB08 mux A */
#define MUX_PB08A_EIC_EXTINT8              0L
#define PINMUX_PB08A_EIC_EXTINT8   ((PIN_PB08A_EIC_EXTINT8 << 16) | MUX_PB08A_EIC_EXTINT8)
#define PORT_PB08A_EIC_EXTINT8     (1ul <<  8)
#define PIN_PA09A_EIC_EXTINT9              9L  /**< \brief EIC signal: EXTINT9 on PA09 mux A */
#define MUX_PA09A_EIC_EXTINT9              0L
#define PINMUX_PA09A_EIC_EXTINT9   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9     (1ul <<  9)
#define PIN_PB09A_EIC_EXTINT9             41L  /**< \brief EIC signal: EXTINT9 on PB09 mux A */
#define MUX_PB09A_EIC_EXTINT9              0L
#define PINMUX_PB09A_EIC_EXTINT9   ((PIN_PB09A_EIC_EXTINT9 << 16) | MUX_PB09A_EIC_EXTINT9)
#define PORT_PB09A_EIC_EXTINT9     (1ul <<  9)
#define PIN_PA10A_EIC_EXTINT10            10L  /**< \brief EIC signal: EXTINT10 on PA10 mux A */
#define MUX_PA10A_EIC_EXTINT10             0L
#define PINMUX_PA10A_EIC_EXTINT10  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10    (1ul << 10)
#define PIN_PA30A_EIC_EXTINT10            30L  /**< \brief EIC signal: EXTINT10 on PA30 mux A */
#define MUX_PA30A_EIC_EXTINT10             0L
#define PINMUX_PA30A_EIC_EXTINT10  ((PIN_PA30A_EIC_EXTINT10 << 16) | MUX_PA30A_EIC_EXTINT10)
#define PORT_PA30A_EIC_EXTINT10    (1ul << 30)
#define PIN_PB10A_EIC_EXTINT10            42L  /**< \brief EIC signal: EXTINT10 on PB10 mux A */
#define MUX_PB10A_EIC_EXTINT10             0L
#define PINMUX_PB10A_EIC_EXTINT10  ((PIN_PB10A_EIC_EXTINT10 << 16) | MUX_PB10A_EIC_EXTINT10)
#define PORT_PB10A_EIC_EXTINT10    (1ul << 10)
#define PIN_PA11A_EIC_EXTINT11            11L  /**< \brief EIC signal: EXTINT11 on PA11 mux A */
#define MUX_PA11A_EIC_EXTINT11             0L
#define PINMUX_PA11A_EIC_EXTINT11  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11    (1ul << 11)
#define PIN_PA31A_EIC_EXTINT11            31L  /**< \brief EIC signal: EXTINT11 on PA31 mux A */
#define MUX_PA31A_EIC_EXTINT11             0L
#define PINMUX_PA31A_EIC_EXTINT11  ((PIN_PA31A_EIC_EXTINT11 << 16) | MUX_PA31A_EIC_EXTINT11)
#define PORT_PA31A_EIC_EXTINT11    (1ul << 31)
#define PIN_PB11A_EIC_EXTINT11            43L  /**< \brief EIC signal: EXTINT11 on PB11 mux A */
#define MUX_PB11A_EIC_EXTINT11             0L
#define PINMUX_PB11A_EIC_EXTINT11  ((PIN_PB11A_EIC_EXTINT11 << 16) | MUX_PB11A_EIC_EXTINT11)
#define PORT_PB11A_EIC_EXTINT11    (1ul << 11)
#define PIN_PA12A_EIC_EXTINT12            12L  /**< \brief EIC signal: EXTINT12 on PA12 mux A */
#define MUX_PA12A_EIC_EXTINT12             0L
#define PINMUX_PA12A_EIC_EXTINT12  ((PIN_PA12A_EIC_EXTINT12 << 16) | MUX_PA12A_EIC_EXTINT12)
#define PORT_PA12A_EIC_EXTINT12    (1ul << 12)
#define PIN_PA24A_EIC_EXTINT12            24L  /**< \brief EIC signal: EXTINT12 on PA24 mux A */
#define MUX_PA24A_EIC_EXTINT12             0L
#define PINMUX_PA24A_EIC_EXTINT12  ((PIN_PA24A_EIC_EXTINT12 << 16) | MUX_PA24A_EIC_EXTINT12)
#define PORT_PA24A_EIC_EXTINT12    (1ul << 24)
#define PIN_PB12A_EIC_EXTINT12            44L  /**< \brief EIC signal: EXTINT12 on PB12 mux A */
#define MUX_PB12A_EIC_EXTINT12             0L
#define PINMUX_PB12A_EIC_EXTINT12  ((PIN_PB12A_EIC_EXTINT12 << 16) | MUX_PB12A_EIC_EXTINT12)
#define PORT_PB12A_EIC_EXTINT12    (1ul << 12)
#define PIN_PA13A_EIC_EXTINT13            13L  /**< \brief EIC signal: EXTINT13 on PA13 mux A */
#define MUX_PA13A_EIC_EXTINT13             0L
#define PINMUX_PA13A_EIC_EXTINT13  ((PIN_PA13A_EIC_EXTINT13 << 16) | MUX_PA13A_EIC_EXTINT13)
#define PORT_PA13A_EIC_EXTINT13    (1ul << 13)
#define PIN_PA25A_EIC_EXTINT13            25L  /**< \brief EIC signal: EXTINT13 on PA25 mux A */
#define MUX_PA25A_EIC_EXTINT13             0L
#define PINMUX_PA25A_EIC_EXTINT13  ((PIN_PA25A_EIC_EXTINT13 << 16) | MUX_PA25A_EIC_EXTINT13)
#define PORT_PA25A_EIC_EXTINT13    (1ul << 25)
#define PIN_PB13A_EIC_EXTINT13            45L  /**< \brief EIC signal: EXTINT13 on PB13 mux A */
#define MUX_PB13A_EIC_EXTINT13             0L
#define PINMUX_PB13A_EIC_EXTINT13  ((PIN_PB13A_EIC_EXTINT13 << 16) | MUX_PB13A_EIC_EXTINT13)
#define PORT_PB13A_EIC_EXTINT13    (1ul << 13)
#define PIN_PB14A_EIC_EXTINT14            46L  /**< \brief EIC signal: EXTINT14 on PB14 mux A */
#define MUX_PB14A_EIC_EXTINT14             0L
#define PINMUX_PB14A_EIC_EXTINT14  ((PIN_PB14A_EIC_EXTINT14 << 16) | MUX_PB14A_EIC_EXTINT14)
#define PORT_PB14A_EIC_EXTINT14    (1ul << 14)
#define PIN_PB30A_EIC_EXTINT14            62L  /**< \brief EIC signal: EXTINT14 on PB30 mux A */
#define MUX_PB30A_EIC_EXTINT14             0L
#define PINMUX_PB30A_EIC_EXTINT14  ((PIN_PB30A_EIC_EXTINT14 << 16) | MUX_PB30A_EIC_EXTINT14)
#define PORT_PB30A_EIC_EXTINT14    (1ul << 30)
#define PIN_PA14A_EIC_EXTINT14            14L  /**< \brief EIC signal: EXTINT14 on PA14 mux A */
#define MUX_PA14A_EIC_EXTINT14             0L
#define PINMUX_PA14A_EIC_EXTINT14  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14    (1ul << 14)
#define PIN_PA15A_EIC_EXTINT15            15L  /**< \brief EIC signal: EXTINT15 on PA15 mux A */
#define MUX_PA15A_EIC_EXTINT15             0L
#define PINMUX_PA15A_EIC_EXTINT15  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15    (1ul << 15)
#define PIN_PA27A_EIC_EXTINT15            27L  /**< \brief EIC signal: EXTINT15 on PA27 mux A */
#define MUX_PA27A_EIC_EXTINT15             0L
#define PINMUX_PA27A_EIC_EXTINT15  ((PIN_PA27A_EIC_EXTINT15 << 16) | MUX_PA27A_EIC_EXTINT15)
#define PORT_PA27A_EIC_EXTINT15    (1ul << 27)
#define PIN_PB15A_EIC_EXTINT15            47L  /**< \brief EIC signal: EXTINT15 on PB15 mux A */
#define MUX_PB15A_EIC_EXTINT15             0L
#define PINMUX_PB15A_EIC_EXTINT15  ((PIN_PB15A_EIC_EXTINT15 << 16) | MUX_PB15A_EIC_EXTINT15)
#define PORT_PB15A_EIC_EXTINT15    (1ul << 15)
#define PIN_PB31A_EIC_EXTINT15            63L  /**< \brief EIC signal: EXTINT15 on PB31 mux A */
#define MUX_PB31A_EIC_EXTINT15             0L
#define PINMUX_PB31A_EIC_EXTINT15  ((PIN_PB31A_EIC_EXTINT15 << 16) | MUX_PB31A_EIC_EXTINT15)
#define PORT_PB31A_EIC_EXTINT15    (1ul << 31)
#define PIN_PA08A_EIC_NMI                  8L  /**< \brief EIC signal: NMI on PA08 mux A */
#define MUX_PA08A_EIC_NMI                  0L
#define PINMUX_PA08A_EIC_NMI       ((PIN_PA08A_EIC_NMI << 16) | MUX_PA08A_EIC_NMI)
#define PORT_PA08A_EIC_NMI         (1ul <<  8)
/* ========== PORT definition for USB peripheral ========== */
#define PIN_PA24G_USB_DM                  24L  /**< \brief USB signal: DM on PA24 mux G */
#define MUX_PA24G_USB_DM                   6L
#define PINMUX_PA24G_USB_DM        ((PIN_PA24G_USB_DM << 16) | MUX_PA24G_USB_DM)
#define PORT_PA24G_USB_DM          (1ul << 24)
#define PIN_PA25G_USB_DP                  25L  /**< \brief USB signal: DP on PA25 mux G */
#define MUX_PA25G_USB_DP                   6L
#define PINMUX_PA25G_USB_DP        ((PIN_PA25G_USB_DP << 16) | MUX_PA25G_USB_DP)
#define PORT_PA25G_USB_DP          (1ul << 25)
#define PIN_PA23G_USB_SOF_1KHZ            23L  /**< \brief USB signal: SOF_1KHZ on PA23 mux G */
#define MUX_PA23G_USB_SOF_1KHZ             6L
#define PINMUX_PA23G_USB_SOF_1KHZ  ((PIN_PA23G_USB_SOF_1KHZ << 16) | MUX_PA23G_USB_SOF_1KHZ)
#define PORT_PA23G_USB_SOF_1KHZ    (1ul << 23)
/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA04D_SERCOM0_PAD0             4L  /**< \brief SERCOM0 signal: PAD0 on PA04 mux D */
#define MUX_PA04D_SERCOM0_PAD0             3L
#define PINMUX_PA04D_SERCOM0_PAD0  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)
#define PORT_PA04D_SERCOM0_PAD0    (1ul <<  4)
#define PIN_PA08C_SERCOM0_PAD0             8L  /**< \brief SERCOM0 signal: PAD0 on PA08 mux C */
#define MUX_PA08C_SERCOM0_PAD0             2L
#define PINMUX_PA08C_SERCOM0_PAD0  ((PIN_PA08C_SERCOM0_PAD0 << 16) | MUX_PA08C_SERCOM0_PAD0)
#define PORT_PA08C_SERCOM0_PAD0    (1ul <<  8)
#define PIN_PA05D_SERCOM0_PAD1             5L  /**< \brief SERCOM0 signal: PAD1 on PA05 mux D */
#define MUX_PA05D_SERCOM0_PAD1             3L
#define PINMUX_PA05D_SERCOM0_PAD1  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)
#define PORT_PA05D_SERCOM0_PAD1    (1ul <<  5)
#define PIN_PA09C_SERCOM0_PAD1             9L  /**< \brief SERCOM0 signal: PAD1 on PA09 mux C */
#define MUX_PA09C_SERCOM0_PAD1             2L
#define PINMUX_PA09C_SERCOM0_PAD1  ((PIN_PA09C_SERCOM0_PAD1 << 16) | MUX_PA09C_SERCOM0_PAD1)
#define PORT_PA09C_SERCOM0_PAD1    (1ul <<  9)
#define PIN_PA06D_SERCOM0_PAD2             6L  /**< \brief SERCOM0 signal: PAD2 on PA06 mux D */
#define MUX_PA06D_SERCOM0_PAD2             3L
#define PINMUX_PA06D_SERCOM0_PAD2  ((PIN_PA06D_SERCOM0_PAD2 << 16) | MUX_PA06D_SERCOM0_PAD2)
#define PORT_PA06D_SERCOM0_PAD2    (1ul <<  6)
#define PIN_PA10C_SERCOM0_PAD2            10L  /**< \brief SERCOM0 signal: PAD2 on PA10 mux C */
#define MUX_PA10C_SERCOM0_PAD2             2L
#define PINMUX_PA10C_SERCOM0_PAD2  ((PIN_PA10C_SERCOM0_PAD2 << 16) | MUX_PA10C_SERCOM0_PAD2)
#define PORT_PA10C_SERCOM0_PAD2    (1ul << 10)
#define PIN_PA07D_SERCOM0_PAD3             7L  /**< \brief SERCOM0 signal: PAD3 on PA07 mux D */
#define MUX_PA07D_SERCOM0_PAD3             3L
#define PINMUX_PA07D_SERCOM0_PAD3  ((PIN_PA07D_SERCOM0_PAD3 << 16) | MUX_PA07D_SERCOM0_PAD3)
#define PORT_PA07D_SERCOM0_PAD3    (1ul <<  7)
#define PIN_PA11C_SERCOM0_PAD3            11L  /**< \brief SERCOM0 signal: PAD3 on PA11 mux C */
#define MUX_PA11C_SERCOM0_PAD3             2L
#define PINMUX_PA11C_SERCOM0_PAD3  ((PIN_PA11C_SERCOM0_PAD3 << 16) | MUX_PA11C_SERCOM0_PAD3)
#define PORT_PA11C_SERCOM0_PAD3    (1ul << 11)
/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA16C_SERCOM1_PAD0            16L  /**< \brief SERCOM1 signal: PAD0 on PA16 mux C */
#define MUX_PA16C_SERCOM1_PAD0             2L
#define PINMUX_PA16C_SERCOM1_PAD0  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)
#define PORT_PA16C_SERCOM1_PAD0    (1ul << 16)
#define PIN_PA00D_SERCOM1_PAD0             0L  /**< \brief SERCOM1 signal: PAD0 on PA00 mux D */
#define MUX_PA00D_SERCOM1_PAD0             3L
#define PINMUX_PA00D_SERCOM1_PAD0  ((PIN_PA00D_SERCOM1_PAD0 << 16) | MUX_PA00D_SERCOM1_PAD0)
#define PORT_PA00D_SERCOM1_PAD0    (1ul <<  0)
#define PIN_PA17C_SERCOM1_PAD1            17L  /**< \brief SERCOM1 signal: PAD1 on PA17 mux C */
#define MUX_PA17C_SERCOM1_PAD1             2L
#define PINMUX_PA17C_SERCOM1_PAD1  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)
#define PORT_PA17C_SERCOM1_PAD1    (1ul << 17)
#define PIN_PA01D_SERCOM1_PAD1             1L  /**< \brief SERCOM1 signal: PAD1 on PA01 mux D */
#define MUX_PA01D_SERCOM1_PAD1             3L
#define PINMUX_PA01D_SERCOM1_PAD1  ((PIN_PA01D_SERCOM1_PAD1 << 16) | MUX_PA01D_SERCOM1_PAD1)
#define PORT_PA01D_SERCOM1_PAD1    (1ul <<  1)
#define PIN_PA30D_SERCOM1_PAD2            30L  /**< \brief SERCOM1 signal: PAD2 on PA30 mux D */
#define MUX_PA30D_SERCOM1_PAD2             3L
#define PINMUX_PA30D_SERCOM1_PAD2  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2    (1ul << 30)
#define PIN_PA18C_SERCOM1_PAD2            18L  /**< \brief SERCOM1 signal: PAD2 on PA18 mux C */
#define MUX_PA18C_SERCOM1_PAD2             2L
#define PINMUX_PA18C_SERCOM1_PAD2  ((PIN_PA18C_SERCOM1_PAD2 << 16) | MUX_PA18C_SERCOM1_PAD2)
#define PORT_PA18C_SERCOM1_PAD2    (1ul << 18)
#define PIN_PA31D_SERCOM1_PAD3            31L  /**< \brief SERCOM1 signal: PAD3 on PA31 mux D */
#define MUX_PA31D_SERCOM1_PAD3             3L
#define PINMUX_PA31D_SERCOM1_PAD3  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3    (1ul << 31)
#define PIN_PA19C_SERCOM1_PAD3            19L  /**< \brief SERCOM1 signal: PAD3 on PA19 mux C */
#define MUX_PA19C_SERCOM1_PAD3             2L
#define PINMUX_PA19C_SERCOM1_PAD3  ((PIN_PA19C_SERCOM1_PAD3 << 16) | MUX_PA19C_SERCOM1_PAD3)
#define PORT_PA19C_SERCOM1_PAD3    (1ul << 19)
/* ========== PORT definition for SERCOM2 peripheral ========== */
#define PIN_PA08D_SERCOM2_PAD0             8L  /**< \brief SERCOM2 signal: PAD0 on PA08 mux D */
#define MUX_PA08D_SERCOM2_PAD0             3L
#define PINMUX_PA08D_SERCOM2_PAD0  ((PIN_PA08D_SERCOM2_PAD0 << 16) | MUX_PA08D_SERCOM2_PAD0)
#define PORT_PA08D_SERCOM2_PAD0    (1ul <<  8)
#define PIN_PA12C_SERCOM2_PAD0            12L  /**< \brief SERCOM2 signal: PAD0 on PA12 mux C */
#define MUX_PA12C_SERCOM2_PAD0             2L
#define PINMUX_PA12C_SERCOM2_PAD0  ((PIN_PA12C_SERCOM2_PAD0 << 16) | MUX_PA12C_SERCOM2_PAD0)
#define PORT_PA12C_SERCOM2_PAD0    (1ul << 12)
#define PIN_PA09D_SERCOM2_PAD1             9L  /**< \brief SERCOM2 signal: PAD1 on PA09 mux D */
#define MUX_PA09D_SERCOM2_PAD1             3L
#define PINMUX_PA09D_SERCOM2_PAD1  ((PIN_PA09D_SERCOM2_PAD1 << 16) | MUX_PA09D_SERCOM2_PAD1)
#define PORT_PA09D_SERCOM2_PAD1    (1ul <<  9)
#define PIN_PA13C_SERCOM2_PAD1            13L  /**< \brief SERCOM2 signal: PAD1 on PA13 mux C */
#define MUX_PA13C_SERCOM2_PAD1             2L
#define PINMUX_PA13C_SERCOM2_PAD1  ((PIN_PA13C_SERCOM2_PAD1 << 16) | MUX_PA13C_SERCOM2_PAD1)
#define PORT_PA13C_SERCOM2_PAD1    (1ul << 13)
#define PIN_PA10D_SERCOM2_PAD2            10L  /**< \brief SERCOM2 signal: PAD2 on PA10 mux D */
#define MUX_PA10D_SERCOM2_PAD2             3L
#define PINMUX_PA10D_SERCOM2_PAD2  ((PIN_PA10D_SERCOM2_PAD2 << 16) | MUX_PA10D_SERCOM2_PAD2)
#define PORT_PA10D_SERCOM2_PAD2    (1ul << 10)
#define PIN_PA14C_SERCOM2_PAD2            14L  /**< \brief SERCOM2 signal: PAD2 on PA14 mux C */
#define MUX_PA14C_SERCOM2_PAD2             2L
#define PINMUX_PA14C_SERCOM2_PAD2  ((PIN_PA14C_SERCOM2_PAD2 << 16) | MUX_PA14C_SERCOM2_PAD2)
#define PORT_PA14C_SERCOM2_PAD2    (1ul << 14)
#define PIN_PA11D_SERCOM2_PAD3            11L  /**< \brief SERCOM2 signal: PAD3 on PA11 mux D */
#define MUX_PA11D_SERCOM2_PAD3             3L
#define PINMUX_PA11D_SERCOM2_PAD3  ((PIN_PA11D_SERCOM2_PAD3 << 16) | MUX_PA11D_SERCOM2_PAD3)
#define PORT_PA11D_SERCOM2_PAD3    (1ul << 11)
#define PIN_PA15C_SERCOM2_PAD3            15L  /**< \brief SERCOM2 signal: PAD3 on PA15 mux C */
#define MUX_PA15C_SERCOM2_PAD3             2L
#define PINMUX_PA15C_SERCOM2_PAD3  ((PIN_PA15C_SERCOM2_PAD3 << 16) | MUX_PA15C_SERCOM2_PAD3)
#define PORT_PA15C_SERCOM2_PAD3    (1ul << 15)
/* ========== PORT definition for SERCOM3 peripheral ========== */
#define PIN_PA16D_SERCOM3_PAD0            16L  /**< \brief SERCOM3 signal: PAD0 on PA16 mux D */
#define MUX_PA16D_SERCOM3_PAD0             3L
#define PINMUX_PA16D_SERCOM3_PAD0  ((PIN_PA16D_SERCOM3_PAD0 << 16) | MUX_PA16D_SERCOM3_PAD0)
#define PORT_PA16D_SERCOM3_PAD0    (1ul << 16)
#define PIN_PA22C_SERCOM3_PAD0            22L  /**< \brief SERCOM3 signal: PAD0 on PA22 mux C */
#define MUX_PA22C_SERCOM3_PAD0             2L
#define PINMUX_PA22C_SERCOM3_PAD0  ((PIN_PA22C_SERCOM3_PAD0 << 16) | MUX_PA22C_SERCOM3_PAD0)
#define PORT_PA22C_SERCOM3_PAD0    (1ul << 22)
#define PIN_PA17D_SERCOM3_PAD1            17L  /**< \brief SERCOM3 signal: PAD1 on PA17 mux D */
#define MUX_PA17D_SERCOM3_PAD1             3L
#define PINMUX_PA17D_SERCOM3_PAD1  ((PIN_PA17D_SERCOM3_PAD1 << 16) | MUX_PA17D_SERCOM3_PAD1)
#define PORT_PA17D_SERCOM3_PAD1    (1ul << 17)
#define PIN_PA23C_SERCOM3_PAD1            23L  /**< \brief SERCOM3 signal: PAD1 on PA23 mux C */
#define MUX_PA23C_SERCOM3_PAD1             2L
#define PINMUX_PA23C_SERCOM3_PAD1  ((PIN_PA23C_SERCOM3_PAD1 << 16) | MUX_PA23C_SERCOM3_PAD1)
#define PORT_PA23C_SERCOM3_PAD1    (1ul << 23)
#define PIN_PA18D_SERCOM3_PAD2            18L  /**< \brief SERCOM3 signal: PAD2 on PA18 mux D */
#define MUX_PA18D_SERCOM3_PAD2             3L
#define PINMUX_PA18D_SERCOM3_PAD2  ((PIN_PA18D_SERCOM3_PAD2 << 16) | MUX_PA18D_SERCOM3_PAD2)
#define PORT_PA18D_SERCOM3_PAD2    (1ul << 18)
#define PIN_PA20D_SERCOM3_PAD2            20L  /**< \brief SERCOM3 signal: PAD2 on PA20 mux D */
#define MUX_PA20D_SERCOM3_PAD2             3L
#define PINMUX_PA20D_SERCOM3_PAD2  ((PIN_PA20D_SERCOM3_PAD2 << 16) | MUX_PA20D_SERCOM3_PAD2)
#define PORT_PA20D_SERCOM3_PAD2    (1ul << 20)
#define PIN_PA24C_SERCOM3_PAD2            24L  /**< \brief SERCOM3 signal: PAD2 on PA24 mux C */
#define MUX_PA24C_SERCOM3_PAD2             2L
#define PINMUX_PA24C_SERCOM3_PAD2  ((PIN_PA24C_SERCOM3_PAD2 << 16) | MUX_PA24C_SERCOM3_PAD2)
#define PORT_PA24C_SERCOM3_PAD2    (1ul << 24)
#define PIN_PA19D_SERCOM3_PAD3            19L  /**< \brief SERCOM3 signal: PAD3 on PA19 mux D */
#define MUX_PA19D_SERCOM3_PAD3             3L
#define PINMUX_PA19D_SERCOM3_PAD3  ((PIN_PA19D_SERCOM3_PAD3 << 16) | MUX_PA19D_SERCOM3_PAD3)
#define PORT_PA19D_SERCOM3_PAD3    (1ul << 19)
#define PIN_PA21D_SERCOM3_PAD3            21L  /**< \brief SERCOM3 signal: PAD3 on PA21 mux D */
#define MUX_PA21D_SERCOM3_PAD3             3L
#define PINMUX_PA21D_SERCOM3_PAD3  ((PIN_PA21D_SERCOM3_PAD3 << 16) | MUX_PA21D_SERCOM3_PAD3)
#define PORT_PA21D_SERCOM3_PAD3    (1ul << 21)
#define PIN_PA25C_SERCOM3_PAD3            25L  /**< \brief SERCOM3 signal: PAD3 on PA25 mux C */
#define MUX_PA25C_SERCOM3_PAD3             2L
#define PINMUX_PA25C_SERCOM3_PAD3  ((PIN_PA25C_SERCOM3_PAD3 << 16) | MUX_PA25C_SERCOM3_PAD3)
#define PORT_PA25C_SERCOM3_PAD3    (1ul << 25)
/* ========== PORT definition for SERCOM4 peripheral ========== */
#define PIN_PA12D_SERCOM4_PAD0            12L  /**< \brief SERCOM4 signal: PAD0 on PA12 mux D */
#define MUX_PA12D_SERCOM4_PAD0             3L
#define PINMUX_PA12D_SERCOM4_PAD0  ((PIN_PA12D_SERCOM4_PAD0 << 16) | MUX_PA12D_SERCOM4_PAD0)
#define PORT_PA12D_SERCOM4_PAD0    (1ul << 12)
#define PIN_PB08D_SERCOM4_PAD0            40L  /**< \brief SERCOM4 signal: PAD0 on PB08 mux D */
#define MUX_PB08D_SERCOM4_PAD0             3L
#define PINMUX_PB08D_SERCOM4_PAD0  ((PIN_PB08D_SERCOM4_PAD0 << 16) | MUX_PB08D_SERCOM4_PAD0)
#define PORT_PB08D_SERCOM4_PAD0    (1ul <<  8)
#define PIN_PB12C_SERCOM4_PAD0            44L  /**< \brief SERCOM4 signal: PAD0 on PB12 mux C */
#define MUX_PB12C_SERCOM4_PAD0             2L
#define PINMUX_PB12C_SERCOM4_PAD0  ((PIN_PB12C_SERCOM4_PAD0 << 16) | MUX_PB12C_SERCOM4_PAD0)
#define PORT_PB12C_SERCOM4_PAD0    (1ul << 12)
#define PIN_PA13D_SERCOM4_PAD1            13L  /**< \brief SERCOM4 signal: PAD1 on PA13 mux D */
#define MUX_PA13D_SERCOM4_PAD1             3L
#define PINMUX_PA13D_SERCOM4_PAD1  ((PIN_PA13D_SERCOM4_PAD1 << 16) | MUX_PA13D_SERCOM4_PAD1)
#define PORT_PA13D_SERCOM4_PAD1    (1ul << 13)
#define PIN_PB09D_SERCOM4_PAD1            41L  /**< \brief SERCOM4 signal: PAD1 on PB09 mux D */
#define MUX_PB09D_SERCOM4_PAD1             3L
#define PINMUX_PB09D_SERCOM4_PAD1  ((PIN_PB09D_SERCOM4_PAD1 << 16) | MUX_PB09D_SERCOM4_PAD1)
#define PORT_PB09D_SERCOM4_PAD1    (1ul <<  9)
#define PIN_PB13C_SERCOM4_PAD1            45L  /**< \brief SERCOM4 signal: PAD1 on PB13 mux C */
#define MUX_PB13C_SERCOM4_PAD1             2L
#define PINMUX_PB13C_SERCOM4_PAD1  ((PIN_PB13C_SERCOM4_PAD1 << 16) | MUX_PB13C_SERCOM4_PAD1)
#define PORT_PB13C_SERCOM4_PAD1    (1ul << 13)
#define PIN_PA14D_SERCOM4_PAD2            14L  /**< \brief SERCOM4 signal: PAD2 on PA14 mux D */
#define MUX_PA14D_SERCOM4_PAD2             3L
#define PINMUX_PA14D_SERCOM4_PAD2  ((PIN_PA14D_SERCOM4_PAD2 << 16) | MUX_PA14D_SERCOM4_PAD2)
#define PORT_PA14D_SERCOM4_PAD2    (1ul << 14)
#define PIN_PB10D_SERCOM4_PAD2            42L  /**< \brief SERCOM4 signal: PAD2 on PB10 mux D */
#define MUX_PB10D_SERCOM4_PAD2             3L
#define PINMUX_PB10D_SERCOM4_PAD2  ((PIN_PB10D_SERCOM4_PAD2 << 16) | MUX_PB10D_SERCOM4_PAD2)
#define PORT_PB10D_SERCOM4_PAD2    (1ul << 10)
#define PIN_PB14C_SERCOM4_PAD2            46L  /**< \brief SERCOM4 signal: PAD2 on PB14 mux C */
#define MUX_PB14C_SERCOM4_PAD2             2L
#define PINMUX_PB14C_SERCOM4_PAD2  ((PIN_PB14C_SERCOM4_PAD2 << 16) | MUX_PB14C_SERCOM4_PAD2)
#define PORT_PB14C_SERCOM4_PAD2    (1ul << 14)
#define PIN_PA15D_SERCOM4_PAD3            15L  /**< \brief SERCOM4 signal: PAD3 on PA15 mux D */
#define MUX_PA15D_SERCOM4_PAD3             3L
#define PINMUX_PA15D_SERCOM4_PAD3  ((PIN_PA15D_SERCOM4_PAD3 << 16) | MUX_PA15D_SERCOM4_PAD3)
#define PORT_PA15D_SERCOM4_PAD3    (1ul << 15)
#define PIN_PB11D_SERCOM4_PAD3            43L  /**< \brief SERCOM4 signal: PAD3 on PB11 mux D */
#define MUX_PB11D_SERCOM4_PAD3             3L
#define PINMUX_PB11D_SERCOM4_PAD3  ((PIN_PB11D_SERCOM4_PAD3 << 16) | MUX_PB11D_SERCOM4_PAD3)
#define PORT_PB11D_SERCOM4_PAD3    (1ul << 11)
#define PIN_PB15C_SERCOM4_PAD3            47L  /**< \brief SERCOM4 signal: PAD3 on PB15 mux C */
#define MUX_PB15C_SERCOM4_PAD3             2L
#define PINMUX_PB15C_SERCOM4_PAD3  ((PIN_PB15C_SERCOM4_PAD3 << 16) | MUX_PB15C_SERCOM4_PAD3)
#define PORT_PB15C_SERCOM4_PAD3    (1ul << 15)
/* ========== PORT definition for SERCOM5 peripheral ========== */
#define PIN_PB16C_SERCOM5_PAD0            48L  /**< \brief SERCOM5 signal: PAD0 on PB16 mux C */
#define MUX_PB16C_SERCOM5_PAD0             2L
#define PINMUX_PB16C_SERCOM5_PAD0  ((PIN_PB16C_SERCOM5_PAD0 << 16) | MUX_PB16C_SERCOM5_PAD0)
#define PORT_PB16C_SERCOM5_PAD0    (1ul << 16)
#define PIN_PA22D_SERCOM5_PAD0            22L  /**< \brief SERCOM5 signal: PAD0 on PA22 mux D */
#define MUX_PA22D_SERCOM5_PAD0             3L
#define PINMUX_PA22D_SERCOM5_PAD0  ((PIN_PA22D_SERCOM5_PAD0 << 16) | MUX_PA22D_SERCOM5_PAD0)
#define PORT_PA22D_SERCOM5_PAD0    (1ul << 22)
#define PIN_PB02D_SERCOM5_PAD0            34L  /**< \brief SERCOM5 signal: PAD0 on PB02 mux D */
#define MUX_PB02D_SERCOM5_PAD0             3L
#define PINMUX_PB02D_SERCOM5_PAD0  ((PIN_PB02D_SERCOM5_PAD0 << 16) | MUX_PB02D_SERCOM5_PAD0)
#define PORT_PB02D_SERCOM5_PAD0    (1ul <<  2)
#define PIN_PB30D_SERCOM5_PAD0            62L  /**< \brief SERCOM5 signal: PAD0 on PB30 mux D */
#define MUX_PB30D_SERCOM5_PAD0             3L
#define PINMUX_PB30D_SERCOM5_PAD0  ((PIN_PB30D_SERCOM5_PAD0 << 16) | MUX_PB30D_SERCOM5_PAD0)
#define PORT_PB30D_SERCOM5_PAD0    (1ul << 30)
#define PIN_PB17C_SERCOM5_PAD1            49L  /**< \brief SERCOM5 signal: PAD1 on PB17 mux C */
#define MUX_PB17C_SERCOM5_PAD1             2L
#define PINMUX_PB17C_SERCOM5_PAD1  ((PIN_PB17C_SERCOM5_PAD1 << 16) | MUX_PB17C_SERCOM5_PAD1)
#define PORT_PB17C_SERCOM5_PAD1    (1ul << 17)
#define PIN_PA23D_SERCOM5_PAD1            23L  /**< \brief SERCOM5 signal: PAD1 on PA23 mux D */
#define MUX_PA23D_SERCOM5_PAD1             3L
#define PINMUX_PA23D_SERCOM5_PAD1  ((PIN_PA23D_SERCOM5_PAD1 << 16) | MUX_PA23D_SERCOM5_PAD1)
#define PORT_PA23D_SERCOM5_PAD1    (1ul << 23)
#define PIN_PB03D_SERCOM5_PAD1            35L  /**< \brief SERCOM5 signal: PAD1 on PB03 mux D */
#define MUX_PB03D_SERCOM5_PAD1             3L
#define PINMUX_PB03D_SERCOM5_PAD1  ((PIN_PB03D_SERCOM5_PAD1 << 16) | MUX_PB03D_SERCOM5_PAD1)
#define PORT_PB03D_SERCOM5_PAD1    (1ul <<  3)
#define PIN_PB31D_SERCOM5_PAD1            63L  /**< \brief SERCOM5 signal: PAD1 on PB31 mux D */
#define MUX_PB31D_SERCOM5_PAD1             3L
#define PINMUX_PB31D_SERCOM5_PAD1  ((PIN_PB31D_SERCOM5_PAD1 << 16) | MUX_PB31D_SERCOM5_PAD1)
#define PORT_PB31D_SERCOM5_PAD1    (1ul << 31)
#define PIN_PA24D_SERCOM5_PAD2            24L  /**< \brief SERCOM5 signal: PAD2 on PA24 mux D */
#define MUX_PA24D_SERCOM5_PAD2             3L
#define PINMUX_PA24D_SERCOM5_PAD2  ((PIN_PA24D_SERCOM5_PAD2 << 16) | MUX_PA24D_SERCOM5_PAD2)
#define PORT_PA24D_SERCOM5_PAD2    (1ul << 24)
#define PIN_PB00D_SERCOM5_PAD2            32L  /**< \brief SERCOM5 signal: PAD2 on PB00 mux D */
#define MUX_PB00D_SERCOM5_PAD2             3L
#define PINMUX_PB00D_SERCOM5_PAD2  ((PIN_PB00D_SERCOM5_PAD2 << 16) | MUX_PB00D_SERCOM5_PAD2)
#define PORT_PB00D_SERCOM5_PAD2    (1ul <<  0)
#define PIN_PB22D_SERCOM5_PAD2            54L  /**< \brief SERCOM5 signal: PAD2 on PB22 mux D */
#define MUX_PB22D_SERCOM5_PAD2             3L
#define PINMUX_PB22D_SERCOM5_PAD2  ((PIN_PB22D_SERCOM5_PAD2 << 16) | MUX_PB22D_SERCOM5_PAD2)
#define PORT_PB22D_SERCOM5_PAD2    (1ul << 22)
#define PIN_PA20C_SERCOM5_PAD2            20L  /**< \brief SERCOM5 signal: PAD2 on PA20 mux C */
#define MUX_PA20C_SERCOM5_PAD2             2L
#define PINMUX_PA20C_SERCOM5_PAD2  ((PIN_PA20C_SERCOM5_PAD2 << 16) | MUX_PA20C_SERCOM5_PAD2)
#define PORT_PA20C_SERCOM5_PAD2    (1ul << 20)
#define PIN_PA25D_SERCOM5_PAD3            25L  /**< \brief SERCOM5 signal: PAD3 on PA25 mux D */
#define MUX_PA25D_SERCOM5_PAD3             3L
#define PINMUX_PA25D_SERCOM5_PAD3  ((PIN_PA25D_SERCOM5_PAD3 << 16) | MUX_PA25D_SERCOM5_PAD3)
#define PORT_PA25D_SERCOM5_PAD3    (1ul << 25)
#define PIN_PB01D_SERCOM5_PAD3            33L  /**< \brief SERCOM5 signal: PAD3 on PB01 mux D */
#define MUX_PB01D_SERCOM5_PAD3             3L
#define PINMUX_PB01D_SERCOM5_PAD3  ((PIN_PB01D_SERCOM5_PAD3 << 16) | MUX_PB01D_SERCOM5_PAD3)
#define PORT_PB01D_SERCOM5_PAD3    (1ul <<  1)
#define PIN_PB23D_SERCOM5_PAD3            55L  /**< \brief SERCOM5 signal: PAD3 on PB23 mux D */
#define MUX_PB23D_SERCOM5_PAD3             3L
#define PINMUX_PB23D_SERCOM5_PAD3  ((PIN_PB23D_SERCOM5_PAD3 << 16) | MUX_PB23D_SERCOM5_PAD3)
#define PORT_PB23D_SERCOM5_PAD3    (1ul << 23)
#define PIN_PA21C_SERCOM5_PAD3            21L  /**< \brief SERCOM5 signal: PAD3 on PA21 mux C */
#define MUX_PA21C_SERCOM5_PAD3             2L
#define PINMUX_PA21C_SERCOM5_PAD3  ((PIN_PA21C_SERCOM5_PAD3 << 16) | MUX_PA21C_SERCOM5_PAD3)
#define PORT_PA21C_SERCOM5_PAD3    (1ul << 21)
/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PA04E_TCC0_WO0                 4L  /**< \brief TCC0 signal: WO0 on PA04 mux E */
#define MUX_PA04E_TCC0_WO0                 4L
#define PINMUX_PA04E_TCC0_WO0      ((PIN_PA04E_TCC0_WO0 << 16) | MUX_PA04E_TCC0_WO0)
#define PORT_PA04E_TCC0_WO0        (1ul <<  4)
#define PIN_PA08E_TCC0_WO0                 8L  /**< \brief TCC0 signal: WO0 on PA08 mux E */
#define MUX_PA08E_TCC0_WO0                 4L
#define PINMUX_PA08E_TCC0_WO0      ((PIN_PA08E_TCC0_WO0 << 16) | MUX_PA08E_TCC0_WO0)
#define PORT_PA08E_TCC0_WO0        (1ul <<  8)
#define PIN_PB30E_TCC0_WO0                62L  /**< \brief TCC0 signal: WO0 on PB30 mux E */
#define MUX_PB30E_TCC0_WO0                 4L
#define PINMUX_PB30E_TCC0_WO0      ((PIN_PB30E_TCC0_WO0 << 16) | MUX_PB30E_TCC0_WO0)
#define PORT_PB30E_TCC0_WO0        (1ul << 30)
#define PIN_PA05E_TCC0_WO1                 5L  /**< \brief TCC0 signal: WO1 on PA05 mux E */
#define MUX_PA05E_TCC0_WO1                 4L
#define PINMUX_PA05E_TCC0_WO1      ((PIN_PA05E_TCC0_WO1 << 16) | MUX_PA05E_TCC0_WO1)
#define PORT_PA05E_TCC0_WO1        (1ul <<  5)
#define PIN_PA09E_TCC0_WO1                 9L  /**< \brief TCC0 signal: WO1 on PA09 mux E */
#define MUX_PA09E_TCC0_WO1                 4L
#define PINMUX_PA09E_TCC0_WO1      ((PIN_PA09E_TCC0_WO1 << 16) | MUX_PA09E_TCC0_WO1)
#define PORT_PA09E_TCC0_WO1        (1ul <<  9)
#define PIN_PB31E_TCC0_WO1                63L  /**< \brief TCC0 signal: WO1 on PB31 mux E */
#define MUX_PB31E_TCC0_WO1                 4L
#define PINMUX_PB31E_TCC0_WO1      ((PIN_PB31E_TCC0_WO1 << 16) | MUX_PB31E_TCC0_WO1)
#define PORT_PB31E_TCC0_WO1        (1ul << 31)
#define PIN_PA10F_TCC0_WO2                10L  /**< \brief TCC0 signal: WO2 on PA10 mux F */
#define MUX_PA10F_TCC0_WO2                 5L
#define PINMUX_PA10F_TCC0_WO2      ((PIN_PA10F_TCC0_WO2 << 16) | MUX_PA10F_TCC0_WO2)
#define PORT_PA10F_TCC0_WO2        (1ul << 10)
#define PIN_PA18F_TCC0_WO2                18L  /**< \brief TCC0 signal: WO2 on PA18 mux F */
#define MUX_PA18F_TCC0_WO2                 5L
#define PINMUX_PA18F_TCC0_WO2      ((PIN_PA18F_TCC0_WO2 << 16) | MUX_PA18F_TCC0_WO2)
#define PORT_PA18F_TCC0_WO2        (1ul << 18)
#define PIN_PA11F_TCC0_WO3                11L  /**< \brief TCC0 signal: WO3 on PA11 mux F */
#define MUX_PA11F_TCC0_WO3                 5L
#define PINMUX_PA11F_TCC0_WO3      ((PIN_PA11F_TCC0_WO3 << 16) | MUX_PA11F_TCC0_WO3)
#define PORT_PA11F_TCC0_WO3        (1ul << 11)
#define PIN_PA19F_TCC0_WO3                19L  /**< \brief TCC0 signal: WO3 on PA19 mux F */
#define MUX_PA19F_TCC0_WO3                 5L
#define PINMUX_PA19F_TCC0_WO3      ((PIN_PA19F_TCC0_WO3 << 16) | MUX_PA19F_TCC0_WO3)
#define PORT_PA19F_TCC0_WO3        (1ul << 19)
#define PIN_PA14F_TCC0_WO4                14L  /**< \brief TCC0 signal: WO4 on PA14 mux F */
#define MUX_PA14F_TCC0_WO4                 5L
#define PINMUX_PA14F_TCC0_WO4      ((PIN_PA14F_TCC0_WO4 << 16) | MUX_PA14F_TCC0_WO4)
#define PORT_PA14F_TCC0_WO4        (1ul << 14)
#define PIN_PA22F_TCC0_WO4                22L  /**< \brief TCC0 signal: WO4 on PA22 mux F */
#define MUX_PA22F_TCC0_WO4                 5L
#define PINMUX_PA22F_TCC0_WO4      ((PIN_PA22F_TCC0_WO4 << 16) | MUX_PA22F_TCC0_WO4)
#define PORT_PA22F_TCC0_WO4        (1ul << 22)
#define PIN_PB10F_TCC0_WO4                42L  /**< \brief TCC0 signal: WO4 on PB10 mux F */
#define MUX_PB10F_TCC0_WO4                 5L
#define PINMUX_PB10F_TCC0_WO4      ((PIN_PB10F_TCC0_WO4 << 16) | MUX_PB10F_TCC0_WO4)
#define PORT_PB10F_TCC0_WO4        (1ul << 10)
#define PIN_PB16F_TCC0_WO4                48L  /**< \brief TCC0 signal: WO4 on PB16 mux F */
#define MUX_PB16F_TCC0_WO4                 5L
#define PINMUX_PB16F_TCC0_WO4      ((PIN_PB16F_TCC0_WO4 << 16) | MUX_PB16F_TCC0_WO4)
#define PORT_PB16F_TCC0_WO4        (1ul << 16)
#define PIN_PA15F_TCC0_WO5                15L  /**< \brief TCC0 signal: WO5 on PA15 mux F */
#define MUX_PA15F_TCC0_WO5                 5L
#define PINMUX_PA15F_TCC0_WO5      ((PIN_PA15F_TCC0_WO5 << 16) | MUX_PA15F_TCC0_WO5)
#define PORT_PA15F_TCC0_WO5        (1ul << 15)
#define PIN_PA23F_TCC0_WO5                23L  /**< \brief TCC0 signal: WO5 on PA23 mux F */
#define MUX_PA23F_TCC0_WO5                 5L
#define PINMUX_PA23F_TCC0_WO5      ((PIN_PA23F_TCC0_WO5 << 16) | MUX_PA23F_TCC0_WO5)
#define PORT_PA23F_TCC0_WO5        (1ul << 23)
#define PIN_PB11F_TCC0_WO5                43L  /**< \brief TCC0 signal: WO5 on PB11 mux F */
#define MUX_PB11F_TCC0_WO5                 5L
#define PINMUX_PB11F_TCC0_WO5      ((PIN_PB11F_TCC0_WO5 << 16) | MUX_PB11F_TCC0_WO5)
#define PORT_PB11F_TCC0_WO5        (1ul << 11)
#define PIN_PB17F_TCC0_WO5                49L  /**< \brief TCC0 signal: WO5 on PB17 mux F */
#define MUX_PB17F_TCC0_WO5                 5L
#define PINMUX_PB17F_TCC0_WO5      ((PIN_PB17F_TCC0_WO5 << 16) | MUX_PB17F_TCC0_WO5)
#define PORT_PB17F_TCC0_WO5        (1ul << 17)
#define PIN_PA12F_TCC0_WO6                12L  /**< \brief TCC0 signal: WO6 on PA12 mux F */
#define MUX_PA12F_TCC0_WO6                 5L
#define PINMUX_PA12F_TCC0_WO6      ((PIN_PA12F_TCC0_WO6 << 16) | MUX_PA12F_TCC0_WO6)
#define PORT_PA12F_TCC0_WO6        (1ul << 12)
#define PIN_PA20F_TCC0_WO6                20L  /**< \brief TCC0 signal: WO6 on PA20 mux F */
#define MUX_PA20F_TCC0_WO6                 5L
#define PINMUX_PA20F_TCC0_WO6      ((PIN_PA20F_TCC0_WO6 << 16) | MUX_PA20F_TCC0_WO6)
#define PORT_PA20F_TCC0_WO6        (1ul << 20)
#define PIN_PB12F_TCC0_WO6                44L  /**< \brief TCC0 signal: WO6 on PB12 mux F */
#define MUX_PB12F_TCC0_WO6                 5L
#define PINMUX_PB12F_TCC0_WO6      ((PIN_PB12F_TCC0_WO6 << 16) | MUX_PB12F_TCC0_WO6)
#define PORT_PB12F_TCC0_WO6        (1ul << 12)
#define PIN_PA16F_TCC0_WO6                16L  /**< \brief TCC0 signal: WO6 on PA16 mux F */
#define MUX_PA16F_TCC0_WO6                 5L
#define PINMUX_PA16F_TCC0_WO6      ((PIN_PA16F_TCC0_WO6 << 16) | MUX_PA16F_TCC0_WO6)
#define PORT_PA16F_TCC0_WO6        (1ul << 16)
#define PIN_PA13F_TCC0_WO7                13L  /**< \brief TCC0 signal: WO7 on PA13 mux F */
#define MUX_PA13F_TCC0_WO7                 5L
#define PINMUX_PA13F_TCC0_WO7      ((PIN_PA13F_TCC0_WO7 << 16) | MUX_PA13F_TCC0_WO7)
#define PORT_PA13F_TCC0_WO7        (1ul << 13)
#define PIN_PA21F_TCC0_WO7                21L  /**< \brief TCC0 signal: WO7 on PA21 mux F */
#define MUX_PA21F_TCC0_WO7                 5L
#define PINMUX_PA21F_TCC0_WO7      ((PIN_PA21F_TCC0_WO7 << 16) | MUX_PA21F_TCC0_WO7)
#define PORT_PA21F_TCC0_WO7        (1ul << 21)
#define PIN_PB13F_TCC0_WO7                45L  /**< \brief TCC0 signal: WO7 on PB13 mux F */
#define MUX_PB13F_TCC0_WO7                 5L
#define PINMUX_PB13F_TCC0_WO7      ((PIN_PB13F_TCC0_WO7 << 16) | MUX_PB13F_TCC0_WO7)
#define PORT_PB13F_TCC0_WO7        (1ul << 13)
#define PIN_PA17F_TCC0_WO7                17L  /**< \brief TCC0 signal: WO7 on PA17 mux F */
#define MUX_PA17F_TCC0_WO7                 5L
#define PINMUX_PA17F_TCC0_WO7      ((PIN_PA17F_TCC0_WO7 << 16) | MUX_PA17F_TCC0_WO7)
#define PORT_PA17F_TCC0_WO7        (1ul << 17)
/* ========== PORT definition for TCC1 peripheral ========== */
#define PIN_PA06E_TCC1_WO0                 6L  /**< \brief TCC1 signal: WO0 on PA06 mux E */
#define MUX_PA06E_TCC1_WO0                 4L
#define PINMUX_PA06E_TCC1_WO0      ((PIN_PA06E_TCC1_WO0 << 16) | MUX_PA06E_TCC1_WO0)
#define PORT_PA06E_TCC1_WO0        (1ul <<  6)
#define PIN_PA10E_TCC1_WO0                10L  /**< \brief TCC1 signal: WO0 on PA10 mux E */
#define MUX_PA10E_TCC1_WO0                 4L
#define PINMUX_PA10E_TCC1_WO0      ((PIN_PA10E_TCC1_WO0 << 16) | MUX_PA10E_TCC1_WO0)
#define PORT_PA10E_TCC1_WO0        (1ul << 10)
#define PIN_PA30E_TCC1_WO0                30L  /**< \brief TCC1 signal: WO0 on PA30 mux E */
#define MUX_PA30E_TCC1_WO0                 4L
#define PINMUX_PA30E_TCC1_WO0      ((PIN_PA30E_TCC1_WO0 << 16) | MUX_PA30E_TCC1_WO0)
#define PORT_PA30E_TCC1_WO0        (1ul << 30)
#define PIN_PA07E_TCC1_WO1                 7L  /**< \brief TCC1 signal: WO1 on PA07 mux E */
#define MUX_PA07E_TCC1_WO1                 4L
#define PINMUX_PA07E_TCC1_WO1      ((PIN_PA07E_TCC1_WO1 << 16) | MUX_PA07E_TCC1_WO1)
#define PORT_PA07E_TCC1_WO1        (1ul <<  7)
#define PIN_PA11E_TCC1_WO1                11L  /**< \brief TCC1 signal: WO1 on PA11 mux E */
#define MUX_PA11E_TCC1_WO1                 4L
#define PINMUX_PA11E_TCC1_WO1      ((PIN_PA11E_TCC1_WO1 << 16) | MUX_PA11E_TCC1_WO1)
#define PORT_PA11E_TCC1_WO1        (1ul << 11)
#define PIN_PA31E_TCC1_WO1                31L  /**< \brief TCC1 signal: WO1 on PA31 mux E */
#define MUX_PA31E_TCC1_WO1                 4L
#define PINMUX_PA31E_TCC1_WO1      ((PIN_PA31E_TCC1_WO1 << 16) | MUX_PA31E_TCC1_WO1)
#define PORT_PA31E_TCC1_WO1        (1ul << 31)
#define PIN_PA08F_TCC1_WO2                 8L  /**< \brief TCC1 signal: WO2 on PA08 mux F */
#define MUX_PA08F_TCC1_WO2                 5L
#define PINMUX_PA08F_TCC1_WO2      ((PIN_PA08F_TCC1_WO2 << 16) | MUX_PA08F_TCC1_WO2)
#define PORT_PA08F_TCC1_WO2        (1ul <<  8)
#define PIN_PA24F_TCC1_WO2                24L  /**< \brief TCC1 signal: WO2 on PA24 mux F */
#define MUX_PA24F_TCC1_WO2                 5L
#define PINMUX_PA24F_TCC1_WO2      ((PIN_PA24F_TCC1_WO2 << 16) | MUX_PA24F_TCC1_WO2)
#define PORT_PA24F_TCC1_WO2        (1ul << 24)
#define PIN_PB30F_TCC1_WO2                62L  /**< \brief TCC1 signal: WO2 on PB30 mux F */
#define MUX_PB30F_TCC1_WO2                 5L
#define PINMUX_PB30F_TCC1_WO2      ((PIN_PB30F_TCC1_WO2 << 16) | MUX_PB30F_TCC1_WO2)
#define PORT_PB30F_TCC1_WO2        (1ul << 30)
#define PIN_PA09F_TCC1_WO3                 9L  /**< \brief TCC1 signal: WO3 on PA09 mux F */
#define MUX_PA09F_TCC1_WO3                 5L
#define PINMUX_PA09F_TCC1_WO3      ((PIN_PA09F_TCC1_WO3 << 16) | MUX_PA09F_TCC1_WO3)
#define PORT_PA09F_TCC1_WO3        (1ul <<  9)
#define PIN_PA25F_TCC1_WO3                25L  /**< \brief TCC1 signal: WO3 on PA25 mux F */
#define MUX_PA25F_TCC1_WO3                 5L
#define PINMUX_PA25F_TCC1_WO3      ((PIN_PA25F_TCC1_WO3 << 16) | MUX_PA25F_TCC1_WO3)
#define PORT_PA25F_TCC1_WO3        (1ul << 25)
#define PIN_PB31F_TCC1_WO3                63L  /**< \brief TCC1 signal: WO3 on PB31 mux F */
#define MUX_PB31F_TCC1_WO3                 5L
#define PINMUX_PB31F_TCC1_WO3      ((PIN_PB31F_TCC1_WO3 << 16) | MUX_PB31F_TCC1_WO3)
#define PORT_PB31F_TCC1_WO3        (1ul << 31)
/* ========== PORT definition for TCC2 peripheral ========== */
#define PIN_PA12E_TCC2_WO0                12L  /**< \brief TCC2 signal: WO0 on PA12 mux E */
#define MUX_PA12E_TCC2_WO0                 4L
#define PINMUX_PA12E_TCC2_WO0      ((PIN_PA12E_TCC2_WO0 << 16) | MUX_PA12E_TCC2_WO0)
#define PORT_PA12E_TCC2_WO0        (1ul << 12)
#define PIN_PA16E_TCC2_WO0                16L  /**< \brief TCC2 signal: WO0 on PA16 mux E */
#define MUX_PA16E_TCC2_WO0                 4L
#define PINMUX_PA16E_TCC2_WO0      ((PIN_PA16E_TCC2_WO0 << 16) | MUX_PA16E_TCC2_WO0)
#define PORT_PA16E_TCC2_WO0        (1ul << 16)
#define PIN_PA00E_TCC2_WO0                 0L  /**< \brief TCC2 signal: WO0 on PA00 mux E */
#define MUX_PA00E_TCC2_WO0                 4L
#define PINMUX_PA00E_TCC2_WO0      ((PIN_PA00E_TCC2_WO0 << 16) | MUX_PA00E_TCC2_WO0)
#define PORT_PA00E_TCC2_WO0        (1ul <<  0)
#define PIN_PA13E_TCC2_WO1                13L  /**< \brief TCC2 signal: WO1 on PA13 mux E */
#define MUX_PA13E_TCC2_WO1                 4L
#define PINMUX_PA13E_TCC2_WO1      ((PIN_PA13E_TCC2_WO1 << 16) | MUX_PA13E_TCC2_WO1)
#define PORT_PA13E_TCC2_WO1        (1ul << 13)
#define PIN_PA17E_TCC2_WO1                17L  /**< \brief TCC2 signal: WO1 on PA17 mux E */
#define MUX_PA17E_TCC2_WO1                 4L
#define PINMUX_PA17E_TCC2_WO1      ((PIN_PA17E_TCC2_WO1 << 16) | MUX_PA17E_TCC2_WO1)
#define PORT_PA17E_TCC2_WO1        (1ul << 17)
#define PIN_PA01E_TCC2_WO1                 1L  /**< \brief TCC2 signal: WO1 on PA01 mux E */
#define MUX_PA01E_TCC2_WO1                 4L
#define PINMUX_PA01E_TCC2_WO1      ((PIN_PA01E_TCC2_WO1 << 16) | MUX_PA01E_TCC2_WO1)
#define PORT_PA01E_TCC2_WO1        (1ul <<  1)
/* ========== PORT definition for TC3 peripheral ========== */
#define PIN_PA18E_TC3_WO0                 18L  /**< \brief TC3 signal: WO0 on PA18 mux E */
#define MUX_PA18E_TC3_WO0                  4L
#define PINMUX_PA18E_TC3_WO0       ((PIN_PA18E_TC3_WO0 << 16) | MUX_PA18E_TC3_WO0)
#define PORT_PA18E_TC3_WO0         (1ul << 18)
#define PIN_PA14E_TC3_WO0                 14L  /**< \brief TC3 signal: WO0 on PA14 mux E */
#define MUX_PA14E_TC3_WO0                  4L
#define PINMUX_PA14E_TC3_WO0       ((PIN_PA14E_TC3_WO0 << 16) | MUX_PA14E_TC3_WO0)
#define PORT_PA14E_TC3_WO0         (1ul << 14)
#define PIN_PA19E_TC3_WO1                 19L  /**< \brief TC3 signal: WO1 on PA19 mux E */
#define MUX_PA19E_TC3_WO1                  4L
#define PINMUX_PA19E_TC3_WO1       ((PIN_PA19E_TC3_WO1 << 16) | MUX_PA19E_TC3_WO1)
#define PORT_PA19E_TC3_WO1         (1ul << 19)
#define PIN_PA15E_TC3_WO1                 15L  /**< \brief TC3 signal: WO1 on PA15 mux E */
#define MUX_PA15E_TC3_WO1                  4L
#define PINMUX_PA15E_TC3_WO1       ((PIN_PA15E_TC3_WO1 << 16) | MUX_PA15E_TC3_WO1)
#define PORT_PA15E_TC3_WO1         (1ul << 15)
/* ========== PORT definition for TC4 peripheral ========== */
#define PIN_PA22E_TC4_WO0                 22L  /**< \brief TC4 signal: WO0 on PA22 mux E */
#define MUX_PA22E_TC4_WO0                  4L
#define PINMUX_PA22E_TC4_WO0       ((PIN_PA22E_TC4_WO0 << 16) | MUX_PA22E_TC4_WO0)
#define PORT_PA22E_TC4_WO0         (1ul << 22)
#define PIN_PB08E_TC4_WO0                 40L  /**< \brief TC4 signal: WO0 on PB08 mux E */
#define MUX_PB08E_TC4_WO0                  4L
#define PINMUX_PB08E_TC4_WO0       ((PIN_PB08E_TC4_WO0 << 16) | MUX_PB08E_TC4_WO0)
#define PORT_PB08E_TC4_WO0         (1ul <<  8)
#define PIN_PB12E_TC4_WO0                 44L  /**< \brief TC4 signal: WO0 on PB12 mux E */
#define MUX_PB12E_TC4_WO0                  4L
#define PINMUX_PB12E_TC4_WO0       ((PIN_PB12E_TC4_WO0 << 16) | MUX_PB12E_TC4_WO0)
#define PORT_PB12E_TC4_WO0         (1ul << 12)
#define PIN_PA23E_TC4_WO1                 23L  /**< \brief TC4 signal: WO1 on PA23 mux E */
#define MUX_PA23E_TC4_WO1                  4L
#define PINMUX_PA23E_TC4_WO1       ((PIN_PA23E_TC4_WO1 << 16) | MUX_PA23E_TC4_WO1)
#define PORT_PA23E_TC4_WO1         (1ul << 23)
#define PIN_PB09E_TC4_WO1                 41L  /**< \brief TC4 signal: WO1 on PB09 mux E */
#define MUX_PB09E_TC4_WO1                  4L
#define PINMUX_PB09E_TC4_WO1       ((PIN_PB09E_TC4_WO1 << 16) | MUX_PB09E_TC4_WO1)
#define PORT_PB09E_TC4_WO1         (1ul <<  9)
#define PIN_PB13E_TC4_WO1                 45L  /**< \brief TC4 signal: WO1 on PB13 mux E */
#define MUX_PB13E_TC4_WO1                  4L
#define PINMUX_PB13E_TC4_WO1       ((PIN_PB13E_TC4_WO1 << 16) | MUX_PB13E_TC4_WO1)
#define PORT_PB13E_TC4_WO1         (1ul << 13)
/* ========== PORT definition for TC5 peripheral ========== */
#define PIN_PA24E_TC5_WO0                 24L  /**< \brief TC5 signal: WO0 on PA24 mux E */
#define MUX_PA24E_TC5_WO0                  4L
#define PINMUX_PA24E_TC5_WO0       ((PIN_PA24E_TC5_WO0 << 16) | MUX_PA24E_TC5_WO0)
#define PORT_PA24E_TC5_WO0         (1ul << 24)
#define PIN_PB10E_TC5_WO0                 42L  /**< \brief TC5 signal: WO0 on PB10 mux E */
#define MUX_PB10E_TC5_WO0                  4L
#define PINMUX_PB10E_TC5_WO0       ((PIN_PB10E_TC5_WO0 << 16) | MUX_PB10E_TC5_WO0)
#define PORT_PB10E_TC5_WO0         (1ul << 10)
#define PIN_PB14E_TC5_WO0                 46L  /**< \brief TC5 signal: WO0 on PB14 mux E */
#define MUX_PB14E_TC5_WO0                  4L
#define PINMUX_PB14E_TC5_WO0       ((PIN_PB14E_TC5_WO0 << 16) | MUX_PB14E_TC5_WO0)
#define PORT_PB14E_TC5_WO0         (1ul << 14)
#define PIN_PA25E_TC5_WO1                 25L  /**< \brief TC5 signal: WO1 on PA25 mux E */
#define MUX_PA25E_TC5_WO1                  4L
#define PINMUX_PA25E_TC5_WO1       ((PIN_PA25E_TC5_WO1 << 16) | MUX_PA25E_TC5_WO1)
#define PORT_PA25E_TC5_WO1         (1ul << 25)
#define PIN_PB11E_TC5_WO1                 43L  /**< \brief TC5 signal: WO1 on PB11 mux E */
#define MUX_PB11E_TC5_WO1                  4L
#define PINMUX_PB11E_TC5_WO1       ((PIN_PB11E_TC5_WO1 << 16) | MUX_PB11E_TC5_WO1)
#define PORT_PB11E_TC5_WO1         (1ul << 11)
#define PIN_PB15E_TC5_WO1                 47L  /**< \brief TC5 signal: WO1 on PB15 mux E */
#define MUX_PB15E_TC5_WO1                  4L
#define PINMUX_PB15E_TC5_WO1       ((PIN_PB15E_TC5_WO1 << 16) | MUX_PB15E_TC5_WO1)
#define PORT_PB15E_TC5_WO1         (1ul << 15)
/* ========== PORT definition for TC6 peripheral ========== */
#define PIN_PB02E_TC6_WO0                 34L  /**< \brief TC6 signal: WO0 on PB02 mux E */
#define MUX_PB02E_TC6_WO0                  4L
#define PINMUX_PB02E_TC6_WO0       ((PIN_PB02E_TC6_WO0 << 16) | MUX_PB02E_TC6_WO0)
#define PORT_PB02E_TC6_WO0         (1ul <<  2)
#define PIN_PB16E_TC6_WO0                 48L  /**< \brief TC6 signal: WO0 on PB16 mux E */
#define MUX_PB16E_TC6_WO0                  4L
#define PINMUX_PB16E_TC6_WO0       ((PIN_PB16E_TC6_WO0 << 16) | MUX_PB16E_TC6_WO0)
#define PORT_PB16E_TC6_WO0         (1ul << 16)
#define PIN_PB03E_TC6_WO1                 35L  /**< \brief TC6 signal: WO1 on PB03 mux E */
#define MUX_PB03E_TC6_WO1                  4L
#define PINMUX_PB03E_TC6_WO1       ((PIN_PB03E_TC6_WO1 << 16) | MUX_PB03E_TC6_WO1)
#define PORT_PB03E_TC6_WO1         (1ul <<  3)
#define PIN_PB17E_TC6_WO1                 49L  /**< \brief TC6 signal: WO1 on PB17 mux E */
#define MUX_PB17E_TC6_WO1                  4L
#define PINMUX_PB17E_TC6_WO1       ((PIN_PB17E_TC6_WO1 << 16) | MUX_PB17E_TC6_WO1)
#define PORT_PB17E_TC6_WO1         (1ul << 17)
/* ========== PORT definition for TC7 peripheral ========== */
#define PIN_PA20E_TC7_WO0                 20L  /**< \brief TC7 signal: WO0 on PA20 mux E */
#define MUX_PA20E_TC7_WO0                  4L
#define PINMUX_PA20E_TC7_WO0       ((PIN_PA20E_TC7_WO0 << 16) | MUX_PA20E_TC7_WO0)
#define PORT_PA20E_TC7_WO0         (1ul << 20)
#define PIN_PB00E_TC7_WO0                 32L  /**< \brief TC7 signal: WO0 on PB00 mux E */
#define MUX_PB00E_TC7_WO0                  4L
#define PINMUX_PB00E_TC7_WO0       ((PIN_PB00E_TC7_WO0 << 16) | MUX_PB00E_TC7_WO0)
#define PORT_PB00E_TC7_WO0         (1ul <<  0)
#define PIN_PB22E_TC7_WO0                 54L  /**< \brief TC7 signal: WO0 on PB22 mux E */
#define MUX_PB22E_TC7_WO0                  4L
#define PINMUX_PB22E_TC7_WO0       ((PIN_PB22E_TC7_WO0 << 16) | MUX_PB22E_TC7_WO0)
#define PORT_PB22E_TC7_WO0         (1ul << 22)
#define PIN_PA21E_TC7_WO1                 21L  /**< \brief TC7 signal: WO1 on PA21 mux E */
#define MUX_PA21E_TC7_WO1                  4L
#define PINMUX_PA21E_TC7_WO1       ((PIN_PA21E_TC7_WO1 << 16) | MUX_PA21E_TC7_WO1)
#define PORT_PA21E_TC7_WO1         (1ul << 21)
#define PIN_PB01E_TC7_WO1                 33L  /**< \brief TC7 signal: WO1 on PB01 mux E */
#define MUX_PB01E_TC7_WO1                  4L
#define PINMUX_PB01E_TC7_WO1       ((PIN_PB01E_TC7_WO1 << 16) | MUX_PB01E_TC7_WO1)
#define PORT_PB01E_TC7_WO1         (1ul <<  1)
#define PIN_PB23E_TC7_WO1                 55L  /**< \brief TC7 signal: WO1 on PB23 mux E */
#define MUX_PB23E_TC7_WO1                  4L
#define PINMUX_PB23E_TC7_WO1       ((PIN_PB23E_TC7_WO1 << 16) | MUX_PB23E_TC7_WO1)
#define PORT_PB23E_TC7_WO1         (1ul << 23)
/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA02B_ADC_AIN0                 2L  /**< \brief ADC signal: AIN0 on PA02 mux B */
#define MUX_PA02B_ADC_AIN0                 1L
#define PINMUX_PA02B_ADC_AIN0      ((PIN_PA02B_ADC_AIN0 << 16) | MUX_PA02B_ADC_AIN0)
#define PORT_PA02B_ADC_AIN0        (1ul <<  2)
#define PIN_PA03B_ADC_AIN1                 3L  /**< \brief ADC signal: AIN1 on PA03 mux B */
#define MUX_PA03B_ADC_AIN1                 1L
#define PINMUX_PA03B_ADC_AIN1      ((PIN_PA03B_ADC_AIN1 << 16) | MUX_PA03B_ADC_AIN1)
#define PORT_PA03B_ADC_AIN1        (1ul <<  3)
#define PIN_PB08B_ADC_AIN2                40L  /**< \brief ADC signal: AIN2 on PB08 mux B */
#define MUX_PB08B_ADC_AIN2                 1L
#define PINMUX_PB08B_ADC_AIN2      ((PIN_PB08B_ADC_AIN2 << 16) | MUX_PB08B_ADC_AIN2)
#define PORT_PB08B_ADC_AIN2        (1ul <<  8)
#define PIN_PB09B_ADC_AIN3                41L  /**< \brief ADC signal: AIN3 on PB09 mux B */
#define MUX_PB09B_ADC_AIN3                 1L
#define PINMUX_PB09B_ADC_AIN3      ((PIN_PB09B_ADC_AIN3 << 16) | MUX_PB09B_ADC_AIN3)
#define PORT_PB09B_ADC_AIN3        (1ul <<  9)
#define PIN_PA04B_ADC_AIN4                 4L  /**< \brief ADC signal: AIN4 on PA04 mux B */
#define MUX_PA04B_ADC_AIN4                 1L
#define PINMUX_PA04B_ADC_AIN4      ((PIN_PA04B_ADC_AIN4 << 16) | MUX_PA04B_ADC_AIN4)
#define PORT_PA04B_ADC_AIN4        (1ul <<  4)
#define PIN_PA05B_ADC_AIN5                 5L  /**< \brief ADC signal: AIN5 on PA05 mux B */
#define MUX_PA05B_ADC_AIN5                 1L
#define PINMUX_PA05B_ADC_AIN5      ((PIN_PA05B_ADC_AIN5 << 16) | MUX_PA05B_ADC_AIN5)
#define PORT_PA05B_ADC_AIN5        (1ul <<  5)
#define PIN_PA06B_ADC_AIN6                 6L  /**< \brief ADC signal: AIN6 on PA06 mux B */
#define MUX_PA06B_ADC_AIN6                 1L
#define PINMUX_PA06B_ADC_AIN6      ((PIN_PA06B_ADC_AIN6 << 16) | MUX_PA06B_ADC_AIN6)
#define PORT_PA06B_ADC_AIN6        (1ul <<  6)
#define PIN_PA07B_ADC_AIN7                 7L  /**< \brief ADC signal: AIN7 on PA07 mux B */
#define MUX_PA07B_ADC_AIN7                 1L
#define PINMUX_PA07B_ADC_AIN7      ((PIN_PA07B_ADC_AIN7 << 16) | MUX_PA07B_ADC_AIN7)
#define PORT_PA07B_ADC_AIN7        (1ul <<  7)
#define PIN_PB00B_ADC_AIN8                32L  /**< \brief ADC signal: AIN8 on PB00 mux B */
#define MUX_PB00B_ADC_AIN8                 1L
#define PINMUX_PB00B_ADC_AIN8      ((PIN_PB00B_ADC_AIN8 << 16) | MUX_PB00B_ADC_AIN8)
#define PORT_PB00B_ADC_AIN8        (1ul <<  0)
#define PIN_PB01B_ADC_AIN9                33L  /**< \brief ADC signal: AIN9 on PB01 mux B */
#define MUX_PB01B_ADC_AIN9                 1L
#define PINMUX_PB01B_ADC_AIN9      ((PIN_PB01B_ADC_AIN9 << 16) | MUX_PB01B_ADC_AIN9)
#define PORT_PB01B_ADC_AIN9        (1ul <<  1)
#define PIN_PB02B_ADC_AIN10               34L  /**< \brief ADC signal: AIN10 on PB02 mux B */
#define MUX_PB02B_ADC_AIN10                1L
#define PINMUX_PB02B_ADC_AIN10     ((PIN_PB02B_ADC_AIN10 << 16) | MUX_PB02B_ADC_AIN10)
#define PORT_PB02B_ADC_AIN10       (1ul <<  2)
#define PIN_PB03B_ADC_AIN11               35L  /**< \brief ADC signal: AIN11 on PB03 mux B */
#define MUX_PB03B_ADC_AIN11                1L
#define PINMUX_PB03B_ADC_AIN11     ((PIN_PB03B_ADC_AIN11 << 16) | MUX_PB03B_ADC_AIN11)
#define PORT_PB03B_ADC_AIN11       (1ul <<  3)
#define PIN_PB04B_ADC_AIN12               36L  /**< \brief ADC signal: AIN12 on PB04 mux B */
#define MUX_PB04B_ADC_AIN12                1L
#define PINMUX_PB04B_ADC_AIN12     ((PIN_PB04B_ADC_AIN12 << 16) | MUX_PB04B_ADC_AIN12)
#define PORT_PB04B_ADC_AIN12       (1ul <<  4)
#define PIN_PB05B_ADC_AIN13               37L  /**< \brief ADC signal: AIN13 on PB05 mux B */
#define MUX_PB05B_ADC_AIN13                1L
#define PINMUX_PB05B_ADC_AIN13     ((PIN_PB05B_ADC_AIN13 << 16) | MUX_PB05B_ADC_AIN13)
#define PORT_PB05B_ADC_AIN13       (1ul <<  5)
#define PIN_PB06B_ADC_AIN14               38L  /**< \brief ADC signal: AIN14 on PB06 mux B */
#define MUX_PB06B_ADC_AIN14                1L
#define PINMUX_PB06B_ADC_AIN14     ((PIN_PB06B_ADC_AIN14 << 16) | MUX_PB06B_ADC_AIN14)
#define PORT_PB06B_ADC_AIN14       (1ul <<  6)
#define PIN_PB07B_ADC_AIN15               39L  /**< \brief ADC signal: AIN15 on PB07 mux B */
#define MUX_PB07B_ADC_AIN15                1L
#define PINMUX_PB07B_ADC_AIN15     ((PIN_PB07B_ADC_AIN15 << 16) | MUX_PB07B_ADC_AIN15)
#define PORT_PB07B_ADC_AIN15       (1ul <<  7)
#define PIN_PA08B_ADC_AIN16                8L  /**< \brief ADC signal: AIN16 on PA08 mux B */
#define MUX_PA08B_ADC_AIN16                1L
#define PINMUX_PA08B_ADC_AIN16     ((PIN_PA08B_ADC_AIN16 << 16) | MUX_PA08B_ADC_AIN16)
#define PORT_PA08B_ADC_AIN16       (1ul <<  8)
#define PIN_PA09B_ADC_AIN17                9L  /**< \brief ADC signal: AIN17 on PA09 mux B */
#define MUX_PA09B_ADC_AIN17                1L
#define PINMUX_PA09B_ADC_AIN17     ((PIN_PA09B_ADC_AIN17 << 16) | MUX_PA09B_ADC_AIN17)
#define PORT_PA09B_ADC_AIN17       (1ul <<  9)
#define PIN_PA10B_ADC_AIN18               10L  /**< \brief ADC signal: AIN18 on PA10 mux B */
#define MUX_PA10B_ADC_AIN18                1L
#define PINMUX_PA10B_ADC_AIN18     ((PIN_PA10B_ADC_AIN18 << 16) | MUX_PA10B_ADC_AIN18)
#define PORT_PA10B_ADC_AIN18       (1ul << 10)
#define PIN_PA11B_ADC_AIN19               11L  /**< \brief ADC signal: AIN19 on PA11 mux B */
#define MUX_PA11B_ADC_AIN19                1L
#define PINMUX_PA11B_ADC_AIN19     ((PIN_PA11B_ADC_AIN19 << 16) | MUX_PA11B_ADC_AIN19)
#define PORT_PA11B_ADC_AIN19       (1ul << 11)
#define PIN_PA04B_ADC_VREFP                4L  /**< \brief ADC signal: VREFP on PA04 mux B */
#define MUX_PA04B_ADC_VREFP                1L
#define PINMUX_PA04B_ADC_VREFP     ((PIN_PA04B_ADC_VREFP << 16) | MUX_PA04B_ADC_VREFP)
#define PORT_PA04B_ADC_VREFP       (1ul <<  4)
/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA04B_AC_AIN0                  4L  /**< \brief AC signal: AIN0 on PA04 mux B */
#define MUX_PA04B_AC_AIN0                  1L
#define PINMUX_PA04B_AC_AIN0       ((PIN_PA04B_AC_AIN0 << 16) | MUX_PA04B_AC_AIN0)
#define PORT_PA04B_AC_AIN0         (1ul <<  4)
#define PIN_PA05B_AC_AIN1                  5L  /**< \brief AC signal: AIN1 on PA05 mux B */
#define MUX_PA05B_AC_AIN1                  1L
#define PINMUX_PA05B_AC_AIN1       ((PIN_PA05B_AC_AIN1 << 16) | MUX_PA05B_AC_AIN1)
#define PORT_PA05B_AC_AIN1         (1ul <<  5)
#define PIN_PA06B_AC_AIN2                  6L  /**< \brief AC signal: AIN2 on PA06 mux B */
#define MUX_PA06B_AC_AIN2                  1L
#define PINMUX_PA06B_AC_AIN2       ((PIN_PA06B_AC_AIN2 << 16) | MUX_PA06B_AC_AIN2)
#define PORT_PA06B_AC_AIN2         (1ul <<  6)
#define PIN_PA07B_AC_AIN3                  7L  /**< \brief AC signal: AIN3 on PA07 mux B */
#define MUX_PA07B_AC_AIN3                  1L
#define PINMUX_PA07B_AC_AIN3       ((PIN_PA07B_AC_AIN3 << 16) | MUX_PA07B_AC_AIN3)
#define PORT_PA07B_AC_AIN3         (1ul <<  7)
#define PIN_PA12H_AC_CMP0                 12L  /**< \brief AC signal: CMP0 on PA12 mux H */
#define MUX_PA12H_AC_CMP0                  7L
#define PINMUX_PA12H_AC_CMP0       ((PIN_PA12H_AC_CMP0 << 16) | MUX_PA12H_AC_CMP0)
#define PORT_PA12H_AC_CMP0         (1ul << 12)
#define PIN_PA18H_AC_CMP0                 18L  /**< \brief AC signal: CMP0 on PA18 mux H */
#define MUX_PA18H_AC_CMP0                  7L
#define PINMUX_PA18H_AC_CMP0       ((PIN_PA18H_AC_CMP0 << 16) | MUX_PA18H_AC_CMP0)
#define PORT_PA18H_AC_CMP0         (1ul << 18)
#define PIN_PA13H_AC_CMP1                 13L  /**< \brief AC signal: CMP1 on PA13 mux H */
#define MUX_PA13H_AC_CMP1                  7L
#define PINMUX_PA13H_AC_CMP1       ((PIN_PA13H_AC_CMP1 << 16) | MUX_PA13H_AC_CMP1)
#define PORT_PA13H_AC_CMP1         (1ul << 13)
#define PIN_PA19H_AC_CMP1                 19L  /**< \brief AC signal: CMP1 on PA19 mux H */
#define MUX_PA19H_AC_CMP1                  7L
#define PINMUX_PA19H_AC_CMP1       ((PIN_PA19H_AC_CMP1 << 16) | MUX_PA19H_AC_CMP1)
#define PORT_PA19H_AC_CMP1         (1ul << 19)
/* ========== PORT definition for DAC peripheral ========== */
#define PIN_PA02B_DAC_VOUT                 2L  /**< \brief DAC signal: VOUT on PA02 mux B */
#define MUX_PA02B_DAC_VOUT                 1L
#define PINMUX_PA02B_DAC_VOUT      ((PIN_PA02B_DAC_VOUT << 16) | MUX_PA02B_DAC_VOUT)
#define PORT_PA02B_DAC_VOUT        (1ul <<  2)
#define PIN_PA03B_DAC_VREFP                3L  /**< \brief DAC signal: VREFP on PA03 mux B */
#define MUX_PA03B_DAC_VREFP                1L
#define PINMUX_PA03B_DAC_VREFP     ((PIN_PA03B_DAC_VREFP << 16) | MUX_PA03B_DAC_VREFP)
#define PORT_PA03B_DAC_VREFP       (1ul <<  3)
/* ========== PORT definition for I2S peripheral ========== */
#define PIN_PA11G_I2S_FS0                 11L  /**< \brief I2S signal: FS0 on PA11 mux G */
#define MUX_PA11G_I2S_FS0                  6L
#define PINMUX_PA11G_I2S_FS0       ((PIN_PA11G_I2S_FS0 << 16) | MUX_PA11G_I2S_FS0)
#define PORT_PA11G_I2S_FS0         (1ul << 11)
#define PIN_PA21G_I2S_FS0                 21L  /**< \brief I2S signal: FS0 on PA21 mux G */
#define MUX_PA21G_I2S_FS0                  6L
#define PINMUX_PA21G_I2S_FS0       ((PIN_PA21G_I2S_FS0 << 16) | MUX_PA21G_I2S_FS0)
#define PORT_PA21G_I2S_FS0         (1ul << 21)
#define PIN_PB12G_I2S_FS1                 44L  /**< \brief I2S signal: FS1 on PB12 mux G */
#define MUX_PB12G_I2S_FS1                  6L
#define PINMUX_PB12G_I2S_FS1       ((PIN_PB12G_I2S_FS1 << 16) | MUX_PB12G_I2S_FS1)
#define PORT_PB12G_I2S_FS1         (1ul << 12)
#define PIN_PA09G_I2S_MCK0                 9L  /**< \brief I2S signal: MCK0 on PA09 mux G */
#define MUX_PA09G_I2S_MCK0                 6L
#define PINMUX_PA09G_I2S_MCK0      ((PIN_PA09G_I2S_MCK0 << 16) | MUX_PA09G_I2S_MCK0)
#define PORT_PA09G_I2S_MCK0        (1ul <<  9)
#define PIN_PB17G_I2S_MCK0                49L  /**< \brief I2S signal: MCK0 on PB17 mux G */
#define MUX_PB17G_I2S_MCK0                 6L
#define PINMUX_PB17G_I2S_MCK0      ((PIN_PB17G_I2S_MCK0 << 16) | MUX_PB17G_I2S_MCK0)
#define PORT_PB17G_I2S_MCK0        (1ul << 17)
#define PIN_PB10G_I2S_MCK1                42L  /**< \brief I2S signal: MCK1 on PB10 mux G */
#define MUX_PB10G_I2S_MCK1                 6L
#define PINMUX_PB10G_I2S_MCK1      ((PIN_PB10G_I2S_MCK1 << 16) | MUX_PB10G_I2S_MCK1)
#define PORT_PB10G_I2S_MCK1        (1ul << 10)
#define PIN_PA10G_I2S_SCK0                10L  /**< \brief I2S signal: SCK0 on PA10 mux G */
#define MUX_PA10G_I2S_SCK0                 6L
#define PINMUX_PA10G_I2S_SCK0      ((PIN_PA10G_I2S_SCK0 << 16) | MUX_PA10G_I2S_SCK0)
#define PORT_PA10G_I2S_SCK0        (1ul << 10)
#define PIN_PA20G_I2S_SCK0                20L  /**< \brief I2S signal: SCK0 on PA20 mux G */
#define MUX_PA20G_I2S_SCK0                 6L
#define PINMUX_PA20G_I2S_SCK0      ((PIN_PA20G_I2S_SCK0 << 16) | MUX_PA20G_I2S_SCK0)
#define PORT_PA20G_I2S_SCK0        (1ul << 20)
#define PIN_PB11G_I2S_SCK1                43L  /**< \brief I2S signal: SCK1 on PB11 mux G */
#define MUX_PB11G_I2S_SCK1                 6L
#define PINMUX_PB11G_I2S_SCK1      ((PIN_PB11G_I2S_SCK1 << 16) | MUX_PB11G_I2S_SCK1)
#define PORT_PB11G_I2S_SCK1        (1ul << 11)
#define PIN_PA07G_I2S_SD0                  7L  /**< \brief I2S signal: SD0 on PA07 mux G */
#define MUX_PA07G_I2S_SD0                  6L
#define PINMUX_PA07G_I2S_SD0       ((PIN_PA07G_I2S_SD0 << 16) | MUX_PA07G_I2S_SD0)
#define PORT_PA07G_I2S_SD0         (1ul <<  7)
#define PIN_PA19G_I2S_SD0                 19L  /**< \brief I3S signal: SD0 on PA19 mux G */
#define MUX_PA19G_I2S_SD0                  6L
#define PINMUX_PA19G_I2S_SD0       ((PIN_PA19G_I2S_SD0 << 16) | MUX_PA19G_I2S_SD0)
#define PORT_PA19G_I2S_SD0         (1ul << 19)
#define PIN_PA08G_I2S_SD1                  8L  /**< \brief I2S signal: SD1 on PA08 mux G */
#define MUX_PA08G_I2S_SD1                  6L
#define PINMUX_PA08G_I2S_SD1       ((PIN_PA08G_I2S_SD1 << 16) | MUX_PA08G_I2S_SD1)
#define PORT_PA08G_I2S_SD1         (1ul <<  8)
#define PIN_PB16G_I2S_SD1                 48L  /**< \brief I2S signal: SD1 on PB16 mux G */
#define MUX_PB16G_I2S_SD1                  6L
#define PINMUX_PB16G_I2S_SD1       ((PIN_PB16G_I2S_SD1 << 16) | MUX_PB16G_I2S_SD1)
#define PORT_PB16G_I2S_SD1         (1ul << 16)

#define FLASH_SIZE            0x40000UL /* 256 kB */
#define FLASH_PAGE_SIZE       64
#define FLASH_NB_OF_PAGES     4096
#define FLASH_USER_PAGE_SIZE  64
#define HMCRAMC0_SIZE         0x8000UL /* 32 kB */

#define FLASH_ADDR            (0x00000000u) /**< FLASH base address */
#define FLASH_USER_PAGE_ADDR  (0x00800000u) /**< FLASH_USER_PAGE base address */
#define HMCRAMC0_ADDR         (0x20000000u) /**< HMCRAMC0 base address */
#define HPB0_ADDR             (0x40000000u) /**< HPB0 base address */
#define HPB1_ADDR             (0x41000000u) /**< HPB1 base address */
#define HPB2_ADDR             (0x42000000u) /**< HPB2 base address */
#define PPB_ADDR              (0xE0000000u) /**< PPB base address */

#define DSU_DID_RESETVALUE    0x10010000UL
#define EIC_EXTINT_NUM        16
#define PORT_GROUPS           2

#ifdef __cplusplus
}
#endif

#endif
