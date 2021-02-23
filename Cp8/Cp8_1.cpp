/*
	8.1 内联函数
	1.内联函数是C++为提高程序运行速度所做的改进，减少函数调用时跳来跳去，节省时间，当然这是以占用更多
	内存为代价的，因为内联函数会在调用处拷贝一个副本
	2.那该如何选择？
	如果执行代码时间较长，调用代价小，则不用选择内联，节省的时间少得可怜不划算
	如果执行代码时间较短，调用代价大，可选择内联
	3.内联函数不能调用自己，所以不能递归
	4.内联与宏
*/

#include<iostream>
using namespace std;

//c语言的宏实现
#define SQUARE(X) X*X
//宏实现调用会有些问题
/*
a = SQUARE(5.0) => a=5.0*5.0; //正常
b = SQUARE(4.5+7.5) => a=4.5+7.5*4.5+7.5;//不正常
d = SQUARE(c++) => a=c++*c++;//不正常
*/

inline double square(double x)
{
	return x * x;
}

int main()
{
	double a, b;
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5+7.5);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "square(c): " << square(c) << endl;
	cout << "square(c++): " << square(c++) << endl;
	cout << "c: " << c << endl;
	cout << "SQUARE(c): " << SQUARE(c++) << endl; //被加了两次
	cout << "c: " << c << endl;

	return 0;
}
/*
输出
=================================
a: 25
b: 144
square(c): 169
square(c++): 169
c: 14
SQUARE(c): 196
c: 16
*/
