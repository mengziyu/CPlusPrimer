/*
	13.1 类的继承
*/

#include "tabtenn0.h"
#include <iostream>
using namespace std;


/*
	1.创建派生类对象时，先调用基类构造函数，然后再调用派生类构造函数
	2.释放内存时，先调用派生类析构函数，再调用基类析构函数
*/
int main()
{
	TableTennisPlayer player1("Tara","Boomdea",false);
	RatedPlayer player2(1140,"Mallory","Duck",true);

	cout << "player1 name: ";
	player1.Name();
	cout << "player2 name: ";
	player2.Name();
	return 0;
}
/*
输出
======================
TableTennisPlayer construct
TableTennisPlayer construct
RatedPlayer construct 1
player1 name: Boomdea,Tara
player2 name: Duck,Mallory
RatedPlayer delete
TableTennisPlayer delete
TableTennisPlayer delete
*/
