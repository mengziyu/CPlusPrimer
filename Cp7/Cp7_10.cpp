/*
	7.10 函数指针
	1.基本定义
	2.深入探讨

*/

#include<iostream>
using namespace std;

double betsy(int);
double pam(int);

// 声明函数指针(*pf)要有括号，不然就变成double *pf(int)，这样表示返回double指针类型
void estimate(int lines, double (*pf)(int));


int main_()
{
	cout << "betsy: " <<endl;
	estimate(100, betsy);

	cout << "pam: " << endl;
	estimate(100, pam);
	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}
double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	cout << "(*pf)(lines): " << pf(lines)<<endl;
	//也可以这样调用
	//cout << "(*pf)(lines): " << (*pf)(lines)<<endl;
}
/*
输出：
=====================================
betsy:
(*pf)(lines): 5
pam:
(*pf)(lines): 7

*/
//这几个方都可以传数组，都表示一个意思
const double* f1(const double arr[], int n);
const double* f2(const double [], int n);
const double* f3(const double *, int n);

//简化声明
typedef const double* (*p_fun)(const double*, int);
int main()
{
	//返回为指针类型该如何定义函数指针？
	const double* (*p1)(const double*, int) = f1;
	//用auto要简单
	auto p2 = f2;

	double av[3] = {1112.3,1242.6,2227.9};
	//不同的调用方式
	cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

	//声明函数指针数组
	const double* (*ps[3])(const double*, int n) = { f1,f2,f3 };
	auto pt = ps;
	//定义一个指向函数指针数组的指针
	//第二个*表示这是一个指针变量
	const double* (*(*ppt))(const double*, int n) = ps;

	cout << "f1:" << *ps[0](av, 3) << endl;
	cout << "f2:" << *ps[1](av, 3) << endl;
	cout << "f3:" << *ppt[2](av, 3) << endl;

	p_fun pa[3] = {f1,f2,f3};
	p_fun *pb= ps;
	p_fun (*pc)[3]= &ps;
	return 0;
}

const double* f1(const double arr[], int n)
{
	return arr;
}
const double* f2(const double arr[], int n)
{
	return arr + 1;
}
const double* f3(const double* arr, int n)
{
	return arr + 2;
}

/*
输出
=============================================
010FFAF8:1112.3
010FFB00:1242.6
f1:1112.3
f2:1242.6
f3:2227.9

*/