#pragma once

#include <iostream>

/**
* @brief “战斗者”父类
*/
class Fighter
{
public:
	Fighter(int lift, int magic, int attack)
		: m_lift(lift), m_magic(magic),m_attack(attack)
	{
	}

	virtual ~Fighter() {} //作为父类时，析构函数应为虚函数

	/**
	* @brief 技能“燃烧”
	*/
	void JN_Burn() 
	{
		if (!CanUseJN())
		{
			std::cout << "释放技能“燃烧”失败" << std::endl;
			return;
		}

		//燃烧技能的效果一共有3步：
		// 1、对敌人的影响，每个子类的效果都不一样，基类中定义虚函数，子类中重写实现
		// 2、对自身的影响，每个子类的效果都不一样，基类中定义虚函数，子类中重写实现
		// 3、播放技能特效，所有子类效果都相同，基类中直接实现，子类不再重写
		EffectEnemy(); //对敌人产生的影响
		EffectSelf(); //对角色自身产生的影响
		PlayEffect(); //播放技能“燃烧”的技能特效
	}

private:
	// 判断是否能使用技能“燃烧”
	virtual bool CanUseJN() = 0;

	// 释放“燃烧”技能对敌人的影响
	virtual void EffectEnemy() {}

	// 释放“燃烧”技能对自己的影响
	virtual void EffectSelf() {}

	// 播放“燃烧”技能的技能特效
	// 所有角色播放的技能特效都相同，因此不用写成虚函数再从子类实现
	void PlayEffect()
	{
		std::cout << "播放技能“燃烧”的技能特效" << std::endl;
	}

protected: //可能被子类访问的成员，用protected属性
	//角色属性
	int m_lift; //生命值
	int m_magic; //魔法值
	int m_attack; //攻击力
};

