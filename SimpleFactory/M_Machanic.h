#pragma once
#include "Monster.h"

/**
* @brief ����е�ࡱ����
*/
class M_Machanic : public Monster
{
public:
	M_Machanic(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ��е������������������" << std::endl;
	}
};

