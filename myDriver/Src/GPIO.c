#include "stm32f303xx.h"
#include "GPIO.h"
#include <stdint.h>
#define _IO volatile


void GPIO_Init(GPIO_Typedef_t *GPIOx,GPIO_Config_t *GPIO_Config){

	uint32_t bitPos;
	uint32_t tempVal= 0;;
	uint32_t reelVal=0;

	for(bitPos=0;bitPos<16;bitPos++){

		tempVal=(0x1<<bitPos);
		reelVal= (uint32_t) (GPIO_Config->pinNumber)& tempVal;

		if(tempVal==reelVal){

			uint32_t modVal=GPIOx->MODER;
			modVal &= ~(0x3U << ( bitPos * 2 ));
			modVal |= (GPIO_Config->Mode << ( bitPos * 2 ));
			GPIOx->MODER= modVal;

			if(GPIO_Config->Mode==GPIO_MODE_OUTPUT || GPIO_Config->Mode == GPIO_MODE_ALTERNATE){

				/*Output Type Config*/
				modVal=GPIOx->OTYPER;
				modVal &= ~(0x1U<<bitPos);
				modVal |= (GPIO_Config->OTYPE<<bitPos);
				GPIOx->OTYPER=modVal;

				/*Output Speed Config*/
				modVal=GPIOx->OSPEEDR;
				modVal &= ~(0x3U << ( bitPos * 2) );
				modVal |= (GPIO_Config->OSpeed << ( bitPos * 2) );
				GPIOx->OSPEEDR=modVal;
			}

			/*Output PUPD Config*/
			modVal=GPIOx->PUPDR;
			modVal&=~(0x3U << ( bitPos * 2) );
			modVal|=(GPIO_Config->PUPD << ( bitPos * 2) );
			GPIOx->PUPDR=modVal;



		}

	}


}

/*
 * @brief GPIO Pins can makes HIGH or LOW
 *
 * @param GPIOx Port Address (x:A-F)
 *
 * @param GPIO Pin Number    (0-15)
 *
 * @param GPIO Pin Statement SET or RESET
 *
 * @retval void
 * */

void GPIO_Write_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber,GPIO_Pin_Statement_t pinStatement){


	if(pinStatement==GPIO_Pin_Set){

     GPIOx->BSRR=pinNumber;


	}
	else{

		GPIOx->BSRR=(pinNumber<<16U);
	}




}

/*
 * @brief Reads to pin GPIOx Port
 *
 * @param GPIOx Port Address (x:A-F)
 *
 * @param GPIO Pin Number    (0-15)
 *
 * @retval void
 * */

GPIO_Pin_Statement_t GPIO_Read_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber){

	GPIO_Pin_Statement_t status=GPIO_Pin_Reset;

	if((GPIOx->IDR & pinNumber) != GPIO_Pin_Reset ){


		status=GPIO_Pin_Set;


	}

           return status;


}
/*
 * @brief Toggle to pin GPIOx Port
 *
 * @param GPIOx Port Address (x: A-F)
 *
 * @param GPIO Pin Number    (0-15)
 *
 * @retval void
 * */

void GPIO_Toggle_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber){

	uint32_t status= GPIOx->ODR & pinNumber;
	if(status!=0){

		GPIOx->BSRR=pinNumber<<16U;

	}
	else
		GPIOx->BSRR=pinNumber;
}

/*
 * @brief Lock to pin GPIOx Port
 *
 * @param GPIOx Port Address !!!!!! x is only to be A B D
 *
 * @param GPIO Pin Number    (0-15)
 *
 * @retval void
 * */

void GPIO_Lock_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber){


	uint32_t tempVal= (0x1U<<16U) |pinNumber;

	GPIOx->LCKR=tempVal;     // LCKR[16] '1' | LCKR[15:0]= DATA (pinNumber)
	GPIOx->LCKR=pinNumber;   // LCKR[16] '0' | LCKR[15:0]= DATA (pinNumber)
	GPIOx->LCKR= tempVal;    // LCKR[16] '1' | LCKR[15:0]= DATA (pinNumber)
	tempVal=GPIOx->LCKR;     // Read LCKR Register

}

