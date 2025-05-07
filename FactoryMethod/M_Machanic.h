#pragma once
#include "Monster.h"

/**
* @brief “机械类”怪物
*/
class M_Machanic : public Monster
{
public:
	M_Machanic(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只机械类怪物来到了这个世界" << std::endl;
	}
};

