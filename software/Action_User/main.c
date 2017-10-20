/**
******************************************************************************
* @file	    main.c
* @author	  Action
* @version  V1.0.0
* @date	    2017/07/24
* @brief	  Whirling Death(死亡旋风)...
******************************************************************************
* @attention
*			None
******************************************************************************/
#include "config.h"
Robot_t gRobot={0};
//#define TEST 
extern float Yxpos,Yypos,Yangle,avel;
int main(void)
{
	//int OSCPUUsage=0; 
	static int openTime=0;
	int left=0;
	int right=0;
	int time=0;
	robotInit();
	USART_OUT(UART5,"initsucess\r\n");
	GPIO_ResetBits(GPIOE,GPIO_Pin_7);
 // while(LaserStart());
	//driveGyro();
  while (1)
  {
    while (getTimeFlag())                              //10ms执行进入一次
    {
				USART_OUT(UART5,"%d\t",(int)gRobot.walk_t.left.real);
				USART_OUT(UART5,"%d\t",(int)gRobot.walk_t.right.real);
			//	USART_OUT(UART5,"%d\t",(int)gRobot.walk_t.pos.angle);
			//	USART_OUTF(gRobot.walk_t.pos.x);
			  USART_OUT(UART5,"%d\t",(int)gRobot.walk_t.pos.y);
				USART_OUT(UART5,"%d\t",(int)gRobot.walk_t.left.aim);
				USART_OUT(UART5,"%d\r\n",(int)gRobot.time);
			//	USART_OUT_CHAR("\r\n");
				//MotorRead(); 
			 // AngleRoute(0);
			if(Dis(0,0,gRobot.walk_t.pos.x,gRobot.walk_t.pos.y)>12000)
			{
				elmo_Disable(CAN2, 1);
				elmo_Disable(CAN2, 2);
			}
 		}	
	//OSCPUUsage=getTimeCount();
}
}