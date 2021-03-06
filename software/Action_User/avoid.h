#ifndef AVOID_H
#define AVOID_H
#include "MotionCard.h"


void CheckOutline(void);  			 //避障检测
void BackCar(void);
void BackCarIn(float angle);     //内环倒车
void BackCarOut(float angle);    //外环倒车
void CornerIn(void);
void CornerOut(void);
int CheckEnemy(void);            //fixtask前检测是否靠墙
int Turn180(void);
void SoundOut(void);//试探对方车是否能动
void CarPointTrans(float x, float y, float angle, Point_t cP[4]);//将定位系统转换为车的四个角落
int CheckStraddle(Point_t c1, Point_t c2, Point_t b1, Point_t b2);//分别传入车的两边的参数和边界点的参数
int CheckIntersect(void);//检查是否与边相交
void Escape(void);
void EscapeCar(void);
int JudgeStick(void);
void LineBack(void);
void AvoidCar(int step);
void FixErr(void);


void SweepJudge(void);
void FixJudge(void);
void ShootJudge(void);//投球检查对方车辆是否靠近
int LaserJudge(void);
void CWalkJudge(void);
void AbnormityJudge(void);
void WalkHandle(void);
void SweepHandle(void);
void CircleTransition(void);
void Square2Transition(void);
void SquareTransition(void);
void AbnormityHandle(void);
void Pointparking2(void);

#endif
