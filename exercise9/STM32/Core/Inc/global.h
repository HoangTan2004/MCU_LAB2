/*
 * global.h
 *
 *  Created on: Sep 24, 2024
 *      Author: HP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define	INIT	4
#define SEG0	0
#define SEG1	1
#define SEG2	2
#define SEG3	3

extern int status;

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

extern int TIME_7SEG;

extern int hour;
extern int minute;
extern int second;

#endif /* INC_GLOBAL_H_ */
