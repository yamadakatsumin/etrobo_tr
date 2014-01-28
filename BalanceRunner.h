/*************************************************
 *	BalanceRunner.h
 *	Created on: 2014/01/03 11:21
 *	Implementation of the Class BalanceRunner
 *	Original auther: hiroyuki.watanabe
 *************************************************/

#if !defined(EA_C605D693_C4E5_4bae_AA91_AF78605F3679__INCLUDED_)
#define EA_C605D693_C4E5_4bae_AA91_AF78605F3679__INCLUDED_


#include "Direction.h"

#include "GyroSensor.h"
#include "Motor.h"


// ‘®«‚ğ•Û‚·‚é‚½‚ß‚Ì\‘¢‘Ì‚Ì’è‹`
typedef struct BalanceRunner
{
	int forward;
	int turn;
	BOOL isInitialized;
	GyroSensor *gyroSensor;
	Motor *leftMotor;
	Motor *rightMotor;
} BalanceRunner;

// ŒöŠJ‘€ì
void BalanceRunner_init(BalanceRunner* this);
void BalanceRunner_run(BalanceRunner* this, DIRECTION direction);

#endif /*!defined(EA_C605D693_C4E5_4bae_AA91_AF78605F3679__INCLUDED_)*/

