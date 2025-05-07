#pragma once
#include "Monster.h"

/**
* 下面的类是沼泽地区的怪物们
*/

class M_Undead_Swamp :public Monster
{
public:
	M_Undead_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只沼泽的亡灵类怪物来到了这个世界" << std::endl;
	}
};

class M_Element_Swamp :public Monster
{
public:
	M_Element_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只沼泽的元素类怪物来到了这个世界" << std::endl;
	}
};

class M_Machanic_Swamp :public Monster
{
public:
	M_Machanic_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只沼泽的机械类怪物来到了这个世界" << std::endl;
	}
};