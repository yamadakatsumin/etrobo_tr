/*************************************************
 *	ColorJudgement.c
 *	Created on: 2014/01/03 11:37
 *	Implementation of the Class Colorjudgement
 *	Original author: hiroyuki.watanabe
 *************************************************/
 
#include "ColorJudgement.h"
#define LIGHT_BLACK	560	// ���F�̌��Z���T�l


// ����������
void ColorJudgement_init(ColorJudgement* this)
{
	this->threshold = LIGHT_BLACK;
}

// �H�ʂ̐F�𔻒肷��
COLOR ColorJudgement_judgeColor(ColorJudgement* this)
{
	// ���Z���T����̎擾�l������
	// ���ȏ�ł���΁u���v���A
	// �����łȂ���΁u���ȊO�v��Ԃ�
	if(LightSensor_getBrightness(this->lightSensor) >= this->threshold)
	{
		return BLACK;
	}
	else
	{
		return NON_BLACK;
	}
}
