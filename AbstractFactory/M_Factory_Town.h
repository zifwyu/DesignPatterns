#pragma once
#include "M_ParFactory.h"
#include "M_Monster_Town.h"

/**
* @brief 城镇地区的工厂类
*/
class M_Factory_Town : public M_ParFactory
{
public:
	virtual Monster* CreateMonster_Undead() override
	{
		return new M_Undead_Town(300, 50, 120);
	}

	virtual Monster* CreateMonster_Element() override
	{
		return new M_Element_Town(200, 80, 110);
	}

	virtual Monster* CreateMonster_Machanic() override
	{
		return new M_Machanic_Town(400, 0, 90);
	}
};