/*
 * timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: 84977
 */

#include "main.h"
#include "input_reading.h"
#include "display7Seg.h"
#include "timer.h"

int Time_cycle=10; //10ms
int blinking_counter=0;
int counting_counter=0;
int blinking_flag=0;
int counting_flag=0;
int press_flag=0;
int press_counter=0;
int countdown_counter=0;
int countdown_flag=0;
void setTimerBlink(int duration)
{
	blinking_counter=duration/10;
	blinking_flag=0;
}
void setTimerCount(int duration)
{
	counting_counter=duration/10;
	counting_flag=0;
}
void setTimeDebounce(int duration)
{
	press_counter=duration/10;
	press_flag=0;
}
void setTimerCountdown(int duration)
{
	countdown_counter=duration/10;
	countdown_flag=0;
}
void timerRun()
{
	if(blinking_counter>0)
	{
		blinking_counter--;
		if(blinking_counter<=0)
		{
			blinking_flag=1;
		}
	}
	if(counting_counter>0)
	{
		counting_counter--;
		if(counting_counter<=0)
		{
			counting_flag=1;
		}
	}
	if(press_counter>0)
	{
		press_counter--;
		if(press_counter<=0)
		{
			press_flag=1;
		}
	}
	if(countdown_counter>0)
	{
		countdown_counter--;
		if(countdown_counter<=0)
		{
			countdown_flag=1;
		}
	}
}
