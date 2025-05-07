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

	M_Undead(const M_Undead& tmpobj) :Monster(tmpobj)
	{
		std::cout << "调用了 M_Undead 类的拷贝构造函数创建了一只亡灵类怪物" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Undead(*this); //调用拷贝构造函数
	}
};

