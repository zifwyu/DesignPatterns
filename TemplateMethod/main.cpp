#include "Fighter.h"
#include "F_Mage.h"
#include "F_Warrior.h"

/**
* 
* 这里学习模板方法模式
* 
* 模板方法模式就是：定义一个操作中的算法的骨架（稳定部分），
* 而将一些步骤延迟到子类中去实现（父类中定义虚函数，让子类实现/重写这个虚函数），
* 从而达到在整体稳定的情况下产生一些变化的目的。

* 具体操作就是：在基类中定义一个算法的框架，允许子类在不修改结构的情况下，重写算法的特定步骤。
* 说的再明白一点就是先定义一个基类，在基类中把与需求相关的所有操作函数全部作为虚函数定义出来，
* 然后在这个基类的各个子类中重写父类的虚函数，这样子类基于父类的架构便自己有了与其他兄弟类不一样的行为。

* 如果某些函数实现，在所有子类中都相同，那么该函数就可以放在基类中实现，并且不作为虚函数。
*/

int main()
{
	Fighter* prole_war = new F_Warrior(1000, 0, 200);
	prole_war->JN_Burn();
	std::cout << "-------------------------------------------" << std::endl;

	Fighter* prole_mag = new F_Mage(800, 200, 300);
	prole_mag->JN_Burn();
	std::cout << "-------------------------------------------" << std::endl;

	Fighter* prole_war2 = new F_Warrior(50, 0, 200);
	prole_war2->JN_Burn();

	delete prole_war;
	delete prole_war2;
	delete prole_mag;
}