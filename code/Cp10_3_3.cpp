/*
	10.3.3 默认构造函数
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	Stock first("first",250,1.25);
	first.show();
	//显示调用默认构造函数
	Stock second = Stock();
	second.show();
	//隐式调用默认构造函数
	Stock third;
	third.show();
	return 0;
}

/*
输出
===============================
call construct
Company: first

Shares: 250
Price: 1.25
Total: 312.5
call default construct
Company: default
Shares: 0
Price: 0
Total: 0
call default construct
Company: default
Shares: 0
Price: 0
Total: 0


*/