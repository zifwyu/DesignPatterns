#pragma once
#include "Monster.h"

/**
* �����������������Ĺ�����
*/

class M_Undead_Swamp :public Monster
{
public:
	M_Undead_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ���������������������������" << std::endl;
	}
};

class M_Element_Swamp :public Monster
{
public:
	M_Element_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ�����Ԫ��������������������" << std::endl;
	}
};

class M_Machanic_Swamp :public Monster
{
public:
	M_Machanic_Swamp(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ����Ļ�е������������������" << std::endl;
	}
};