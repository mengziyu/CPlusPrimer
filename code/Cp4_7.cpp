/*
	4.7 指针和自由存储空间
	1.指针存储的是地址
	2.使用new来分配内存,C用malloc
		普通变量存储在栈内存，而new申请的内存在堆内存
	3.使用delete释放内存

*/

#include<iostream>
using namespace std;


int main_()
{
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts: " << donuts << ", " << &donuts << endl;
	cout << "cups: " << cups << ", " << &cups << endl;
	return 0;
}
/*
输出
=======================================
donuts: 6, 003AFC24
cups: 4.5, 003AFC14

*/

int main__()
{
	int updates = 6;
	/*
		int *p_updates，这样写是C风格，强调*p_updates是int类型
		int* p_updates，这样写是C++风格，强调int* 是一种指针类型
	*/
	int* p_updates;
	p_updates = &updates;
	cout << "updates: " << updates << endl;
	cout << "*p_updates: " << *p_updates << endl;
	cout << "*p_updates+1: " << *p_updates + 1 <<endl;

	//int* fellow = 223323;//不允许，fellow 没有指向任何地址
	int* fellow = (int*)223323; //这样可以强制把数字转成地址，尽管这个地址不存在
	return 0;
}
/*
输出
==============================
updates: 6
*p_updates: 6
*p_updates+1: 7
*/


int main()
{
	int* pt = new int;
	*pt = 1001;
	double* pd = new double;
	*pd = 1001.1;

	cout << "*pt: " << *pt << ", " << pt << endl;
	//地址都是4字节存储
	cout << "sizeof *pt: " << sizeof(*pt) << ", sizeof pt: " << sizeof(pt) << endl;
	cout << "*pd: " << *pd << ", " << pd << endl;
	cout << "sizeof *pd: " << sizeof(*pd) << ", sizeof pd: " << sizeof(pd) << endl;

	//delete与new要成对存在
	//delete只是释放了指针指向的内存，变量pt本身还存在，还可以重新赋值
	//delete只能用来释放使用new分配的内存，对空指针使用delete是安全的
	delete pt;
	delete pd;

	//注意：
	//1.重复释放使程序挂掉
	//delete pd;

	//2.创建指向同一块内存的指针增加重复释放内存的风险
	int* ps = new int;
	int* pq = ps;
	//此时，ps指向的地址就已经被释放了，delete ps将报错
	delete pq;

	return 0;
}
/*
输出
==================================
*pt: 1001, 012363F8
sizeof *pt: 4, sizeof pt: 4
*pd: 1001.1, 01240648
sizeof *pd: 8, sizeof pd: 4

*/
