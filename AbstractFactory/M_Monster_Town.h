#pragma once
#include "Monster.h"

/**
* ��������ǳ�������Ĺ�����
*/

class M_Undead_Town :public Monster
{
public:
	M_Undead_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ���������������������������" << std::endl;
	}
};

class M_Element_Town :public Monster
{
public:
	M_Element_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ�����Ԫ��������������������" << std::endl;
	}
};

class M_Machanic_Town :public Monster
{
public:
	M_Machanic_Town(int lift, int magic, int attack)
		:Monster(lift, magic, attack)
	{
		std::cout << "һֻ����Ļ�е������������������" << std::endl;
	}
};