#include "Monster.h"
#include "M_Element.h"
#include "M_Machanic.h"
#include "M_Undead.h"

/**
* 这里学习原型模式
* 
* 原型模式需要有一个抽象原型类，这里就是Monster类，在类中声明虚函数Clone
* 抽象原型类的各子类（具体原型类）；实现在父类中声明的Clone函数，返回一个自己的克隆对象
* 
* 当某个对象内部的数据复杂多变时，想要获得该对象副本，使用原型模式是很方便的
* 原型模式也不需要额外的工厂类
*/

int main()
{
	// 创建一些对象用于克隆，这里可以直接创建，new创建，也可以用工厂创建，都可以
	M_Machanic myPropMecMonster(400, 0, 110);
	Monster* pmyPropEleMonster = new M_Element(200, 80, 100);

	Monster* p_CloneObj1 = myPropMecMonster.Clone();
	Monster* p_CloneObj2 = pmyPropEleMonster->Clone();

	//释放资源
	//释放克隆出来的对象
	delete p_CloneObj1;
	delete p_CloneObj2;

	//释放原型对象
	delete pmyPropEleMonster;
}