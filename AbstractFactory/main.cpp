#include "M_Factory_Mountain.h"
#include "M_Factory_Swamp.h"
#include "M_Factory_Town.h"

/**
* 这里学习抽象工厂模式
* 
* 抽象工厂模式适合产品族比较稳定的情况
* 
* 当需要增加一个新的地区时，如再增加一个森林地区，只需要新增一个森林的工厂类即可
* 但是当需要增加一个新的怪物种类，则需要改动所有工厂类的基类和子类，都要增加函数，就很麻烦
* 
*/

int main()
{
	M_ParFactory* p_mou_fy = new M_Factory_Mountain();
	Monster* pM1 = p_mou_fy->CreateMonster_Element();

	M_ParFactory* p_twn_fy = new M_Factory_Town();
	Monster* pM2 = p_twn_fy->CreateMonster_Undead();
	Monster* pM3 = p_twn_fy->CreateMonster_Machanic();

	//释放资源

	//释放工厂
	delete p_mou_fy;
	delete p_twn_fy;

	//释放怪物
	delete pM1;
	delete pM2;
	delete pM3;
}