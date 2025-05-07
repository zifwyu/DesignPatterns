#pragma once
#include "Monster.h"

/**
* 下面的类是山脉地区的怪物们
*/

class M_Undead_Mountain :public Monster
{
public:
	M_Undead_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只山脉的亡灵类怪物来到了这个世界" << std::endl;
	}
};

class M_Element_Mountain :public Monster
{
public:
	M_Element_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只山脉的元素类怪物来到了这个世界" << std::endl;
	}
};

class M_Machanic_Mountain :public Monster
{
public:
	M_Machanic_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只山脉的机械类怪物来到了这个世界" << std::endl;
	}
};