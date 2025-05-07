#pragma once
#include "Monster.h"

/**
* @brief “元素类”怪物
*/
class M_Element : public Monster
{
public:
	M_Element(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "一只元素类怪物来到了这个世界" << std::endl;
	}

	M_Element(const M_Element& tmpobj) :Monster(tmpobj)
	{
		std::cout << "调用了 M_Element 类的拷贝构造函数创建了一只元素类怪物" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Element(*this); //调用拷贝构造函数
	}
};

