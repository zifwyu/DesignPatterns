#pragma once
#include "Monster.h"

/**
* @brief �������ࡱ����
*/
class M_Undead : public Monster
{
public:
	M_Undead(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ����������������������" << std::endl;
	}
};

