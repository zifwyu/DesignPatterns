#pragma once
#include "Monster.h"

/**
* @brief ���й�����ĸ���
*/
class M_ParFactory
{
public:
	//�������������
	virtual Monster* CreateMonster_Undead() = 0;

	//����Ԫ�������
	virtual Monster* CreateMonster_Element() = 0;

	//������е�����
	virtual Monster* CreateMonster_Machanic() = 0;

	virtual ~M_ParFactory() {}
};