#pragma once
#include "Monster.h"

/**
* @brief 所有工厂类的父类
*/
class M_ParFactory
{
public:
	virtual Monster* CreateMonster() = 0; //具体的实现在子类中进行
	virtual ~M_ParFactory() {}
};

