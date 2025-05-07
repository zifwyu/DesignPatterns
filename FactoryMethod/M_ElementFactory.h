#pragma once
#include "M_ParFactory.h"
#include "M_Element.h"

/**
* @brief M_Element�������͵Ĺ���������M_Element���͵Ĺ���
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

