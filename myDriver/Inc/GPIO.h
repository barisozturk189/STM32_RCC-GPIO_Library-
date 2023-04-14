
#ifndef INC_GPIO_H_
#define INC_GPIO_H_
#include "stm32f303xx.h"
#include <stdint.h>
#define _IO volatile

/*
 * @def_group GPIO_Pins
 *
 * */
#define GPIO_PIN_0           (uint16_t)(0x0001)
#define GPIO_PIN_1           (uint16_t)(0x0002)
#define GPIO_PIN_2           (uint16_t)(0x0004)
#define GPIO_PIN_3           (uint16_t)(0x0008)
#define GPIO_PIN_4           (uint16_t)(0x0010)
#define GPIO_PIN_5           (uint16_t)(0x0020)
#define GPIO_PIN_6           (uint16_t)(0x0040)
#define GPIO_PIN_7           (uint16_t)(0x0080)
#define GPIO_PIN_8           (uint16_t)(0x0100)
#define GPIO_PIN_9           (uint16_t)(0x0200)
#define GPIO_PIN_10          (uint16_t)(0x0400)
#define GPIO_PIN_11          (uint16_t)(0x0800)
#define GPIO_PIN_12          (uint16_t)(0x1000)
#define GPIO_PIN_13          (uint16_t)(0x2000)
#define GPIO_PIN_14          (uint16_t)(0x4000)
#define GPIO_PIN_15          (uint16_t)(0x8000)

/*
 * @def_group GPIO_Pin_Modes
 *
 * */

#define GPIO_MODE_INPUT          (0x00U)
#define GPIO_MODE_OUTPUT         (0x01U)
#define GPIO_MODE_ALTERNATE      (0x02U)
#define GPIO_MODE_ANALOG         (0x03U)

/*
 * @def_group GPIO_Otype_Modes
 *
 * */

#define GPIO_OTYPE_PP            (0x00U)
#define GPIO_OTYPE_OD            (0x01U)

/*
 * @def_group GPIO_OSpeed_Modes
 *
 * */

#define GPIO_SPEED_LOW           (0x00U)
#define GPIO_SPEED_MEDIUM        (0x01U)
#define GPIO_SPEED_HIGH          (0x03U)

/*
 * @def_group GPIO_PuPd_Modes
 *
 * */

#define GPIO_PUPD_NOPULL        (0x00U)
#define GPIO_PUPD_PULLUP        (0x01U)
#define GPIO_PUPD_PULLD         (0x02U)

/*
 * @def_group GPIO_AF_Modes
 *
 * */

#define GPIO_ALTERNATE_AF0       (0x00U)
#define GPIO_ALTERNATE_AF1       (0x01U)
#define GPIO_ALTERNATE_AF2       (0x02U)
#define GPIO_ALTERNATE_AF3       (0x03U)
#define GPIO_ALTERNATE_AF4       (0x04U)
#define GPIO_ALTERNATE_AF5       (0x05U)
#define GPIO_ALTERNATE_AF6       (0x06U)
#define GPIO_ALTERNATE_AF7       (0x07U)
#define GPIO_ALTERNATE_AF8       (0x08U)
#define GPIO_ALTERNATE_AF9       (0x09U)
#define GPIO_ALTERNATE_AF10      (0x0AU)
#define GPIO_ALTERNATE_AF11      (0x0BU)
#define GPIO_ALTERNATE_AF12      (0x0CU)
#define GPIO_ALTERNATE_AF13      (0x0DU)
#define GPIO_ALTERNATE_AF14      (0x0EU)
#define GPIO_ALTERNATE_AF15      (0x0FU)



typedef enum{

	GPIO_Pin_Reset=0x0u,
	GPIO_Pin_Set=!GPIO_Pin_Reset

}GPIO_Pin_Statement_t;



typedef struct{

    _IO uint32_t pinNumber;  // GPIO_Pins
	_IO uint32_t Mode;       // GPIO_Pin_Modes
	_IO uint32_t OTYPE;      // GPIO_Otype_Modes
	_IO uint32_t OSpeed;     // GPIO_OSpeed_Modes
	_IO uint32_t PUPD;       // GPIO_PuPd_Modes
	_IO uint16_t ALTERNATEL; // GPIO_AF_Modes
	_IO uint16_t ALTERNATEH; // GPIO_AF_Modes

}GPIO_Config_t;

void GPIO_Init(GPIO_Typedef_t *GPIOx,GPIO_Config_t *GPIO_Config);
void GPIO_Write_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber,GPIO_Pin_Statement_t pinStatement);
GPIO_Pin_Statement_t GPIO_Read_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber);
void GPIO_Toggle_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber);
void GPIO_Lock_Pin(GPIO_Typedef_t *GPIOx,uint16_t pinNumber);


#endif /* INC_GPIO_H_ */
