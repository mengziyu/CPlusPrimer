/*
	10.4 this 指针
	this指向的是当前对象的地址，*this 才是当前对象
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	const Stock first("first",250,1.25);
	first.topval(first).show();
	return 0;
}
/*
输出
========================
call construct
Company: first
Shares: 250
Price: 1.25
Total: 312.5
bye first

*/