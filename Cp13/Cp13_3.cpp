/*
	13.3 多态公有继承
*/

#include <iostream>
#include "brass.h"
using namespace std;

int main()
{
	Brass dom("Dominic Banker",11224,4183.45);
	BrassPlus dot("Dorothy Banker",12118,2592.00);

	Brass& b1_ref = dom;
	//指向派生类对象
	Brass& b2_ref = dot;
	//Balance 不是虚函数，根据引用或指针类型来选择方法
	b1_ref.Balance();
	b2_ref.Balance();
	//ViewAcct 是虚函数，根据对象类型来选择方法
	//因此当派生类重新定义基类方法时，应将基类方法声明为虚的
	b1_ref.ViewAcct();
	b2_ref.ViewAcct();
	//析构函数声明为虚方法，作用相同，保证能按正确的顺序调用析构方法
	return 0;
}
/*
输出
==========================
Brass construct
Brass construct
BrassPlus construct
Brass Balance()
Brass Balance()
Brass ViewAcct()
BrassPlus ViewAcct()

*/