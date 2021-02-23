/*
	3.3.2
	1.三种浮点类型
	float，double，long double
	float 精度7位有效数字
	double 精度15位有效数字
	
	2.浮点常量
	默认情况，像8.24和2.4E8的浮点常量都属于double类型
	如果希望是float类型，使用f或F后缀，long double 使用L后缀
	1.234f
	2.45E20F
	2.345324E28 //double
	2.2L //long double
	

*/
#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;

int main__()
{
	cout<<"max float = "<<FLT_MAX<<endl;
	cout<<"min float = "<<FLT_MIN<<endl;
	cout<<"max double = "<<DBL_MAX<<endl;
	cout<<"min double = "<<DBL_MIN<<endl;
	cout<<"max long double = "<<LDBL_MAX<<endl;
	cout<<"min long double = "<<LDBL_MIN<<endl;
	return 0;
}
/*
输出
==================================
max float = 3.40282e+38
min float = 1.17549e-38
max double = 1.79769e+308
min double = 2.22507e-308
max long double = 1.18973e+4932
min long double = 3.3621e-4932

*/

int main_()
{
	cout.setf(ios_base::fixed,ios_base::floatfield);//设置输出时按浮点格式，小数点后有6位数字
	float tub=10.0/3.0;
	double mint=10.0/3.0;
	const float million=1.0e6;
	
	cout<<"tub = "<<tub<<endl;
	cout<<"tub * million = "<<tub*million<<endl;
	cout<<"tub * million * 10 = "<<tub*million*10<<endl;
	cout<<"mint = "<<mint<<endl;
	cout<<"mint * million = "<<mint*million<<endl;
	return 0;
}

/*
输出
==================================
tub = 3.333333
tub * million = 3333333.250000
tub * million * 10 = 33333332.000000
mint = 3.333333
mint * million = 3333333.333333

*/

/*
因为精度问题float超过7位数之后，显示的数字就不确定了
而double能正确显示
*/



/*
	浮点数的精度该如何理解，以float为例
*/
int main()
{
	float f=3987654321;
	cout<<"E表示法："<<f<<endl;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout<<"标准表示法："<<f<<endl;
	return 0;
}
/*
输出
===================================
E表示法：1.23457e+10
标准表示法：12345678848.000000

*/
