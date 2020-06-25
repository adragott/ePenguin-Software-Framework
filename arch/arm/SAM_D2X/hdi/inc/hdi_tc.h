#ifndef _HDI_TC_H_
#define _HDI_TC_H_

#define TC_U2212
#define REV_TC                      0x131

/* -------- TC_CTRLA : (TC Offset: 0x00) (R/W 16) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint16_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint16_t MODE:2;           /*!< bit:  2.. 3  TC Mode                            */
    uint16_t :1;               /*!< bit:      4  Reserved                           */
    uint16_t WAVEGEN:2;        /*!< bit:  5.. 6  Waveform Generation Operation      */
    uint16_t :1;               /*!< bit:      7  Reserved                           */
    uint16_t PRESCALER:3;      /*!< bit:  8..10  Prescaler                          */
    uint16_t RUNSTDBY:1;       /*!< bit:     11  Run in Standby                     */
    uint16_t PRESCSYNC:2;      /*!< bit: 12..13  Prescaler and Counter Synchronization */
    uint16_t :2;               /*!< bit: 14..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLA_OFFSET             0x00         /**< \brief (TC_CTRLA offset) Control A */
#define TC_CTRLA_RESETVALUE         0x0000ul     /**< \brief (TC_CTRLA reset_value) Control A */

#define TC_CTRLA_SWRST_Pos          0            /**< \brief (TC_CTRLA) Software Reset */
#define TC_CTRLA_SWRST              (0x1ul << TC_CTRLA_SWRST_Pos)
#define TC_CTRLA_ENABLE_Pos         1            /**< \brief (TC_CTRLA) Enable */
#define TC_CTRLA_ENABLE             (0x1ul << TC_CTRLA_ENABLE_Pos)
#define TC_CTRLA_MODE_Pos           2            /**< \brief (TC_CTRLA) TC Mode */
#define TC_CTRLA_MODE_Msk           (0x3ul << TC_CTRLA_MODE_Pos)
#define TC_CTRLA_MODE(value)        (TC_CTRLA_MODE_Msk & ((value) << TC_CTRLA_MODE_Pos))
#define   TC_CTRLA_MODE_COUNT16_Val       0x0ul  /**< \brief (TC_CTRLA) Counter in 16-bit mode */
#define   TC_CTRLA_MODE_COUNT8_Val        0x1ul  /**< \brief (TC_CTRLA) Counter in 8-bit mode */
#define   TC_CTRLA_MODE_COUNT32_Val       0x2ul  /**< \brief (TC_CTRLA) Counter in 32-bit mode */
#define TC_CTRLA_MODE_COUNT16       (TC_CTRLA_MODE_COUNT16_Val     << TC_CTRLA_MODE_Pos)
#define TC_CTRLA_MODE_COUNT8        (TC_CTRLA_MODE_COUNT8_Val      << TC_CTRLA_MODE_Pos)
#define TC_CTRLA_MODE_COUNT32       (TC_CTRLA_MODE_COUNT32_Val     << TC_CTRLA_MODE_Pos)
#define TC_CTRLA_WAVEGEN_Pos        5            /**< \brief (TC_CTRLA) Waveform Generation Operation */
#define TC_CTRLA_WAVEGEN_Msk        (0x3ul << TC_CTRLA_WAVEGEN_Pos)
#define TC_CTRLA_WAVEGEN(value)     (TC_CTRLA_WAVEGEN_Msk & ((value) << TC_CTRLA_WAVEGEN_Pos))
#define   TC_CTRLA_WAVEGEN_NFRQ_Val       0x0ul  /**< \brief (TC_CTRLA)  */
#define   TC_CTRLA_WAVEGEN_MFRQ_Val       0x1ul  /**< \brief (TC_CTRLA)  */
#define   TC_CTRLA_WAVEGEN_NPWM_Val       0x2ul  /**< \brief (TC_CTRLA)  */
#define   TC_CTRLA_WAVEGEN_MPWM_Val       0x3ul  /**< \brief (TC_CTRLA)  */
#define TC_CTRLA_WAVEGEN_NFRQ       (TC_CTRLA_WAVEGEN_NFRQ_Val     << TC_CTRLA_WAVEGEN_Pos)
#define TC_CTRLA_WAVEGEN_MFRQ       (TC_CTRLA_WAVEGEN_MFRQ_Val     << TC_CTRLA_WAVEGEN_Pos)
#define TC_CTRLA_WAVEGEN_NPWM       (TC_CTRLA_WAVEGEN_NPWM_Val     << TC_CTRLA_WAVEGEN_Pos)
#define TC_CTRLA_WAVEGEN_MPWM       (TC_CTRLA_WAVEGEN_MPWM_Val     << TC_CTRLA_WAVEGEN_Pos)
#define TC_CTRLA_PRESCALER_Pos      8            /**< \brief (TC_CTRLA) Prescaler */
#define TC_CTRLA_PRESCALER_Msk      (0x7ul << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER(value)   (TC_CTRLA_PRESCALER_Msk & ((value) << TC_CTRLA_PRESCALER_Pos))
#define   TC_CTRLA_PRESCALER_DIV1_Val     0x0ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC */
#define   TC_CTRLA_PRESCALER_DIV2_Val     0x1ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/2 */
#define   TC_CTRLA_PRESCALER_DIV4_Val     0x2ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/4 */
#define   TC_CTRLA_PRESCALER_DIV8_Val     0x3ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/8 */
#define   TC_CTRLA_PRESCALER_DIV16_Val    0x4ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/16 */
#define   TC_CTRLA_PRESCALER_DIV64_Val    0x5ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/64 */
#define   TC_CTRLA_PRESCALER_DIV256_Val   0x6ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/256 */
#define   TC_CTRLA_PRESCALER_DIV1024_Val  0x7ul  /**< \brief (TC_CTRLA) Prescaler: GCLK_TC/1024 */
#define TC_CTRLA_PRESCALER_DIV1     (TC_CTRLA_PRESCALER_DIV1_Val   << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV2     (TC_CTRLA_PRESCALER_DIV2_Val   << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV4     (TC_CTRLA_PRESCALER_DIV4_Val   << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV8     (TC_CTRLA_PRESCALER_DIV8_Val   << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV16    (TC_CTRLA_PRESCALER_DIV16_Val  << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV64    (TC_CTRLA_PRESCALER_DIV64_Val  << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV256   (TC_CTRLA_PRESCALER_DIV256_Val << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_PRESCALER_DIV1024  (TC_CTRLA_PRESCALER_DIV1024_Val << TC_CTRLA_PRESCALER_Pos)
#define TC_CTRLA_RUNSTDBY_Pos       11           /**< \brief (TC_CTRLA) Run in Standby */
#define TC_CTRLA_RUNSTDBY           (0x1ul << TC_CTRLA_RUNSTDBY_Pos)
#define TC_CTRLA_PRESCSYNC_Pos      12           /**< \brief (TC_CTRLA) Prescaler and Counter Synchronization */
#define TC_CTRLA_PRESCSYNC_Msk      (0x3ul << TC_CTRLA_PRESCSYNC_Pos)
#define TC_CTRLA_PRESCSYNC(value)   (TC_CTRLA_PRESCSYNC_Msk & ((value) << TC_CTRLA_PRESCSYNC_Pos))
#define   TC_CTRLA_PRESCSYNC_GCLK_Val     0x0ul  /**< \brief (TC_CTRLA) Reload or reset the counter on next generic clock */
#define   TC_CTRLA_PRESCSYNC_PRESC_Val    0x1ul  /**< \brief (TC_CTRLA) Reload or reset the counter on next prescaler clock */
#define   TC_CTRLA_PRESCSYNC_RESYNC_Val   0x2ul  /**< \brief (TC_CTRLA) Reload or reset the counter on next generic clock. Reset the prescaler counter */
#define TC_CTRLA_PRESCSYNC_GCLK     (TC_CTRLA_PRESCSYNC_GCLK_Val   << TC_CTRLA_PRESCSYNC_Pos)
#define TC_CTRLA_PRESCSYNC_PRESC    (TC_CTRLA_PRESCSYNC_PRESC_Val  << TC_CTRLA_PRESCSYNC_Pos)
#define TC_CTRLA_PRESCSYNC_RESYNC   (TC_CTRLA_PRESCSYNC_RESYNC_Val << TC_CTRLA_PRESCSYNC_Pos)
#define TC_CTRLA_MASK               0x3F6Ful     /**< \brief (TC_CTRLA) MASK Register */

/* -------- TC_READREQ : (TC Offset: 0x02) (R/W 16) Read Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t ADDR:5;           /*!< bit:  0.. 4  Address                            */
    uint16_t :9;               /*!< bit:  5..13  Reserved                           */
    uint16_t RCONT:1;          /*!< bit:     14  Read Continuously                  */
    uint16_t RREQ:1;           /*!< bit:     15  Read Request                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_READREQ_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_READREQ_OFFSET           0x02         /**< \brief (TC_READREQ offset) Read Request */
#define TC_READREQ_RESETVALUE       0x0000ul     /**< \brief (TC_READREQ reset_value) Read Request */

