/*
 * matrix_led.c
 *
 *  Created on: Oct 2, 2024
 *      Author: HP
 */

#include "matrix_led.h"
#include "main.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 8;
uint8_t matrix_buffer[8] = {0b11111111,
							0b11000000,
							0b10000000,
							0b00110011,
							0b00110011,
							0b10000000,
							0b11000000,
							0b11111111};

void updateColMatrix(int index) {
	switch (index) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM3_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM5_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM6_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM5_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM7_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, ENM7_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

void updateLEDBuffer(int index) {
	if (index >= 0 && index <= MAX_LED_MATRIX) {
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, (GPIO_PinState)((matrix_buffer[index] >> 7) & 0x01));
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, (GPIO_PinState)((matrix_buffer[index] >> 6) & 0x01));
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, (GPIO_PinState)((matrix_buffer[index] >> 5) & 0x01));
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, (GPIO_PinState)((matrix_buffer[index] >> 4) & 0x01));
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, (GPIO_PinState)((matrix_buffer[index] >> 3) & 0x01));
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, (GPIO_PinState)((matrix_buffer[index] >> 2) & 0x01));
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, (GPIO_PinState)((matrix_buffer[index] >> 1) & 0x01));
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, (GPIO_PinState)((matrix_buffer[index]) & 0x01));
	}
}
