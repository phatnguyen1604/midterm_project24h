/*
 * display7Seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: 84977
 */


#include "display7Seg.h"
#include "main.h"
void display7SEG(int time)
{
	if(time==0)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 1);
	}
	else if(time==1)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 1);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 1);
	}
	else if(time==2)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 1);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==3)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==4)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 1);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==5)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 1);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==6)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 1);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==7)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 1);
	}
	else if(time==8)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
	else if(time==9)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, 0);
	}
}
