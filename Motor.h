/*************************************************
 *	Motor.h
 *	Created on: 2014/01/03 15:33
 *	Implementationof the Class Motor
 *	Original author: hiroyuki.wtanabe
 *************************************************/

#if !defined(EA_57AC6181_F8E0_460f_9F59_90029C62B716__INCLUDED_)
#define EA_57AC6181_F8E0_460f_9F59_90029C62B716__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// ������ێ����邽�߂̍\���̂̒�`
typedef struct Motor
{
	MOTOR_PORT_T outputPort;
} Motor;

// ���J����
void Motor_init(Motor* this, MOTOR_PORT_T outputPort);
void Motor_resetAngle(Motor* this);
long Motor_getAngle(Motor* this);
void Motor_rotate(Motor* this, int pwm);

#endif /*!defined(EA_57AC6181_F8E0_460f_9F59_90029C62B716__INCLUDED_)*/

