#pragma once
#include "Monster.h"

/**
* @brief 所有工厂类的父类
*/
class M_ParFactory
{
public:
	//创建亡灵类怪物
	virtual Monster* CreateMonster_Undead() = 0;

	//创建元素类怪物
	virtual Monster* CreateMonster_Element() = 0;

	//创建机械类怪物
	virtual Monster* CreateMonster_Machanic() = 0;

	virtual ~M_ParFactory() {}
};