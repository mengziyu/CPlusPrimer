#include<iostream>
#include<cstring>
#include "stringbad.h"
using namespace std;

//初始化静态变量
int StringBad::num=0;

StringBad::StringBad(const char * s)
{
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	cout<<"construct,"<<str<<",address:"<<this<<endl;
	num++;
	cout<<"num:"<<num<<endl;
}
StringBad::StringBad()
{
	len=4;
	str=new char[4];
	strcpy(str,"C++");
	cout<<"default construct,"<<str<<",address:"<<this<<endl;
	num++;
	cout<<"num:"<<num<<endl;
}
StringBad::~StringBad()
{
	cout<<"delete "<<str<< ",address:"<<this<<endl;
	num--;
	delete[] str;
	cout<<"num:"<<num<<endl;
}
std::ostream & operator<<(std::ostream & os,const StringBad & st)
{
	cout<<st.str;
	return os;
}
