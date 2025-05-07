#pragma once
#include "Fighter.h"

/**
* @brief “法师”类
*/
class F_Mage : public Fighter
{
public:
	F_Mage(int lift, int magic, int attack)
		: Fighter(lift, magic, attack) {
	}

private:
	// 判断是否能使用技能“燃烧”
	virtual bool CanUseJN() override
	{
		if (m_magic < 100)
		{
			return false;
		}
		return true;
	}

	// 释放“燃烧”技能对敌人的影响
	virtual void EffectEnemy() override
	{
		std::cout << "法师角色_让所有敌人每人失去650点生命值" << std::endl;
	}

	// 释放“燃烧”技能对自己的影响
	virtual void EffectSelf() override
	{
		std::cout << "法师角色_自身失去100点魔法值" << std::endl;
		m_magic -= 100;
	}
};

