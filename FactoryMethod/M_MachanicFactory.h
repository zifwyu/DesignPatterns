#pragma once
#include "M_ParFactory.h"
#include "M_Machanic.h"

/**
* @brief M_Machanic怪物类型的工厂，生成M_Machanic类型的怪物
*/
class M_MachanicFactory :
    public M_ParFactory
{
public:
    virtual Monster* CreateMonster() override
    {
        return new M_Machanic(400, 0, 110);
    }
};

