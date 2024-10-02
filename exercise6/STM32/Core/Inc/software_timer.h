/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TIME_CYCLE;

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun1();
void timerRun2();
void timerRun3();

#endif /* INC_SOFTWARE_TIMER_H_ */
