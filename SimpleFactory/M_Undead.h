#pragma once
#include "Monster.h"

/**
* @brief “亡灵类”怪物
*/
class M_Undead : public Monster
{
public:
	M_Undead(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只亡灵类怪物来到了这个世界" << std::endl;
	}
};

