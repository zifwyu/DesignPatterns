#pragma once
#include "Monster.h"
#include "M_Element.h"
#include "M_Machanic.h"
#include "M_Undead.h"

/**
* @brief 怪物工厂类
*/
class MonsterFactory
{
public:
	Monster* CreateMonster(std::string str_monster_type)
	{
		Monster* prtnobj = nullptr;
		if (str_monster_type == "udd")
		{
			prtnobj = new M_Undead(300, 50, 80);
		}
		else if (str_monster_type == "elm")
		{
			prtnobj = new M_Element(200, 80, 100);
		}
		else if (str_monster_type == "mec")
		{
			prtnobj = new M_Machanic(400, 0, 110);
		}
		return prtnobj;
	}
};

