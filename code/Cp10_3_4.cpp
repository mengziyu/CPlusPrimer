/*
	10.3.4 析构函数
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	//初始化stock1
	Stock stock1("NanoSmart",12,20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo Obj",2,2.0);
	stock2.show();
	//stock2 内容被覆盖
	stock2 = stock1;
	//这里不是初始化了，而是赋值操作，用Stock(...)形式会创建一个临时对象，从输出可以看出临时变量被创建和释放
	//因此初始化更高效
	stock1= Stock("Nifty Foods", 10, 50.0);
	stock1.show();

	//使用const调用
	//const 表示对象内容不被修改
	//const Stock land = Stock("Klu",1,1.0);
	//为了保证函数不修改对象，也要声明为const
	//land.show();
	return 0;
}

/*
输出
=================================
call construct NanoSmart
Company: NanoSmart
Shares: 12
Price: 20
Total: 240
call construct Boffo Obj
Company: Boffo Obj
Shares: 2
Price: 2
Total: 4
call construct Nifty Foods
bye Nifty Foods
Company: Nifty Foods
Shares: 10
Price: 50
Total: 500
bye Boffo Obj
bye Nifty Foods
*/