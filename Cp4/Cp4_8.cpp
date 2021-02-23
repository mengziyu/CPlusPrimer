/*
	4.8 指针运算
	1.指针与数组
	2.数组地址
	3.数组的动态联编
*/
#include<iostream>
using namespace std;



int main_()
{
	double wages[3] = {1000.0,2000.0,3000.0};
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw: " << pw << ", *pw: " << *pw << endl;
	pw += 1;
	cout << "pw+=1:" << endl;
	cout << "pw: " << pw << ", *pw: " << *pw << endl << endl;

	cout << "ps: " << ps << ", *ps: " << *ps << endl;
	ps += 1;
	cout << "ps+=1:" << endl;
	cout << "ps: " << ps << ", *ps: " << *ps << endl << endl;

	//数组名称可当指针用，地址+1后在取值
	cout << "*(stacks + 1): " << *(stacks + 1) << endl << endl;

	//sizeof 数组等于总字节数
	cout << "sizeof wages: " << sizeof(wages) <<endl;
	cout << "sizeof stacks: " << sizeof(stacks) <<endl;

	return 0;
}
/*
输出
=====================================
pw: 00C2FDB8, *pw: 1000
pw+=1:
pw: 00C2FDC0, *pw: 2000

ps: 00C2FDA8, *ps: 3
ps+=1:
ps: 00C2FDAA, *ps: 2

*(stacks + 1): 2

sizeof wages: 24
sizeof stacks: 6
*/

int main__()
{
	double p[3];
	p[0] = 0.2;
	p[1] = 0.5;
	p[2] = 0.8;

	double* p1 = p;
	//对数组取地址赋值
	//()括号不能省略，不然就是包含3个元素的指针数组了
	double(*p2)[3] = &p;

	//p1指向的是第一个元素的地址
	//p2指向的是整个数组的地址
	cout << "p1 address: " << p1 << endl;
	cout << "p2 address: " << p2 << endl;

	//虽然最开始两个地址相同，但+1过后，p1跳过第一个元素指向第二个元素地址，而p2跳过整个数组
	cout << "p1 address +1: " << p1+1 << endl;
	cout << "p2 address +1: " << p2+1 << endl;
	return 0;
}
/*
输出
=====================================
p1 address: 0136FD7C
p2 address: 0136FD7C
p1 address +1: 0136FD84
p2 address +1: 0136FD94
*/


int mian()
{
	int size=10;
	//int p[size]; //编译不通过，创建数组时，采用静态联编，长度在编译时决定
	int* m = new int[size]; //new 创建时，采用动态联编，运行时决定
	delete[] m;
	return 0;
}











