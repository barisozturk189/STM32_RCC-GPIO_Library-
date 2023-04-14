

#ifndef INC_STM32F303XX_H_
#define INC_STM32F303XX_H_

#include  <stdint.h>
#include "RCC.h"
#include "CRC.h"
#define _IO volatile
#define SET_BIT(REG,BIT)          ( (REG) |=  (BIT) )
#define CLEAR_BIT(REG,BIT)        ( (REG) &= ~(BIT) )
#define READ_BIT(REG,BIT)         ( (REG) &   (BIT) )
#define UNUSED(x)                 (void) x

/*
 * Memory Base Address
 *
 */

#define FLASH_BASE_ADRR              (0x08000000UL) /* Flash Base Address (up to 512 KB)                  */
#define SRAM_BASE_ADRR               (0x20000000UL) /* SRAM Base Address (up to 40KB) ALLOWED MCU and DMA */
#define CCM_SRAM_BASE_ADRR           (0x10000000UL) /* CCM SRAM Base Address 8KB allowed only MCU         */

/*
 * General Peripheral Base Address
 *
 */

#define PERIP_BASE_ADRR              (0x40000000UL)                  /* Peripheral Base Address (ALL PERIPHERALS) */
#define APB1_BASE_ADRR               PERIP_BASE_ADRR                 /* APB1 Bus Domain Base Address              */
#define APB2_BASE_ADRR               (PERIP_BASE_ADRR +0x10000UL)    /* APB2 Bus Domain Base Address              */
#define AHB1_BASE_ADRR               (PERIP_BASE_ADRR +0x20000UL)    /* AHB1 Bus Domain Base Address              */
#define AHB2_BASE_ADRR               (PERIP_BASE_ADRR +0x80000UL)    /* AHB2 Bus Domain Base Address              */
#define AHB3_BASE_ADRR               (PERIP_BASE_ADRR +0x10000000UL) /* AHB3 Bus Domain Base Address              */

/*
 * APB1 Peripheral Base Address
 *
 */

#define APB1_TIM2_BASE_ADRR          (PERIP_BASE_ADRR+0x0000UL) /* APB1 TIMER2 Base Address*/
#define APB1_TIM3_BASE_ADRR          (PERIP_BASE_ADRR+0x0400UL) /* APB1 TIMER3 Base Address*/
#define APB1_TIM4_BASE_ADRR          (PERIP_BASE_ADRR+0x0800UL) /* APB1 TIMER4 Base Address*/
#define APB1_TIM6_BASE_ADRR          (PERIP_BASE_ADRR+0x1000UL) /* APB1 TIMER6 Base Address*/
#define APB1_TIM7_BASE_ADRR          (PERIP_BASE_ADRR+0x1400UL) /* APB1 TIMER7 Base Address*/

#define APB1_RTC_BASE_ADRR           (PERIP_BASE_ADRR+0x2800UL) /* APB1 RTC Base Address*/

#define APB1_WWDG_BASE_ADRR          (PERIP_BASE_ADRR+0x2C00UL) /* APB1 WWDG Base Address*/
#define APB1_IWDG_BASE_ADRR          (PERIP_BASE_ADRR+0x3000UL) /* APB1 IWDG Base Address*/

#define APB1_I2S2EXT_BASE_ADRR       (PERIP_BASE_ADRR+0x3400UL) /* APB1 I2S2EXT Base Address  */
#define APB1_SPI2_I2S2_BASE_ADRR     (PERIP_BASE_ADRR+0x3800UL) /* APB1 SPI2/I2S2 Base Address*/
#define APB1_SPI3_I2S3_BASE_ADRR     (PERIP_BASE_ADRR+0x3C00UL) /* APB1 SPI3/I2S3 Base Address*/
#define APB1_I2S3EXT_BASE_ADRR       (PERIP_BASE_ADRR+0x4000UL) /* APB1 I2S3EXT Base Address  */
#define APB1_USART2_BASE_ADRR        (PERIP_BASE_ADRR+0x4400UL) /* APB1 USART2 Base Address   */
#define APB1_USART3_BASE_ADRR        (PERIP_BASE_ADRR+0x4800UL) /* APB1 USART3 Base Address   */
#define APB1_UART4_BASE_ADRR         (PERIP_BASE_ADRR+0x4C00UL) /* APB1 UART4 Base Address    */
#define APB1_UART5_BASE_ADRR         (PERIP_BASE_ADRR+0x5000UL) /* APB1 UART5 Base Address    */
#define APB1_I2C1_BASE_ADRR          (PERIP_BASE_ADRR+0x5400UL) /* APB1 I2C1 Base Address     */
#define APB1_I2C2_BASE_ADRR          (PERIP_BASE_ADRR+0x5800UL) /* APB1 I2C2 Base Address     */

#define APB1_USBFS_BASE_ADRR         (PERIP_BASE_ADRR+0x5C00UL) /* APB1 USB Device FS Base Address     */
#define APB1_USBSRAM_BASE_ADRR       (PERIP_BASE_ADRR+0x6000UL) /* APB1 USB SRAM 512 Bytes Base Address*/

#define APB1_bxCAN_BASE_ADRR         (PERIP_BASE_ADRR+0x6400UL) /* APB1 bxCAN Base Address*/
#define APB1_PWR_BASE_ADRR           (PERIP_BASE_ADRR+0x7000UL) /* APB1 PWR Base Address */

#define APB1_DAC1_BASE_ADRR          (PERIP_BASE_ADRR+0x7400UL)  /* APB1 DAC1 Base Address    */

/*
 * APB2 Peripheral Base Address
 *
 */

#define APB2_SYSCFG_BASE_ADRR        (PERIP_BASE_ADRR+0x10000UL) /* APB2 SYSCFG Base Address  */
#define APB2_EXTI_BASE_ADRR          (PERIP_BASE_ADRR+0x10400UL) /* APB2 EXTI Base Address    */
#define APB2_TIM1_BASE_ADRR          (PERIP_BASE_ADRR+0x12C00UL) /* APB2 TIM1 Base Address    */
#define APB2_SPI1_BASE_ADRR          (PERIP_BASE_ADRR+0x13000UL) /* APB2 SPI1 Base Address    */
#define APB2_TIM8_BASE_ADRR          (PERIP_BASE_ADRR+0x13400UL) /* APB2 TIM8 Base Address    */
#define APB2_USART1_BASE_ADRR        (PERIP_BASE_ADRR+0x13800UL) /* APB2 USART1 Base Address  */
#define APB2_TIM15_BASE_ADRR         (PERIP_BASE_ADRR+0x14000UL) /* APB2 TIM15 Base Address   */
#define APB2_TIM16_BASE_ADRR         (PERIP_BASE_ADRR+0x14400UL) /* APB2 TIM16 Base Address   */
#define APB2_TIM17_BASE_ADRR         (PERIP_BASE_ADRR+0x14800UL) /* APB2 TIM17 Base Address   */

/*
 * AHB1 Peripheral Base Address
 *
 */

#define AHB1_DMA1_BASE_ADRR        (PERIP_BASE_ADRR+0x20000UL) /* AHB1 DMA1 Base Address  */
#define AHB1_DMA2_BASE_ADRR        (PERIP_BASE_ADRR+0x20400UL) /* AHB1 DMA2 Base Address  */

#define AHB1_RCC_BASE_ADRR         (PERIP_BASE_ADRR+0x21000UL) /* AHB1 RCC Base Address             */
#define AHB1_FIF_BASE_ADRR         (PERIP_BASE_ADRR+0x22000UL) /* AHB1 FLASH INTERFACE Base Address */
#define AHB1_CRC_BASE_ADRR         (PERIP_BASE_ADRR+0x23000UL) /* AHB1 CRC Base Address             */
#define AHB1_TSC_BASE_ADRR         (PERIP_BASE_ADRR+0x24000UL) /* AHB1 TSC Base Address             */

/*
 * AHB2 Peripheral Base Address
 *
 */

#define AHB2_GPIOA_BASE_ADRR        (PERIP_BASE_ADRR+0x8000000UL) /* AHB2 GPIOA Base Address  */
#define AHB2_GPIOB_BASE_ADRR        (PERIP_BASE_ADRR+0x8000400UL) /* AHB2 GPIOB Base Address  */
#define AHB2_GPIOC_BASE_ADRR        (PERIP_BASE_ADRR+0x8000800UL) /* AHB2 GPIOC Base Address  */
#define AHB2_GPIOD_BASE_ADRR        (PERIP_BASE_ADRR+0x8000C00UL) /* AHB2 GPIOD Base Address  */
#define AHB2_GPIOE_BASE_ADRR        (PERIP_BASE_ADRR+0x8001000UL) /* AHB2 GPIOE Base Address  */
#define AHB2_GPIOF_BASE_ADRR        (PERIP_BASE_ADRR+0x8001400UL) /* AHB2 GPIOF Base Address  */

/*
 * AHB3 Peripheral Base Address
 *
 */

#define AHB3_ADC12_BASE_ADRR        (PERIP_BASE_ADRR+0x10000000UL) /* AHB3 ADC1 ADC2 Base Address  */
#define AHB3_ADC34_BASE_ADRR        (PERIP_BASE_ADRR+0x10000400UL) /* AHB3 ADC3 ADC4 Base Address  */


/*
 * Peripheral Structure Definitions
 *
 */

typedef struct{

	_IO uint32_t MODER;   /* GPIO port mode register Address Offset:0x00               */
	_IO uint32_t OTYPER;  /* GPIO port output type register Address Offset:0x04        */
	_IO uint32_t OSPEEDR; /* GPIO port output type register Address Offset:0x08        */
	_IO uint32_t PUPDR;   /* GPIO port output speed register Address Offset:0x0C       */
	_IO uint32_t IDR;     /* GPIO port pull-up/pull-down register Address Offset:0x10  */
	_IO uint32_t ODR;     /* GPIO port input data register Address Offset:0x14         */
	_IO uint32_t BSRR;    /* GPIO port output data register Address Offset:0x18        */
	_IO uint32_t LCKR;    /* GPIO port bit set/reset register Address Offset:0x1C      */
	_IO uint32_t AFR[2];  /* GPIO port configuration lock register Address Offset:0x20 */
	_IO uint32_t BRR;     /* GPIO alternate function high register Address Offset:0x28 */


}GPIO_Typedef_t;

typedef struct{

	_IO uint32_t CR;           /* Clock control register Offset:0x00                        */
	_IO uint32_t CFGR;         /* Clock configuration register Address Offset:0x04          */
	_IO uint32_t CIR;          /* Clock interrupt register Address Offset:0x08              */
	_IO uint32_t APB2RSTR;     /* APB2 peripheral reset register Address Offset:0x0C        */
	_IO uint32_t APB1RSTR;     /* APB1 peripheral reset register Address Offset:0x10        */
	_IO uint32_t AHBENR;       /* AHB peripheral clock enable register Address Offset:0x14  */
	_IO uint32_t APB2ENR;      /* APB2 peripheral clock enable register Offset:0x18         */
	_IO uint32_t APB1ENR;      /* APB1 peripheral clock enable register Address Offset:0x1C */
	_IO uint32_t RCCBDCR;      /* RTC domain control register Address Offset:0x20           */
	_IO uint32_t CSR;          /* Control/status register Address Offset:0x24               */
	_IO uint32_t AHBRSTR;      /* AHB peripheral reset register Address Offset:0x28         */
	_IO uint32_t CFGR2;        /* Clock configuration register 2  Address Offset:0x2C       */
	_IO uint32_t CFGR3;        /* Clock configuration register 3  Address Offset:0x30       */


}RCC_Typedef_t;

typedef struct{


	_IO uint32_t DR;          /* CRC Data register Address Offset:0x00                                                            */
	_IO uint32_t IDR;         /* INDEPENDENT Data register (31-8 Bits is RESERVED) Address Offset:0x04                            */
	_IO uint32_t CR;          /* Control register (31-8 Bits is RESERVED)  Address Offset:0x08                                    */
	_IO uint32_t RESERVE;     /* Add a Reserve Variable (because of Initial CRC Value Address Offset is 0x10) Address Offset: 0x0C*/
	_IO uint32_t INIT;        /* Initial CRC value Address Offset:0x10                                                            */
	_IO uint32_t POL;         /* CRC Polynominal register Address Offset:0x14                                                     */



}CRC_Typedef_t;


#define        GPIOA           ( (GPIO_Typedef_t*)(AHB2_GPIOA_BASE_ADRR) )
#define        GPIOB           ( (GPIO_Typedef_t*)(AHB2_GPIOB_BASE_ADRR) )
#define        GPIOC           ( (GPIO_Typedef_t*)(AHB2_GPIOC_BASE_ADRR) )
#define        GPIOD           ( (GPIO_Typedef_t*)(AHB2_GPIOD_BASE_ADRR) )
#define        GPIOE           ( (GPIO_Typedef_t*)(AHB2_GPIOE_BASE_ADRR) )
#define        GPIOF           ( (GPIO_Typedef_t*)(AHB2_GPIOF_BASE_ADRR) )
#define        CRC             ( (CRC_Typedef_t*)(AHB1_CRC_BASE_ADRR)    )
#define        RCC             ( (RCC_Typedef_t*)(AHB1_RCC_BASE_ADRR)    )



