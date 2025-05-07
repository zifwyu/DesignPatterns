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

	M_Machanic(const M_Machanic& tmpobj) :Monster(tmpobj)
	{
		std::cout << "调用了 M_Machanic 类的拷贝构造函数创建了一只机械类怪物" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Machanic(*this); //调用拷贝构造函数
	}
};

