/*
 * global.c
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#include "global.h"

int status = SEG0;

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4];

int TIME_7SEG = 25;

int hour = 15, minute = 8, second = 50;