#define TC_READREQ_ADDR_Pos         0            /**< \brief (TC_READREQ) Address */
#define TC_READREQ_ADDR_Msk         (0x1Ful << TC_READREQ_ADDR_Pos)
#define TC_READREQ_ADDR(value)      (TC_READREQ_ADDR_Msk & ((value) << TC_READREQ_ADDR_Pos))
#define TC_READREQ_RCONT_Pos        14           /**< \brief (TC_READREQ) Read Continuously */
#define TC_READREQ_RCONT            (0x1ul << TC_READREQ_RCONT_Pos)
#define TC_READREQ_RREQ_Pos         15           /**< \brief (TC_READREQ) Read Request */
#define TC_READREQ_RREQ             (0x1ul << TC_READREQ_RREQ_Pos)
#define TC_READREQ_MASK             0xC01Ful     /**< \brief (TC_READREQ) MASK Register */

/* -------- TC_CTRLBCLR : (TC Offset: 0x04) (R/W  8) Control B Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIR:1;            /*!< bit:      0  Counter Direction                  */
    uint8_t  :1;               /*!< bit:      1  Reserved                           */
    uint8_t  ONESHOT:1;        /*!< bit:      2  One-Shot                           */
    uint8_t  :3;               /*!< bit:  3.. 5  Reserved                           */
    uint8_t  CMD:2;            /*!< bit:  6.. 7  Command                            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_CTRLBCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLBCLR_OFFSET          0x04         /**< \brief (TC_CTRLBCLR offset) Control B Clear */
#define TC_CTRLBCLR_RESETVALUE      0x02ul       /**< \brief (TC_CTRLBCLR reset_value) Control B Clear */

#define TC_CTRLBCLR_DIR_Pos         0            /**< \brief (TC_CTRLBCLR) Counter Direction */
#define TC_CTRLBCLR_DIR             (0x1ul << TC_CTRLBCLR_DIR_Pos)
#define TC_CTRLBCLR_ONESHOT_Pos     2            /**< \brief (TC_CTRLBCLR) One-Shot */
#define TC_CTRLBCLR_ONESHOT         (0x1ul << TC_CTRLBCLR_ONESHOT_Pos)
#define TC_CTRLBCLR_CMD_Pos         6            /**< \brief (TC_CTRLBCLR) Command */
#define TC_CTRLBCLR_CMD_Msk         (0x3ul << TC_CTRLBCLR_CMD_Pos)
#define TC_CTRLBCLR_CMD(value)      (TC_CTRLBCLR_CMD_Msk & ((value) << TC_CTRLBCLR_CMD_Pos))
#define   TC_CTRLBCLR_CMD_NONE_Val        0x0ul  /**< \brief (TC_CTRLBCLR) No action */
#define   TC_CTRLBCLR_CMD_RETRIGGER_Val   0x1ul  /**< \brief (TC_CTRLBCLR) Force a start, restart or retrigger */
#define   TC_CTRLBCLR_CMD_STOP_Val        0x2ul  /**< \brief (TC_CTRLBCLR) Force a stop */
#define TC_CTRLBCLR_CMD_NONE        (TC_CTRLBCLR_CMD_NONE_Val      << TC_CTRLBCLR_CMD_Pos)
#define TC_CTRLBCLR_CMD_RETRIGGER   (TC_CTRLBCLR_CMD_RETRIGGER_Val << TC_CTRLBCLR_CMD_Pos)
#define TC_CTRLBCLR_CMD_STOP        (TC_CTRLBCLR_CMD_STOP_Val      << TC_CTRLBCLR_CMD_Pos)
#define TC_CTRLBCLR_MASK            0xC5ul       /**< \brief (TC_CTRLBCLR) MASK Register */

/* -------- TC_CTRLBSET : (TC Offset: 0x05) (R/W  8) Control B Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIR:1;            /*!< bit:      0  Counter Direction                  */
    uint8_t  :1;               /*!< bit:      1  Reserved                           */
    uint8_t  ONESHOT:1;        /*!< bit:      2  One-Shot                           */
    uint8_t  :3;               /*!< bit:  3.. 5  Reserved                           */
    uint8_t  CMD:2;            /*!< bit:  6.. 7  Command                            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_CTRLBSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLBSET_OFFSET          0x05         /**< \brief (TC_CTRLBSET offset) Control B Set */
#define TC_CTRLBSET_RESETVALUE      0x00ul       /**< \brief (TC_CTRLBSET reset_value) Control B Set */

#define TC_CTRLBSET_DIR_Pos         0            /**< \brief (TC_CTRLBSET) Counter Direction */
#define TC_CTRLBSET_DIR             (0x1ul << TC_CTRLBSET_DIR_Pos)
#define TC_CTRLBSET_ONESHOT_Pos     2            /**< \brief (TC_CTRLBSET) One-Shot */
#define TC_CTRLBSET_ONESHOT         (0x1ul << TC_CTRLBSET_ONESHOT_Pos)
#define TC_CTRLBSET_CMD_Pos         6            /**< \brief (TC_CTRLBSET) Command */
#define TC_CTRLBSET_CMD_Msk         (0x3ul << TC_CTRLBSET_CMD_Pos)
#define TC_CTRLBSET_CMD(value)      (TC_CTRLBSET_CMD_Msk & ((value) << TC_CTRLBSET_CMD_Pos))
#define   TC_CTRLBSET_CMD_NONE_Val        0x0ul  /**< \brief (TC_CTRLBSET) No action */
#define   TC_CTRLBSET_CMD_RETRIGGER_Val   0x1ul  /**< \brief (TC_CTRLBSET) Force a start, restart or retrigger */
#define   TC_CTRLBSET_CMD_STOP_Val        0x2ul  /**< \brief (TC_CTRLBSET) Force a stop */
#define TC_CTRLBSET_CMD_NONE        (TC_CTRLBSET_CMD_NONE_Val      << TC_CTRLBSET_CMD_Pos)
#define TC_CTRLBSET_CMD_RETRIGGER   (TC_CTRLBSET_CMD_RETRIGGER_Val << TC_CTRLBSET_CMD_Pos)
#define TC_CTRLBSET_CMD_STOP        (TC_CTRLBSET_CMD_STOP_Val      << TC_CTRLBSET_CMD_Pos)
#define TC_CTRLBSET_MASK            0xC5ul       /**< \brief (TC_CTRLBSET) MASK Register */

/* -------- TC_CTRLC : (TC Offset: 0x06) (R/W  8) Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  INVEN0:1;         /*!< bit:      0  Output Waveform 0 Invert Enable    */
    uint8_t  INVEN1:1;         /*!< bit:      1  Output Waveform 1 Invert Enable    */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  CPTEN0:1;         /*!< bit:      4  Capture Channel 0 Enable           */
    uint8_t  CPTEN1:1;         /*!< bit:      5  Capture Channel 1 Enable           */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  INVEN:2;          /*!< bit:  0.. 1  Output Waveform x Invert Enable    */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  CPTEN:2;          /*!< bit:  4.. 5  Capture Channel x Enable           */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLC_OFFSET             0x06         /**< \brief (TC_CTRLC offset) Control C */
#define TC_CTRLC_RESETVALUE         0x00ul       /**< \brief (TC_CTRLC reset_value) Control C */

#define TC_CTRLC_INVEN0_Pos         0            /**< \brief (TC_CTRLC) Output Waveform 0 Invert Enable */
#define TC_CTRLC_INVEN0             (1 << TC_CTRLC_INVEN0_Pos)
#define TC_CTRLC_INVEN1_Pos         1            /**< \brief (TC_CTRLC) Output Waveform 1 Invert Enable */
#define TC_CTRLC_INVEN1             (1 << TC_CTRLC_INVEN1_Pos)
#define TC_CTRLC_INVEN_Pos          0            /**< \brief (TC_CTRLC) Output Waveform x Invert Enable */
#define TC_CTRLC_INVEN_Msk          (0x3ul << TC_CTRLC_INVEN_Pos)
#define TC_CTRLC_INVEN(value)       (TC_CTRLC_INVEN_Msk & ((value) << TC_CTRLC_INVEN_Pos))
#define TC_CTRLC_CPTEN0_Pos         4            /**< \brief (TC_CTRLC) Capture Channel 0 Enable */
#define TC_CTRLC_CPTEN0             (1 << TC_CTRLC_CPTEN0_Pos)
#define TC_CTRLC_CPTEN1_Pos         5            /**< \brief (TC_CTRLC) Capture Channel 1 Enable */
#define TC_CTRLC_CPTEN1             (1 << TC_CTRLC_CPTEN1_Pos)
#define TC_CTRLC_CPTEN_Pos          4            /**< \brief (TC_CTRLC) Capture Channel x Enable */
#define TC_CTRLC_CPTEN_Msk          (0x3ul << TC_CTRLC_CPTEN_Pos)
#define TC_CTRLC_CPTEN(value)       (TC_CTRLC_CPTEN_Msk & ((value) << TC_CTRLC_CPTEN_Pos))
#define TC_CTRLC_MASK               0x33ul       /**< \brief (TC_CTRLC) MASK Register */

/* -------- TC_DBGCTRL : (TC Offset: 0x08) (R/W  8) Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGRUN:1;         /*!< bit:      0  Debug Run Mode                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_DBGCTRL_OFFSET           0x08         /**< \brief (TC_DBGCTRL offset) Debug Control */
#define TC_DBGCTRL_RESETVALUE       0x00ul       /**< \brief (TC_DBGCTRL reset_value) Debug Control */

#define TC_DBGCTRL_DBGRUN_Pos       0            /**< \brief (TC_DBGCTRL) Debug Run Mode */
#define TC_DBGCTRL_DBGRUN           (0x1ul << TC_DBGCTRL_DBGRUN_Pos)
#define TC_DBGCTRL_MASK             0x01ul       /**< \brief (TC_DBGCTRL) MASK Register */

