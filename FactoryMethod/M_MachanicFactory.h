#pragma once
#include "M_ParFactory.h"
#include "M_Machanic.h"

/**
* @brief M_Machanic�������͵Ĺ���������M_Machanic���͵Ĺ���
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

