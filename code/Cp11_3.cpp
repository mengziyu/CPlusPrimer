/*
	11.3 友元
	为何需要友元
	如上一节的Time对象可以这样调用
	A = B*2.75;
	A = B.operator*(2.75);
	但这样调用就不行
	A = 2.75*B;

	因此需要实现一个不需要对象调用的重载函数，它要定义在类之外，但在类之外又如何使用类私有属性呢，这需要友元
	对于这种反操作，用友元是不错的选择
*/

#include<iostream>
#include "mytime.h";
using namespace std;

int main()
{
	Time coding(2, 40);

	Time total;
	total = 1.5 * coding;
	total.Show();
	return 0;
}
/*
输出
===================================
hour: 3
minutes: 60
*/