/* -------- TC_EVCTRL : (TC Offset: 0x0A) (R/W 16) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t EVACT:3;          /*!< bit:  0.. 2  Event Action                       */
    uint16_t :1;               /*!< bit:      3  Reserved                           */
    uint16_t TCINV:1;          /*!< bit:      4  TC Inverted Event Input            */
    uint16_t TCEI:1;           /*!< bit:      5  TC Event Input                     */
    uint16_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint16_t OVFEO:1;          /*!< bit:      8  Overflow/Underflow Event Output Enable */
    uint16_t :3;               /*!< bit:  9..11  Reserved                           */
    uint16_t MCEO0:1;          /*!< bit:     12  Match or Capture Channel 0 Event Output Enable */
    uint16_t MCEO1:1;          /*!< bit:     13  Match or Capture Channel 1 Event Output Enable */
    uint16_t :2;               /*!< bit: 14..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint16_t :12;              /*!< bit:  0..11  Reserved                           */
    uint16_t MCEO:2;           /*!< bit: 12..13  Match or Capture Channel x Event Output Enable */
    uint16_t :2;               /*!< bit: 14..15  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_EVCTRL_OFFSET            0x0A         /**< \brief (TC_EVCTRL offset) Event Control */
#define TC_EVCTRL_RESETVALUE        0x0000ul     /**< \brief (TC_EVCTRL reset_value) Event Control */

#define TC_EVCTRL_EVACT_Pos         0            /**< \brief (TC_EVCTRL) Event Action */
#define TC_EVCTRL_EVACT_Msk         (0x7ul << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT(value)      (TC_EVCTRL_EVACT_Msk & ((value) << TC_EVCTRL_EVACT_Pos))
#define   TC_EVCTRL_EVACT_OFF_Val         0x0ul  /**< \brief (TC_EVCTRL) Event action disabled */
#define   TC_EVCTRL_EVACT_RETRIGGER_Val   0x1ul  /**< \brief (TC_EVCTRL) Start, restart or retrigger TC on event */
#define   TC_EVCTRL_EVACT_COUNT_Val       0x2ul  /**< \brief (TC_EVCTRL) Count on event */
#define   TC_EVCTRL_EVACT_START_Val       0x3ul  /**< \brief (TC_EVCTRL) Start TC on event */
#define   TC_EVCTRL_EVACT_PPW_Val         0x5ul  /**< \brief (TC_EVCTRL) Period captured in CC0, pulse width in CC1 */
#define   TC_EVCTRL_EVACT_PWP_Val         0x6ul  /**< \brief (TC_EVCTRL) Period captured in CC1, pulse width in CC0 */
#define TC_EVCTRL_EVACT_OFF         (TC_EVCTRL_EVACT_OFF_Val       << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT_RETRIGGER   (TC_EVCTRL_EVACT_RETRIGGER_Val << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT_COUNT       (TC_EVCTRL_EVACT_COUNT_Val     << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT_START       (TC_EVCTRL_EVACT_START_Val     << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT_PPW         (TC_EVCTRL_EVACT_PPW_Val       << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_EVACT_PWP         (TC_EVCTRL_EVACT_PWP_Val       << TC_EVCTRL_EVACT_Pos)
#define TC_EVCTRL_TCINV_Pos         4            /**< \brief (TC_EVCTRL) TC Inverted Event Input */
#define TC_EVCTRL_TCINV             (0x1ul << TC_EVCTRL_TCINV_Pos)
#define TC_EVCTRL_TCEI_Pos          5            /**< \brief (TC_EVCTRL) TC Event Input */
#define TC_EVCTRL_TCEI              (0x1ul << TC_EVCTRL_TCEI_Pos)
#define TC_EVCTRL_OVFEO_Pos         8            /**< \brief (TC_EVCTRL) Overflow/Underflow Event Output Enable */
#define TC_EVCTRL_OVFEO             (0x1ul << TC_EVCTRL_OVFEO_Pos)
#define TC_EVCTRL_MCEO0_Pos         12           /**< \brief (TC_EVCTRL) Match or Capture Channel 0 Event Output Enable */
#define TC_EVCTRL_MCEO0             (1 << TC_EVCTRL_MCEO0_Pos)
#define TC_EVCTRL_MCEO1_Pos         13           /**< \brief (TC_EVCTRL) Match or Capture Channel 1 Event Output Enable */
#define TC_EVCTRL_MCEO1             (1 << TC_EVCTRL_MCEO1_Pos)
#define TC_EVCTRL_MCEO_Pos          12           /**< \brief (TC_EVCTRL) Match or Capture Channel x Event Output Enable */
#define TC_EVCTRL_MCEO_Msk          (0x3ul << TC_EVCTRL_MCEO_Pos)
#define TC_EVCTRL_MCEO(value)       (TC_EVCTRL_MCEO_Msk & ((value) << TC_EVCTRL_MCEO_Pos))
#define TC_EVCTRL_MASK              0x3137ul     /**< \brief (TC_EVCTRL) MASK Register */

/* -------- TC_INTENCLR : (TC Offset: 0x0C) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVF:1;            /*!< bit:      0  Overflow Interrupt Enable          */
    uint8_t  ERR:1;            /*!< bit:      1  Error Interrupt Enable             */
    uint8_t  :1;               /*!< bit:      2  Reserved                           */
    uint8_t  SYNCRDY:1;        /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t  MC0:1;            /*!< bit:      4  Match or Capture Channel 0 Interrupt Enable */
    uint8_t  MC1:1;            /*!< bit:      5  Match or Capture Channel 1 Interrupt Enable */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    uint8_t  MC:2;             /*!< bit:  4.. 5  Match or Capture Channel x Interrupt Enable */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTENCLR_OFFSET          0x0C         /**< \brief (TC_INTENCLR offset) Interrupt Enable Clear */
#define TC_INTENCLR_RESETVALUE      0x00ul       /**< \brief (TC_INTENCLR reset_value) Interrupt Enable Clear */

#define TC_INTENCLR_OVF_Pos         0            /**< \brief (TC_INTENCLR) Overflow Interrupt Enable */
#define TC_INTENCLR_OVF             (0x1ul << TC_INTENCLR_OVF_Pos)
#define TC_INTENCLR_ERR_Pos         1            /**< \brief (TC_INTENCLR) Error Interrupt Enable */
#define TC_INTENCLR_ERR             (0x1ul << TC_INTENCLR_ERR_Pos)
#define TC_INTENCLR_SYNCRDY_Pos     3            /**< \brief (TC_INTENCLR) Synchronization Ready Interrupt Enable */
#define TC_INTENCLR_SYNCRDY         (0x1ul << TC_INTENCLR_SYNCRDY_Pos)
#define TC_INTENCLR_MC0_Pos         4            /**< \brief (TC_INTENCLR) Match or Capture Channel 0 Interrupt Enable */
#define TC_INTENCLR_MC0             (1 << TC_INTENCLR_MC0_Pos)
#define TC_INTENCLR_MC1_Pos         5            /**< \brief (TC_INTENCLR) Match or Capture Channel 1 Interrupt Enable */
#define TC_INTENCLR_MC1             (1 << TC_INTENCLR_MC1_Pos)
#define TC_INTENCLR_MC_Pos          4            /**< \brief (TC_INTENCLR) Match or Capture Channel x Interrupt Enable */
#define TC_INTENCLR_MC_Msk          (0x3ul << TC_INTENCLR_MC_Pos)
#define TC_INTENCLR_MC(value)       (TC_INTENCLR_MC_Msk & ((value) << TC_INTENCLR_MC_Pos))
#define TC_INTENCLR_MASK            0x3Bul       /**< \brief (TC_INTENCLR) MASK Register */

/* -------- TC_INTENSET : (TC Offset: 0x0D) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVF:1;            /*!< bit:      0  Overflow Interrupt Enable          */
    uint8_t  ERR:1;            /*!< bit:      1  Error Interrupt Enable             */
    uint8_t  :1;               /*!< bit:      2  Reserved                           */
    uint8_t  SYNCRDY:1;        /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t  MC0:1;            /*!< bit:      4  Match or Capture Channel 0 Interrupt Enable */
    uint8_t  MC1:1;            /*!< bit:      5  Match or Capture Channel 1 Interrupt Enable */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    uint8_t  MC:2;             /*!< bit:  4.. 5  Match or Capture Channel x Interrupt Enable */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTENSET_OFFSET          0x0D         /**< \brief (TC_INTENSET offset) Interrupt Enable Set */
#define TC_INTENSET_RESETVALUE      0x00ul       /**< \brief (TC_INTENSET reset_value) Interrupt Enable Set */

