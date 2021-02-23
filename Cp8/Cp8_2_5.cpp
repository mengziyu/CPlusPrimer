/*
	8.2.5 将引用用于类对象
*/

#include<iostream>
#include<string>
using namespace std;

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

int main()
{
	string input = "It's not my fault";
	string result;

	//version1 返回的是一个临时对象并复制给result，version1执行完成后，临时对象被删除
	result = version1(input, "***");
	cout << "version1 result: " << result << endl;
	//version2 返回s1引用
	result = version2(input, "###");
	cout << "version2 result: " << result << endl;
	//version3 返回一个临时对象的引用，导致程序崩溃
	result = version3(input, "@@@");
	cout << "version3 result: " << result << endl;
	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}
const string& version3(string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

/*
输出
==============================================
version1 result: ***It's not my fault***
version2 result: ###It's not my fault###
Segmentation fault (core dumped)

*/
