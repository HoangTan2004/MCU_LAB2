/*
 * multiLED.c
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#include "multiLED.h"

//	@brief	Display the 7-segment LED
//	@param	Number from 0 to 9
void display7SEG(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGc_Pin|SEGd_Pin|SEGe_Pin|SEGf_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGg_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGd_Pin|SEGe_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEGb_Pin|SEGc_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGd_Pin|SEGe_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGc_Pin|SEGf_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGc_Pin|SEGd_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGe_Pin|SEGf_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SEGb_Pin|SEGc_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGd_Pin|SEGe_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGc_Pin|SEGd_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGb_Pin|SEGe_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGc_Pin|SEGd_Pin|SEGe_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGb_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGc_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGd_Pin|SEGe_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGc_Pin|SEGd_Pin|SEGe_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, SEGa_Pin|SEGb_Pin|SEGc_Pin|SEGd_Pin|SEGf_Pin|SEGg_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEGe_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
