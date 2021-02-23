/*
	4.7.6 使用new来创建动态数组
*/

#include<iostream>
using namespace std;


int main_()
{
	double* p = new double[3];
	p[0] = 0.2;
	p[1] = 0.5;
	p[2] = 0.8;
	//p 指向第一个元素地址
	cout << "*p: " << *p << p <<endl;
	cout << "p[0]: " << p[0] << &p[0]<<endl;
	//移动一个元素
	p++;
	cout << "Now p[0]: " << p[0] << endl;

	//释放内存
	delete[] p;


	return 0;
}
/*
输出
==========================
*p: 0.20100EC68
p[0]: 0.20100EC68
Now p[0]: 0.5

*/