/*********************************** RCC Register Macros***********************************/


/*
 * RCC_CR Register Bit Position Macros
 *
 */


#define RCC_CR_HSI_Pos               (0U)    /*  CR Register HSI Bit Position              */
#define RCC_CR_HSIRDY_Pos            (1U)    /*  CR Register HSI Ready Flag Bit Position   */
#define RCC_CR_HSE_Pos               (16U)   /*  CR Register HSE Bit Position              */
#define RCC_CR_HSERDY_Pos            (17U)   /*  CR Register HSE Ready Flag Bit Position   */
#define RCC_CR_HSEBYP_Pos            (18U)   /*  CR Register HSYBYP Bit Position           */
#define RCC_CR_CSSON_Pos             (19U)   /*  CR Register CSS Bit Position              */
#define RCC_CR_PLLON_Pos             (24U)   /*  CR Register PLLON Bit Position            */
#define RCC_CR_PLLRDY_Pos            (25U)   /*  CR Register PLLON Ready Flag Bit Position */


/*
 * RCC_CR Register Bit Mask Macros
 *
 */


#define RCC_CR_HSI_Mask               (0x1<<RCC_CR_HSI_Pos)     /*  CR Register HSI Bit Mask              */
#define RCC_CR_HSE_Mask               (0x1<<RCC_CR_HSE_Pos)     /*  CR Register HSE Bit Mask              */
#define RCC_CR_HSEBYP_Mask            (0x1<<RCC_CR_HSEBYP_Pos)  /*  CR Register HSYBYP Bit Mask           */
#define RCC_CR_CSSON_Mask             (0x1<<RCC_CR_CSSON_Pos)   /*  CR Register CSS Bit Mask              */
#define RCC_CR_PLLON_Mask             (0x1<<RCC_CR_PLLON_Pos)   /*  CR Register PLLON Bit Mask            */


/*
 * RCC_CR Register Enable Bit Macros
 *
 */


#define RCC_CR_HSIEN               (RCC_CR_HSI_Mask)     /*  CR Register HSI Enable Bit              */
#define RCC_CR_HSEEN               (RCC_CR_HSE_Mask)     /*  CR Register HSE Enable Bit              */
#define RCC_CR_HSEBYPEN            (RCC_CR_HSEBYP_Mask)  /*  CR Register HSYBYP Enable Bit           */
#define RCC_CR_CSSEN               (RCC_CR_CSSON_Mask)   /*  CR Register CSS Enable  Bit             */
#define RCC_CR_PLLEN               (RCC_CR_PLLON_Mask)   /*  CR Register PLLON Bit Mask              */


/*
 * RCC_CFGR Register Bit Position Macros
 *
 */


#define RCC_CFGR_SW_Pos                      (0U)        /*  CFGR Register SW Bit Position        */
#define RCC_CFGR_SWS_Pos                     (2U)        /*  CFGR Register SWS Bit Position       */
#define RCC_CFGR_HPRE_Pos                    (4U)        /*  CFGR Register HPRE Bit Position      */
#define RCC_CFGR_PPRE1_Pos                   (8U)        /*  CFGR Register PPRE1 Bit Position     */
#define RCC_CFGR_PPRE2_Pos                   (11U)       /*  CFGR Register PPRE2 Bit Position     */
#define RCC_CFGR_PLLSRC_Pos                  (16U)       /*  CFGR Register PLLSRC Bit Position    */
#define RCC_CFGR_PLLXLPTR_Pos                (17U)       /*  CFGR Register PLLXLPTR Bit Position  */
#define RCC_CFGR_PLLMUL_Pos                  (18U)       /*  CFGR Register PLLMUL Bit Position    */
#define RCC_CFGR_USBPRE_Pos                  (22U)       /*  CFGR Register USBPRE Bit Position    */
#define RCC_CFGR_I2SSRC_Pos                  (23U)       /*  CFGR Register I2SSRC Bit Position    */
#define RCC_CFGR_MCO_Pos                     (24U)       /*  CFGR Register MCO Bit Position       */
#define RCC_CFGR_MCOF_Pos                    (28U)       /*  CFGR Register MCOF Bit Position      */


/*
 * RCC_CFGR Register Bit Mask Macros
 *
 */


#define RCC_CFGR_SW__HSI_Mask                 (RCC_CFGR_HSI<<RCC_CFGR_SW_Pos)                  /* CFGR Register SW->HSI Bit Mask         */
#define RCC_CFGR_SW__HSE_Mask                 (RCC_CFGR_HSE<<RCC_CFGR_SW_Pos)                  /* CFGR Register SW->HSE Bit Mask         */
#define RCC_CFGR_SW__PLL_Mask                 (RCC_CFGR_PLL<<RCC_CFGR_SW_Pos)                  /* CFGR Register SW->PLL Bit Mask         */

#define RCC_CFGR_HPRE_PRE1_Mask               (RCC_CFGR_HLCK_PRE_1<<RCC_CFGR_HPRE_Pos)          /* CFGR Register HPRE->PRE1 Bit Mask     */
#define RCC_CFGR_HPRE_PRE2_Mask               (RCC_CFGR_HLCK_PRE_2<<RCC_CFGR_HPRE_Pos)          /* CFGR Register HPRE->PRE2 Bit Mask     */
#define RCC_CFGR_HPRE_PRE4_Mask               (RCC_CFGR_HLCK_PRE_4<<RCC_CFGR_HPRE_Pos)          /* CFGR Register HPRE->PRE4 Bit Mask     */
#define RCC_CFGR_HPRE_PRE8_Mask               (RCC_CFGR_HLCK_PRE_8<<RCC_CFGR_HPRE_Pos)          /* CFGR Register HPRE->PRE8 Bit Mask     */
#define RCC_CFGR_HPRE_PRE16_Mask              (RCC_CFGR_HLCK_PRE_16<<RCC_CFGR_HPRE_Pos)         /* CFGR Register HPRE->PRE16 Bit Mask    */
#define RCC_CFGR_HPRE_PRE64_Mask              (RCC_CFGR_HLCK_PRE_64<<RCC_CFGR_HPRE_Pos)         /* CFGR Register HPRE->PRE64 Bit Mask    */
#define RCC_CFGR_HPRE_PRE128_Mask             (RCC_CFGR_HLCK_PRE_128<<RCC_CFGR_HPRE_Pos)        /* CFGR Register HPRE->PRE128 Bit Mask   */
#define RCC_CFGR_HPRE_PRE256_Mask             (RCC_CFGR_HLCK_PRE_256<<RCC_CFGR_HPRE_Pos)        /* CFGR Register HPRE->PRE256 Bit Mask   */
#define RCC_CFGR_HPRE_PRE512_Mask             (RCC_CFGR_HLCK_PRE_512<<RCC_CFGR_HPRE_Pos)        /* CFGR Register HPRE->PRE512 Bit Mask   */

#define RCC_CFGR_PPRE1_PRE1_Mask              (RCC_CFGR_APB1_PRE_1<<RCC_CFGR_PPRE1_Pos)         /* CFGR Register PPRE1->PRE1 Bit Mask    */
#define RCC_CFGR_PPRE1_PRE2_Mask              (RCC_CFGR_APB1_PRE_2<<RCC_CFGR_PPRE1_Pos)         /* CFGR Register PPRE1->PRE2 Bit Mask    */
#define RCC_CFGR_PPRE1_PRE4_Mask              (RCC_CFGR_APB1_PRE_4<<RCC_CFGR_PPRE1_Pos)         /* CFGR Register PPRE1->PRE4 Bit Mask    */
#define RCC_CFGR_PPRE1_PRE8_Mask              (RCC_CFGR_APB1_PRE_8<<RCC_CFGR_PPRE1_Pos)         /* CFGR Register PPRE1->PRE8 Bit Mask    */
#define RCC_CFGR_PPRE1_PRE16_Mask             (RCC_CFGR_APB1_PRE_16<<RCC_CFGR_PPRE1_Pos)        /* CFGR Register PPRE1->PRE16 Bit Mask   */

#define RCC_CFGR_PPRE2_PRE1_Mask              (RCC_CFGR_APB2_PRE_1<<RCC_CFGR_PPRE2_Pos)         /* CFGR Register PPRE2->PRE1 Bit Mask    */
#define RCC_CFGR_PPRE2_PRE2_Mask              (RCC_CFGR_APB2_PRE_2<<RCC_CFGR_PPRE2_Pos)         /* CFGR Register PPRE2->PRE2 Bit Mask    */
#define RCC_CFGR_PPRE2_PRE4_Mask              (RCC_CFGR_APB2_PRE_4<<RCC_CFGR_PPRE2_Pos)         /* CFGR Register PPRE2->PRE4 Bit Mask    */
#define RCC_CFGR_PPRE2_PRE8_Mask              (RCC_CFGR_APB2_PRE_8<<RCC_CFGR_PPRE2_Pos)         /* CFGR Register PPRE2->PRE8 Bit Mask    */
#define RCC_CFGR_PPRE2_PRE16_Mask             (RCC_CFGR_APB2_PRE_16<<RCC_CFGR_PPRE2_Pos)        /* CFGR Register PPRE2->PRE16 Bit Mask   */


#define RCC_CFGR_PLLSRC_HSE_Mask              (RCC_CFGR_PLLSRC_HSI<<RCC_CFGR_PLLSRC_Pos)        /* CFGR Register PLLSRC->HSE Bit Mask    */
#define RCC_CFGR_PLLSRC_HSI_Mask              (RCC_CFGR_PLLRSRC_HSE<<RCC_CFGR_PLLSRC_Pos)       /* CFGR Register PLLSRC->HSI Bit Mask    */

#define RCC_CFGR_PLLXLPTR_NODIV_Mask          (RCC_CFGR_PLLXTPRE_NODIV<<RCC_CFGR_PLLXLPTR_Pos)  /* CFGR Register PLLXLPTR->NODIV Bit Mask  */
#define RCC_CFGR_PLLXLPTR_DIV_Mask            (RCC_CFGR_PLLXLTPRE_DIV<<RCC_CFGR_PLLXLPTR_Pos)   /* CFGR Register PLLXLPTR->DIV Bit Mask    */

#define RCC_CFGR_PLLMUL2_Mask                 (RCC_CFGR_PLLMUL_2<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL2 Bit Mask  */
#define RCC_CFGR_PLLMUL3_Mask                 (RCC_CFGR_PLLMUL_3<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL3 Bit Mask  */
#define RCC_CFGR_PLLMUL4_Mask                 (RCC_CFGR_PLLMUL_4<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL4 Bit Mask  */
#define RCC_CFGR_PLLMUL5_Mask                 (RCC_CFGR_PLLMUL_5<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL5 Bit Mask  */
#define RCC_CFGR_PLLMUL6_Mask                 (RCC_CFGR_PLLMUL_6<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL6 Bit Mask  */
#define RCC_CFGR_PLLMUL7_Mask                 (RCC_CFGR_PLLMUL_7<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL7 Bit Mask  */
#define RCC_CFGR_PLLMUL8_Mask                 (RCC_CFGR_PLLMUL_8<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL8 Bit Mask  */
#define RCC_CFGR_PLLMUL9_Mask                 (RCC_CFGR_PLLMUL_9<<RCC_CFGR_PLLMUL_Pos)          /* CFGR Register CFGR->PLLMUL9 Bit Mask  */
#define RCC_CFGR_PLLMUL10_Mask                (RCC_CFGR_PLLMUL_10<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL10 Bit Mask */
#define RCC_CFGR_PLLMUL11_Mask                (RCC_CFGR_PLLMUL_11<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL11 Bit Mask */
#define RCC_CFGR_PLLMUL12_Mask                (RCC_CFGR_PLLMUL_12<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL12 Bit Mask */
#define RCC_CFGR_PLLMUL13_Mask                (RCC_CFGR_PLLMUL_13<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL13 Bit Mask */
#define RCC_CFGR_PLLMUL14_Mask                (RCC_CFGR_PLLMUL_14<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL14 Bit Mask */
#define RCC_CFGR_PLLMUL15_Mask                (RCC_CFGR_PLLMUL_15<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL15 Bit Mask */
#define RCC_CFGR_PLLMUL16_Mask                (RCC_CFGR_PLLMUL_16<<RCC_CFGR_PLLMUL_Pos)         /* CFGR Register CFGR->PLLMUL16 Bit Mask */

