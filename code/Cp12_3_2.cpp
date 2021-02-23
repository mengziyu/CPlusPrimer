/**
	12.3.2 包含类成员的类
*/
#include<iostream>
#include<cstring>
#include "String.h"


/**
	Magazine 初始化和赋值操作时，会自动的调用成员类的复制构造和赋值运算
	因此不用额外的为Magazine写复制构造和赋值运算重载，除非有其他需求
*/
class Magazine
{
private:
	String title;
	string publisher;

};