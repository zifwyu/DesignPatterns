#pragma once

#include <iostream>

/**
* @brief 所有“怪物”的父类
*/
class Monster
{
public:
	Monster(int lift, int magic, int attack)
		: m_lift(lift), m_magic(magic), m_attack(attack) 
	{
	}

	virtual ~Monster() {}
protected:
	//怪物的属性
	int m_lift; //生命值
	int m_magic; //魔法值
	int m_attack; //攻击力
};