#define RCC_CFGR_USBPRE_DIV_Mask              (RCC_CFGR_USBPRE_DIV<<RCC_CFGR_USBPRE_Pos)        /* CFGR Register USBPRE->DIV Bit Mask    */
#define RCC_CFGR_USBPRE_NODIV_Mask            (RCC_CFGR_USBPRE_NODIV<<RCC_CFGR_USBPRE_Pos)      /* CFGR Register USBPRE->NODIV Bit Mask  */

#define RCC_CFGR_I2SSRC_SYSCLK_Mask           (RCC_CFGR_I2SSRC_SYSCLK<<RCC_CFGR_I2SSRC_Pos)     /* CFGR Register I2SSRC->SYSCLK Bit Mask */
#define RCC_CFGR_I2SSRC_EXCLK_Mask            (RCC_CFGR_USBPRE_EXCLK<<RCC_CFGR_I2SSRC_Pos)      /* CFGR Register I2SSRC->EXCLK Bit Mask  */

#define RCC_CFGR_MCO_DISABLED_Mask            (RCC_CFGR_MCO_DISABLED<<RCC_CFGR_MCO_Pos)         /* CFGR Register MCO->DISABLED Bit Mask  */
#define RCC_CFGR_MCO_LSI_Mask                 (RCC_CFGR_MCO_LSI<<RCC_CFGR_MCO_Pos)              /* CFGR Register MCO->LSI Bit Mask       */
#define RCC_CFGR_MCO_LSE_Mask                 (RCC_CFGR_MCO_LSE<<RCC_CFGR_MCO_Pos)              /* CFGR Register MCO->LSE Bit Mask       */
#define RCC_CFGR_MCO_SYSCLK_Mask              (RCC_CFGR_MCO_SYSCLK<<RCC_CFGR_MCO_Pos)           /* CFGR Register MCO->SYSCLK Bit Mask    */
#define RCC_CFGR_MCO_HSI_Mask                 (RCC_CFGR_MCO_HSI<<RCC_CFGR_MCO_Pos)              /* CFGR Register MCO->HSI Bit Mask       */
#define RCC_CFGR_MCO_HSE_Mask                 (RCC_CFGR_MCO_HSE<<RCC_CFGR_MCO_Pos)              /* CFGR Register MCO->HSE Bit Mask       */
#define RCC_CFGR_MCO_PLL_Mask                 (RCC_CFGR_MCO_PLL<<RCC_CFGR_MCO_Pos)              /* CFGR Register MCO->PLL Bit Mask       */


/*
 * RCC_CFGR Register Enable Bit Macros
 *
 */


#define RCC_CFGR_SW__HSIEN                    (RCC_CFGR_SW__HSI_Mask)
#define RCC_CFGR_SW__HSEEN                    (RCC_CFGR_SW__HSE_Mask)
#define RCC_CFGR_SW__PLLEN                    (RCC_CFGR_SW__PLL_Mask)

#define RCC_CFGR_HPRE_PRE1EN                  (RCC_CFGR_HPRE_PRE1_Mask)
#define RCC_CFGR_HPRE_PRE2EN                  (RCC_CFGR_HPRE_PRE2_Mask)
#define RCC_CFGR_HPRE_PRE4EN                  (RCC_CFGR_HPRE_PRE4_Mask)
#define RCC_CFGR_HPRE_PRE8EN                  (RCC_CFGR_HPRE_PRE8_Mask)
#define RCC_CFGR_HPRE_PRE16EN                 (RCC_CFGR_HPRE_PRE16_Mask)
#define RCC_CFGR_HPRE_PRE64EN                 (RCC_CFGR_HPRE_PRE64_Mask)
#define RCC_CFGR_HPRE_PRE128EN                (RCC_CFGR_HPRE_PRE12_Mask)
#define RCC_CFGR_HPRE_PRE256EN                (RCC_CFGR_HPRE_PRE25_Mask)
#define RCC_CFGR_HPRE_PRE512EN                (RCC_CFGR_HPRE_PRE51_Mask)

#define RCC_CFGR_PPRE1_PRE1EN                 (RCC_CFGR_PPRE1_PRE1_Mask)
#define RCC_CFGR_PPRE1_PRE2EN                 (RCC_CFGR_PPRE1_PRE2_Mask)
#define RCC_CFGR_PPRE1_PRE4EN                 (RCC_CFGR_PPRE1_PRE4_Mask)
#define RCC_CFGR_PPRE1_PRE8EN                 (RCC_CFGR_PPRE1_PRE8_Mask)
#define RCC_CFGR_PPRE1_PRE16EN                (RCC_CFGR_PPRE1_PRE16_Mask)

#define RCC_CFGR_PPRE2_PRE1EN                 (RCC_CFGR_PPRE2_PRE1_Mask)
#define RCC_CFGR_PPRE2_PRE2EN                 (RCC_CFGR_PPRE2_PRE2_Mask)
#define RCC_CFGR_PPRE2_PRE4EN                 (RCC_CFGR_PPRE2_PRE4_Mask)
#define RCC_CFGR_PPRE2_PRE8EN                 (RCC_CFGR_PPRE2_PRE8_Mask)
#define RCC_CFGR_PPRE2_PRE16EN                (RCC_CFGR_PPRE2_PRE16_Mask)


#define RCC_CFGR_PLLSRC_HSEEN                 (RCC_CFGR_PLLSRC_HSE_Mask)
#define RCC_CFGR_PLLSRC_HSIEN                 (RCC_CFGR_PLLSRC_HSI_Mask)

#define RCC_CFGR_PLLXLPTR_NODIVEN             (RCC_CFGR_PLLXLPTR_NODIV_Mask)
#define RCC_CFGR_PLLXLPTR_DIVEN               (RCC_CFGR_PLLXLPTR_DIV_Mask)

#define RCC_CFGR_PLLMUL2EN                    (RCC_CFGR_PLLMUL2_Mask)
#define RCC_CFGR_PLLMUL3EN                    (RCC_CFGR_PLLMUL3_Mask)
#define RCC_CFGR_PLLMUL4EN                    (RCC_CFGR_PLLMUL4_Mask)
#define RCC_CFGR_PLLMUL5EN                    (RCC_CFGR_PLLMUL5_Mask)
#define RCC_CFGR_PLLMUL6EN                    (RCC_CFGR_PLLMUL6_Mask)
#define RCC_CFGR_PLLMUL7EN                    (RCC_CFGR_PLLMUL7_Mask)
#define RCC_CFGR_PLLMUL8EN                    (RCC_CFGR_PLLMUL8_Mask)
#define RCC_CFGR_PLLMUL9EN                    (RCC_CFGR_PLLMUL9_Mask)
#define RCC_CFGR_PLLMUL10EN                   (RCC_CFGR_PLLMUL10_Mask)
#define RCC_CFGR_PLLMUL11EN                   (RCC_CFGR_PLLMUL11_Mask)
#define RCC_CFGR_PLLMUL12EN                   (RCC_CFGR_PLLMUL12_Mask)
#define RCC_CFGR_PLLMUL13EN                   (RCC_CFGR_PLLMUL13_Mask)
#define RCC_CFGR_PLLMUL14EN                   (RCC_CFGR_PLLMUL14_Mask)
#define RCC_CFGR_PLLMUL15EN                   (RCC_CFGR_PLLMUL15_Mask)
#define RCC_CFGR_PLLMUL16EN                   (RCC_CFGR_PLLMUL16_Mask)

#define RCC_CFGR_USBPRE_DIVEN                 (RCC_CFGR_USBPRE_DIV_Mask)
#define RCC_CFGR_USBPRE_NODIVEN               (RCC_CFGR_USBPRE_NODIV_Mask)

#define RCC_CFGR_I2SSRC_SYSCLKEN              (RCC_CFGR_I2SSRC_SYSCLK_Mask)
#define RCC_CFGR_I2SSRC_EXCLKEN               (RCC_CFGR_I2SSRC_EXCLK_Mask)

#define RCC_CFGR_MCO_DISABLEDEN               (RCC_CFGR_MCO_DISABLED_Mask)
#define RCC_CFGR_MCO_LSIEN                    (RCC_CFGR_MCO_LSI_Mask)
#define RCC_CFGR_MCO_LSEEN                    (RCC_CFGR_MCO_LSE_Mask)
#define RCC_CFGR_MCO_SYSCLKEN                 (RCC_CFGR_MCO_SYSCLK_Mask)
#define RCC_CFGR_MCO_HSIEN                    (RCC_CFGR_MCO_HSI_Mask)
#define RCC_CFGR_MCO_HSEEN                    (RCC_CFGR_MCO_HSE_Mask)
#define RCC_CFGR_MCO_PLLEN                    (RCC_CFGR_MCO_PLL_Mask)



/*
 * RCC_CIR Register Bit Position Macros
 *
 */


#define RCC_CIR_LSIRDYF_Pos                  (0U)              /* CIR Register LSIRDYF Bit Position   */
#define RCC_CIR_LSERDYF_Pos                  (1U)              /* CIR Register LSERDYF Bit Position   */
#define RCC_CIR_HSIRDYF_Pos                  (2U)              /* CIR Register HSIRDYF Bit Position   */
#define RCC_CIR_HSERDYF_Pos                  (3U)              /* CIR Register HSERDYF Bit Position   */
#define RCC_CIR_PLLRDYF_Pos                  (4U)              /* CIR Register PLLRDYF Bit Position   */
#define RCC_CIR_CSSF_Pos                     (7U)              /* CIR Register CSSF    Bit Position   */
#define RCC_CIR_LSIRDYIE_Pos                 (8U)              /* CIR Register LSIRDYIE Bit Position  */
#define RCC_CIR_LSERDYIE_Pos                 (9U)              /* CIR Register LSERDYIE Bit Position  */
#define RCC_CIR_HSIRDYIE_Pos                 (10U)             /* CIR Register HSIRDYIE Bit Position  */
#define RCC_CIR_HSERDYIE_Pos                 (11U)             /* CIR Register HSERDYIE Bit Position  */
#define RCC_CIR_PLLRDYIE_Pos                 (12U)             /* CIR Register PLLRDYIE Bit Position  */
#define RCC_CIR_LSIRDYC_Pos                  (16U)             /* CIR Register LSIRDYC Bit Position   */
#define RCC_CIR_LSERDYC_Pos                  (17U)             /* CIR Register LSERDYC Bit Position   */
#define RCC_CIR_HSIRDYC_Pos                  (18U)             /* CIR Register HSIRDYC Bit Position   */
#define RCC_CIR_HSERDYC_Pos                  (19U)             /* CIR Register HSERDYC Bit Position   */
#define RCC_CIR_PLLRDYC_Pos                  (20U)             /* CIR Register PLLRDYC Bit Position   */
#define RCC_CIR_CSSC_Pos                     (23U)             /* CIR Register CSSC Bit Position      */


/*
 * RCC_CIR Register Bit Mask Macros
 *
 */


#define RCC_CIR_LSIRDYIE_Mask                 (0x1<<RCC_CIR_LSIRDYIE_Pos)      /* CIR Register LSIRDYIE Bit Mask  */
#define RCC_CIR_LSERDYIE_Mask                 (0x1<<RCC_CIR_LSERDYIE_Pos)      /* CIR Register LSERDYIE Bit Mask  */
#define RCC_CIR_HSIRDYIE_Mask                 (0x1<<RCC_CIR_HSIRDYIE_Pos)      /* CIR Register HSIRDYIE Bit Mask  */
#define RCC_CIR_HSERDYIE_Mask                 (0x1<<RCC_CIR_HSERDYIE_Pos)      /* CIR Register HSERDYIE Bit Mask  */
#define RCC_CIR_PLLRDYIE_Mask                 (0x1<<RCC_CIR_PLLRDYIE_Pos)      /* CIR Register PLLRDYIE Bit Mask  */
#define RCC_CIR_LSIRDYC_Mask                  (0x1<<RCC_CIR_LSIRDYC_Pos)       /* CIR Register LSIRDYC Bit Mask   */
#define RCC_CIR_LSERDYC_Mask                  (0x1<<RCC_CIR_LSERDYC_Pos)       /* CIR Register LSERDYC Bit Mask   */
#define RCC_CIR_HSIRDYC_Mask                  (0x1<<RCC_CIR_HSIRDYC_Pos)       /* CIR Register HSIRDYC Bit Mask   */
#define RCC_CIR_HSERDYC_Mask                  (0x1<<RCC_CIR_HSERDYC_Pos)       /* CIR Register HSERDYC Bit Mask   */
#define RCC_CIR_PLLRDYC_Mask                  (0x1<<RCC_CIR_PLLRDYC_Pos)       /* CIR Register PLLRDYC Bit Mask   */
#define RCC_CIR_CSSC_Mask                     (0x1<<RCC_CIR_CSSC_Pos)          /* CIR Register CSSC Bit Mask      */


