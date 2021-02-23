/*
	9.2.8 函数和链接性

*/

#include<iostream>
using namespace std;

//static，只有该文件可以使用
static int private1();
//默认情况，函数为外部链接，文件间共享
int public1();

