/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void display7SEG(int num){
  	  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
  	  if (num == 0 ){
  		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
  	  }
  	  else if (num == 1){
  		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
  		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
  		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
  	  }
  	  else if (num == 2){
  		  HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
  	  }
  	  else if (num == 3){
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
  	  }
  	  else if (num == 4){
  		  HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
  		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  	  }
  	  else if (num == 5){
  		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  	  }
  	  else if (num == 6){
  		  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
  	  }
  	  else if (num == 7){
  		  HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
  		  HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
  	  }
  	  else if (num == 8){

  	  }
  	  else if (num == 9){
  		  HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
  	  }
    }
  void display7SEG2(int num){
  	  HAL_GPIO_WritePin(LED_A2_GPIO_Port, LED_A2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_B2_GPIO_Port, LED_B2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_C2_GPIO_Port, LED_C2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_F2_GPIO_Port, LED_F2_Pin, RESET);
  	  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, RESET);
  	  if (num == 0 ){
  		  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, SET);
  	  }
  	  else if (num == 1){
  		  HAL_GPIO_WritePin(LED_A2_GPIO_Port, LED_A2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F2_GPIO_Port, LED_F2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, SET);
  	  }
  	  else if (num == 2){
  		  HAL_GPIO_WritePin(LED_C2_GPIO_Port, LED_C2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F2_GPIO_Port, LED_F2_Pin, SET);
  	  }
  	  else if (num == 3){
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F2_GPIO_Port, LED_F2_Pin, SET);
  	  }
  	  else if (num == 4){
  		  HAL_GPIO_WritePin(LED_A2_GPIO_Port, LED_A2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  	  }
  	  else if (num == 5){
  		  HAL_GPIO_WritePin(LED_B2_GPIO_Port, LED_B2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  	  }
  	  else if (num == 6){
  		  HAL_GPIO_WritePin(LED_B2_GPIO_Port, LED_B2_Pin, SET);
  	  }
  	  else if (num == 7){
  		  HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_F2_GPIO_Port, LED_F2_Pin, SET);
  		  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, SET);
  	  }
  	  else if (num == 8){

  	  }
  	  else if (num == 9){
  		  HAL_GPIO_WritePin(LED_E2_GPIO_Port, LED_E2_Pin, SET);
  	  }
    }
 int time = 0;
 int status = 0;
// status = 0(red1);	status = 1(green1);	status = 2(yellow1)
//display7SEG2 to display LED7SEGMENT2
  while (1)
  {
	  if(status == 0){
		  if(time < 3 ){
		      HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
			  display7SEG(5-time);
			  display7SEG2(3-time);
			  time++;

		  }
		  else if(time >=3 && time < 4){
			  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
			  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
			  display7SEG(5-time);
			  display7SEG2(5-time);
			  time++;

		  }
		  else {
			 display7SEG(5-time);
			 display7SEG2(5-time);
		     time = 0;
		     status = 1;
		  }

	  }
	  else if(status == 1){
		  if(time<2){
			  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
			  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
			  display7SEG(3-time);
			  display7SEG2(5-time);
			  time++;
		  }
		  else {
			  display7SEG(3-time);
			  display7SEG2(5-time);
			  time = 0;
			  status = 2;
		  }
	  }
	  else if(status == 2){
		  if(time<1){
		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
		  display7SEG(2-time);
		  display7SEG2(2-time);
		  time++;
		  }
		  else{
			  display7SEG(2-time);
			  display7SEG2(2-time);
			  time=0;
			  status = 0;
		  }
	  }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D2_Pin
                          |LED_E2_Pin|LED_F2_Pin|LED_G2_Pin|LED_D_Pin
                          |LED_E_Pin|LED_F_Pin|LED_G_Pin|LED_A2_Pin
                          |LED_B2_Pin|LED_C2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin */
  GPIO_InitStruct.Pin = LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_A_Pin LED_B_Pin LED_C_Pin LED_D2_Pin
                           LED_E2_Pin LED_F2_Pin LED_G2_Pin LED_D_Pin
                           LED_E_Pin LED_F_Pin LED_G_Pin LED_A2_Pin
                           LED_B2_Pin LED_C2_Pin */
  GPIO_InitStruct.Pin = LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D2_Pin
                          |LED_E2_Pin|LED_F2_Pin|LED_G2_Pin|LED_D_Pin
                          |LED_E_Pin|LED_F_Pin|LED_G_Pin|LED_A2_Pin
                          |LED_B2_Pin|LED_C2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
