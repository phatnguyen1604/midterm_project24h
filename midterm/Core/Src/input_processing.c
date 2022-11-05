#include "main.h"
#include "input_reading.h"
#include "display7Seg.h"
#include "input_processing.h"
#include "timer.h"

#define RES 0
#define INC 1
#define DEC 2

int time;
void INIT()
{
	time=0;
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, SET);
	blinking_flag=1;
	counting_flag=0;
	countdown_flag=1;
}
void blink()
{
	if(blinking_flag==1)
	{
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimerBlink(1000);
	}
}


void fsm_simple_buttons_run(void)
{
	blink();
	if(counting_flag==1)
	{
		if(countdown_flag==1)
		{
			time--;
			if(time==0)	time=0;
			setTimerCountdown(1000);
		}
	}
	if(is_button_pressed(RES))
	{
		time=0;
		setTimerCount(10000);
	}
	if(is_button_pressed(INC))
	{
		time++;
		if(time>9)
		{
			time=0;
		}
		setTimerCount(10000);
	}
	if(is_button_pressed(DEC))
	{
		time--;
		if(time<0)
		{
			time=9;
		}
		setTimerCount(10000);
	}
	display7SEG(time);

}