#define TC_INTENSET_OVF_Pos         0            /**< \brief (TC_INTENSET) Overflow Interrupt Enable */
#define TC_INTENSET_OVF             (0x1ul << TC_INTENSET_OVF_Pos)
#define TC_INTENSET_ERR_Pos         1            /**< \brief (TC_INTENSET) Error Interrupt Enable */
#define TC_INTENSET_ERR             (0x1ul << TC_INTENSET_ERR_Pos)
#define TC_INTENSET_SYNCRDY_Pos     3            /**< \brief (TC_INTENSET) Synchronization Ready Interrupt Enable */
#define TC_INTENSET_SYNCRDY         (0x1ul << TC_INTENSET_SYNCRDY_Pos)
#define TC_INTENSET_MC0_Pos         4            /**< \brief (TC_INTENSET) Match or Capture Channel 0 Interrupt Enable */
#define TC_INTENSET_MC0             (1 << TC_INTENSET_MC0_Pos)
#define TC_INTENSET_MC1_Pos         5            /**< \brief (TC_INTENSET) Match or Capture Channel 1 Interrupt Enable */
#define TC_INTENSET_MC1             (1 << TC_INTENSET_MC1_Pos)
#define TC_INTENSET_MC_Pos          4            /**< \brief (TC_INTENSET) Match or Capture Channel x Interrupt Enable */
#define TC_INTENSET_MC_Msk          (0x3ul << TC_INTENSET_MC_Pos)
#define TC_INTENSET_MC(value)       (TC_INTENSET_MC_Msk & ((value) << TC_INTENSET_MC_Pos))
#define TC_INTENSET_MASK            0x3Bul       /**< \brief (TC_INTENSET) MASK Register */

/* -------- TC_INTFLAG : (TC Offset: 0x0E) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  OVF:1;            /*!< bit:      0  Overflow                           */
    __I uint8_t  ERR:1;            /*!< bit:      1  Error                              */
    __I uint8_t  :1;               /*!< bit:      2  Reserved                           */
    __I uint8_t  SYNCRDY:1;        /*!< bit:      3  Synchronization Ready              */
    __I uint8_t  MC0:1;            /*!< bit:      4  Match or Capture Channel 0         */
    __I uint8_t  MC1:1;            /*!< bit:      5  Match or Capture Channel 1         */
    __I uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    __I uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    __I uint8_t  MC:2;             /*!< bit:  4.. 5  Match or Capture Channel x         */
    __I uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTFLAG_OFFSET           0x0E         /**< \brief (TC_INTFLAG offset) Interrupt Flag Status and Clear */
#define TC_INTFLAG_RESETVALUE       0x00ul       /**< \brief (TC_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define TC_INTFLAG_OVF_Pos          0            /**< \brief (TC_INTFLAG) Overflow */
#define TC_INTFLAG_OVF              (0x1ul << TC_INTFLAG_OVF_Pos)
#define TC_INTFLAG_ERR_Pos          1            /**< \brief (TC_INTFLAG) Error */
#define TC_INTFLAG_ERR              (0x1ul << TC_INTFLAG_ERR_Pos)
#define TC_INTFLAG_SYNCRDY_Pos      3            /**< \brief (TC_INTFLAG) Synchronization Ready */
#define TC_INTFLAG_SYNCRDY          (0x1ul << TC_INTFLAG_SYNCRDY_Pos)
#define TC_INTFLAG_MC0_Pos          4            /**< \brief (TC_INTFLAG) Match or Capture Channel 0 */
#define TC_INTFLAG_MC0              (1 << TC_INTFLAG_MC0_Pos)
#define TC_INTFLAG_MC1_Pos          5            /**< \brief (TC_INTFLAG) Match or Capture Channel 1 */
#define TC_INTFLAG_MC1              (1 << TC_INTFLAG_MC1_Pos)
#define TC_INTFLAG_MC_Pos           4            /**< \brief (TC_INTFLAG) Match or Capture Channel x */
#define TC_INTFLAG_MC_Msk           (0x3ul << TC_INTFLAG_MC_Pos)
#define TC_INTFLAG_MC(value)        (TC_INTFLAG_MC_Msk & ((value) << TC_INTFLAG_MC_Pos))
#define TC_INTFLAG_MASK             0x3Bul       /**< \brief (TC_INTFLAG) MASK Register */

/* -------- TC_STATUS : (TC Offset: 0x0F) (R/   8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :3;               /*!< bit:  0.. 2  Reserved                           */
    uint8_t  STOP:1;           /*!< bit:      3  Stop                               */
    uint8_t  SLAVE:1;          /*!< bit:      4  Slave                              */
    uint8_t  :2;               /*!< bit:  5.. 6  Reserved                           */
    uint8_t  SYNCBUSY:1;       /*!< bit:      7  Synchronization Busy               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_STATUS_OFFSET            0x0F         /**< \brief (TC_STATUS offset) Status */
#define TC_STATUS_RESETVALUE        0x08ul       /**< \brief (TC_STATUS reset_value) Status */

#define TC_STATUS_STOP_Pos          3            /**< \brief (TC_STATUS) Stop */
#define TC_STATUS_STOP              (0x1ul << TC_STATUS_STOP_Pos)
#define TC_STATUS_SLAVE_Pos         4            /**< \brief (TC_STATUS) Slave */
#define TC_STATUS_SLAVE             (0x1ul << TC_STATUS_SLAVE_Pos)
#define TC_STATUS_SYNCBUSY_Pos      7            /**< \brief (TC_STATUS) Synchronization Busy */
#define TC_STATUS_SYNCBUSY          (0x1ul << TC_STATUS_SYNCBUSY_Pos)
#define TC_STATUS_MASK              0x98ul       /**< \brief (TC_STATUS) MASK Register */

/* -------- TC_COUNT16_COUNT : (TC Offset: 0x10) (R/W 16) COUNT16 COUNT16 Counter Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t COUNT:16;         /*!< bit:  0..15  Count Value                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_COUNT16_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT16_COUNT_OFFSET     0x10         /**< \brief (TC_COUNT16_COUNT offset) COUNT16 Counter Value */
#define TC_COUNT16_COUNT_RESETVALUE 0x0000ul     /**< \brief (TC_COUNT16_COUNT reset_value) COUNT16 Counter Value */

#define TC_COUNT16_COUNT_COUNT_Pos  0            /**< \brief (TC_COUNT16_COUNT) Count Value */
#define TC_COUNT16_COUNT_COUNT_Msk  (0xFFFFul << TC_COUNT16_COUNT_COUNT_Pos)
#define TC_COUNT16_COUNT_COUNT(value) (TC_COUNT16_COUNT_COUNT_Msk & ((value) << TC_COUNT16_COUNT_COUNT_Pos))
#define TC_COUNT16_COUNT_MASK       0xFFFFul     /**< \brief (TC_COUNT16_COUNT) MASK Register */

/* -------- TC_COUNT32_COUNT : (TC Offset: 0x10) (R/W 32) COUNT32 COUNT32 Counter Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t COUNT:32;         /*!< bit:  0..31  Count Value                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_COUNT32_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT32_COUNT_OFFSET     0x10         /**< \brief (TC_COUNT32_COUNT offset) COUNT32 Counter Value */
#define TC_COUNT32_COUNT_RESETVALUE 0x00000000ul /**< \brief (TC_COUNT32_COUNT reset_value) COUNT32 Counter Value */

#define TC_COUNT32_COUNT_COUNT_Pos  0            /**< \brief (TC_COUNT32_COUNT) Count Value */
#define TC_COUNT32_COUNT_COUNT_Msk  (0xFFFFFFFFul << TC_COUNT32_COUNT_COUNT_Pos)
#define TC_COUNT32_COUNT_COUNT(value) (TC_COUNT32_COUNT_COUNT_Msk & ((value) << TC_COUNT32_COUNT_COUNT_Pos))
#define TC_COUNT32_COUNT_MASK       0xFFFFFFFFul /**< \brief (TC_COUNT32_COUNT) MASK Register */

/* -------- TC_COUNT8_COUNT : (TC Offset: 0x10) (R/W  8) COUNT8 COUNT8 Counter Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  COUNT:8;          /*!< bit:  0.. 7  Counter Value                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_COUNT_OFFSET      0x10         /**< \brief (TC_COUNT8_COUNT offset) COUNT8 Counter Value */
#define TC_COUNT8_COUNT_RESETVALUE  0x00ul       /**< \brief (TC_COUNT8_COUNT reset_value) COUNT8 Counter Value */

#define TC_COUNT8_COUNT_COUNT_Pos   0            /**< \brief (TC_COUNT8_COUNT) Counter Value */
#define TC_COUNT8_COUNT_COUNT_Msk   (0xFFul << TC_COUNT8_COUNT_COUNT_Pos)
#define TC_COUNT8_COUNT_COUNT(value) (TC_COUNT8_COUNT_COUNT_Msk & ((value) << TC_COUNT8_COUNT_COUNT_Pos))
#define TC_COUNT8_COUNT_MASK        0xFFul       /**< \brief (TC_COUNT8_COUNT) MASK Register */

/* -------- TC_COUNT8_PER : (TC Offset: 0x14) (R/W  8) COUNT8 COUNT8 Period Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PER:8;            /*!< bit:  0.. 7  Period Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_PER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_PER_OFFSET        0x14         /**< \brief (TC_COUNT8_PER offset) COUNT8 Period Value */
#define TC_COUNT8_PER_RESETVALUE    0xFFul       /**< \brief (TC_COUNT8_PER reset_value) COUNT8 Period Value */

#define TC_COUNT8_PER_PER_Pos       0            /**< \brief (TC_COUNT8_PER) Period Value */
#define TC_COUNT8_PER_PER_Msk       (0xFFul << TC_COUNT8_PER_PER_Pos)
#define TC_COUNT8_PER_PER(value)    (TC_COUNT8_PER_PER_Msk & ((value) << TC_COUNT8_PER_PER_Pos))
#define TC_COUNT8_PER_MASK          0xFFul       /**< \brief (TC_COUNT8_PER) MASK Register */