/*
 * RCC_CIR Register Enable Bit Macros
 *
 */


#define RCC_CIR_LSIRDYIEEN                    RCC_CIR_LSIRDYIE_Mask

#define RCC_CIR_LSERDYIEEN                    RCC_CIR_LSERDYIE_Mask
#define RCC_CIR_HSIRDYIEEN                    RCC_CIR_HSIRDYIE_Mask
#define RCC_CIR_HSERDYIEEN                    RCC_CIR_HSERDYIE_Mask
#define RCC_CIR_PLLRDYIEEN                    RCC_CIR_PLLRDYIE_Mask
#define RCC_CIR_LSIRDYCEN                     RCC_CIR_LSIRDYC_Mask
#define RCC_CIR_LSERDYCEN                     RCC_CIR_LSERDYC_Mask
#define RCC_CIR_HSIRDYCEN                     RCC_CIR_HSIRDYC_Mask
#define RCC_CIR_HSERDYCEN                     RCC_CIR_HSERDYC_Mask
#define RCC_CIR_PLLRDYCEN                     RCC_CIR_PLLRDYC_Mask
#define RCC_CIR_CSSCEN                        RCC_CIR_CSSC_Mask


/*
 * RCC_APB2STR Register Bit Position Macros
 *
 */


#define RCC_APB2STR_SYSCFGSTR_Pos            (0U)              /* APB2STR Register SYSCFGSTR Bit Position  */
#define RCC_APB2STR_TIM1STR_Pos              (11U)             /* APB2STR Register TIM1STR Bit Position    */
#define RCC_APB2STR_SPI1STR_Pos              (12U)             /* APB2STR Register SPI1STR Bit Position    */
#define RCC_APB2STR_TIM8STR_Pos              (13U)             /* APB2STR Register TIM8STR Bit Position    */
#define RCC_APB2STR_USART1STR_Pos            (14U)             /* APB2STR Register USART1STR Bit Position  */
#define RCC_APB2STR_SPI4STR_Pos              (15U)             /* APB2STR Register SPI4STR Bit Position    */
#define RCC_APB2STR_TIM15STR_Pos             (16U)             /* APB2STR Register TIM15STR Bit Position   */
#define RCC_APB2STR_TIM16STR_Pos             (17U)             /* APB2STR Register TIM16STR Bit Position   */
#define RCC_APB2STR_TIM17STR_Pos             (18U)             /* APB2STR Register TIM17STR Bit Position   */
#define RCC_APB2STR_TIM20STR_Pos             (20U)             /* APB2STR Register TIM20STR Bit Position   */


/*
 * RCC_APB2STR Register Bit Mask Macros
 *
 */


#define RCC_APB2STR_SYSCFGSTR_Mask           (0x1<<RCC_APB2STR_SYSCFGSTR_Pos)             /* APB2STR Register SYSCFGSTR Bit Mask  */
#define RCC_APB2STR_TIM1STR_Mask             (0x1<<RCC_APB2STR_TIM1STR_Pos)               /* APB2STR Register TIM1STR Bit Mask    */
#define RCC_APB2STR_SPI1STR_Mask             (0x1<<RCC_APB2STR_SPI1STR_Pos)               /* APB2STR Register SPI1STR Bit Mask    */
#define RCC_APB2STR_TIM8STR_Mask             (0x1<<RCC_APB2STR_TIM8STR_Pos)               /* APB2STR Register TIM8STR Bit Mask    */
#define RCC_APB2STR_USART1STR_Mask           (0x1<<RCC_APB2STR_USART1STR_Pos)             /* APB2STR Register USART1STR Bit Mask  */
#define RCC_APB2STR_SPI4STR_Mask             (0x1<<RCC_APB2STR_SPI4STR_Pos)               /* APB2STR Register SPI4STR Bit Mask    */
#define RCC_APB2STR_TIM15STR_Mask            (0x1<<RCC_APB2STR_TIM15STR_Pos)              /* APB2STR Register TIM15STR Bit Mask   */
#define RCC_APB2STR_TIM16STR_Mask            (0x1<<RCC_APB2STR_TIM16STR_Pos)              /* APB2STR Register TIM16STR Bit Mask   */
#define RCC_APB2STR_TIM17STR_Mask            (0x1<<RCC_APB2STR_TIM17STR_Pos)              /* APB2STR Register TIM17STR Bit Mask   */
#define RCC_APB2STR_TIM20STR_Mask            (0x1<<RCC_APB2STR_TIM20STR_Pos)              /* APB2STR Register TIM20STR Bit Mask   */


/*
 * RCC_APB2STR Register Enable Bit Macros
 *
 */


#define RCC_APB2STR_SYSCFGSTREN                RCC_APB2STR_SYSCFGSTR_Mask
#define RCC_APB2STR_TIM1STREN                  RCC_APB2STR_TIM1STR_Mask
#define RCC_APB2STR_SPI1STREN                  RCC_APB2STR_SPI1STR_Mask
#define RCC_APB2STR_TIM8STREN                  RCC_APB2STR_TIM8STR_Mask
#define RCC_APB2STR_USART1STREN                RCC_APB2STR_USART1STR_Mask
#define RCC_APB2STR_SPI4STREN                  RCC_APB2STR_SPI4STR_Mask
#define RCC_APB2STR_TIM15STREN                 RCC_APB2STR_TIM15STR_Mask
#define RCC_APB2STR_TIM16STREN                 RCC_APB2STR_TIM16STR_Mask
#define RCC_APB2STR_TIM17STREN                 RCC_APB2STR_TIM17STR_Mask
#define RCC_APB2STR_TIM20STREN                 RCC_APB2STR_TIM20STR_Mask


/*
 * RCC_APB1STR Register Bit Position Macros
 *
 */


#define RCC_APB1STR_TIM2STR_Pos                (0U)             /* APB1STR Register TIM2STR Bit Position   */
#define RCC_APB1STR_TIM3STR_Pos                (1U)             /* APB1STR Register TIM3STR Bit Position   */
#define RCC_APB1STR_TIM4STR_Pos                (2U)             /* APB1STR Register TIM4STR Bit Position   */
#define RCC_APB1STR_TIM6STR_Pos                (4U)             /* APB1STR Register TIM6STR Bit Position   */
#define RCC_APB1STR_TIM7STR_Pos                (5U)             /* APB1STR Register TIM7STR Bit Position   */
#define RCC_APB1STR_WWDGSTR_Pos                (11U)            /* APB1STR Register WWDGSTR Bit Position   */
#define RCC_APB1STR_SPI2STR_Pos                (14U)            /* APB1STR Register SPI2STR Bit Position   */
#define RCC_APB1STR_SPI3STR_Pos                (15U)            /* APB1STR Register SPI3STR Bit Position   */
#define RCC_APB1STR_USART2STR_Pos              (17U)            /* APB1STR Register USART2STR Bit Position */
#define RCC_APB1STR_USART3STR_Pos              (18U)            /* APB1STR Register USART3STR Bit Position */
#define RCC_APB1STR_UART4STR_Pos               (19U)            /* APB1STR Register UART4STR Bit Position  */
#define RCC_APB1STR_UART5STR_Pos               (20U)            /* APB1STR Register UART5STR Bit Position  */
#define RCC_APB1STR_I2C1STR_Pos                (21U)            /* APB1STR Register I2C1STR Bit Position   */
#define RCC_APB1STR_I2C2STR_Pos                (22U)            /* APB1STR Register I2C2STR Bit Position   */
#define RCC_APB1STR_USBSTR_Pos                 (23U)            /* APB1STR Register USBSTR Bit Position    */
#define RCC_APB1STR_CANSTR_Pos                 (25U)            /* APB1STR Register CAN2STR Bit Position   */
#define RCC_APB1STR_DAC2STR_Pos                (26U)            /* APB1STR Register DAC2STR Bit Position   */
#define RCC_APB1STR_PWRSTR_Pos                 (28U)            /* APB1STR Register PWR2STR Bit Position   */
#define RCC_APB1STR_DAC1STR_Pos                (29U)            /* APB1STR Register DAC12STR Bit Position  */
#define RCC_APB1STR_I2C3STR_Pos                (30U)            /* APB1STR Register I2C3STR Bit Position   */


/*
 * RCC_APB1STR Register Bit Mask Macros
 *
 */


#define RCC_APB1STR_TIM2STR_Mask                (0x1<<RCC_APB1STR_TIM2STR_Pos)             /* APB1STR Register TIM2STR Bit Mask   */
#define RCC_APB1STR_TIM3STR_Mask                (0x1<<RCC_APB1STR_TIM3STR_Pos)             /* APB1STR Register TIM3STR Bit Mask   */
#define RCC_APB1STR_TIM4STR_Mask                (0x1<<RCC_APB1STR_TIM4STR_Pos)             /* APB1STR Register TIM4STR Bit Mask   */
#define RCC_APB1STR_TIM6STR_Mask                (0x1<<RCC_APB1STR_TIM6STR_Pos)             /* APB1STR Register TIM6STR Bit Mask   */
#define RCC_APB1STR_TIM7STR_Mask                (0x1<<RCC_APB1STR_TIM7STR_Pos)             /* APB1STR Register TIM7STR Bit Mask   */
#define RCC_APB1STR_WWDGSTR_Mask                (0x1<<RCC_APB1STR_WWDGSTR_Pos)             /* APB1STR Register WWDGSTR Bit Mask   */
#define RCC_APB1STR_SPI2STR_Mask                (0x1<<RCC_APB1STR_SPI2STR_Pos)             /* APB1STR Register SPI2STR Bit Mask   */
#define RCC_APB1STR_SPI3STR_Mask                (0x1<<RCC_APB1STR_SPI3STR_Pos)             /* APB1STR Register SPI3STR Bit Mask   */
#define RCC_APB1STR_USART2STR_Mask              (0x1<<RCC_APB1STR_USART2STR_Pos)           /* APB1STR Register USART2STR Bit Mask */
#define RCC_APB1STR_USART3STR_Mask              (0x1<<RCC_APB1STR_USART3STR_Pos)           /* APB1STR Register USART3STR Bit Mask */
#define RCC_APB1STR_UART4STR_Mask               (0x1<<RCC_APB1STR_UART4STR_Pos)            /* APB1STR Register UART4STR Bit Mask  */
#define RCC_APB1STR_UART5STR_Mask               (0x1<<RCC_APB1STR_UART5STR_Pos)            /* APB1STR Register UART5STR Bit Mask  */
#define RCC_APB1STR_I2C1STR_Mask                (0x1<<RCC_APB1STR_I2C1STR_Pos)             /* APB1STR Register I2C1STR Bit Mask   */
#define RCC_APB1STR_I2C2STR_Mask                (0x1<<RCC_APB1STR_I2C2STR_Pos)             /* APB1STR Register I2C2STR Bit Mask   */
#define RCC_APB1STR_USBSTR_Mask                 (0x1<<RCC_APB1STR_USBSTR_Pos)              /* APB1STR Register USBSTR Bit Mask    */
#define RCC_APB1STR_CANSTR_Mask                 (0x1<<RCC_APB1STR_CANSTR_Pos)              /* APB1STR Register CAN2STR Bit Mask   */
#define RCC_APB1STR_DAC2STR_Mask                (0x1<<RCC_APB1STR_DAC2STR_Pos)             /* APB1STR Register DAC2STR Bit Mask   */
#define RCC_APB1STR_PWRSTR_Mask                 (0x1<<RCC_APB1STR_PWRSTR_Pos)              /* APB1STR Register PWR2STR Bit Mask   */
#define RCC_APB1STR_DAC1STR_Mask                (0x1<<RCC_APB1STR_DAC1STR_Pos)             /* APB1STR Register DAC12STR Bit Mask  */
#define RCC_APB1STR_I2C3STR_Mask                (0x1<<RCC_APB1STR_I2C3STR_Pos)             /* APB1STR Register I2C3STR Bit Mask   */


/*
 * RCC_APB1STR Register Enable Bit Macros
 *
 */


