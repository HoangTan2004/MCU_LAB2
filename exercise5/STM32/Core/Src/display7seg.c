/*
 * display7seg.c
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#include "main.h"
#include "global.h"
#include "display7seg.h"

//	@brief	Generate value for led_buffer
//	@param	None
void updateClockBuffer() {
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

//	@brief	Display 7-segment LEDs with led_buffer
//	@param	Index of led_buffer
void update7SEG(int index) {
	if (index < MAX_LED && index >= 0){
		setEnableSignal(index);
		display7SEG(led_buffer[index]);
	}
}

//	@brief	Set enable signal for 7-segment LED
//	@param	Type of 7-segment LED
void setEnableSignal(int type) {
	switch (type) {
	case SEG0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		break;
	case SEG1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		break;
	case SEG2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		break;
	case SEG3:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break;
	default:
		break;
	}
}

//	@brief	Display the 7-segment LED
//	@param	Number from 0 to 9
void display7SEG(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin|LED7_d_Pin|LED7_e_Pin|LED7_f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_g_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_d_Pin|LED7_e_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, LED7_b_Pin|LED7_c_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_d_Pin|LED7_e_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_c_Pin|LED7_f_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin|LED7_d_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_e_Pin|LED7_f_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_d_Pin|LED7_e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, LED7_b_Pin|LED7_c_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_c_Pin|LED7_d_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_b_Pin|LED7_e_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_c_Pin|LED7_d_Pin|LED7_e_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_b_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_d_Pin|LED7_e_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin|LED7_d_Pin|LED7_e_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin|LED7_d_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_e_Pin, GPIO_PIN_SET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, LED7_a_Pin|LED7_b_Pin|LED7_c_Pin|LED7_d_Pin|LED7_e_Pin|LED7_f_Pin|LED7_g_Pin, GPIO_PIN_SET);
		break;
	}
}