/* -------- TC_COUNT16_CC : (TC Offset: 0x18) (R/W 16) COUNT16 COUNT16 Compare/Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t CC:16;            /*!< bit:  0..15  Compare/Capture Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_COUNT16_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT16_CC_OFFSET        0x18         /**< \brief (TC_COUNT16_CC offset) COUNT16 Compare/Capture */
#define TC_COUNT16_CC_RESETVALUE    0x0000ul     /**< \brief (TC_COUNT16_CC reset_value) COUNT16 Compare/Capture */

#define TC_COUNT16_CC_CC_Pos        0            /**< \brief (TC_COUNT16_CC) Compare/Capture Value */
#define TC_COUNT16_CC_CC_Msk        (0xFFFFul << TC_COUNT16_CC_CC_Pos)
#define TC_COUNT16_CC_CC(value)     (TC_COUNT16_CC_CC_Msk & ((value) << TC_COUNT16_CC_CC_Pos))
#define TC_COUNT16_CC_MASK          0xFFFFul     /**< \brief (TC_COUNT16_CC) MASK Register */

/* -------- TC_COUNT32_CC : (TC Offset: 0x18) (R/W 32) COUNT32 COUNT32 Compare/Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CC:32;            /*!< bit:  0..31  Compare/Capture Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_COUNT32_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT32_CC_OFFSET        0x18         /**< \brief (TC_COUNT32_CC offset) COUNT32 Compare/Capture */
#define TC_COUNT32_CC_RESETVALUE    0x00000000ul /**< \brief (TC_COUNT32_CC reset_value) COUNT32 Compare/Capture */

#define TC_COUNT32_CC_CC_Pos        0            /**< \brief (TC_COUNT32_CC) Compare/Capture Value */
#define TC_COUNT32_CC_CC_Msk        (0xFFFFFFFFul << TC_COUNT32_CC_CC_Pos)
#define TC_COUNT32_CC_CC(value)     (TC_COUNT32_CC_CC_Msk & ((value) << TC_COUNT32_CC_CC_Pos))
#define TC_COUNT32_CC_MASK          0xFFFFFFFFul /**< \brief (TC_COUNT32_CC) MASK Register */

/* -------- TC_COUNT8_CC : (TC Offset: 0x18) (R/W  8) COUNT8 COUNT8 Compare/Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CC:8;             /*!< bit:  0.. 7  Compare/Capture Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_CC_OFFSET         0x18         /**< \brief (TC_COUNT8_CC offset) COUNT8 Compare/Capture */
#define TC_COUNT8_CC_RESETVALUE     0x00ul       /**< \brief (TC_COUNT8_CC reset_value) COUNT8 Compare/Capture */

#define TC_COUNT8_CC_CC_Pos         0            /**< \brief (TC_COUNT8_CC) Compare/Capture Value */
#define TC_COUNT8_CC_CC_Msk         (0xFFul << TC_COUNT8_CC_CC_Pos)
#define TC_COUNT8_CC_CC(value)      (TC_COUNT8_CC_CC_Msk & ((value) << TC_COUNT8_CC_CC_Pos))
#define TC_COUNT8_CC_MASK           0xFFul       /**< \brief (TC_COUNT8_CC) MASK Register */

/** \brief TC_COUNT8 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 8-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 16) Control A */
  __IO TC_READREQ_Type           READREQ;     /**< \brief Offset: 0x02 (R/W 16) Read Request */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_CTRLC_Type             CTRLC;       /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8                    Reserved2[0x1];
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x0A (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  __I  TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0F (R/   8) Status */
  __IO TC_COUNT8_COUNT_Type      COUNT;       /**< \brief Offset: 0x10 (R/W  8) COUNT8 Counter Value */
       RoReg8                    Reserved3[0x3];
  __IO TC_COUNT8_PER_Type        PER;         /**< \brief Offset: 0x14 (R/W  8) COUNT8 Period Value */
       RoReg8                    Reserved4[0x3];
  __IO TC_COUNT8_CC_Type         CC[2];       /**< \brief Offset: 0x18 (R/W  8) COUNT8 Compare/Capture */
} TcCount8;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief TC_COUNT16 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 16-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 16) Control A */
  __IO TC_READREQ_Type           READREQ;     /**< \brief Offset: 0x02 (R/W 16) Read Request */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_CTRLC_Type             CTRLC;       /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8                    Reserved2[0x1];
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x0A (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  __I  TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0F (R/   8) Status */
  __IO TC_COUNT16_COUNT_Type     COUNT;       /**< \brief Offset: 0x10 (R/W 16) COUNT16 Counter Value */
       RoReg8                    Reserved3[0x6];
  __IO TC_COUNT16_CC_Type        CC[2];       /**< \brief Offset: 0x18 (R/W 16) COUNT16 Compare/Capture */
} TcCount16;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief TC_COUNT32 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 32-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 16) Control A */
  __IO TC_READREQ_Type           READREQ;     /**< \brief Offset: 0x02 (R/W 16) Read Request */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_CTRLC_Type             CTRLC;       /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8                    Reserved2[0x1];
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x0A (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  __I  TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0F (R/   8) Status */
  __IO TC_COUNT32_COUNT_Type     COUNT;       /**< \brief Offset: 0x10 (R/W 32) COUNT32 Counter Value */
       RoReg8                    Reserved3[0x4];
  __IO TC_COUNT32_CC_Type        CC[2];       /**< \brief Offset: 0x18 (R/W 32) COUNT32 Compare/Capture */
} TcCount32;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
       TcCount8                  COUNT8;      /**< \brief Offset: 0x00 8-bit Counter Mode */
       TcCount16                 COUNT16;     /**< \brief Offset: 0x00 16-bit Counter Mode */
       TcCount32                 COUNT32;     /**< \brief Offset: 0x00 32-bit Counter Mode */
} Tc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* TC3 Inst */
/* ========== Register definition for TC3 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC3_CTRLA              (0x42002C00U) /**< \brief (TC3) Control A */
#define REG_TC3_READREQ            (0x42002C02U) /**< \brief (TC3) Read Request */
#define REG_TC3_CTRLBCLR           (0x42002C04U) /**< \brief (TC3) Control B Clear */
#define REG_TC3_CTRLBSET           (0x42002C05U) /**< \brief (TC3) Control B Set */
#define REG_TC3_CTRLC              (0x42002C06U) /**< \brief (TC3) Control C */
#define REG_TC3_DBGCTRL            (0x42002C08U) /**< \brief (TC3) Debug Control */
#define REG_TC3_EVCTRL             (0x42002C0AU) /**< \brief (TC3) Event Control */
#define REG_TC3_INTENCLR           (0x42002C0CU) /**< \brief (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET           (0x42002C0DU) /**< \brief (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG            (0x42002C0EU) /**< \brief (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS             (0x42002C0FU) /**< \brief (TC3) Status */
#define REG_TC3_COUNT16_COUNT      (0x42002C10U) /**< \brief (TC3) COUNT16 Counter Value */
#define REG_TC3_COUNT16_CC0        (0x42002C18U) /**< \brief (TC3) COUNT16 Compare/Capture 0 */
#define REG_TC3_COUNT16_CC1        (0x42002C1AU) /**< \brief (TC3) COUNT16 Compare/Capture 1 */
#define REG_TC3_COUNT32_COUNT      (0x42002C10U) /**< \brief (TC3) COUNT32 Counter Value */
#define REG_TC3_COUNT32_CC0        (0x42002C18U) /**< \brief (TC3) COUNT32 Compare/Capture 0 */
#define REG_TC3_COUNT32_CC1        (0x42002C1CU) /**< \brief (TC3) COUNT32 Compare/Capture 1 */
#define REG_TC3_COUNT8_COUNT       (0x42002C10U) /**< \brief (TC3) COUNT8 Counter Value */
#define REG_TC3_COUNT8_PER         (0x42002C14U) /**< \brief (TC3) COUNT8 Period Value */
#define REG_TC3_COUNT8_CC0         (0x42002C18U) /**< \brief (TC3) COUNT8 Compare/Capture 0 */
#define REG_TC3_COUNT8_CC1         (0x42002C19U) /**< \brief (TC3) COUNT8 Compare/Capture 1 */
#else
#define REG_TC3_CTRLA              (*(RwReg16*)0x42002C00U) /**< \brief (TC3) Control A */
#define REG_TC3_READREQ            (*(RwReg16*)0x42002C02U) /**< \brief (TC3) Read Request */
#define REG_TC3_CTRLBCLR           (*(RwReg8 *)0x42002C04U) /**< \brief (TC3) Control B Clear */
#define REG_TC3_CTRLBSET           (*(RwReg8 *)0x42002C05U) /**< \brief (TC3) Control B Set */
#define REG_TC3_CTRLC              (*(RwReg8 *)0x42002C06U) /**< \brief (TC3) Control C */
#define REG_TC3_DBGCTRL            (*(RwReg8 *)0x42002C08U) /**< \brief (TC3) Debug Control */
#define REG_TC3_EVCTRL             (*(RwReg16*)0x42002C0AU) /**< \brief (TC3) Event Control */
#define REG_TC3_INTENCLR           (*(RwReg8 *)0x42002C0CU) /**< \brief (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET           (*(RwReg8 *)0x42002C0DU) /**< \brief (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG            (*(RwReg8 *)0x42002C0EU) /**< \brief (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS             (*(RoReg8 *)0x42002C0FU) /**< \brief (TC3) Status */
#define REG_TC3_COUNT16_COUNT      (*(RwReg16*)0x42002C10U) /**< \brief (TC3) COUNT16 Counter Value */
#define REG_TC3_COUNT16_CC0        (*(RwReg16*)0x42002C18U) /**< \brief (TC3) COUNT16 Compare/Capture 0 */
#define REG_TC3_COUNT16_CC1        (*(RwReg16*)0x42002C1AU) /**< \brief (TC3) COUNT16 Compare/Capture 1 */
#define REG_TC3_COUNT32_COUNT      (*(RwReg  *)0x42002C10U) /**< \brief (TC3) COUNT32 Counter Value */
#define REG_TC3_COUNT32_CC0        (*(RwReg  *)0x42002C18U) /**< \brief (TC3) COUNT32 Compare/Capture 0 */
#define REG_TC3_COUNT32_CC1        (*(RwReg  *)0x42002C1CU) /**< \brief (TC3) COUNT32 Compare/Capture 1 */
#define REG_TC3_COUNT8_COUNT       (*(RwReg8 *)0x42002C10U) /**< \brief (TC3) COUNT8 Counter Value */
#define REG_TC3_COUNT8_PER         (*(RwReg8 *)0x42002C14U) /**< \brief (TC3) COUNT8 Period Value */
#define REG_TC3_COUNT8_CC0         (*(RwReg8 *)0x42002C18U) /**< \brief (TC3) COUNT8 Compare/Capture 0 */
#define REG_TC3_COUNT8_CC1         (*(RwReg8 *)0x42002C19U) /**< \brief (TC3) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC3 peripheral ========== */
#define TC3_CC8_NUM                 2        // Number of 8-bit Counters
#define TC3_CC16_NUM                2        // Number of 16-bit Counters
#define TC3_CC32_NUM                2        // Number of 32-bit Counters
#define TC3_DITHERING_EXT           0        // Dithering feature implemented
#define TC3_DMAC_ID_MC_0            25
#define TC3_DMAC_ID_MC_1            26
#define TC3_DMAC_ID_MC_LSB          25
#define TC3_DMAC_ID_MC_MSB          26
#define TC3_DMAC_ID_MC_SIZE         2
#define TC3_DMAC_ID_OVF             24       // Indexes of DMA Overflow trigger
#define TC3_GCLK_ID                 27       // Index of Generic Clock
#define TC3_MASTER                  0       
#define TC3_OW_NUM                  2        // Number of Output Waveforms
#define TC3_PERIOD_EXT              0        // Period feature implemented
#define TC3_SHADOW_EXT              0        // Shadow feature implemented

