#pragma once
#include "Fighter.h"

/**
* @brief ����ʦ����
*/
class F_Mage : public Fighter
{
public:
	F_Mage(int lift, int magic, int attack)
		: Fighter(lift, magic, attack) {
	}

private:
	// �ж��Ƿ���ʹ�ü��ܡ�ȼ�ա�
	virtual bool CanUseJN() override
	{
		if (m_magic < 100)
		{
			return false;
		}
		return true;
	}

	// �ͷš�ȼ�ա����ܶԵ��˵�Ӱ��
	virtual void EffectEnemy() override
	{
		std::cout << "��ʦ��ɫ_�����е���ÿ��ʧȥ650������ֵ" << std::endl;
	}

	// �ͷš�ȼ�ա����ܶ��Լ���Ӱ��
	virtual void EffectSelf() override
	{
		std::cout << "��ʦ��ɫ_����ʧȥ100��ħ��ֵ" << std::endl;
		m_magic -= 100;
	}
};

