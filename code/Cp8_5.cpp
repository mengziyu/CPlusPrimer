/*
	8.5 函数模板
*/

//定义方法

template <typename AnyType>
void Swap1(AnyType &a,AnyType &b)
{
	AnyType temp;
	temp = a;
	a = b;
	b = temp;
}

//也可以用class关键字
template <class AnyType>
void Swap2(AnyType& a, AnyType& b)
{
	AnyType temp;
	temp = a;
	a = b;
	b = temp;
}

#include<iostream>
#include<string>
using namespace std;

template <typename T>
void Swap(T &a,T &b);

int main()
{
	int i = 10;
	int j = 20;

	cout << "i: " << i << ",j: " <<j<< endl;
	cout << "Swap:" << endl;
	Swap(i,j);
	cout << "i: " << i << ",j: "<<j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x: " << x << ",y: " <<y<< endl;
	cout << "Swap:" << endl;
	Swap(x, y);
	cout << "x: " << x << ",y: "<<y << endl;
	return 0;
}

template <typename T>
void Swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

/*
输出
==============================
i: 10,j: 20
Swap:
i: 20,j: 10
x: 24.5,y: 81.7
Swap:
x: 81.7,y: 24.5

*/