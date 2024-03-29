/*************************************************
 *	Colorjudgement.h
 *	Created on: 2014/01/03 11:48
 *	Imlementation of the Class Colorjudgement
 *	Original auther: hiroyuki.watanabe
 *************************************************/

#if !defined(EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_)
#define EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_

#include "Color.h"
#include "LightSensor.h"


// 属性を保持するための構造体の定義
typedef struct ColorJudgement
{
	unsigned int threshold;
	LightSensor *lightSensor;
} ColorJudgement;

// 公開操作
void ColorJudgement_init(ColorJudgement* this);
COLOR ColorJudgement_judgeColor(ColorJudgement* this);

#endif /*!defined(EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_)*/

