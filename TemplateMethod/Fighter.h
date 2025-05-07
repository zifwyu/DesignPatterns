#pragma once

#include <iostream>

/**
* @brief ��ս���ߡ�����
*/
class Fighter
{
public:
	Fighter(int lift, int magic, int attack)
		: m_lift(lift), m_magic(magic),m_attack(attack)
	{
	}

	virtual ~Fighter() {} //��Ϊ����ʱ����������ӦΪ�麯��

	/**
	* @brief ���ܡ�ȼ�ա�
	*/
	void JN_Burn() 
	{
		if (!CanUseJN())
		{
			std::cout << "�ͷż��ܡ�ȼ�ա�ʧ��" << std::endl;
			return;
		}

		//ȼ�ռ��ܵ�Ч��һ����3����
		// 1���Ե��˵�Ӱ�죬ÿ�������Ч������һ���������ж����麯������������дʵ��
		// 2���������Ӱ�죬ÿ�������Ч������һ���������ж����麯������������дʵ��
		// 3�����ż�����Ч����������Ч������ͬ��������ֱ��ʵ�֣����಻����д
		EffectEnemy(); //�Ե��˲�����Ӱ��
		EffectSelf(); //�Խ�ɫ���������Ӱ��
		PlayEffect(); //���ż��ܡ�ȼ�ա��ļ�����Ч
	}

private:
	// �ж��Ƿ���ʹ�ü��ܡ�ȼ�ա�
	virtual bool CanUseJN() = 0;

	// �ͷš�ȼ�ա����ܶԵ��˵�Ӱ��
	virtual void EffectEnemy() {}

	// �ͷš�ȼ�ա����ܶ��Լ���Ӱ��
	virtual void EffectSelf() {}

	// ���š�ȼ�ա����ܵļ�����Ч
	// ���н�ɫ���ŵļ�����Ч����ͬ����˲���д���麯���ٴ�����ʵ��
	void PlayEffect()
	{
		std::cout << "���ż��ܡ�ȼ�ա��ļ�����Ч" << std::endl;
	}

protected: //���ܱ�������ʵĳ�Ա����protected����
	//��ɫ����
	int m_lift; //����ֵ
	int m_magic; //ħ��ֵ
	int m_attack; //������
};

