/*
	11.1 运算符重载
	1.重载的运算符必须是有效的运算符，不能出现@这样的字符
	2.重载的限制
	重载运算符至少有一个操作数是用户自定义类型，防止对标准类型重载
	不能违反原来运算符的用法规则
	如：
	int x;
	Time shiva;
	% x;	//invalid
	% shiva; //invalid
	不能修改运算符优先级
	不能创建新的运算符，如不能定义operator**()来求幂
	不能重载运算符：
	.
	.*
	::
	?:  条件运算符
	typeid
	const_cast
	reinterpret_cast
	static_cast

*/

#include<iostream>
#include "mytime.h";
using namespace std;

int main()
{
	Time coding(2,40);
	Time fixing(5,55);

	Time total;
	//运算符调用法
	total = coding + fixing;
	total.Show();

	Time morefixing(3,28);
	//函数调用法
	total = morefixing.operator+(total);
	total.Show();
	//也可以这样调用
	total = coding + fixing + morefixing;

	total = coding * 1.5;
	return 0;
}
/*
输出
====================================
hour: 7
minutes: 95
hour: 10
minutes: 123
*/