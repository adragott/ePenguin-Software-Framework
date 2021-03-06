#ifndef _HDI_HMATRIXB_H_
#define _HDI_HMATRIXB_H_

#define HMATRIXB_I7638
#define REV_HMATRIXB                0x212

/* -------- HMATRIXB_PRAS : (HMATRIXB Offset: 0x080) (R/W 32) PRS Priority A for Slave -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} HMATRIXB_PRAS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HMATRIXB_PRAS_OFFSET        0x080        /**< \brief (HMATRIXB_PRAS offset) Priority A for Slave */
#define HMATRIXB_PRAS_RESETVALUE    0x00000000ul /**< \brief (HMATRIXB_PRAS reset_value) Priority A for Slave */

#define HMATRIXB_PRAS_MASK          0x00000000ul /**< \brief (HMATRIXB_PRAS) MASK Register */

/* -------- HMATRIXB_PRBS : (HMATRIXB Offset: 0x084) (R/W 32) PRS Priority B for Slave -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} HMATRIXB_PRBS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HMATRIXB_PRBS_OFFSET        0x084        /**< \brief (HMATRIXB_PRBS offset) Priority B for Slave */
#define HMATRIXB_PRBS_RESETVALUE    0x00000000ul /**< \brief (HMATRIXB_PRBS reset_value) Priority B for Slave */

#define HMATRIXB_PRBS_MASK          0x00000000ul /**< \brief (HMATRIXB_PRBS) MASK Register */

/* -------- HMATRIXB_SFR : (HMATRIXB Offset: 0x110) (R/W 32) Special Function -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SFR:32;           /*!< bit:  0..31  Special Function Register          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HMATRIXB_SFR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HMATRIXB_SFR_OFFSET         0x110        /**< \brief (HMATRIXB_SFR offset) Special Function */
#define HMATRIXB_SFR_RESETVALUE     0x00000000ul /**< \brief (HMATRIXB_SFR reset_value) Special Function */

#define HMATRIXB_SFR_SFR_Pos        0            /**< \brief (HMATRIXB_SFR) Special Function Register */
#define HMATRIXB_SFR_SFR_Msk        (0xFFFFFFFFul << HMATRIXB_SFR_SFR_Pos)
#define HMATRIXB_SFR_SFR(value)     (HMATRIXB_SFR_SFR_Msk & ((value) << HMATRIXB_SFR_SFR_Pos))
#define HMATRIXB_SFR_MASK           0xFFFFFFFFul /**< \brief (HMATRIXB_SFR) MASK Register */

