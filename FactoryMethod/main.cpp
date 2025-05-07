#include "Monster.h"
#include "M_ParFactory.h"
#include "M_ElementFactory.h"
#include "M_UndeadFactory.h"
#include "M_MachanicFactory.h"

/**
* 这里学习工厂方法模式
* 
* 与简单工厂模式相比，工厂方法模式为每个要创建的类单独写了一个工厂类
* 并且所有工厂类都继承与同一个基类
* 
* 这样，当增加新的怪物类时，不需要改动已有工厂类的方法，只需要继承基类新增一个工厂类即可
* 
* 增加新的工厂类是工厂方法模式必须付出的代价
*/


/**
* @brief 全局函数，用来处理怪物对象的生成
*/
Monster* Gbl_CreateMonster(M_ParFactory* factory)
{
	return factory->CreateMonster();
}

int main()
{
	//多态工厂
	M_ParFactory* p_ud_fy = new M_UndeadFactory();
	//产生一只亡灵类怪物，也是多态。当然也可以写成
	//Monster* pM1 = p_ud_fy->CreateMonster();
	Monster* pM1 = Gbl_CreateMonster(p_ud_fy);

	M_ParFactory* p_elm_fy = new M_ElementFactory();
	Monster* pM2 = Gbl_CreateMonster(p_elm_fy);

	M_ParFactory* p_mec_fy = new M_MachanicFactory();
	Monster* pM3 = Gbl_CreateMonster(p_mec_fy);

	//释放资源
	//释放工厂
	delete p_ud_fy;
	delete p_elm_fy;
	delete p_mec_fy;

	//释放怪物
	delete pM1;
	delete pM2;
	delete pM3;
}