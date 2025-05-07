#pragma once
#include "Monster.h"

/**
* @brief ���й�����ĸ���
*/
class M_ParFactory
{
public:
	virtual Monster* CreateMonster() = 0; //�����ʵ���������н���
	virtual ~M_ParFactory() {}
};

