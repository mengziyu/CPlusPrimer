/*
	4.5 共用体
	1.共用体与结构类似，但只能同时存储其中一种类型,所有类型都共用一块内存
	2.共用体的长度为最大成员的长度
	3.共用体常用于节省内存，如嵌入式开发
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;
	cout << "sizeof data: " << sizeof(data) << endl;
	data.i = 10;
	cout << "i: " << data.i << ","<<&data.i <<endl;
	data.f = 220.5;
	cout << "f: " << data.f << "," << &data.f << endl;
	strcpy(data.str, "C++ Programming");
	cout << "str: " << data.str << "," << &data.str << endl;
	//i数据被覆盖，无法正常输出
	cout << "i: " << data.i << "," << &data.i << endl;
	return 0;
}
/*
输出
==============================================
sizeof data: 20
i: 10,0093FD2C
f: 220.5,0093FD2C
str: C++ Programming,0093FD2C
i: 539700035,0093FD2C

*/