/** \brief HmatrixbPrs hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO HMATRIXB_PRAS_Type        PRAS;        /**< \brief Offset: 0x000 (R/W 32) Priority A for Slave */
  __IO HMATRIXB_PRBS_Type        PRBS;        /**< \brief Offset: 0x004 (R/W 32) Priority B for Slave */
} HmatrixbPrs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief HMATRIXB hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       RoReg8                    Reserved1[0x80];
       HmatrixbPrs               Prs[16];     /**< \brief Offset: 0x080 HmatrixbPrs groups */
       RoReg8                    Reserved2[0x10];
  __IO HMATRIXB_SFR_Type         SFR[16];     /**< \brief Offset: 0x110 (R/W 32) Special Function */
} Hmatrixb;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SBMATRIX_PRAS0         (0x41007080U) /**< \brief (SBMATRIX) Priority A for Slave 0 */
#define REG_SBMATRIX_PRBS0         (0x41007084U) /**< \brief (SBMATRIX) Priority B for Slave 0 */
#define REG_SBMATRIX_PRAS1         (0x41007088U) /**< \brief (SBMATRIX) Priority A for Slave 1 */
#define REG_SBMATRIX_PRBS1         (0x4100708CU) /**< \brief (SBMATRIX) Priority B for Slave 1 */
#define REG_SBMATRIX_PRAS2         (0x41007090U) /**< \brief (SBMATRIX) Priority A for Slave 2 */
#define REG_SBMATRIX_PRBS2         (0x41007094U) /**< \brief (SBMATRIX) Priority B for Slave 2 */
#define REG_SBMATRIX_PRAS3         (0x41007098U) /**< \brief (SBMATRIX) Priority A for Slave 3 */
#define REG_SBMATRIX_PRBS3         (0x4100709CU) /**< \brief (SBMATRIX) Priority B for Slave 3 */
#define REG_SBMATRIX_PRAS4         (0x410070A0U) /**< \brief (SBMATRIX) Priority A for Slave 4 */
#define REG_SBMATRIX_PRBS4         (0x410070A4U) /**< \brief (SBMATRIX) Priority B for Slave 4 */
#define REG_SBMATRIX_PRAS5         (0x410070A8U) /**< \brief (SBMATRIX) Priority A for Slave 5 */
#define REG_SBMATRIX_PRBS5         (0x410070ACU) /**< \brief (SBMATRIX) Priority B for Slave 5 */
#define REG_SBMATRIX_PRAS6         (0x410070B0U) /**< \brief (SBMATRIX) Priority A for Slave 6 */
#define REG_SBMATRIX_PRBS6         (0x410070B4U) /**< \brief (SBMATRIX) Priority B for Slave 6 */
#define REG_SBMATRIX_PRAS7         (0x410070B8U) /**< \brief (SBMATRIX) Priority A for Slave 7 */
#define REG_SBMATRIX_PRBS7         (0x410070BCU) /**< \brief (SBMATRIX) Priority B for Slave 7 */
#define REG_SBMATRIX_PRAS8         (0x410070C0U) /**< \brief (SBMATRIX) Priority A for Slave 8 */
#define REG_SBMATRIX_PRBS8         (0x410070C4U) /**< \brief (SBMATRIX) Priority B for Slave 8 */
#define REG_SBMATRIX_PRAS9         (0x410070C8U) /**< \brief (SBMATRIX) Priority A for Slave 9 */
#define REG_SBMATRIX_PRBS9         (0x410070CCU) /**< \brief (SBMATRIX) Priority B for Slave 9 */
#define REG_SBMATRIX_PRAS10        (0x410070D0U) /**< \brief (SBMATRIX) Priority A for Slave 10 */
#define REG_SBMATRIX_PRBS10        (0x410070D4U) /**< \brief (SBMATRIX) Priority B for Slave 10 */
#define REG_SBMATRIX_PRAS11        (0x410070D8U) /**< \brief (SBMATRIX) Priority A for Slave 11 */
#define REG_SBMATRIX_PRBS11        (0x410070DCU) /**< \brief (SBMATRIX) Priority B for Slave 11 */
#define REG_SBMATRIX_PRAS12        (0x410070E0U) /**< \brief (SBMATRIX) Priority A for Slave 12 */
#define REG_SBMATRIX_PRBS12        (0x410070E4U) /**< \brief (SBMATRIX) Priority B for Slave 12 */
#define REG_SBMATRIX_PRAS13        (0x410070E8U) /**< \brief (SBMATRIX) Priority A for Slave 13 */
#define REG_SBMATRIX_PRBS13        (0x410070ECU) /**< \brief (SBMATRIX) Priority B for Slave 13 */
#define REG_SBMATRIX_PRAS14        (0x410070F0U) /**< \brief (SBMATRIX) Priority A for Slave 14 */
#define REG_SBMATRIX_PRBS14        (0x410070F4U) /**< \brief (SBMATRIX) Priority B for Slave 14 */
#define REG_SBMATRIX_PRAS15        (0x410070F8U) /**< \brief (SBMATRIX) Priority A for Slave 15 */
#define REG_SBMATRIX_PRBS15        (0x410070FCU) /**< \brief (SBMATRIX) Priority B for Slave 15 */
#define REG_SBMATRIX_SFR0          (0x41007110U) /**< \brief (SBMATRIX) Special Function 0 */
#define REG_SBMATRIX_SFR1          (0x41007114U) /**< \brief (SBMATRIX) Special Function 1 */
#define REG_SBMATRIX_SFR2          (0x41007118U) /**< \brief (SBMATRIX) Special Function 2 */
#define REG_SBMATRIX_SFR3          (0x4100711CU) /**< \brief (SBMATRIX) Special Function 3 */
#define REG_SBMATRIX_SFR4          (0x41007120U) /**< \brief (SBMATRIX) Special Function 4 */
#define REG_SBMATRIX_SFR5          (0x41007124U) /**< \brief (SBMATRIX) Special Function 5 */
#define REG_SBMATRIX_SFR6          (0x41007128U) /**< \brief (SBMATRIX) Special Function 6 */
#define REG_SBMATRIX_SFR7          (0x4100712CU) /**< \brief (SBMATRIX) Special Function 7 */
#define REG_SBMATRIX_SFR8          (0x41007130U) /**< \brief (SBMATRIX) Special Function 8 */
#define REG_SBMATRIX_SFR9          (0x41007134U) /**< \brief (SBMATRIX) Special Function 9 */
#define REG_SBMATRIX_SFR10         (0x41007138U) /**< \brief (SBMATRIX) Special Function 10 */
#define REG_SBMATRIX_SFR11         (0x4100713CU) /**< \brief (SBMATRIX) Special Function 11 */
#define REG_SBMATRIX_SFR12         (0x41007140U) /**< \brief (SBMATRIX) Special Function 12 */
#define REG_SBMATRIX_SFR13         (0x41007144U) /**< \brief (SBMATRIX) Special Function 13 */
#define REG_SBMATRIX_SFR14         (0x41007148U) /**< \brief (SBMATRIX) Special Function 14 */
#define REG_SBMATRIX_SFR15         (0x4100714CU) /**< \brief (SBMATRIX) Special Function 15 */
#else
#define REG_SBMATRIX_PRAS0         (*(RwReg  *)0x41007080U) /**< \brief (SBMATRIX) Priority A for Slave 0 */
#define REG_SBMATRIX_PRBS0         (*(RwReg  *)0x41007084U) /**< \brief (SBMATRIX) Priority B for Slave 0 */
#define REG_SBMATRIX_PRAS1         (*(RwReg  *)0x41007088U) /**< \brief (SBMATRIX) Priority A for Slave 1 */
#define REG_SBMATRIX_PRBS1         (*(RwReg  *)0x4100708CU) /**< \brief (SBMATRIX) Priority B for Slave 1 */
#define REG_SBMATRIX_PRAS2         (*(RwReg  *)0x41007090U) /**< \brief (SBMATRIX) Priority A for Slave 2 */
#define REG_SBMATRIX_PRBS2         (*(RwReg  *)0x41007094U) /**< \brief (SBMATRIX) Priority B for Slave 2 */
#define REG_SBMATRIX_PRAS3         (*(RwReg  *)0x41007098U) /**< \brief (SBMATRIX) Priority A for Slave 3 */
#define REG_SBMATRIX_PRBS3         (*(RwReg  *)0x4100709CU) /**< \brief (SBMATRIX) Priority B for Slave 3 */
#define REG_SBMATRIX_PRAS4         (*(RwReg  *)0x410070A0U) /**< \brief (SBMATRIX) Priority A for Slave 4 */
#define REG_SBMATRIX_PRBS4         (*(RwReg  *)0x410070A4U) /**< \brief (SBMATRIX) Priority B for Slave 4 */
#define REG_SBMATRIX_PRAS5         (*(RwReg  *)0x410070A8U) /**< \brief (SBMATRIX) Priority A for Slave 5 */
#define REG_SBMATRIX_PRBS5         (*(RwReg  *)0x410070ACU) /**< \brief (SBMATRIX) Priority B for Slave 5 */
#define REG_SBMATRIX_PRAS6         (*(RwReg  *)0x410070B0U) /**< \brief (SBMATRIX) Priority A for Slave 6 */
#define REG_SBMATRIX_PRBS6         (*(RwReg  *)0x410070B4U) /**< \brief (SBMATRIX) Priority B for Slave 6 */
#define REG_SBMATRIX_PRAS7         (*(RwReg  *)0x410070B8U) /**< \brief (SBMATRIX) Priority A for Slave 7 */
#define REG_SBMATRIX_PRBS7         (*(RwReg  *)0x410070BCU) /**< \brief (SBMATRIX) Priority B for Slave 7 */
#define REG_SBMATRIX_PRAS8         (*(RwReg  *)0x410070C0U) /**< \brief (SBMATRIX) Priority A for Slave 8 */
#define REG_SBMATRIX_PRBS8         (*(RwReg  *)0x410070C4U) /**< \brief (SBMATRIX) Priority B for Slave 8 */
#define REG_SBMATRIX_PRAS9         (*(RwReg  *)0x410070C8U) /**< \brief (SBMATRIX) Priority A for Slave 9 */
#define REG_SBMATRIX_PRBS9         (*(RwReg  *)0x410070CCU) /**< \brief (SBMATRIX) Priority B for Slave 9 */
#define REG_SBMATRIX_PRAS10        (*(RwReg  *)0x410070D0U) /**< \brief (SBMATRIX) Priority A for Slave 10 */
#define REG_SBMATRIX_PRBS10        (*(RwReg  *)0x410070D4U) /**< \brief (SBMATRIX) Priority B for Slave 10 */
#define REG_SBMATRIX_PRAS11        (*(RwReg  *)0x410070D8U) /**< \brief (SBMATRIX) Priority A for Slave 11 */
#define REG_SBMATRIX_PRBS11        (*(RwReg  *)0x410070DCU) /**< \brief (SBMATRIX) Priority B for Slave 11 */
#define REG_SBMATRIX_PRAS12        (*(RwReg  *)0x410070E0U) /**< \brief (SBMATRIX) Priority A for Slave 12 */
#define REG_SBMATRIX_PRBS12        (*(RwReg  *)0x410070E4U) /**< \brief (SBMATRIX) Priority B for Slave 12 */
#define REG_SBMATRIX_PRAS13        (*(RwReg  *)0x410070E8U) /**< \brief (SBMATRIX) Priority A for Slave 13 */
#define REG_SBMATRIX_PRBS13        (*(RwReg  *)0x410070ECU) /**< \brief (SBMATRIX) Priority B for Slave 13 */
#define REG_SBMATRIX_PRAS14        (*(RwReg  *)0x410070F0U) /**< \brief (SBMATRIX) Priority A for Slave 14 */
#define REG_SBMATRIX_PRBS14        (*(RwReg  *)0x410070F4U) /**< \brief (SBMATRIX) Priority B for Slave 14 */
#define REG_SBMATRIX_PRAS15        (*(RwReg  *)0x410070F8U) /**< \brief (SBMATRIX) Priority A for Slave 15 */
#define REG_SBMATRIX_PRBS15        (*(RwReg  *)0x410070FCU) /**< \brief (SBMATRIX) Priority B for Slave 15 */
#define REG_SBMATRIX_SFR0          (*(RwReg  *)0x41007110U) /**< \brief (SBMATRIX) Special Function 0 */
#define REG_SBMATRIX_SFR1          (*(RwReg  *)0x41007114U) /**< \brief (SBMATRIX) Special Function 1 */
#define REG_SBMATRIX_SFR2          (*(RwReg  *)0x41007118U) /**< \brief (SBMATRIX) Special Function 2 */
#define REG_SBMATRIX_SFR3          (*(RwReg  *)0x4100711CU) /**< \brief (SBMATRIX) Special Function 3 */
#define REG_SBMATRIX_SFR4          (*(RwReg  *)0x41007120U) /**< \brief (SBMATRIX) Special Function 4 */
#define REG_SBMATRIX_SFR5          (*(RwReg  *)0x41007124U) /**< \brief (SBMATRIX) Special Function 5 */
#define REG_SBMATRIX_SFR6          (*(RwReg  *)0x41007128U) /**< \brief (SBMATRIX) Special Function 6 */
#define REG_SBMATRIX_SFR7          (*(RwReg  *)0x4100712CU) /**< \brief (SBMATRIX) Special Function 7 */
#define REG_SBMATRIX_SFR8          (*(RwReg  *)0x41007130U) /**< \brief (SBMATRIX) Special Function 8 */
#define REG_SBMATRIX_SFR9          (*(RwReg  *)0x41007134U) /**< \brief (SBMATRIX) Special Function 9 */
#define REG_SBMATRIX_SFR10         (*(RwReg  *)0x41007138U) /**< \brief (SBMATRIX) Special Function 10 */
#define REG_SBMATRIX_SFR11         (*(RwReg  *)0x4100713CU) /**< \brief (SBMATRIX) Special Function 11 */
#define REG_SBMATRIX_SFR12         (*(RwReg  *)0x41007140U) /**< \brief (SBMATRIX) Special Function 12 */
#define REG_SBMATRIX_SFR13         (*(RwReg  *)0x41007144U) /**< \brief (SBMATRIX) Special Function 13 */
#define REG_SBMATRIX_SFR14         (*(RwReg  *)0x41007148U) /**< \brief (SBMATRIX) Special Function 14 */
#define REG_SBMATRIX_SFR15         (*(RwReg  *)0x4100714CU) /**< \brief (SBMATRIX) Special Function 15 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for SBMATRIX peripheral ========== */
#define SBMATRIX_DEFINED                    
/* ========== Instance parameters for SBMATRIX ========== */
#define SBMATRIX_SLAVE_FLASH        0
#define SBMATRIX_SLAVE_HPB0         1
#define SBMATRIX_SLAVE_HPB1         2
#define SBMATRIX_SLAVE_HPB2         3
#define SBMATRIX_SLAVE_HMCRAMC0     4
#define SBMATRIX_SLAVE_HMCRAMC0_ALT0 5
#define SBMATRIX_SLAVE_HMCRAMC0_ALT1 6
#define SBMATRIX_SLAVE_NUM          7

#define SBMATRIX_MASTER_CM0PLUS     0
#define SBMATRIX_MASTER_DSU         1
#define SBMATRIX_MASTER_DMAC        2
#define SBMATRIX_MASTER_NUM         3


#endif
