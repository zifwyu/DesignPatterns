#pragma once
#include "M_ParFactory.h"
#include "M_Monster_Mountain.h"

/**
* @brief 山脉地区的工厂类
*/
class M_Factory_Mountain : public M_ParFactory
{
public:
	virtual Monster* CreateMonster_Undead() override
	{
		return new M_Undead_Mountain(300, 50, 120);
	}

	virtual Monster* CreateMonster_Element() override
	{
		return new M_Element_Mountain(200, 80, 110);
	}

	virtual Monster* CreateMonster_Machanic() override
	{
		return new M_Machanic_Mountain(400, 0, 90);
	}
};