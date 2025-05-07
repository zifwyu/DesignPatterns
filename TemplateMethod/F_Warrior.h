#pragma once
#include "Fighter.h"

/**
* @brief “战士”类
*/
class F_Warrior : public Fighter
{
public:
	F_Warrior(int lift, int magic, int attack)
		: Fighter(lift, magic, attack) { }

private:
	// 判断是否能使用技能“燃烧”
	virtual bool CanUseJN() override
	{
		if (m_lift < 300)
		{
			return false;
		}
		return true;
	}

	// 释放“燃烧”技能对敌人的影响
	virtual void EffectEnemy() override
	{
		std::cout << "战士角色_让所有敌人每人失去500点生命值" << std::endl;
	}

	// 释放“燃烧”技能对自己的影响
	virtual void EffectSelf() override
	{
		std::cout << "战士角色_自身失去300点生命值" << std::endl;
		m_lift -= 300;
	}
};

