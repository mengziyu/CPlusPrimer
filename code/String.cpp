#include<iostream>
#include<cstring>
#include "String.h"
using namespace std;

int String::num=0;
String::String()
{
	cout<<"default construct"<<endl;
	len=0;
	str=new char[1];  //这里不使用指针方式，是为了兼容delete[] str
	str[0]='\0';
	num++;
}
String::String(const char* s)
{
	cout<<"copy char construct"<<endl;
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	num++;
}
String::String(const String & s)
{
	cout<<"copy String construct"<<endl;
	len=s.len;
	str=new char[len+1];
	strcpy(str,s.str);
	num++;
}

String::~String()
{
	num--;
	delete[] str;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

String & String::operator=(const char * s)
{
	cout<<"operator= char"<<endl;
	delete[] str;
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	return *this;
}
String & String::operator=(const String & s)
{
	cout<<"operator= String"<<endl;
	if(this==&s)
	{
		return *this;
	}
	delete[] str;
	len=s.len;
	str=new char[len+1];
	strcpy(str,s.str);
	return *this;
}

bool operator<(const String & str1,const String & str2)
{
	return strcmp(str1.str,str2.str)<0;
}

bool operator>(const String & str1,const String & str2)
{
	return str2<str1;
}

istream & operator>>(istream & is,String & st)
{
	char temp[100];
	is.get(temp,100);
	st=temp;
	while(is&&is.get()!='\n')
	{
		continue;
	}	
	return is;
}
ostream & operator<<(ostream & os,String & st)
{
	cout<<st.str;
	return os;
}