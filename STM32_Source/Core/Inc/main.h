/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define RED_LED_Pin GPIO_PIN_5
#define RED_LED_GPIO_Port GPIOA
#define YELLOW_LED_Pin GPIO_PIN_6
#define YELLOW_LED_GPIO_Port GPIOA
#define GREEN_LED_Pin GPIO_PIN_7
#define GREEN_LED_GPIO_Port GPIOA
#define RED_1_Pin GPIO_PIN_0
#define RED_1_GPIO_Port GPIOB
#define YELLOW_1_Pin GPIO_PIN_1
#define YELLOW_1_GPIO_Port GPIOB
#define GREEN_1_Pin GPIO_PIN_2
#define GREEN_1_GPIO_Port GPIOB
#define YELLOW_4_Pin GPIO_PIN_10
#define YELLOW_4_GPIO_Port GPIOB
#define GREEN_4_Pin GPIO_PIN_11
#define GREEN_4_GPIO_Port GPIOB
#define SEG_a_Pin GPIO_PIN_8
#define SEG_a_GPIO_Port GPIOA
#define SEG_b_Pin GPIO_PIN_9
#define SEG_b_GPIO_Port GPIOA
#define SEG_c_Pin GPIO_PIN_10
#define SEG_c_GPIO_Port GPIOA
#define SEG_d_Pin GPIO_PIN_11
#define SEG_d_GPIO_Port GPIOA
#define SEG_e_Pin GPIO_PIN_12
#define SEG_e_GPIO_Port GPIOA
#define SEG_f_Pin GPIO_PIN_13
#define SEG_f_GPIO_Port GPIOA
#define SEG_g_Pin GPIO_PIN_14
#define SEG_g_GPIO_Port GPIOA
#define RED_2_Pin GPIO_PIN_3
#define RED_2_GPIO_Port GPIOB
#define YELLOW_2_Pin GPIO_PIN_4
#define YELLOW_2_GPIO_Port GPIOB
#define GREEN_2_Pin GPIO_PIN_5
#define GREEN_2_GPIO_Port GPIOB
#define RED_3_Pin GPIO_PIN_6
#define RED_3_GPIO_Port GPIOB
#define YELLOW_3_Pin GPIO_PIN_7
#define YELLOW_3_GPIO_Port GPIOB
#define GREEN_3_Pin GPIO_PIN_8
#define GREEN_3_GPIO_Port GPIOB
#define RED_4_Pin GPIO_PIN_9
#define RED_4_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
