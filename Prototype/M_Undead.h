#pragma once
#include "Monster.h"

/**
* @brief �������ࡱ����
*/
class M_Undead : public Monster
{
public:
	M_Undead(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ����������������������" << std::endl;
	}

	M_Undead(const M_Undead& tmpobj) :Monster(tmpobj)
	{
		std::cout << "������ M_Undead ��Ŀ������캯��������һֻ���������" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Undead(*this); //���ÿ������캯��
	}
};