#define RCC_APB1STR_TIM2STREN                RCC_APB1STR_TIM2STR_Mask
#define RCC_APB1STR_TIM3STREN                RCC_APB1STR_TIM3STR_Mask
#define RCC_APB1STR_TIM4STREN                RCC_APB1STR_TIM4STR_Mask
#define RCC_APB1STR_TIM6STREN                RCC_APB1STR_TIM6STR_Mask
#define RCC_APB1STR_TIM7STREN                RCC_APB1STR_TIM7STR_Mask
#define RCC_APB1STR_WWDGSTREN                RCC_APB1STR_WWDGSTR_Mask
#define RCC_APB1STR_SPI2STREN                RCC_APB1STR_SPI2STR_Mask
#define RCC_APB1STR_SPI3STREN                RCC_APB1STR_SPI3STR_Mask
#define RCC_APB1STR_USART2STREN              RCC_APB1STR_USART2STR_Mask
#define RCC_APB1STR_USART3STREN              RCC_APB1STR_USART3STR_Mask
#define RCC_APB1STR_UART4STREN               RCC_APB1STR_UART4STR_Mask
#define RCC_APB1STR_UART5STREN               RCC_APB1STR_UART5STR_Mask
#define RCC_APB1STR_I2C1STREN                RCC_APB1STR_I2C1STR_Mask
#define RCC_APB1STR_I2C2STREN                RCC_APB1STR_I2C2STR_Mask
#define RCC_APB1STR_USBSTREN                 RCC_APB1STR_USBSTR_Mask
#define RCC_APB1STR_CANSTREN                 RCC_APB1STR_CANSTR_Mask
#define RCC_APB1STR_DAC2STREN                RCC_APB1STR_DAC2STR_Mask
#define RCC_APB1STR_PWRSTREN                 RCC_APB1STR_PWRSTR_Mas
#define RCC_APB1STR_DAC1STREN                RCC_APB1STR_DAC1STR_Mask
#define RCC_APB1STR_I2C3STREN                RCC_APB1STR_I2C3STR_Mask



/*
 * RCC_AHBENR Register Bit Position Macros
 *
 */


#define RCC_AHBENR_DMA1_Pos          (0U)   /* AHBENR Register DMA1EN Bit Position        */
#define RCC_AHBENR_DMA2_Pos          (1U)   /* AHBENR Register DMA2EN Bit Position        */
#define RCC_AHBENR_SRAM_Pos          (2U)   /* AHBENR Register SRAMEN Bit Position        */
#define RCC_AHBENR_FLITF_Pos         (4U)   /* AHBENR Register FLITFEN Bit Position       */
#define RCC_AHBENR_CRC_Pos           (6U)   /* AHBENR Register CRCEN Bit Position         */
#define RCC_AHBENR_GPIOA_Pos         (17U)  /* AHBENR Register IOPAEN(GPIOA) Bit Position */
#define RCC_AHBENR_GPIOB_Pos         (18U)  /* AHBENR Register IOPBEN(GPIOB) Bit Position */
#define RCC_AHBENR_GPIOC_Pos         (19U)  /* AHBENR Register IOPCEN(GPIOC) Bit Position */
#define RCC_AHBENR_GPIOD_Pos         (20U)  /* AHBENR Register IOPDEN(GPIOD) Bit Position */
#define RCC_AHBENR_GPIOE_Pos         (21U)  /* AHBENR Register IOPEEN(GPIOE) Bit Position */
#define RCC_AHBENR_GPIOF_Pos         (22U)  /* AHBENR Register IOPFEN(GPIOF) Bit Position */
#define RCC_AHBENR_TSCEN_Pos         (24U)  /* AHBENR Register TSCEN Bit Position         */
#define RCC_AHBENR_ADC12_Pos         (28U)  /* AHBENR Register ADC12EN Bit Position       */
#define RCC_AHBENR_ADC34_Pos         (29U)  /* AHBENR Register ADC34EN Bit Position       */


/*
 * RCC_AHBENR Register Bit Mask Macros
 *
 */


#define RCC_AHBENR_DMA1_Mask         (0x1<<RCC_AHBENR_DMA1_Pos)    /* AHBENR Register DMA1EN Bit Mask          */
#define RCC_AHBENR_DMA2_Mask         (0x1<<RCC_AHBENR_DMA2_Pos)    /* AHBENR Register DMA2EN Bit Mask          */
#define RCC_AHBENR_SRAM_Mask         (0x1<<RCC_AHBENR_SRAM_Pos)    /* AHBENR Register SRAMEN Bit Mask          */
#define RCC_AHBENR_FLITF_Mask        (0x1<<RCC_AHBENR_FLITF_Pos)   /* AHBENR Register FLITFEN Bit Mask         */
#define RCC_AHBENR_CRC_Mask          (0x1<<RCC_AHBENR_CRC_Pos)     /* AHBENR Register CRCEN Bit Mask           */
#define RCC_AHBENR_GPIOA_Mask        (0x1<<RCC_AHBENR_GPIOA_Pos)   /* AHBENR Register IOPAEN(GPIOA) Bit Mask   */
#define RCC_AHBENR_GPIOB_Mask        (0x1<<RCC_AHBENR_GPIOB_Pos)   /* AHBENR Register IOPBEN(GPIOB) Bit Mask   */
#define RCC_AHBENR_GPIOC_Mask        (0x1<<RCC_AHBENR_GPIOC_Pos)   /* AHBENR Register IOPCEN(GPIOC) Bit Mask   */
#define RCC_AHBENR_GPIOD_Mask        (0x1<<RCC_AHBENR_GPIOD_Pos)   /* AHBENR Register IOPDEN(GPIOD) Bit Mask   */
#define RCC_AHBENR_GPIOE_Mask        (0x1<<RCC_AHBENR_GPIOE_Pos)   /* AHBENR Register IOPEEN(GPIOE) Bit Mask   */
#define RCC_AHBENR_GPIOF_Mask        (0x1<<RCC_AHBENR_GPIOF_Pos)   /* AHBENR Register IOPFEN(GPIOF) Bit Mask   */
#define RCC_AHBENR_TSCEN_Mask        (0x1<<RCC_AHBENR_TSCEN_Pos)   /* AHBENR Register TSCEN Bit Mask           */
#define RCC_AHBENR_ADC12_Mask        (0x1<<RCC_AHBENR_ADC12_Pos)   /* AHBENR Register ADCEN12 Bit Mask         */
#define RCC_AHBENR_ADC34_Mask        (0x1<<RCC_AHBENR_ADC34_Pos)   /* AHBENR Register ADCEN34 Bit Mask         */


/*
 * RCC_AHBENR Register Enable Bit Macros
 *
 */


#define RCC_AHBENR_DMA1EN             RCC_AHBENR_DMA1_Mask
#define RCC_AHBENR_DMA2EN             RCC_AHBENR_DMA2_Mask
#define RCC_AHBENR_SRAMEN             RCC_AHBENR_SRAM_Mask
#define RCC_AHBENR_FLITFEN            RCC_AHBENR_FLITF_Mask
#define RCC_AHBENR_CRCEN              RCC_AHBENR_CRC_Mask
#define RCC_AHBENR_GPIOAEN            RCC_AHBENR_GPIOA_Mask
#define RCC_AHBENR_GPIOBEN            RCC_AHBENR_GPIOB_Mask
#define RCC_AHBENR_GPIOCEN            RCC_AHBENR_GPIOC_Mask
#define RCC_AHBENR_GPIODEN            RCC_AHBENR_GPIOD_Mask
#define RCC_AHBENR_GPIOEEN            RCC_AHBENR_GPIOE_Mask
#define RCC_AHBENR_GPIOFEN            RCC_AHBENR_GPIOF_Mask
#define RCC_AHBENR_TSCEN              RCC_AHBENR_TSCEN_Mask
#define RCC_AHBENR_ADC12EN            RCC_AHBENR_ADC12_Mask
#define RCC_AHBENR_ADC34EN            RCC_AHBENR_ADC34_Mask



/*
 * RCC_APB2ENR Register Bit Position Macros
 *
 */


#define RCC_APB2ENR_SYSCFGEN_Pos            (0U)              /* APB2ENR Register SYSCFGEN Bit Position  */
#define RCC_APB2ENR_TIM1EN_Pos              (11U)             /* APB2ENR Register TIM1EN Bit Position    */
#define RCC_APB2ENR_SPI1EN_Pos              (12U)             /* APB2ENR Register SPI1EN Bit Position    */
#define RCC_APB2ENR_TIM8EN_Pos              (13U)             /* APB2ENR Register TIM8EN Bit Position    */
#define RCC_APB2ENR_USART1EN_Pos            (14U)             /* APB2ENR Register USART1EN Bit Position  */
#define RCC_APB2ENR_SPI4EN_Pos              (15U)             /* APB2ENR Register SPI4EN Bit Position    */
#define RCC_APB2ENR_TIM15EN_Pos             (16U)             /* APB2ENR Register TIM15EN Bit Position   */
#define RCC_APB2ENR_TIM16EN_Pos             (17U)             /* APB2ENR Register TIM16EN Bit Position   */
#define RCC_APB2ENR_TIM17EN_Pos             (18U)             /* APB2ENR Register TIM17EN Bit Position   */
#define RCC_APB2ENR_TIM20EN_Pos             (20U)             /* APB2ENR Register TIM20EN Bit Position   */


/*
 * RCC_APB2ENR Register Bit Mask Macros
 *
 */


#define RCC_APB2ENR_SYSCFGEN_Mask           (0x1<<RCC_APB2ENR_SYSCFGEN_Pos)             /* APB2ENR Register SYSCFGEN Bit Mask  */
#define RCC_APB2ENR_TIM1EN_Mask             (0x1<<RCC_APB2ENR_TIM1EN_Pos)               /* APB2ENR Register TIM1EN Bit Mask    */
#define RCC_APB2ENR_SPI1EN_Mask             (0x1<<RCC_APB2ENR_SPI1EN_Pos)               /* APB2ENR Register SPI1EN Bit Mask    */
#define RCC_APB2ENR_TIM8EN_Mask             (0x1<<RCC_APB2ENR_TIM8EN_Pos)               /* APB2ENR Register TIM8EN Bit Mask    */
#define RCC_APB2ENR_USART1EN_Mask           (0x1<<RCC_APB2ENR_USART1EN_Pos)             /* APB2ENR Register USART1EN Bit Mask  */
#define RCC_APB2ENR_SPI4EN_Mask             (0x1<<RCC_APB2ENR_SPI4EN_Pos)               /* APB2ENR Register SPI4EN Bit Mask    */
#define RCC_APB2ENR_TIM15EN_Mask            (0x1<<RCC_APB2ENR_TIM15EN_Pos)              /* APB2ENR Register TIM15EN Bit Mask   */
#define RCC_APB2ENR_TIM16EN_Mask            (0x1<<RCC_APB2ENR_TIM16EN_Pos)              /* APB2ENR Register TIM16EN Bit Mask   */
#define RCC_APB2ENR_TIM17EN_Mask            (0x1<<RCC_APB2ENR_TIM17EN_Pos)              /* APB2ENR Register TIM17EN Bit Mask   */
#define RCC_APB2ENR_TIM20EN_Mask            (0x1<<RCC_APB2ENR_TIM20EN_Pos)              /* APB2ENR Register TIM20EN Bit Mask   */


/*
 * RCC_APB2ENR Register Enable Bit Macros
 *
 */


#define RCC_APB2ENR_SYSCFGEN                RCC_APB2ENR_SYSCFGEN_Mask
#define RCC_APB2ENR_TIM1EN                  RCC_APB2ENR_TIM1EN_Mask
#define RCC_APB2ENR_SPI1EN                  RCC_APB2ENR_SPI1EN_Mask
#define RCC_APB2ENR_TIM8EN                  RCC_APB2ENR_TIM8EN_Mask
#define RCC_APB2ENR_USART1EN                RCC_APB2ENR_USART1EN_Mask
#define RCC_APB2ENR_SPI4EN                  RCC_APB2ENR_SPI4EN_Mask
#define RCC_APB2ENR_TIM15EN                 RCC_APB2ENR_TIM15EN_Mask
#define RCC_APB2ENR_TIM16EN                 RCC_APB2ENR_TIM16EN_Mask
#define RCC_APB2ENR_TIM17EN                 RCC_APB2ENR_TIM17EN_Mask
#define RCC_APB2ENR_TIM20EN                 RCC_APB2ENR_TIM20EN_Mask


/*
 * RCC_APB1ENR Register Bit Position Macros
 *
 */


