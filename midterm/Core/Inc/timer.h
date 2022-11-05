/*
 * timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: 84977
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int blinking_flag;
extern int counting_flag;
extern int blinking_counter;
extern int counting_counter;
extern int press_flag;
extern int press_counter;
extern int countdown_counter;
extern int countdown_flag;
void setTimerBlink(int duration);
void setTimerCount(int duration);
void setTimeDebounce(int duration);
void setTimerCountdown(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
