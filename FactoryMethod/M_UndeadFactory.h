#pragma once
#include "M_ParFactory.h"
#include "M_Undead.h"

/**
* @brief M_Undead怪物类型的工厂，生成M_Undead类型的怪物
*/
class M_UndeadFactory :
    public M_ParFactory
{
public:
    virtual Monster* CreateMonster() override
    {
        return new M_Undead(300, 50, 80);
    }
};

