#include "M_Factory_Mountain.h"
#include "M_Factory_Swamp.h"
#include "M_Factory_Town.h"

/**
* ����ѧϰ���󹤳�ģʽ
* 
* ���󹤳�ģʽ�ʺϲ�Ʒ��Ƚ��ȶ������
* 
* ����Ҫ����һ���µĵ���ʱ����������һ��ɭ�ֵ�����ֻ��Ҫ����һ��ɭ�ֵĹ����༴��
* ���ǵ���Ҫ����һ���µĹ������࣬����Ҫ�Ķ����й�����Ļ�������࣬��Ҫ���Ӻ������ͺ��鷳
* 
*/

int main()
{
	M_ParFactory* p_mou_fy = new M_Factory_Mountain();
	Monster* pM1 = p_mou_fy->CreateMonster_Element();

	M_ParFactory* p_twn_fy = new M_Factory_Town();
	Monster* pM2 = p_twn_fy->CreateMonster_Undead();
	Monster* pM3 = p_twn_fy->CreateMonster_Machanic();

	//�ͷ���Դ

	//�ͷŹ���
	delete p_mou_fy;
	delete p_twn_fy;

	//�ͷŹ���
	delete pM1;
	delete pM2;
	delete pM3;
}