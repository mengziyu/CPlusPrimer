/*
	6.3 字符函数库cctype
	isalnum		如果参数为字母或数字，返回true
	isalpha		如果参数为字母，返回true
	isblank		如果参数为空格(包括TAB键和space键输入)，返回true
	iscntrl		如果参数为控制字符，返回true，控制字符不会打印显示，可用isprint()判断
	isdigit		如果参数为数字，返回true
	isgraph		如果参数是除空格之外的打印字符，返回true
	islower		如果参数为小写字母，返回true
	isprint		如果参数为打印字符，返回true
	ispunct		如果参数为标点符号，返回true
	isspace		如果参数为空白符，如回车、空格、Tab…，返回true
	isupper		如果参数为大写字母，返回true
	isxdigit	如果参数为十六进制数，返回true

	tolower	将字母转换为小写返回
	toupper	将字母转换为大写返回
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	char ch = 'A';
	
	return 0;
}