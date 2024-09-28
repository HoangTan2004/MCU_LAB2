/*
 * software_timer.c
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#include "software_timer.h"

// Initial for timer 1
int timer1_flag = 0;
int timer1_counter = 0;

// Initial for timer 2
int timer2_flag = 0;
int timer2_counter = 0;

// Initial for timer 3
int timer3_flag = 0;
int timer3_counter = 0;


//	@brief	Set time for the first timer
//	@param	Time
void setTimer1(int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

//	@brief	Set time for the second timer
//	@param	Time
void setTimer2(int duration) {
	timer2_counter = duration;
	timer2_flag = 0;
}

//	@brief	Set time for the third timer
//	@param	Time
void setTimer3(int duration) {
	timer3_counter = duration;
	timer3_flag = 0;
}

//	@brief	Update the status of the timer
//	@param	None
void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}

	if (timer2_counter > 0) {
		timer2_counter--;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}

	if (timer3_counter > 0) {
		timer3_counter--;
		if (timer3_counter <= 0) {
			timer3_flag = 1;
		}
	}
}