#define RCC_APB1ENR_TIM2EN_Pos              (0U)             /* APB1ENR Register TIM2EN Bit Position    */
#define RCC_APB1ENR_TIM3EN_Pos              (1U)             /* APB1ENR Register TIM3EN Bit Position    */
#define RCC_APB1ENR_TIM4EN_Pos              (2U)             /* APB1ENR Register TIM4EN Bit Position    */
#define RCC_APB1ENR_TIM6EN_Pos              (4U)             /* APB1ENR Register TIM6EN Bit Position    */
#define RCC_APB1ENR_TIM7EN_Pos              (5U)             /* APB1ENR Register TIM7EN Bit Position    */
#define RCC_APB1ENR_WWDGEN_Pos              (11U)            /* APB1ENR Register WWDGEN Bit Position    */
#define RCC_APB1ENR_SPI2EN_Pos              (14U)            /* APB1ENR Register SPI2EN Bit Position    */
#define RCC_APB1ENR_SPI3EN_Pos              (15U)            /* APB1ENR Register SPI3EN Bit Position    */
#define RCC_APB1ENR_USART2EN_Pos            (17U)            /* APB1ENR Register USART2EN Bit Position  */
#define RCC_APB1ENR_USART3EN_Pos            (18U)            /* APB1ENR Register USART3EN Bit Position  */
#define RCC_APB1ENR_UART4EN_Pos             (19U)            /* APB1ENR Register UART4EN Bit Position   */
#define RCC_APB1ENR_UART5EN_Pos             (20U)            /* APB1ENR Register UART5EN Bit Position   */
#define RCC_APB1ENR_I2C1EN_Pos              (21U)            /* APB1ENR Register I2C1EN Bit Position    */
#define RCC_APB1ENR_I2C2EN_Pos              (22U)            /* APB1ENR Register I2C2EN Bit Position    */
#define RCC_APB1ENR_USBEN_Pos               (23U)            /* APB1ENR Register USBEN Bit Position     */
#define RCC_APB1ENR_CANEN_Pos               (25U)            /* APB1ENR Register CANEN Bit Position     */
#define RCC_APB1ENR_DAC2EN_Pos              (26U)            /* APB1ENR Register DAC2EN Bit Position    */
#define RCC_APB1ENR_PWREN_Pos               (28U)            /* APB1ENR Register PWREN Bit Position     */
#define RCC_APB1ENR_DAC1EN_Pos              (29U)            /* APB1ENR Register DAC1EN Bit Position    */
#define RCC_APB1ENR_I2C3EN_Pos              (30U)            /* APB1ENR Register I2C3EN Bit Position    */


/*
 * RCC_APB1ENR Register Bit Mask Macros
 *
 */


#define RCC_APB1ENR_TIM2EN_Mask             (0x1<<RCC_APB1ENR_TIM2EN_Pos)              /* APB1ENR Register TIM2EN Bit Mask   */
#define RCC_APB1ENR_TIM3EN_Mask             (0x1<<RCC_APB1ENR_TIM3EN_Pos)              /* APB1ENR Register TIM3EN Bit Mask   */
#define RCC_APB1ENR_TIM4EN_Mask             (0x1<<RCC_APB1ENR_TIM4EN_Pos)              /* APB1ENR Register TIM4EN Bit Mask   */
#define RCC_APB1ENR_TIM6EN_Mask             (0x1<<RCC_APB1ENR_TIM6EN_Pos)              /* APB1ENR Register TIM6EN Bit Mask   */
#define RCC_APB1ENR_TIM7EN_Mask             (0x1<<RCC_APB1ENR_TIM7EN_Pos)              /* APB1ENR Register TIM7EN Bit Mask   */
#define RCC_APB1ENR_WWDGEN_Mask             (0x1<<RCC_APB1ENR_WWDGEN_Pos)              /* APB1ENR Register WWDGEN Bit Mask   */
#define RCC_APB1ENR_SPI2EN_Mask             (0x1<<RCC_APB1ENR_SPI2EN_Pos)              /* APB1ENR Register SPI2EN Bit Mask   */
#define RCC_APB1ENR_SPI3EN_Mask             (0x1<<RCC_APB1ENR_SPI3EN_Pos)              /* APB1ENR Register SPI3EN Bit Mask   */
#define RCC_APB1ENR_USART2EN_Mask           (0x1<<RCC_APB1ENR_USART2EN_Pos)            /* APB1ENR Register USART2EN Bit Mask */
#define RCC_APB1ENR_USART3EN_Mask           (0x1<<RCC_APB1ENR_USART3EN_Pos)            /* APB1ENR Register USART3EN Bit Mask */
#define RCC_APB1ENR_UART4EN_Mask            (0x1<<RCC_APB1ENR_UART4EN_Pos)             /* APB1ENR Register UART4EN Bit Mask  */
#define RCC_APB1ENR_UART5EN_Mask            (0x1<<RCC_APB1ENR_UART5EN_Pos)             /* APB1ENR Register UART5EN Bit Mask  */
#define RCC_APB1ENR_I2C1EN_Mask             (0x1<<RCC_APB1ENR_I2C1EN_Pos)              /* APB1ENR Register I2C1EN Bit Mask   */
#define RCC_APB1ENR_I2C2EN_Mask             (0x1<<RCC_APB1ENR_I2C2EN_Pos)              /* APB1ENR Register I2C2EN Bit Mask   */
#define RCC_APB1ENR_USBEN_Mask              (0x1<<RCC_APB1ENR_USBEN_Pos)               /* APB1ENR Register USBEN Bit Mask    */
#define RCC_APB1ENR_CANEN_Mask              (0x1<<RCC_APB1ENR_CANEN_Pos)               /* APB1ENR Register CANEN Bit Mask    */
#define RCC_APB1ENR_DAC2EN_Mask             (0x1<<RCC_APB1ENR_DAC2EN_Pos)              /* APB1ENR Register DAC2EN Bit Mask   */
#define RCC_APB1ENR_PWREN_Mask              (0x1<<RCC_APB1ENR_PWREN_Pos)               /* APB1ENR Register PWREN Bit Mask    */
#define RCC_APB1ENR_DAC1EN_Mask             (0x1<<RCC_APB1ENR_DAC1EN_Pos)              /* APB1ENR Register DAC1EN Bit Mask   */
#define RCC_APB1ENR_I2C3EN_Mask             (0x1<<RCC_APB1ENR_I2C3EN_Pos)              /* APB1ENR Register I2C3EN Bit Mask   */


/*
 * RCC_APB1ENR Register Enable Bit Macros
 *
 */


#define RCC_APB1ENR_TIM2EN                  RCC_APB1ENR_TIM2EN_Mask
#define RCC_APB1ENR_TIM3EN                  RCC_APB1ENR_TIM3EN_Mask
#define RCC_APB1ENR_TIM4EN                  RCC_APB1ENR_TIM4EN_Mask
#define RCC_APB1ENR_TIM6EN                  RCC_APB1ENR_TIM6EN_Mask
#define RCC_APB1ENR_TIM7EN                  RCC_APB1ENR_TIM7EN_Mask
#define RCC_APB1ENR_WWDGEN                  RCC_APB1ENR_WWDGEN_Mask
#define RCC_APB1ENR_SPI2EN                  RCC_APB1ENR_SPI2EN_Mask
#define RCC_APB1ENR_SPI3EN                  RCC_APB1ENR_SPI3EN_Mask
#define RCC_APB1ENR_USART2EN                RCC_APB1ENR_USART2EN_Mask
#define RCC_APB1ENR_USART3EN                RCC_APB1ENR_USART3EN_Mask
#define RCC_APB1ENR_UART4EN                 RCC_APB1ENR_UART4EN_Mask
#define RCC_APB1ENR_UART5EN                 RCC_APB1ENR_UART5EN_Mask
#define RCC_APB1ENR_I2C1EN                  RCC_APB1ENR_I2C1EN_Mask
#define RCC_APB1ENR_I2C2EN                  RCC_APB1ENR_I2C2EN_Mask
#define RCC_APB1ENR_USBEN                   RCC_APB1ENR_USBEN_Mask
#define RCC_APB1ENR_CANEN                   RCC_APB1ENR_CANEN_Mask
#define RCC_APB1ENR_DAC2EN                  RCC_APB1ENR_DAC2EN_Mask
#define RCC_APB1ENR_PWREN                   RCC_APB1ENR_PWREN_Mask
#define RCC_APB1ENR_DAC1EN                  RCC_APB1ENR_DAC1EN_Mask
#define RCC_APB1ENR_I2C3EN                  RCC_APB1ENR_I2C3EN_Mask


/*
 * RCC_BDCR Register Bit Position Macros
 *
 */


#define RCC_BDCR_LSEON_Pos                  (0U)         /* BDCR Register LSEON Bit Position  */
#define RCC_BDCR_LSEBYP_Pos                 (2U)         /* BDCR Register LSEBYP Bit Position */
#define RCC_BDCR_LSEDRV_Pos                 (3U)         /* BDCR Register LSEDRV Bit Position */
#define RCC_BDCR_RTCSEL_Pos                 (8U)         /* BDCR Register RTCSEL Bit Position */
#define RCC_BDCR_RTCEN_Pos                  (15U)        /* BDCR Register RTCEN Bit Position  */
#define RCC_BDCR_BDRST_Pos                  (16U)        /* BDCR Register BDRST Bit Position  */


/*
 * RCC_BDCR Register Bit Mask Macros
 *
 */


#define RCC_BDCR_LSEON_Mask                  (0x1<<RCC_BDCR_LSEON_Pos)                         /* BDCR Register LSEON Bit Mask  */
#define RCC_BDCR_LSEBYP_Mask                 (0x1<<RCC_BDCR_LSEBYP_Pos)                        /* BDCR Register LSBYP Bit Mask  */

#define RCC_BDCR_LSEDRV_L_Mask               (RCC_BDCR_LSEDRV_L<<RCC_BDCR_LSEDRV_Pos)          /* BDCR Register LSEDRV Lower Driving Bit Mask        */
#define RCC_BDCR_LSEDRV_MH_Mask              (RCC_BDCR_LSEDRV_MH<<RCC_BDCR_LSEDRV_Pos)         /* BDCR Register LSEDRV Medium High Driving Bit Mask  */
#define RCC_BDCR_LSEDRV_ML_Mask              (RCC_BDCR_LSEDRV_ML<<RCC_BDCR_LSEDRV_Pos)         /* BDCR Register LSEDRV Medium Low Driving Bit Mask   */
#define RCC_BDCR_LSEDRV_H_Mask               (RCC_BDCR_LSEDRV_H<<RCC_BDCR_LSEDRV_Pos)          /* BDCR Register LSEDRV High Driving Bit Mask         */

#define RCC_BDCR_RTCSEL_NOCLK_Mask           (RCC_BDCR_RTCSEL_NOCLK<<RCC_BDCR_RTCSEL_Pos)      /* BDCR Register RTCSEL No Clock Bit Mask                 */
#define RCC_BDCR_RTCSEL_LSE_Mask             (RCC_BDCR_RTCSEL_LSE<<RCC_BDCR_RTCSEL_Pos)        /* BDCR Register RTCSEL LSE Clock (as RTC Clock) Bit Mask */
#define RCC_BDCR_RTCSEL_LSI_Mask             (RCC_BDCR_RTCSEL_LSI<<RCC_BDCR_RTCSEL_Pos)        /* BDCR Register RTCSEL LSI Clock (as RTC Clock) Bit Mask */
#define RCC_BDCR_RTCSEL_HSE_Mask             (RCC_BDCR_RTCSEL_HSE<<RCC_BDCR_RTCSEL_Pos)        /* BDCR Register RTCSEL HSE Clock (as RTC Clock) Bit Mask */

#define RCC_BDCR_RTCEN_Mask                  (0x1<<RCC_BDCR_RTCEN_Pos)                         /* BDCR Register RTCEN Bit Mask  */
#define RCC_BDCR_BDRST_Mask                  (0x1<<RCC_BDCR_BDRST_Pos)                         /* BDCR Register BDRST Bit Mask  */


/*
 * RCC_BDCR Register Enable Bit Macros
 *
 */


#define RCC_BDCR_LSEONEN                     RCC_BDCR_LSEON_Mask
#define RCC_BDCR_LSEBYPEN                    RCC_BDCR_LSEBYP_Mask

#define RCC_BDCR_LSEDRV_LEN                  RCC_BDCR_LSEDRV_L_Mask
#define RCC_BDCR_LSEDRV_MHEN                 RCC_BDCR_LSEDRV_MH_Mask
#define RCC_BDCR_LSEDRV_MLEN                 RCC_BDCR_LSEDRV_ML_Mask
#define RCC_BDCR_LSEDRV_HEN                  RCC_BDCR_LSEDRV_H_Mask

#define RCC_BDCR_RTCSEL_NOCLKEN              RCC_BDCR_RTCSEL_NOCLK_Mask
#define RCC_BDCR_RTCSEL_LSEEN                RCC_BDCR_RTCSEL_LSE_Mask
#define RCC_BDCR_RTCSEL_LSIEN                RCC_BDCR_RTCSEL_LSI_Mask
#define RCC_BDCR_RTCSEL_HSEEN                RCC_BDCR_RTCSEL_HSE_Mask

#define RCC_BDCR_RTCENEN                     RCC_BDCR_RTCEN_Mask
#define RCC_BDCR_BDRSTEN                     RCC_BDCR_BDRST_Mask


/*
 * RCC_AHBRSTR Register Bit Position Macros
 *
 */


