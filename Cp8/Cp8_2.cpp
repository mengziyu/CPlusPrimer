/*
	8.2 引用变量
*/

#include<iostream>
using namespace std;

int main_()
{
	int rats = 101;
	//int 引用，其含义是rats变量的别名，操作rodents也相当于操作rats
	int& rodents = rats;

	cout << "rats: " << rats<<endl;
	cout << "rodents: " << rodents <<endl;
	rodents++;
	cout << "after ++:" << endl;
	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;

	return 0;
}
/*
输出
=============================
rats: 101
rodents: 101
after ++:
rats: 102
rodents: 102
*/


int main()
{
	int rats = 101;
	int& rodents = rats;
	//引用于指针的区别
	//1.引用在创建时必须初始化
	//int& rodent;  //不允许
	//rodent = rats;

	//指针可以延迟初始化
	int* pt;
	pt = &rats;

	//2.引用一旦与变量关联起来，其地址就一直不变，相当于const指针

	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;
	cout << "rats address: " << &rats << endl;
	cout << "rodents address: " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;

	cout << "bunnies: " << bunnies << endl;
	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;
	cout << "bunnies address: " << &bunnies << endl;
	cout << "rats address: " << &rats << endl;
	cout << "rodents address: " << &rodents << endl;
	return 0;
}
/*
输出
================================
rats: 101
rodents: 101
rats address: 00AFFCB4
rodents address: 00AFFCB4
bunnies: 50
rats: 50
rodents: 50
bunnies address: 00AFFC90
rats address: 00AFFCB4
rodents address: 00AFFCB4
*/

//rodents的地址没变，但值被修改了