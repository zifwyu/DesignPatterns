#pragma once

#include <iostream>

/**
* @brief ���С�����ĸ���
*/
class Monster
{
public:
	Monster(int lift, int magic, int attack)
		: m_lift(lift), m_magic(magic), m_attack(attack) 
	{
	}

	virtual ~Monster() {}
protected:
	//���������
	int m_lift; //����ֵ
	int m_magic; //ħ��ֵ
	int m_attack; //������
};

