#define _CRT_SECURE_NO_WARNINGS
#include "dma.h"
#include<iostream>
#include<string>
using namespace std;

baseDMA::baseDMA(const char* l, int r)
{
	lable = new char[std::strlen(l) + 1];
	std::strcpy(lable,l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA& rs)
{
	lable = new char[std::strlen(rs.lable) + 1];
	std::strcpy(lable, rs.lable);
	rating = rs.rating;
}
baseDMA:: ~baseDMA()
{
	delete[] lable;
}
baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] lable;
	lable = new char[std::strlen(rs.lable) + 1];
	std::strcpy(lable, rs.lable);
	rating = rs.rating;
}
std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	return os;
}


//派生类实现
//派生类这些方法要为基类分配内存，这样基类调用析构函数时释放才能够成功

//调用构造函数
hasDMA::hasDMA(const char* l, int r,const char* s):baseDMA(l,r)
{
	style = new char[std::strlen(l) + 1];
	std::strcpy(style, l);
}

//调用基类复制构造
hasDMA::hasDMA(const hasDMA& hs) :baseDMA(hs) 
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
hasDMA:: ~hasDMA()
{
	delete[] style;
}
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;
	//调用基类赋值运算符
	baseDMA::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	return os;
}