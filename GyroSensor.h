/*************************************************
 *	GyroSensor.h
 *	Created on: 2014/01/03 12:08
 *	Implementation of the Class GyroSensor
 *	Original auther: hiroyuki.watanabe
 *************************************************/

#if !defined(EA_C2A0622D_F813_42cd_9E79_9CA85E572752__INCLUDED_)
#define EA_C2A0622D_F813_42cd_9E79_9CA85E572752__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// ������ێ����邽�߂̍\���̂̒�`
typedef struct GyroSensor
{
	unsigned int offset;
	SENSOR_PORT_T inputPort;
} GyroSensor;

// ���J����
void GyroSensor_init(GyroSensor* this, SENSOR_PORT_T inputPort);
unsigned int GyroSensor_getAngularVelocity(GyroSensor* this);
unsigned int GyroSensor_getOffset(GyroSensor* this);

#endif /*!defined(EA_C2A0622D_F813_42cd_9E79_9CA85E572752__INCLUDED_)*/

