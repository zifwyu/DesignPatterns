#include "Monster.h"
#include "M_Element.h"
#include "M_Machanic.h"
#include "M_Undead.h"
#include "MonsterFactory.h"

/**
* 这里学习简单工厂模式
* 
* 简单工厂模式就是：定义一个工厂类MonsterFactory
* 该类的成员函数CreateMonster可以根据不同的参数创建并返回不同的类对象，
* 被创建的对象所属的类一般都具有相同的父类Monster
* 调用者无需关心创建对象的细节
* 
* 简单工厂模式的缺点是：当增加新的怪物类型时，要在工厂函数中增加else if，破坏了开闭原则
* 开闭原则：对扩展开放，对修改关闭。
* 当增加新功能时，不应该修改已有代码，而是应该增加新的类或新的成员函数
*/


/**
* @brief 使用C++多态创建不同种类的怪物
* 
* @note
*	创建不同种类的怪物时，避免不了直接与多个怪物类M_Element、M_Machanic、M_Undead打交道
*	这属于一种依赖具体类的紧耦合，尤其是随着游戏内容的不断增加，怪物的种类也可能不断增加
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
* @brief 使用简单工厂模式创建不同种类的怪物
* 
* @note
*	不需要再与具体的怪物类打交道，而是通过字符串标识告诉工厂类要创建哪种怪物
*	创建对象所需要的依赖依然存在，但都封装到了MonsterFactory类中
*	以后如果要新增怪物类，只需要改动MonsterFactory类一个地方就行了，之前的旧代码不用改动
*	
*	这样就避免依赖关系遍布整个工程，也就是封装变化（将容易变化的代码段限制到一个小范围内）
*	这样可以很大程度上提高代码的可维护性和可扩展性
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