/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EXT_PWR_Pin GPIO_PIN_0
#define EXT_PWR_GPIO_Port GPIOA
#define EXT_PWR_EXTI_IRQn EXTI0_1_IRQn
#define USB_NOE_Pin GPIO_PIN_1
#define USB_NOE_GPIO_Port GPIOA
#define Vbat_Pin GPIO_PIN_0
#define Vbat_GPIO_Port GPIOB
#define Test_out_Pin GPIO_PIN_1
#define Test_out_GPIO_Port GPIOB
#define FnCS_Pin GPIO_PIN_12
#define FnCS_GPIO_Port GPIOB
#define FnWP_Pin GPIO_PIN_8
#define FnWP_GPIO_Port GPIOA
#define FnRST_Pin GPIO_PIN_9
#define FnRST_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
