#include<iostream>
using namespace std;
#ifndef STRING_H
#define STRING_H
class String{
	private:
		char * str;
		int len;
		static int num;
	public:
		String();
		String(const char* s);
		String(const String & s);
		~String();
		int length() const {return len;};
		friend bool operator<(const String & str1,const String & str2);
		friend bool operator>(const String & str1,const String & str2);
		friend bool operator==(const String & str1,const String & str2);
		//赋值操作
		String & operator=(const char * s);
		String & operator=(const String & s);
		friend istream & operator>>(istream & is,String & st);
		friend ostream & operator<<(ostream & os,String & st);
		char & operator[](int i);
		const char & operator[](int i) const;
		static int Howmany(){return num;};
};

#endif