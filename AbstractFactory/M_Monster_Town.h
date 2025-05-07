#pragma once
#include "Monster.h"

/**
* 下面的类是城镇地区的怪物们
*/

class M_Undead_Town :public Monster
{
public:
	M_Undead_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只城镇的亡灵类怪物来到了这个世界" << std::endl;
	}
};

class M_Element_Town :public Monster
{
public:
	M_Element_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只城镇的元素类怪物来到了这个世界" << std::endl;
	}
};

class M_Machanic_Town :public Monster
{
public:
	M_Machanic_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只城镇的机械类怪物来到了这个世界" << std::endl;
	}
};