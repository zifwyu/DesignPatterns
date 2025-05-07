#include "Monster.h"
#include "M_Element.h"
#include "M_Machanic.h"
#include "M_Undead.h"

/**
* ����ѧϰԭ��ģʽ
* 
* ԭ��ģʽ��Ҫ��һ������ԭ���࣬�������Monster�࣬�����������麯��Clone
* ����ԭ����ĸ����ࣨ����ԭ���ࣩ��ʵ���ڸ�����������Clone����������һ���Լ��Ŀ�¡����
* 
* ��ĳ�������ڲ������ݸ��Ӷ��ʱ����Ҫ��øö��󸱱���ʹ��ԭ��ģʽ�Ǻܷ����
* ԭ��ģʽҲ����Ҫ����Ĺ�����
*/

int main()
{
	// ����һЩ�������ڿ�¡���������ֱ�Ӵ�����new������Ҳ�����ù���������������
	M_Machanic myPropMecMonster(400, 0, 110);
	Monster* pmyPropEleMonster = new M_Element(200, 80, 100);

	Monster* p_CloneObj1 = myPropMecMonster.Clone();
	Monster* p_CloneObj2 = pmyPropEleMonster->Clone();

	//�ͷ���Դ
	//�ͷſ�¡�����Ķ���
	delete p_CloneObj1;
	delete p_CloneObj2;

	//�ͷ�ԭ�Ͷ���
	delete pmyPropEleMonster;
}