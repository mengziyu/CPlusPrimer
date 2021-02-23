/*
	10.5 对象数组
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	const int N=3;
	//创建数组需要提供默认构造函数
	Stock mystuff[N];
	for(int i=0;i<N;i++)
	{
		mystuff[i].show();
	}
	
	//元素个数不够，其余元素用默认构造函数
	Stock stocks[N]={
		Stock("stock1",1,2.0),
		Stock()
	};
	for(int i=0;i<N;i++)
	{
		stocks[i].show();
	}
	
	return 0;
}
/*
输出
=====================================
call default construct
call default construct
call default construct
Company: default
Shares: 0
Price: 0
Total: 0
Company: default
Shares: 0
Price: 0
Total: 0
Company: default
Shares: 0
Price: 0
Total: 0
call construct
call default construct
call default construct
Company: stock1
Shares: 1
Price: 2
Total: 2
Company: default
Shares: 0
Price: 0
Total: 0
Company: default
Shares: 0
Price: 0
Total: 0
bye default
bye default
bye stock1
bye default
bye default
bye default

*/