/*
	8.4 函数重载
	1.何时使用重载
	类似功能不同参数类型
	2.C++如何跟踪每个重载函数
	编译器会为每个方法添加一些编码标记
	long MyFunctionFoo(int ,float) --> ?MyFunctionFoo@@YAXH
*/

#include<iostream>
#include<string>
using namespace std;

//不同类型重载
void print(const char* str, int width);
void print(double d, int width);
void print(long l, int width);
void print(int i, int width);
void print(const char* str);

//const 与 非const可以重载
void dribble(char* bits);
void dribble(const char* bits);

//返回值不能重载
long gronk(int n,float m);
//double gronk(int n,float m);

