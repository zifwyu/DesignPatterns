#pragma once
#include "Monster.h"

/**
* @brief ��Ԫ���ࡱ����
*/
class M_Element : public Monster
{
public:
	M_Element(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻԪ��������������������" << std::endl;
	}

	M_Element(const M_Element& tmpobj) :Monster(tmpobj)
	{
		std::cout << "������ M_Element ��Ŀ������캯��������һֻԪ�������" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Element(*this); //���ÿ������캯��
	}
};

