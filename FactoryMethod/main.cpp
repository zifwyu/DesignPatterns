#include "Monster.h"
#include "M_ParFactory.h"
#include "M_ElementFactory.h"
#include "M_UndeadFactory.h"
#include "M_MachanicFactory.h"

/**
* ����ѧϰ��������ģʽ
* 
* ��򵥹���ģʽ��ȣ���������ģʽΪÿ��Ҫ�������൥��д��һ��������
* �������й����඼�̳���ͬһ������
* 
* �������������µĹ�����ʱ������Ҫ�Ķ����й�����ķ�����ֻ��Ҫ�̳л�������һ�������༴��
* 
* �����µĹ������ǹ�������ģʽ���븶���Ĵ���
*/


/**
* @brief ȫ�ֺ������������������������
*/
Monster* Gbl_CreateMonster(M_ParFactory* factory)
{
	return factory->CreateMonster();
}

int main()
{
	//��̬����
	M_ParFactory* p_ud_fy = new M_UndeadFactory();
	//����һֻ��������Ҳ�Ƕ�̬����ȻҲ����д��
	//Monster* pM1 = p_ud_fy->CreateMonster();
	Monster* pM1 = Gbl_CreateMonster(p_ud_fy);

	M_ParFactory* p_elm_fy = new M_ElementFactory();
	Monster* pM2 = Gbl_CreateMonster(p_elm_fy);

	M_ParFactory* p_mec_fy = new M_MachanicFactory();
	Monster* pM3 = Gbl_CreateMonster(p_mec_fy);

	//�ͷ���Դ
	//�ͷŹ���
	delete p_ud_fy;
	delete p_elm_fy;
	delete p_mec_fy;

	//�ͷŹ���
	delete pM1;
	delete pM2;
	delete pM3;
}