#define RCC_AHBSTR_FMCRST_Pos            (5U)                /* AHBSTR Register FMCRST Bit Position   */
#define RCC_AHBSTR_IOPARST_Pos           (17U)               /* AHBSTR Register IOPARST Bit Position  */
#define RCC_AHBSTR_IOPBRST_Pos           (18U)               /* AHBSTR Register IOPBRST Bit Position  */
#define RCC_AHBSTR_IOPCRST_Pos           (19U)               /* AHBSTR Register IOPCRST Bit Position  */
#define RCC_AHBSTR_IOPDRST_Pos           (20U)               /* AHBSTR Register IOPDRST Bit Position  */
#define RCC_AHBSTR_IOPERST_Pos           (21U)               /* AHBSTR Register IOPERST Bit Position  */
#define RCC_AHBSTR_IOPFRST_Pos           (22U)               /* AHBSTR Register IOPFRST Bit Position  */
#define RCC_AHBSTR_TSCRST_Pos            (24U)               /* AHBSTR Register TSCRST Bit Position   */
#define RCC_AHBSTR_ADC12RST_Pos          (28U)               /* AHBSTR Register ADC12RST Bit Position */
#define RCC_AHBSTR_ADC34RST_Pos          (29U)               /* AHBSTR Register ADCRST34 Bit Position */



/*
 * RCC_AHBSRTR Register Bit Mask Macros
 *
 */


#define RCC_AHBSTR_FMCRST_Mask            (0x1<<RCC_AHBSTR_FMCRST_Pos)              /* AHBSTR Register FMCRST Bit Mask   */
#define RCC_AHBSTR_IOPARST_Mask           (0x1<<RCC_AHBSTR_IOPARST_Pos)             /* AHBSTR Register IOPARST Bit Mask  */
#define RCC_AHBSTR_IOPBRST_Mask           (0x1<<RCC_AHBSTR_IOPBRST_Pos)             /* AHBSTR Register IOPBRST Bit Mask  */
#define RCC_AHBSTR_IOPCRST_Mask           (0x1<<RCC_AHBSTR_IOPCRST_Pos)             /* AHBSTR Register IOPCRST Bit Mask  */
#define RCC_AHBSTR_IOPDRST_Mask           (0x1<<RCC_AHBSTR_IOPDRST_Pos)             /* AHBSTR Register IOPDRST Bit Mask  */
#define RCC_AHBSTR_IOPERST_Mask           (0x1<<RCC_AHBSTR_IOPERST_Pos)             /* AHBSTR Register IOPERST Bit Mask  */
#define RCC_AHBSTR_IOPFRST_Mask           (0x1<<RCC_AHBSTR_IOPFRST_Pos)             /* AHBSTR Register IOPFRST Bit Mask  */
#define RCC_AHBSTR_TSCRST_Mask            (0x1<<RCC_AHBSTR_TSCRST_Pos)              /* AHBSTR Register TSCRST Bit Mask   */
#define RCC_AHBSTR_ADC12RST_Mask          (0x1<<RCC_AHBSTR_ADC12RST_Pos)            /* AHBSTR Register ADC12RST Bit Mask */
#define RCC_AHBSTR_ADC34RST_Mask          (0x1<<RCC_AHBSTR_ADC34RST_Pos)            /* AHBSTR Register ADCRST34 Bit Mask */


/*
 * RCC_AHBRSTR Register Enable Bit Macros
 *
 */


#define RCC_AHBSTR_FMCRSTEN            RCC_AHBSTR_FMCRST_Mask
#define RCC_AHBSTR_IOPARSTEN           RCC_AHBSTR_IOPARST_Mask
#define RCC_AHBSTR_IOPBRSTEN           RCC_AHBSTR_IOPBRST_Mask
#define RCC_AHBSTR_IOPCRSTEN           RCC_AHBSTR_IOPCRST_Mask
#define RCC_AHBSTR_IOPDRSTEN           RCC_AHBSTR_IOPDRST_Mask
#define RCC_AHBSTR_IOPERSTEN           RCC_AHBSTR_IOPERST_Mask
#define RCC_AHBSTR_IOPFRSTEN           RCC_AHBSTR_IOPFRST_Mask
#define RCC_AHBSTR_TSCRSTEN            RCC_AHBSTR_TSCRST_Mask
#define RCC_AHBSTR_ADC12RSTEN          RCC_AHBSTR_ADC12RST_Mask
#define RCC_AHBSTR_ADC34RSTEN          RCC_AHBSTR_ADC34RST_Mask


/*
 * RCC_CFGR2 Register Bit Position Macros
 *
 */


#define RCC_CFGR2_PREDIV_Pos         (0U)           /* CFGR2 Register PREDIV Bit Position */
#define RCC_CFGR2_ADC12PRES_Pos      (4U)           /* CFGR2 Register ADC12PRES Bit Position */
#define RCC_CFGR2_ADC34PRES_Pos      (9U)           /* CFGR2 Register ADC34PRES Bit Position */


/*
 * RCC_CFGR2 Register Bit Mask Macros
 *
 */


#define RCC_CFGR2_PREDIV1_Mask          (RCC_CFGR2_PREDIV__PLLDIV1<<RCC_CFGR2_PREDIV_Pos)              /* CFGR2 Register PREDIV Bit Mask */
#define RCC_CFGR2_PREDIV2_Mask          (RCC_CFGR2_PREDIV__PLLDIV2<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV3_Mask          (RCC_CFGR2_PREDIV__PLLDIV3<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV4_Mask          (RCC_CFGR2_PREDIV__PLLDIV4<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV5_Mask          (RCC_CFGR2_PREDIV__PLLDIV5<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV6_Mask          (RCC_CFGR2_PREDIV__PLLDIV6<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV7_Mask          (RCC_CFGR2_PREDIV__PLLDIV7<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV8_Mask          (RCC_CFGR2_PREDIV__PLLDIV8<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV9_Mask          (RCC_CFGR2_PREDIV__PLLDIV9<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV10_Mask         (RCC_CFGR2_PREDIV__PLLDIV10<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV11_Mask         (RCC_CFGR2_PREDIV__PLLDIV11<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV12_Mask         (RCC_CFGR2_PREDIV__PLLDIV12<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV13_Mask         (RCC_CFGR2_PREDIV__PLLDIV13<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV14_Mask         (RCC_CFGR2_PREDIV__PLLDIV14<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV15_Mask         (RCC_CFGR2_PREDIV__PLLDIV15<<RCC_CFGR2_PREDIV_Pos)
#define RCC_CFGR2_PREDIV16_Mask         (RCC_CFGR2_PREDIV__PLLDIV16<<RCC_CFGR2_PREDIV_Pos)


#define RCC_CFGR2_ADC12PRES1_Mask       (RCC_CFGR2_ADC12PRES__PLLDIV1<<RCC_CFGR2_ADC12PRES_Pos)        /* CFGR2 Register ADC12 Prescaler Value Bit Mask */
#define RCC_CFGR2_ADC12PRES2_Mask       (RCC_CFGR2_ADC12PRES__PLLDIV2<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES4_Mask       (RCC_CFGR2_ADC12PRES__PLLDIV4<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES6_Mask       (RCC_CFGR2_ADC12PRES__PLLDIV6<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES8_MasK       (RCC_CFGR2_ADC12PRES__PLLDIV8<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES10_Mask      (RCC_CFGR2_ADC12PRES__PLLDIV10<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES12_Mask      (RCC_CFGR2_ADC12PRES__PLLDIV12<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES16_Mask      (RCC_CFGR2_ADC12PRES__PLLDIV16<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES32_Mask      (RCC_CFGR2_ADC12PRES__PLLDIV32<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES64_Mask      (RCC_CFGR2_ADC12PRES__PLLDIV64<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES128_Mask     (RCC_CFGR2_ADC12PRES__PLLDIV128<<RCC_CFGR2_ADC12PRES_Pos)
#define RCC_CFGR2_ADC12PRES256_Mask     (RCC_CFGR2_ADC12PRES__PLLDIV256<<RCC_CFGR2_ADC12PRES_Pos)


#define RCC_CFGR2_ADC34PRES1_Mask       (RCC_CFGR2_ADC34PRES__PLLDIV1<<RCC_CFGR2_ADC34PRES_Pos)       /* CFGR2 Register ADC34 Prescaler Value Bit Mask */
#define RCC_CFGR2_ADC34PRES2_Mask       (RCC_CFGR2_ADC34PRES__PLLDIV2<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES4_Mask       (RCC_CFGR2_ADC34PRES__PLLDIV4<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES6_Mask       (RCC_CFGR2_ADC34PRES__PLLDIV6<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES8_Mask       (RCC_CFGR2_ADC34PRES__PLLDIV8<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES10_Mask      (RCC_CFGR2_ADC34PRES__PLLDIV10<<RCC_CFGR2_AD342PRES_Pos)
#define RCC_CFGR2_ADC34PRES12_Mask      (RCC_CFGR2_ADC34PRES__PLLDIV12<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES16_Mask      (RCC_CFGR2_ADC34PRES__PLLDIV16<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES32_Mask      (RCC_CFGR2_ADC34PRES__PLLDIV32<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES64_Mask      (RCC_CFGR2_ADC34PRES__PLLDIV64<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES128_Mask     (RCC_CFGR2_ADC34PRES__PLLDIV128<<RCC_CFGR2_ADC34PRES_Pos)
#define RCC_CFGR2_ADC34PRES256_Mask     (RCC_CFGR2_ADC34PRES__PLLDIV256<<RCC_CFGR2_ADC34PRES_Pos)



/*
 * RCC_CFGR2 Register Enable Bit Macros
 *
 */


#define RCC_CFGR2_PREDIV1EN          RCC_CFGR2_PREDIV1_Mask
#define RCC_CFGR2_PREDIV2EN          RCC_CFGR2_PREDIV2_Mask
#define RCC_CFGR2_PREDIV3EN          RCC_CFGR2_PREDIV3_Mask
#define RCC_CFGR2_PREDIV4EN          RCC_CFGR2_PREDIV4_Mask
#define RCC_CFGR2_PREDIV5EN          RCC_CFGR2_PREDIV5_Mask
#define RCC_CFGR2_PREDIV6EN          RCC_CFGR2_PREDIV6_Mask
#define RCC_CFGR2_PREDIV7EN          RCC_CFGR2_PREDIV7_Mask
#define RCC_CFGR2_PREDIV8EN          RCC_CFGR2_PREDIV8_Mask
#define RCC_CFGR2_PREDIV9EN          RCC_CFGR2_PREDIV9_Mask
#define RCC_CFGR2_PREDIV10EN         RCC_CFGR2_PREDIV10_Mask
#define RCC_CFGR2_PREDIV11EN         RCC_CFGR2_PREDIV11_Mask
#define RCC_CFGR2_PREDIV12EN         RCC_CFGR2_PREDIV12_Mask
#define RCC_CFGR2_PREDIV13EN         RCC_CFGR2_PREDIV13_Mask
#define RCC_CFGR2_PREDIV14EN         RCC_CFGR2_PREDIV14_Mask
#define RCC_CFGR2_PREDIV15EN         RCC_CFGR2_PREDIV15_Mask
#define RCC_CFGR2_PREDIV16EN         RCC_CFGR2_PREDIV16_Mask


#define RCC_CFGR2_ADC12PRES1EN       RCC_CFGR2_ADC12PRES1_Mask
#define RCC_CFGR2_ADC12PRES2EN       RCC_CFGR2_ADC12PRES2_Mask
#define RCC_CFGR2_ADC12PRES4EN       RCC_CFGR2_ADC12PRES4_Mask
#define RCC_CFGR2_ADC12PRES6EN       RCC_CFGR2_ADC12PRES6_Mask
#define RCC_CFGR2_ADC12PRES8EN       RCC_CFGR2_ADC12PRES8_Mask
#define RCC_CFGR2_ADC12PRES10EN      RCC_CFGR2_ADC12PRES10_Mask
#define RCC_CFGR2_ADC12PRES12EN      RCC_CFGR2_ADC12PRES12_Mask
#define RCC_CFGR2_ADC12PRES16EN      RCC_CFGR2_ADC12PRES16_Mask
#define RCC_CFGR2_ADC12PRES32EN      RCC_CFGR2_ADC12PRES32_Mask
#define RCC_CFGR2_ADC12PRES64EN      RCC_CFGR2_ADC12PRES64_Mask
#define RCC_CFGR2_ADC12PRES128EN     RCC_CFGR2_ADC12PRES128_Mask
#define RCC_CFGR2_ADC12PRES256EN     RCC_CFGR2_ADC12PRES256_Mask


