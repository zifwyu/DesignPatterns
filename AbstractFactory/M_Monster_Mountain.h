#pragma once
#include "Monster.h"

/**
* ���������ɽ�������Ĺ�����
*/

class M_Undead_Mountain :public Monster
{
public:
	M_Undead_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻɽ��������������������������" << std::endl;
	}
};

class M_Element_Mountain :public Monster
{
public:
	M_Element_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻɽ����Ԫ��������������������" << std::endl;
	}
};

class M_Machanic_Mountain :public Monster
{
public:
	M_Machanic_Mountain(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻɽ���Ļ�е������������������" << std::endl;
	}
};