/* TC4 Inst */
/* ========== Register definition for TC4 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC4_CTRLA              (0x42003000U) /**< \brief (TC4) Control A */
#define REG_TC4_READREQ            (0x42003002U) /**< \brief (TC4) Read Request */
#define REG_TC4_CTRLBCLR           (0x42003004U) /**< \brief (TC4) Control B Clear */
#define REG_TC4_CTRLBSET           (0x42003005U) /**< \brief (TC4) Control B Set */
#define REG_TC4_CTRLC              (0x42003006U) /**< \brief (TC4) Control C */
#define REG_TC4_DBGCTRL            (0x42003008U) /**< \brief (TC4) Debug Control */
#define REG_TC4_EVCTRL             (0x4200300AU) /**< \brief (TC4) Event Control */
#define REG_TC4_INTENCLR           (0x4200300CU) /**< \brief (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET           (0x4200300DU) /**< \brief (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG            (0x4200300EU) /**< \brief (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS             (0x4200300FU) /**< \brief (TC4) Status */
#define REG_TC4_COUNT16_COUNT      (0x42003010U) /**< \brief (TC4) COUNT16 Counter Value */
#define REG_TC4_COUNT16_CC0        (0x42003018U) /**< \brief (TC4) COUNT16 Compare/Capture 0 */
#define REG_TC4_COUNT16_CC1        (0x4200301AU) /**< \brief (TC4) COUNT16 Compare/Capture 1 */
#define REG_TC4_COUNT32_COUNT      (0x42003010U) /**< \brief (TC4) COUNT32 Counter Value */
#define REG_TC4_COUNT32_CC0        (0x42003018U) /**< \brief (TC4) COUNT32 Compare/Capture 0 */
#define REG_TC4_COUNT32_CC1        (0x4200301CU) /**< \brief (TC4) COUNT32 Compare/Capture 1 */
#define REG_TC4_COUNT8_COUNT       (0x42003010U) /**< \brief (TC4) COUNT8 Counter Value */
#define REG_TC4_COUNT8_PER         (0x42003014U) /**< \brief (TC4) COUNT8 Period Value */
#define REG_TC4_COUNT8_CC0         (0x42003018U) /**< \brief (TC4) COUNT8 Compare/Capture 0 */
#define REG_TC4_COUNT8_CC1         (0x42003019U) /**< \brief (TC4) COUNT8 Compare/Capture 1 */
#else
#define REG_TC4_CTRLA              (*(RwReg16*)0x42003000U) /**< \brief (TC4) Control A */
#define REG_TC4_READREQ            (*(RwReg16*)0x42003002U) /**< \brief (TC4) Read Request */
#define REG_TC4_CTRLBCLR           (*(RwReg8 *)0x42003004U) /**< \brief (TC4) Control B Clear */
#define REG_TC4_CTRLBSET           (*(RwReg8 *)0x42003005U) /**< \brief (TC4) Control B Set */
#define REG_TC4_CTRLC              (*(RwReg8 *)0x42003006U) /**< \brief (TC4) Control C */
#define REG_TC4_DBGCTRL            (*(RwReg8 *)0x42003008U) /**< \brief (TC4) Debug Control */
#define REG_TC4_EVCTRL             (*(RwReg16*)0x4200300AU) /**< \brief (TC4) Event Control */
#define REG_TC4_INTENCLR           (*(RwReg8 *)0x4200300CU) /**< \brief (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET           (*(RwReg8 *)0x4200300DU) /**< \brief (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG            (*(RwReg8 *)0x4200300EU) /**< \brief (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS             (*(RoReg8 *)0x4200300FU) /**< \brief (TC4) Status */
#define REG_TC4_COUNT16_COUNT      (*(RwReg16*)0x42003010U) /**< \brief (TC4) COUNT16 Counter Value */
#define REG_TC4_COUNT16_CC0        (*(RwReg16*)0x42003018U) /**< \brief (TC4) COUNT16 Compare/Capture 0 */
#define REG_TC4_COUNT16_CC1        (*(RwReg16*)0x4200301AU) /**< \brief (TC4) COUNT16 Compare/Capture 1 */
#define REG_TC4_COUNT32_COUNT      (*(RwReg  *)0x42003010U) /**< \brief (TC4) COUNT32 Counter Value */
#define REG_TC4_COUNT32_CC0        (*(RwReg  *)0x42003018U) /**< \brief (TC4) COUNT32 Compare/Capture 0 */
#define REG_TC4_COUNT32_CC1        (*(RwReg  *)0x4200301CU) /**< \brief (TC4) COUNT32 Compare/Capture 1 */
#define REG_TC4_COUNT8_COUNT       (*(RwReg8 *)0x42003010U) /**< \brief (TC4) COUNT8 Counter Value */
#define REG_TC4_COUNT8_PER         (*(RwReg8 *)0x42003014U) /**< \brief (TC4) COUNT8 Period Value */
#define REG_TC4_COUNT8_CC0         (*(RwReg8 *)0x42003018U) /**< \brief (TC4) COUNT8 Compare/Capture 0 */
#define REG_TC4_COUNT8_CC1         (*(RwReg8 *)0x42003019U) /**< \brief (TC4) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC4 peripheral ========== */
#define TC4_CC8_NUM                 2        // Number of 8-bit Counters
#define TC4_CC16_NUM                2        // Number of 16-bit Counters
#define TC4_CC32_NUM                2        // Number of 32-bit Counters
#define TC4_DITHERING_EXT           0        // Dithering feature implemented
#define TC4_DMAC_ID_MC_0            28
#define TC4_DMAC_ID_MC_1            29
#define TC4_DMAC_ID_MC_LSB          28
#define TC4_DMAC_ID_MC_MSB          29
#define TC4_DMAC_ID_MC_SIZE         2
#define TC4_DMAC_ID_OVF             27       // Indexes of DMA Overflow trigger
#define TC4_GCLK_ID                 28       // Index of Generic Clock
#define TC4_MASTER                  1       
#define TC4_OW_NUM                  2        // Number of Output Waveforms
#define TC4_PERIOD_EXT              0        // Period feature implemented
#define TC4_SHADOW_EXT              0        // Shadow feature implemented