#define RCC_CFGR2_ADC34PRES1EN       RCC_CFGR2_ADC34PRES1_Mask
#define RCC_CFGR2_ADC34PRES2EN       RCC_CFGR2_ADC34PRES2_Mask
#define RCC_CFGR2_ADC34PRES4EN       RCC_CFGR2_ADC34PRES4_Mask
#define RCC_CFGR2_ADC34PRES6EN       RCC_CFGR2_ADC34PRES6_Mask
#define RCC_CFGR2_ADC34PRES8EN       RCC_CFGR2_ADC34PRES8_Mask
#define RCC_CFGR2_ADC34PRES10EN      RCC_CFGR2_ADC34PRES10_Mask
#define RCC_CFGR2_ADC34PRES12EN      RCC_CFGR2_ADC34PRES12_Mask
#define RCC_CFGR2_ADC34PRES16EN      RCC_CFGR2_ADC34PRES16_Mask
#define RCC_CFGR2_ADC34PRES32EN      RCC_CFGR2_ADC34PRES32_Mask
#define RCC_CFGR2_ADC34PRES64EN      RCC_CFGR2_ADC34PRES64_Mask
#define RCC_CFGR2_ADC34PRES128EN     RCC_CFGR2_ADC34PRES128_Mask
#define RCC_CFGR2_ADC34PRES256EN     RCC_CFGR2_ADC34PRES256_Mask


/*
 * RCC_CFGR3 Register Bit Position Macros
 *
 */


#define RCC_CFGR3_USART1SW_Pos       (0U)                    /* CFGR3 Register USART1SW Bit Position */
#define RCC_CFGR3_I2C1SW_Pos         (4U)                    /* CFGR3 Register I2C1SW Bit Position   */
#define RCC_CFGR3_I2C2SW_Pos         (5U)                    /* CFGR3 Register I2C2SW Bit Position   */
#define RCC_CFGR3_I2C3SW_Pos         (6U)                    /* CFGR3 Register I2C3SW Bit Position   */
#define RCC_CFGR3_TIM1SW_Pos         (8U)                    /* CFGR3 Register TIM1SW Bit Position   */
#define RCC_CFGR3_TIM8SW_Pos         (9U)                    /* CFGR3 Register TIM8SW Bit Position   */
#define RCC_CFGR3_TIM15SW_Pos        (10U)                   /* CFGR3 Register TIM15SW Bit Position  */
#define RCC_CFGR3_TIM16SW_Pos        (11U)                   /* CFGR3 Register TIM16SW Bit Position  */
#define RCC_CFGR3_TIM17SW_Pos        (13U)                   /* CFGR3 Register TIM17SW Bit Position  */
#define RCC_CFGR3_TIM20SW_Pos        (15U)                   /* CFGR3 Register TIM20SW Bit Position  */
#define RCC_CFGR3_USART2SW_Pos       (16U)                   /* CFGR3 Register USART2SW Bit Position */
#define RCC_CFGR3_USART3SW_Pos       (18U)                   /* CFGR3 Register USART3SW Bit Position */
#define RCC_CFGR3_UART4SW_Pos        (20U)                   /* CFGR3 Register UART4SW Bit Position  */
#define RCC_CFGR3_UART5SW_Pos        (22U)                   /* CFGR3 Register UART5SW Bit Position  */
#define RCC_CFGR3_TIM2SW_Pos         (24U)                   /* CFGR3 Register TIM2SW Bit Position   */
#define RCC_CFGR3_TIM34SW_Pos        (25U)                   /* CFGR3 Register TIM34SW Bit Position  */


/*
 * RCC_CFGR3 Register Bit Mask Macros
 *
 */


#define RCC_CFGR3_USART1SW_PCLK_Mask       (RCC_CFGR3_USART1SW_PCLK<<RCC_CFGR3_USART1SW_Pos)          /* CFGR3 Register USART1 Clock Source Selection Bit Masks */
#define RCC_CFGR3_USART1SW_SYSCLK_Mask     (RCC_CFGR3_USART1SW_SYSCLK<<RCC_CFGR3_USART1SW_Pos)
#define RCC_CFGR3_USART1SW_LSE_Mask        (RCC_CFGR3_USART1SW_LSE<<RCC_CFGR3_USART1SW_Pos)
#define RCC_CFGR3_USART1SW__HSI_Mask       (RCC_CFGR3_USART1SW_HSI<<RCC_CFGR3_USART1SW_Pos)

#define RCC_CFGR3_I2C1SW_Mask              (0x1<<RCC_CFGR3_I2C1SW_Pos)                               /* CFGR3 Register I2C1 Clock Source Selection Bit Mask */
#define RCC_CFGR3_I2C2SW_Mask              (0x1<<RCC_CFGR3_I2C2SW_Pos)                               /* CFGR3 Register I2C2 Clock Source Selection Bit Mask */
#define RCC_CFGR3_I2C3SW_Mask              (0x1<<RCC_CFGR3_I2C3SW_Pos)                               /* CFGR3 Register I2C3 Clock Source Selection Bit Mask */

#define RCC_CFGR3_TIM1SW_Mask              (0x1<<RCC_CFGR3_TIM1SW_Pos)                               /* CFGR3 Register TIMER1 Clock Source Selection Bit Mask  */
#define RCC_CFGR3_TIM8SW_Mask              (0x1<<RCC_CFGR3_TIM8SW_Pos)                               /* CFGR3 Register TIMER8 Clock Source Selection Bit Mask  */
#define RCC_CFGR3_TIM15SW_Mask             (0x1<<RCC_CFGR3_TIM15SW_Pos)                              /* CFGR3 Register TIMER15 Clock Source Selection Bit Mask */
#define RCC_CFGR3_TIM16SW_Mask             (0x1<<RCC_CFGR3_TIM16SW_Pos)                              /* CFGR3 Register TIMER16 Clock Source Selection Bit Mask */
#define RCC_CFGR3_TIM17SW_Mask             (0x1<<RCC_CFGR3_TIM17SW_Pos)                              /* CFGR3 Register TIMER17 Clock Source Selection Bit Mask */
#define RCC_CFGR3_TIM20SW_Mask             (0x1<<RCC_CFGR3_TIM20SW_Pos)                              /* CFGR3 Register TIMER20 Clock Source Selection Bit Mask */

#define RCC_CFGR3_USART2SW_PCLK_Mask       (RCC_CFGR3_USART2SW_PCLK<<RCC_CFGR3_USART2SW_Pos)         /* CFGR3 Register USART2 Clock Source Selection Bit Masks */
#define RCC_CFGR3_USART2SW_SYSCLK_Mask     (RCC_CFGR3_USART2SW_SYSCLK<<RCC_CFGR3_USART2SW_Pos)
#define RCC_CFGR3_USART2SW_LSE_Mask        (RCC_CFGR3_USART2SW_LSE<<RCC_CFGR3_USART2SW_Pos)
#define RCC_CFGR3_USART2SW__HSI_Mask       (RCC_CFGR3_USART2SW_HSI<<RCC_CFGR3_USART2SW_Pos)

#define RCC_CFGR3_USART3SW_PCLK_Mask       (RCC_CFGR3_USART3SW_PCLK<<RCC_CFGR3_USART3SW_Pos)         /* CFGR3 Register USART3 Clock Source Selection Bit Masks */
#define RCC_CFGR3_USART3SW_SYSCLK_Mask     (RCC_CFGR3_USART3SW_SYSCLK<<RCC_CFGR3_USART3SW_Pos)
#define RCC_CFGR3_USART3SW_LSE_Mask        (RCC_CFGR3_USART3SW_LSE<<RCC_CFGR3_USART3SW_Pos)
#define RCC_CFGR3_USART3SW__HSI_Mask       (RCC_CFGR3_USART3SW_HSI<<RCC_CFGR3_USART3SW_Pos)

#define RCC_CFGR3_UART4SW_PCLK_Mask        (RCC_CFGR3_UART4SW_PCLK<<RCC_CFGR3_UART4SW_Pos)           /* CFGR3 Register UART4 Clock Source Selection Bit Masks */
#define RCC_CFGR3_UART4SW_SYSCLK_Mask      (RCC_CFGR3_UART4SW_SYSCLK<<RCC_CFGR3_UART4SW_Pos)
#define RCC_CFGR3_UART4SW_LSE_Mask         (RCC_CFGR3_UART4SW_LSE<<RCC_CFGR3_UART4SW_Pos)
#define RCC_CFGR3_UART4SW__HSI_Mask        (RCC_CFGR3_UART4SW_HSI<<RCC_CFGR3_UART4SW_Pos)

#define RCC_CFGR3_UART5SW_PCLK_Mask        (RCC_CFGR3_UART5SW_PCLK<<RCC_CFGR3_UART5SW_Pos)           /* CFGR3 Register UART5 Clock Source Selection Bit Masks */
#define RCC_CFGR3_UART5SW_SYSCLK_Mask      (RCC_CFGR3_UART5SW_SYSCLK<<RCC_CFGR3_UART5SW_Pos)
#define RCC_CFGR3_UART5SW_LSE_Mask         (RCC_CFGR3_UART5SW_LSE<<RCC_CFGR3_UART5SW_Pos)
#define RCC_CFGR3_UART5SW__HSI_Mask        (RCC_CFGR3_UART5SW_HSI<<RCC_CFGR3_UART5SW_Pos)

#define RCC_CFGR3_TIM2SW_Mask              (0x1<<RCC_CFGR3_TIM2SW_Pos)                               /* CFGR3 Register TIMER2 Clock Source Selection Bit Mask  */
#define RCC_CFGR3_TIM34SW_Mask             (0x1<<RCC_CFGR3_TIM34SW_Pos)                              /* CFGR3 Register TIMER34 Clock Source Selection Bit Mask */


/*
 * RCC_CFGR3 Register Enable Bit Macros
 *
 */


#define RCC_CFGR3_USART1SW_PCLKEN       RCC_CFGR3_USART1SW_PCLK_Mask
#define RCC_CFGR3_USART1SW_SYSCLKEN     RCC_CFGR3_USART1SW_SYSCLK_Mask
#define RCC_CFGR3_USART1SW_LSEEN        RCC_CFGR3_USART1SW_LSE_Mask
#define RCC_CFGR3_USART1SW_HSIEN        RCC_CFGR3_USART1SW__HSI_Mask

#define RCC_CFGR3_I2C1SWEN              RCC_CFGR3_I2C1SW_Mask
#define RCC_CFGR3_I2C2SWEN              RCC_CFGR3_I2C2SW_Mask
#define RCC_CFGR3_I2C3SWEN              RCC_CFGR3_I2C3SW_Mask

#define RCC_CFGR3_TIM1SWEN              RCC_CFGR3_TIM1SW_Mask
#define RCC_CFGR3_TIM8SWEN              RCC_CFGR3_TIM8SW_Mask
#define RCC_CFGR3_TIM15SWEN             RCC_CFGR3_TIM15SW_Mask
#define RCC_CFGR3_TIM16SWEN             RCC_CFGR3_TIM16SW_Mask
#define RCC_CFGR3_TIM17SWEN             RCC_CFGR3_TIM17SW_Mask
#define RCC_CFGR3_TIM20SWEN             RCC_CFGR3_TIM20SW_Mask

#define RCC_CFGR3_USART2SW_PCLKEN       RCC_CFGR3_USART2SW_PCLK_Mask
#define RCC_CFGR3_USART2SW_SYSCLKEN     RCC_CFGR3_USART2SW_SYSCLK_Mask
#define RCC_CFGR3_USART2SW_LSEEN        RCC_CFGR3_USART2SW_LSE_Mask
#define RCC_CFGR3_USART2SW_HSIEN        RCC_CFGR3_USART2SW__HSI_Mask

#define RCC_CFGR3_USART3SW_PCLKEN       RCC_CFGR3_USART3SW_PCLK_Mask
#define RCC_CFGR3_USART3SW_SYSCLKEN     RCC_CFGR3_USART3SW_SYSCLK_Mask
#define RCC_CFGR3_USART3SW_LSEEN        RCC_CFGR3_USART3SW_LSE_Mask
#define RCC_CFGR3_USART3SW_HSIEN        RCC_CFGR3_USART3SW__HSI_Mask

#define RCC_CFGR3_UART4SW_PCLKEN        RCC_CFGR3_UART4SW_PCLK_Mask
#define RCC_CFGR3_UART4SW_SYSCLKEN      RCC_CFGR3_UART4SW_SYSCLK_Mask
#define RCC_CFGR3_UART4SW_LSEEN         RCC_CFGR3_UART4SW_LSE_Mask
#define RCC_CFGR3_UART4SW_HSIEN         RCC_CFGR3_UART4SW__HSI_Mask

#define RCC_CFGR3_UART5SW_PCLKEN        RCC_CFGR3_UART5SW_PCLK_Mask
#define RCC_CFGR3_UART5SW_SYSCLKEN      RCC_CFGR3_UART5SW_SYSCLK_Mask
#define RCC_CFGR3_UART5SW_LSEEN         RCC_CFGR3_UART5SW_LSE_Mask
#define RCC_CFGR3_UART5SW_HSIEN         RCC_CFGR3_UART5SW__HSI_Mask

#define RCC_CFGR3_TIM2SWEN              RCC_CFGR3_TIM2SW_Mask
#define RCC_CFGR3_TIM34SWEN             RCC_CFGR3_TIM34SW_Mask







#endif /* INC_STM32F303XX_H_ */
