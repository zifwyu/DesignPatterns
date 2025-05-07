#include "Monster.h"
#include "M_Element.h"
#include "M_Machanic.h"
#include "M_Undead.h"
#include "MonsterFactory.h"

/**
* ����ѧϰ�򵥹���ģʽ
* 
* �򵥹���ģʽ���ǣ�����һ��������MonsterFactory
* ����ĳ�Ա����CreateMonster���Ը��ݲ�ͬ�Ĳ������������ز�ͬ�������
* �������Ķ�����������һ�㶼������ͬ�ĸ���Monster
* ������������Ĵ��������ϸ��
* 
* �򵥹���ģʽ��ȱ���ǣ��������µĹ�������ʱ��Ҫ�ڹ�������������else if���ƻ��˿���ԭ��
* ����ԭ�򣺶���չ���ţ����޸Ĺرա�
* �������¹���ʱ����Ӧ���޸����д��룬����Ӧ�������µ�����µĳ�Ա����
*/


/**
* @brief ʹ��C++��̬������ͬ����Ĺ���
* 
* @note
*	������ͬ����Ĺ���ʱ�����ⲻ��ֱ������������M_Element��M_Machanic��M_Undead�򽻵�
*	������һ������������Ľ���ϣ�������������Ϸ���ݵĲ������ӣ����������Ҳ���ܲ�������
*/
void Old()
{
	Monster* pM1 = new M_Undead(300, 50, 80);
	Monster* pM2 = new M_Element(200, 80, 100);
	Monster* pM3 = new M_Machanic(400, 0, 110);

	delete pM1;
	delete pM2;
	delete pM3;
}

/**
* @brief ʹ�ü򵥹���ģʽ������ͬ����Ĺ���
* 
* @note
*	����Ҫ�������Ĺ�����򽻵�������ͨ���ַ�����ʶ���߹�����Ҫ�������ֹ���
*	������������Ҫ��������Ȼ���ڣ�������װ����MonsterFactory����
*	�Ժ����Ҫ���������ֻ࣬��Ҫ�Ķ�MonsterFactory��һ���ط������ˣ�֮ǰ�ľɴ��벻�øĶ�
*	
*	�����ͱ���������ϵ�鲼�������̣�Ҳ���Ƿ�װ�仯�������ױ仯�Ĵ�������Ƶ�һ��С��Χ�ڣ�
*	�������Ժܴ�̶�����ߴ���Ŀ�ά���ԺͿ���չ��
*/
void Factory()
{
	MonsterFactory facobj;
	Monster* pM1 = facobj.CreateMonster("udd");
	Monster* pM2 = facobj.CreateMonster("elm");
	Monster* pM3 = facobj.CreateMonster("mec");

	delete pM1;
	delete pM2;
	delete pM3;
}

int main()
{
	//Old();
	Factory();
}