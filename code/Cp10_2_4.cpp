/*
	10.2.4 使用类
	
	每创建一个对象，它都有自己的存储空间，用于存储内部变量和类成员，但同一类
	的所有对象共享同一组方法，即方法在内存中只有一个副本，只是每个对象调用方法时
	使用不同的数据
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	Stock fluffy_the_cat;
	fluffy_the_cat.aquire("NanoSmart",20,12.5);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15,18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400,20.00);
	fluffy_the_cat.show();
	return 0;
}
/*
输出
=================================
Company: NanoSmart
Shares: 20
Price: 12.5
Total: 250
buy
Company: NanoSmart
Shares: 35
Price: 18.125
Total: 250
sell
Company: NanoSmart
Shares: 35
Price: 18.125
Total: 250

*/