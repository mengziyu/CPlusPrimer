/*
	9.2.5 静态持续性、内部链接性
*/

#include<iostream>
using namespace std;

//static 是私有的，只能这个文件内使用，没有static将编译报错Cp9_2_5_a.cpp
static int harry = 200;

void func1();
int main()
{
	cout<<"static harry: "<<harry<<endl;
	func1();
	return 0;
}

/*
输出
=========================
static harry: 200
harry: 300
*/