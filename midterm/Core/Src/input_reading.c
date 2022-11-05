/*
 * input_reading.c
 *
 *  Created on: Nov 5, 2022
 *      Author: 84977
 */


#include "input_reading.h"
#include "main.h"
#include"timer.h"

#define BUTTON_IS_PRESSED 	GPIO_PIN_RESET
#define BUTTON_IS_RELEASED 	GPIO_PIN_SET

static GPIO_PinState button_status [3]={BUTTON_IS_RELEASED,BUTTON_IS_RELEASED,BUTTON_IS_RELEASED};
static GPIO_PinState KeyReg1 [3];
static GPIO_PinState KeyReg2 [3];
static GPIO_PinState KeyReg3 [3]={BUTTON_IS_RELEASED,BUTTON_IS_RELEASED,BUTTON_IS_RELEASED};

static uint16_t buttonAddress[3]={RESET_Pin,INC_Pin,DEC_Pin};
static GPIO_TypeDef* buttonPort[3]={RESET_GPIO_Port,INC_GPIO_Port,DEC_GPIO_Port};
int DURATION_FOR_AUTO_BUTTON;
int check=0;
void button_reading(void)
{
	for(uint8_t i=0;i<3;i++)
	{
		KeyReg2[i]=KeyReg1[i];
		KeyReg1[i]=HAL_GPIO_ReadPin(buttonPort[i], buttonAddress[i]);
		if(KeyReg1[i]==KeyReg2[i])
		{
			if(KeyReg3[i]!=KeyReg1[i])
			{
				KeyReg3[i]=KeyReg1[i];
				if(KeyReg1[i]==BUTTON_IS_PRESSED)
				{
					button_status[i]=BUTTON_IS_PRESSED;
					if(check==0)
					setTimeDebounce(3000);
					else setTimeDebounce(1000);
				}
				else
				{
					check=0;
				}
			}
			else
			{
				if(press_flag==1)
				{
					KeyReg3[i]=BUTTON_IS_RELEASED;
					check=1;
				}
			}
		}
	}
}

int is_button_pressed(int index)
{
	if(button_status[index]==BUTTON_IS_PRESSED)
	{
		button_status[index]=BUTTON_IS_RELEASED;
		return 1;
	}
	else return 0;
}