/* TC5 Inst */
/* ========== Register definition for TC5 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC5_CTRLA              (0x42003400U) /**< \brief (TC5) Control A */
#define REG_TC5_READREQ            (0x42003402U) /**< \brief (TC5) Read Request */
#define REG_TC5_CTRLBCLR           (0x42003404U) /**< \brief (TC5) Control B Clear */
#define REG_TC5_CTRLBSET           (0x42003405U) /**< \brief (TC5) Control B Set */
#define REG_TC5_CTRLC              (0x42003406U) /**< \brief (TC5) Control C */
#define REG_TC5_DBGCTRL            (0x42003408U) /**< \brief (TC5) Debug Control */
#define REG_TC5_EVCTRL             (0x4200340AU) /**< \brief (TC5) Event Control */
#define REG_TC5_INTENCLR           (0x4200340CU) /**< \brief (TC5) Interrupt Enable Clear */
#define REG_TC5_INTENSET           (0x4200340DU) /**< \brief (TC5) Interrupt Enable Set */
#define REG_TC5_INTFLAG            (0x4200340EU) /**< \brief (TC5) Interrupt Flag Status and Clear */
#define REG_TC5_STATUS             (0x4200340FU) /**< \brief (TC5) Status */
#define REG_TC5_COUNT16_COUNT      (0x42003410U) /**< \brief (TC5) COUNT16 Counter Value */
#define REG_TC5_COUNT16_CC0        (0x42003418U) /**< \brief (TC5) COUNT16 Compare/Capture 0 */
#define REG_TC5_COUNT16_CC1        (0x4200341AU) /**< \brief (TC5) COUNT16 Compare/Capture 1 */
#define REG_TC5_COUNT32_COUNT      (0x42003410U) /**< \brief (TC5) COUNT32 Counter Value */
#define REG_TC5_COUNT32_CC0        (0x42003418U) /**< \brief (TC5) COUNT32 Compare/Capture 0 */
#define REG_TC5_COUNT32_CC1        (0x4200341CU) /**< \brief (TC5) COUNT32 Compare/Capture 1 */
#define REG_TC5_COUNT8_COUNT       (0x42003410U) /**< \brief (TC5) COUNT8 Counter Value */
#define REG_TC5_COUNT8_PER         (0x42003414U) /**< \brief (TC5) COUNT8 Period Value */
#define REG_TC5_COUNT8_CC0         (0x42003418U) /**< \brief (TC5) COUNT8 Compare/Capture 0 */
#define REG_TC5_COUNT8_CC1         (0x42003419U) /**< \brief (TC5) COUNT8 Compare/Capture 1 */
#else
#define REG_TC5_CTRLA              (*(RwReg16*)0x42003400U) /**< \brief (TC5) Control A */
#define REG_TC5_READREQ            (*(RwReg16*)0x42003402U) /**< \brief (TC5) Read Request */
#define REG_TC5_CTRLBCLR           (*(RwReg8 *)0x42003404U) /**< \brief (TC5) Control B Clear */
#define REG_TC5_CTRLBSET           (*(RwReg8 *)0x42003405U) /**< \brief (TC5) Control B Set */
#define REG_TC5_CTRLC              (*(RwReg8 *)0x42003406U) /**< \brief (TC5) Control C */
#define REG_TC5_DBGCTRL            (*(RwReg8 *)0x42003408U) /**< \brief (TC5) Debug Control */
#define REG_TC5_EVCTRL             (*(RwReg16*)0x4200340AU) /**< \brief (TC5) Event Control */
#define REG_TC5_INTENCLR           (*(RwReg8 *)0x4200340CU) /**< \brief (TC5) Interrupt Enable Clear */
#define REG_TC5_INTENSET           (*(RwReg8 *)0x4200340DU) /**< \brief (TC5) Interrupt Enable Set */
#define REG_TC5_INTFLAG            (*(RwReg8 *)0x4200340EU) /**< \brief (TC5) Interrupt Flag Status and Clear */
#define REG_TC5_STATUS             (*(RoReg8 *)0x4200340FU) /**< \brief (TC5) Status */
#define REG_TC5_COUNT16_COUNT      (*(RwReg16*)0x42003410U) /**< \brief (TC5) COUNT16 Counter Value */
#define REG_TC5_COUNT16_CC0        (*(RwReg16*)0x42003418U) /**< \brief (TC5) COUNT16 Compare/Capture 0 */
#define REG_TC5_COUNT16_CC1        (*(RwReg16*)0x4200341AU) /**< \brief (TC5) COUNT16 Compare/Capture 1 */
#define REG_TC5_COUNT32_COUNT      (*(RwReg  *)0x42003410U) /**< \brief (TC5) COUNT32 Counter Value */
#define REG_TC5_COUNT32_CC0        (*(RwReg  *)0x42003418U) /**< \brief (TC5) COUNT32 Compare/Capture 0 */
#define REG_TC5_COUNT32_CC1        (*(RwReg  *)0x4200341CU) /**< \brief (TC5) COUNT32 Compare/Capture 1 */
#define REG_TC5_COUNT8_COUNT       (*(RwReg8 *)0x42003410U) /**< \brief (TC5) COUNT8 Counter Value */
#define REG_TC5_COUNT8_PER         (*(RwReg8 *)0x42003414U) /**< \brief (TC5) COUNT8 Period Value */
#define REG_TC5_COUNT8_CC0         (*(RwReg8 *)0x42003418U) /**< \brief (TC5) COUNT8 Compare/Capture 0 */
#define REG_TC5_COUNT8_CC1         (*(RwReg8 *)0x42003419U) /**< \brief (TC5) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC5 peripheral ========== */
#define TC5_CC8_NUM                 2        // Number of 8-bit Counters
#define TC5_CC16_NUM                2        // Number of 16-bit Counters
#define TC5_CC32_NUM                2        // Number of 32-bit Counters
#define TC5_DITHERING_EXT           0        // Dithering feature implemented
#define TC5_DMAC_ID_MC_0            31
#define TC5_DMAC_ID_MC_1            32
#define TC5_DMAC_ID_MC_LSB          31
#define TC5_DMAC_ID_MC_MSB          32
#define TC5_DMAC_ID_MC_SIZE         2
#define TC5_DMAC_ID_OVF             30       // Indexes of DMA Overflow trigger
#define TC5_GCLK_ID                 28       // Index of Generic Clock
#define TC5_MASTER                  0       
#define TC5_OW_NUM                  2        // Number of Output Waveforms
#define TC5_PERIOD_EXT              0        // Period feature implemented
#define TC5_SHADOW_EXT              0        // Shadow feature implemented
/* TC6 Inst */
/* ========== Register definition for TC6 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC6_CTRLA              (0x42003800U) /**< \brief (TC6) Control A */
#define REG_TC6_READREQ            (0x42003802U) /**< \brief (TC6) Read Request */
#define REG_TC6_CTRLBCLR           (0x42003804U) /**< \brief (TC6) Control B Clear */
#define REG_TC6_CTRLBSET           (0x42003805U) /**< \brief (TC6) Control B Set */
#define REG_TC6_CTRLC              (0x42003806U) /**< \brief (TC6) Control C */
#define REG_TC6_DBGCTRL            (0x42003808U) /**< \brief (TC6) Debug Control */
#define REG_TC6_EVCTRL             (0x4200380AU) /**< \brief (TC6) Event Control */
#define REG_TC6_INTENCLR           (0x4200380CU) /**< \brief (TC6) Interrupt Enable Clear */
#define REG_TC6_INTENSET           (0x4200380DU) /**< \brief (TC6) Interrupt Enable Set */
#define REG_TC6_INTFLAG            (0x4200380EU) /**< \brief (TC6) Interrupt Flag Status and Clear */
#define REG_TC6_STATUS             (0x4200380FU) /**< \brief (TC6) Status */
#define REG_TC6_COUNT16_COUNT      (0x42003810U) /**< \brief (TC6) COUNT16 Counter Value */
#define REG_TC6_COUNT16_CC0        (0x42003818U) /**< \brief (TC6) COUNT16 Compare/Capture 0 */
#define REG_TC6_COUNT16_CC1        (0x4200381AU) /**< \brief (TC6) COUNT16 Compare/Capture 1 */
#define REG_TC6_COUNT32_COUNT      (0x42003810U) /**< \brief (TC6) COUNT32 Counter Value */
#define REG_TC6_COUNT32_CC0        (0x42003818U) /**< \brief (TC6) COUNT32 Compare/Capture 0 */
#define REG_TC6_COUNT32_CC1        (0x4200381CU) /**< \brief (TC6) COUNT32 Compare/Capture 1 */
#define REG_TC6_COUNT8_COUNT       (0x42003810U) /**< \brief (TC6) COUNT8 Counter Value */
#define REG_TC6_COUNT8_PER         (0x42003814U) /**< \brief (TC6) COUNT8 Period Value */
#define REG_TC6_COUNT8_CC0         (0x42003818U) /**< \brief (TC6) COUNT8 Compare/Capture 0 */
#define REG_TC6_COUNT8_CC1         (0x42003819U) /**< \brief (TC6) COUNT8 Compare/Capture 1 */
#else
#define REG_TC6_CTRLA              (*(RwReg16*)0x42003800U) /**< \brief (TC6) Control A */
#define REG_TC6_READREQ            (*(RwReg16*)0x42003802U) /**< \brief (TC6) Read Request */
#define REG_TC6_CTRLBCLR           (*(RwReg8 *)0x42003804U) /**< \brief (TC6) Control B Clear */
#define REG_TC6_CTRLBSET           (*(RwReg8 *)0x42003805U) /**< \brief (TC6) Control B Set */
#define REG_TC6_CTRLC              (*(RwReg8 *)0x42003806U) /**< \brief (TC6) Control C */
#define REG_TC6_DBGCTRL            (*(RwReg8 *)0x42003808U) /**< \brief (TC6) Debug Control */
#define REG_TC6_EVCTRL             (*(RwReg16*)0x4200380AU) /**< \brief (TC6) Event Control */
#define REG_TC6_INTENCLR           (*(RwReg8 *)0x4200380CU) /**< \brief (TC6) Interrupt Enable Clear */
#define REG_TC6_INTENSET           (*(RwReg8 *)0x4200380DU) /**< \brief (TC6) Interrupt Enable Set */
#define REG_TC6_INTFLAG            (*(RwReg8 *)0x4200380EU) /**< \brief (TC6) Interrupt Flag Status and Clear */
#define REG_TC6_STATUS             (*(RoReg8 *)0x4200380FU) /**< \brief (TC6) Status */
#define REG_TC6_COUNT16_COUNT      (*(RwReg16*)0x42003810U) /**< \brief (TC6) COUNT16 Counter Value */
#define REG_TC6_COUNT16_CC0        (*(RwReg16*)0x42003818U) /**< \brief (TC6) COUNT16 Compare/Capture 0 */
#define REG_TC6_COUNT16_CC1        (*(RwReg16*)0x4200381AU) /**< \brief (TC6) COUNT16 Compare/Capture 1 */
#define REG_TC6_COUNT32_COUNT      (*(RwReg  *)0x42003810U) /**< \brief (TC6) COUNT32 Counter Value */
#define REG_TC6_COUNT32_CC0        (*(RwReg  *)0x42003818U) /**< \brief (TC6) COUNT32 Compare/Capture 0 */
#define REG_TC6_COUNT32_CC1        (*(RwReg  *)0x4200381CU) /**< \brief (TC6) COUNT32 Compare/Capture 1 */
#define REG_TC6_COUNT8_COUNT       (*(RwReg8 *)0x42003810U) /**< \brief (TC6) COUNT8 Counter Value */
#define REG_TC6_COUNT8_PER         (*(RwReg8 *)0x42003814U) /**< \brief (TC6) COUNT8 Period Value */
#define REG_TC6_COUNT8_CC0         (*(RwReg8 *)0x42003818U) /**< \brief (TC6) COUNT8 Compare/Capture 0 */
#define REG_TC6_COUNT8_CC1         (*(RwReg8 *)0x42003819U) /**< \brief (TC6) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC6 peripheral ========== */
#define TC6_CC8_NUM                 2        // Number of 8-bit Counters
#define TC6_CC16_NUM                2        // Number of 16-bit Counters
#define TC6_CC32_NUM                2        // Number of 32-bit Counters
#define TC6_DITHERING_EXT           0        // Dithering feature implemented
#define TC6_DMAC_ID_MC_0            34
#define TC6_DMAC_ID_MC_1            35
#define TC6_DMAC_ID_MC_LSB          34
#define TC6_DMAC_ID_MC_MSB          35
#define TC6_DMAC_ID_MC_SIZE         2
#define TC6_DMAC_ID_OVF             33       // Indexes of DMA Overflow trigger
#define TC6_GCLK_ID                 29       // Index of Generic Clock
#define TC6_MASTER                  1       
#define TC6_OW_NUM                  2        // Number of Output Waveforms
#define TC6_PERIOD_EXT              0        // Period feature implemented
#define TC6_SHADOW_EXT              0        // Shadow feature implemented
/* TC7 Inst */
/* ========== Register definition for TC7 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC7_CTRLA              (0x42003C00U) /**< \brief (TC7) Control A */
#define REG_TC7_READREQ            (0x42003C02U) /**< \brief (TC7) Read Request */
#define REG_TC7_CTRLBCLR           (0x42003C04U) /**< \brief (TC7) Control B Clear */
#define REG_TC7_CTRLBSET           (0x42003C05U) /**< \brief (TC7) Control B Set */
#define REG_TC7_CTRLC              (0x42003C06U) /**< \brief (TC7) Control C */
#define REG_TC7_DBGCTRL            (0x42003C08U) /**< \brief (TC7) Debug Control */
#define REG_TC7_EVCTRL             (0x42003C0AU) /**< \brief (TC7) Event Control */
#define REG_TC7_INTENCLR           (0x42003C0CU) /**< \brief (TC7) Interrupt Enable Clear */
#define REG_TC7_INTENSET           (0x42003C0DU) /**< \brief (TC7) Interrupt Enable Set */
#define REG_TC7_INTFLAG            (0x42003C0EU) /**< \brief (TC7) Interrupt Flag Status and Clear */
#define REG_TC7_STATUS             (0x42003C0FU) /**< \brief (TC7) Status */
#define REG_TC7_COUNT16_COUNT      (0x42003C10U) /**< \brief (TC7) COUNT16 Counter Value */
#define REG_TC7_COUNT16_CC0        (0x42003C18U) /**< \brief (TC7) COUNT16 Compare/Capture 0 */
#define REG_TC7_COUNT16_CC1        (0x42003C1AU) /**< \brief (TC7) COUNT16 Compare/Capture 1 */
#define REG_TC7_COUNT32_COUNT      (0x42003C10U) /**< \brief (TC7) COUNT32 Counter Value */
#define REG_TC7_COUNT32_CC0        (0x42003C18U) /**< \brief (TC7) COUNT32 Compare/Capture 0 */
#define REG_TC7_COUNT32_CC1        (0x42003C1CU) /**< \brief (TC7) COUNT32 Compare/Capture 1 */
#define REG_TC7_COUNT8_COUNT       (0x42003C10U) /**< \brief (TC7) COUNT8 Counter Value */
#define REG_TC7_COUNT8_PER         (0x42003C14U) /**< \brief (TC7) COUNT8 Period Value */
#define REG_TC7_COUNT8_CC0         (0x42003C18U) /**< \brief (TC7) COUNT8 Compare/Capture 0 */
#define REG_TC7_COUNT8_CC1         (0x42003C19U) /**< \brief (TC7) COUNT8 Compare/Capture 1 */
#else
#define REG_TC7_CTRLA              (*(RwReg16*)0x42003C00U) /**< \brief (TC7) Control A */
#define REG_TC7_READREQ            (*(RwReg16*)0x42003C02U) /**< \brief (TC7) Read Request */
#define REG_TC7_CTRLBCLR           (*(RwReg8 *)0x42003C04U) /**< \brief (TC7) Control B Clear */
#define REG_TC7_CTRLBSET           (*(RwReg8 *)0x42003C05U) /**< \brief (TC7) Control B Set */
#define REG_TC7_CTRLC              (*(RwReg8 *)0x42003C06U) /**< \brief (TC7) Control C */
#define REG_TC7_DBGCTRL            (*(RwReg8 *)0x42003C08U) /**< \brief (TC7) Debug Control */
#define REG_TC7_EVCTRL             (*(RwReg16*)0x42003C0AU) /**< \brief (TC7) Event Control */
#define REG_TC7_INTENCLR           (*(RwReg8 *)0x42003C0CU) /**< \brief (TC7) Interrupt Enable Clear */
#define REG_TC7_INTENSET           (*(RwReg8 *)0x42003C0DU) /**< \brief (TC7) Interrupt Enable Set */
#define REG_TC7_INTFLAG            (*(RwReg8 *)0x42003C0EU) /**< \brief (TC7) Interrupt Flag Status and Clear */
#define REG_TC7_STATUS             (*(RoReg8 *)0x42003C0FU) /**< \brief (TC7) Status */
#define REG_TC7_COUNT16_COUNT      (*(RwReg16*)0x42003C10U) /**< \brief (TC7) COUNT16 Counter Value */
#define REG_TC7_COUNT16_CC0        (*(RwReg16*)0x42003C18U) /**< \brief (TC7) COUNT16 Compare/Capture 0 */
#define REG_TC7_COUNT16_CC1        (*(RwReg16*)0x42003C1AU) /**< \brief (TC7) COUNT16 Compare/Capture 1 */
#define REG_TC7_COUNT32_COUNT      (*(RwReg  *)0x42003C10U) /**< \brief (TC7) COUNT32 Counter Value */
#define REG_TC7_COUNT32_CC0        (*(RwReg  *)0x42003C18U) /**< \brief (TC7) COUNT32 Compare/Capture 0 */
#define REG_TC7_COUNT32_CC1        (*(RwReg  *)0x42003C1CU) /**< \brief (TC7) COUNT32 Compare/Capture 1 */
#define REG_TC7_COUNT8_COUNT       (*(RwReg8 *)0x42003C10U) /**< \brief (TC7) COUNT8 Counter Value */
#define REG_TC7_COUNT8_PER         (*(RwReg8 *)0x42003C14U) /**< \brief (TC7) COUNT8 Period Value */
#define REG_TC7_COUNT8_CC0         (*(RwReg8 *)0x42003C18U) /**< \brief (TC7) COUNT8 Compare/Capture 0 */
#define REG_TC7_COUNT8_CC1         (*(RwReg8 *)0x42003C19U) /**< \brief (TC7) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC7 peripheral ========== */
#define TC7_CC8_NUM                 2        // Number of 8-bit Counters
#define TC7_CC16_NUM                2        // Number of 16-bit Counters
#define TC7_CC32_NUM                2        // Number of 32-bit Counters
#define TC7_DITHERING_EXT           0        // Dithering feature implemented
#define TC7_DMAC_ID_MC_0            37
#define TC7_DMAC_ID_MC_1            38
#define TC7_DMAC_ID_MC_LSB          37
#define TC7_DMAC_ID_MC_MSB          38
#define TC7_DMAC_ID_MC_SIZE         2
#define TC7_DMAC_ID_OVF             36       // Indexes of DMA Overflow trigger
#define TC7_GCLK_ID                 29       // Index of Generic Clock
#define TC7_MASTER                  0       
#define TC7_OW_NUM                  2        // Number of Output Waveforms
#define TC7_PERIOD_EXT              0        // Period feature implemented
#define TC7_SHADOW_EXT              0        // Shadow feature implemented
#endif
