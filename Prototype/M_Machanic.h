#pragma once
#include "Monster.h"

/**
* @brief ����е�ࡱ����
*/
class M_Machanic : public Monster
{
public:
	M_Machanic(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ��е������������������" << std::endl;
	}

	M_Machanic(const M_Machanic& tmpobj) :Monster(tmpobj)
	{
		std::cout << "������ M_Machanic ��Ŀ������캯��������һֻ��е�����" << std::endl;
	}

	virtual Monster* Clone() override
	{
		return new M_Machanic(*this); //���ÿ������캯��
	}
};

