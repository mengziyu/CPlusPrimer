/*
	7.1 函数
	1.C++函数不能返回数组，但能返回包含数组的结构
	2.函数原型
	为什么需要函数原型？
	1.告诉编译器函数参数类型和返回值类型，约束程序按要求调用；同时确定的类型让编译器知道应读取多少个字节
	2.预先定义函数，防止编译器到处查找函数，提升效率

*/

#include<iostream>
using namespace std;

//函数原型
//可以不包括变量名
void cheers(int);
double cube(double x);

int main()
{
	cheers(2);
	cout << "cube: " << cube(3) << endl;
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers" << endl;
	}
}

double cube(double x)
{
	return x * x * x;
}

/*
输出
=================================
Cheers
Cheers
Cheers
Cheers
Cheers
cube: 27
*/