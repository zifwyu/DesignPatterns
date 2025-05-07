#pragma once
#include "M_ParFactory.h"
#include "M_Undead.h"

/**
* @brief M_Undead�������͵Ĺ���������M_Undead���͵Ĺ���
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

