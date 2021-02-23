/*
	10.3.1 
	1.声明和定义构造函数
		在声明对象时，构造函数自动调用
	2.使用构造函数
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	Stock food=Stock("World Cabbage",250,1.25);
	food.show();
	
	Stock garment("Furry Mason",50,2.5);
	garment.show();
	
	Stock* pstock=new Stock("Electric Games",18,19.0);
	pstock->show();
	delete pstock;
	return 0;
}

/*
输出
===========================
Company: World Cabbage
Shares: 250
Price: 1.25
Total: 312.5
Company: Furry Mason
Shares: 50
Price: 2.5
Total: 125
Company: Electric Games
Shares: 18
Price: 19
Total: 342

*/