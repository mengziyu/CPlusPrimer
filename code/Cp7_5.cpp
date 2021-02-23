/*
	7.5 函数和C风格字符串
*/

#include<iostream>
using namespace std;

unsigned int c_in_str(const char* str,char ch);
int main_()
{
	char mmm[15] = "minimum";
	const char* wail = "ululate";
	unsigned int ms = c_in_str(mmm,'m');
	unsigned int us = c_in_str(wail,'u');

	cout << "ms: " << ms << endl;
	cout << "us: " << us << endl;
	return 0;
}
unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
		{
			count++;
		}
		str++;
	}
	return count;
}

/*
输出
========================
ms: 3
us: 2
*/


char* buildstr(char c,int n);

int main()
{
	char* pc = buildstr('m', 5);
	cout << "buildstr: " << pc << endl;
	delete pc;
	return 0;
}
char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;
}
/*
输出
=======================================
buildstr: mmmmm
*/