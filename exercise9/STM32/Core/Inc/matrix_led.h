/*
 * matrix_led.h
 *
 *  Created on: Oct 2, 2024
 *      Author: HP
 */

#ifndef INC_MATRIX_LED_H_
#define INC_MATRIX_LED_H_

#include "main.h"

const int MAX_LED_MATRIX;
int index_led_matrix;
uint8_t matrix_buffer[8];
void updateColMatrix(int index);
void updateLEDBuffer(int index);

#endif /* INC_MATRIX_LED_H_ */
