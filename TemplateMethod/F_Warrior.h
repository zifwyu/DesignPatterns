#pragma once
#include "Fighter.h"

/**
* @brief ��սʿ����
*/
class F_Warrior : public Fighter
{
public:
	F_Warrior(int lift, int magic, int attack)
		: Fighter(lift, magic, attack) { }

private:
	// �ж��Ƿ���ʹ�ü��ܡ�ȼ�ա�
	virtual bool CanUseJN() override
	{
		if (m_lift < 300)
		{
			return false;
		}
		return true;
	}

	// �ͷš�ȼ�ա����ܶԵ��˵�Ӱ��
	virtual void EffectEnemy() override
	{
		std::cout << "սʿ��ɫ_�����е���ÿ��ʧȥ500������ֵ" << std::endl;
	}

	// �ͷš�ȼ�ա����ܶ��Լ���Ӱ��
	virtual void EffectSelf() override
	{
		std::cout << "սʿ��ɫ_����ʧȥ300������ֵ" << std::endl;
		m_lift -= 300;
	}
};

