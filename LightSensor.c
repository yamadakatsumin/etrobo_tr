/*************************************************
 *	LightSensor.c
 *	Created on: 2014/01/03 12:23
 *	Implementation of the Class LightSensor
 *	Original auther: hiroyuki.watanabe
 *************************************************/

#include "LightSensor.h"


void LightSensor_init(LightSensor* this, SENSOR_PORT_T inputPort)
{
	this->inputPort = inputPort;
	
}

// ‹P“x‚ð“¾‚é
unsigned int LightSensor_getBrightness(LightSensor* this)
{
	return ecrobot_get_light_sensor(this->inputPort);
}

