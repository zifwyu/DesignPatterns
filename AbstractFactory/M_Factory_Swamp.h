#pragma once
#include "M_ParFactory.h"
#include "M_Monster_Swamp.h"

/**
* @brief 沼泽地区的工厂类
*/
class M_Factory_Swamp : public M_ParFactory
{
public:
	virtual Monster* CreateMonster_Undead() override
	{
		return new M_Undead_Swamp(300, 50, 120);
	}

	virtual Monster* CreateMonster_Element() override
	{
		return new M_Element_Swamp(200, 80, 110);
	}

	virtual Monster* CreateMonster_Machanic() override
	{
		return new M_Machanic_Swamp(400, 0, 90);
	}
};