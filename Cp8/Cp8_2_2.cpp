/*
	8.2.2 将引用用作函数参数
	1.值传递会有值的拷贝，操作临时变量不会修改原始数据
	而引用是变量的别名，操作别名相当于操作原始数据
*/


#include<iostream>
using namespace std;

void swapr(int& a,int& b);
void swapp(int* p,int* q);
void swapv(int a,int b);

int main()
{
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//交换成功
	cout << "swapr():" << endl;
	swapr(wallet1,wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//又换回来了
	cout << "swapp():" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//换不成功
	cout << "swapv():" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	return 0;
}

void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*
输出
================================
wallet1: 300
wallet2: 350
swapr():
wallet1: 350
wallet2: 300
swapp():
wallet1: 300
wallet2: 350
swapv():
wallet1: 300
wallet2: 350
*/