#ifndef _HDI_PAC_H_
#define _HDI_PAC_H_

#define PAC_U2211
#define REV_PAC                     0x101

/* -------- PAC_WPCLR : (PAC Offset: 0x0) (R/W 32) Write Protection Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t WP:31;            /*!< bit:  1..31  Write Protection Clear             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_WPCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_WPCLR_OFFSET            0x0          /**< \brief (PAC_WPCLR offset) Write Protection Clear */
#define PAC_WPCLR_RESETVALUE        0x00000000ul /**< \brief (PAC_WPCLR reset_value) Write Protection Clear */

#define PAC_WPCLR_WP_Pos            1            /**< \brief (PAC_WPCLR) Write Protection Clear */
#define PAC_WPCLR_WP_Msk            (0x7FFFFFFFul << PAC_WPCLR_WP_Pos)
#define PAC_WPCLR_WP(value)         (PAC_WPCLR_WP_Msk & ((value) << PAC_WPCLR_WP_Pos))
#define PAC_WPCLR_MASK              0xFFFFFFFEul /**< \brief (PAC_WPCLR) MASK Register */

/* -------- PAC_WPSET : (PAC Offset: 0x4) (R/W 32) Write Protection Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t WP:31;            /*!< bit:  1..31  Write Protection Set               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_WPSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_WPSET_OFFSET            0x4          /**< \brief (PAC_WPSET offset) Write Protection Set */
#define PAC_WPSET_RESETVALUE        0x00000000ul /**< \brief (PAC_WPSET reset_value) Write Protection Set */

#define PAC_WPSET_WP_Pos            1            /**< \brief (PAC_WPSET) Write Protection Set */
#define PAC_WPSET_WP_Msk            (0x7FFFFFFFul << PAC_WPSET_WP_Pos)
#define PAC_WPSET_WP(value)         (PAC_WPSET_WP_Msk & ((value) << PAC_WPSET_WP_Pos))
#define PAC_WPSET_MASK              0xFFFFFFFEul /**< \brief (PAC_WPSET) MASK Register */

/** \brief PAC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO PAC_WPCLR_Type            WPCLR;       /**< \brief Offset: 0x0 (R/W 32) Write Protection Clear */
  __IO PAC_WPSET_Type            WPSET;       /**< \brief Offset: 0x4 (R/W 32) Write Protection Set */
} Pac;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* PAC Inst 0 */
/* ========== Register definition for PAC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PAC0_WPCLR             (0x40000000U) /**< \brief (PAC0) Write Protection Clear */
#define REG_PAC0_WPSET             (0x40000004U) /**< \brief (PAC0) Write Protection Set */
#else
#define REG_PAC0_WPCLR             (*(RwReg  *)0x40000000U) /**< \brief (PAC0) Write Protection Clear */
#define REG_PAC0_WPSET             (*(RwReg  *)0x40000004U) /**< \brief (PAC0) Write Protection Set */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PAC0 peripheral ========== */
#define PAC0_WPROT_DEFAULT_VAL      0x00000000 // PAC protection mask at reset
/* PAC Inst 1 */
/* ========== Register definition for PAC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PAC1_WPCLR             (0x41000000U) /**< \brief (PAC1) Write Protection Clear */
#define REG_PAC1_WPSET             (0x41000004U) /**< \brief (PAC1) Write Protection Set */
#else
#define REG_PAC1_WPCLR             (*(RwReg  *)0x41000000U) /**< \brief (PAC1) Write Protection Clear */
#define REG_PAC1_WPSET             (*(RwReg  *)0x41000004U) /**< \brief (PAC1) Write Protection Set */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PAC1 peripheral ========== */
#define PAC1_WPROT_DEFAULT_VAL      0x00000002 // PAC protection mask at reset
/* PAC Inst 2 */
/* ========== Register definition for PAC2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PAC2_WPCLR             (0x42000000U) /**< \brief (PAC2) Write Protection Clear */
#define REG_PAC2_WPSET             (0x42000004U) /**< \brief (PAC2) Write Protection Set */
#else
#define REG_PAC2_WPCLR             (*(RwReg  *)0x42000000U) /**< \brief (PAC2) Write Protection Clear */
#define REG_PAC2_WPSET             (*(RwReg  *)0x42000004U) /**< \brief (PAC2) Write Protection Set */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PAC2 peripheral ========== */
#define PAC2_WPROT_DEFAULT_VAL      0x00800000 // PAC protection mask at reset

#endif
