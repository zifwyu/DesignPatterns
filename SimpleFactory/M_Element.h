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
};

