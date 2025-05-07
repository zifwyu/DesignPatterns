#pragma once
#include "M_ParFactory.h"
#include "M_Element.h"

/**
* @brief M_Element怪物类型的工厂，生成M_Element类型的怪物
*/
class M_ElementFactory :
    public M_ParFactory
{
public:
    virtual Monster* CreateMonster() override
    {
        return new M_Element(200, 80, 100);
    }
};

