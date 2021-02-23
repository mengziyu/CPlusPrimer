/*
	4.8.3 指针和字符串
	1.strcpy 和 strncpy
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

int main_()
{
	char animal[20] = "bear";
	const char* bird = "wren";  //"wren" 表示的是字符串的地址，内存会将地址与字符串关联起来
	char* ps;
	cout << "animal address: "<<(int*)animal <<endl;
	//cout << ps << endl;//未初始化，空指针
	ps = animal;  //ps指向animal首地址
	cout << "ps: " << ps << endl;
	cout << "ps address: " << (int*)ps << endl; //输出地址需要强制转换

	ps = new char[strlen(animal) + 1]; //ps自己开辟地址
	strcpy(ps,animal);
	cout << "After new address:" <<endl;
	cout << "ps: " << ps << endl;
	cout << "ps address: " << (int*)ps << endl; //输出地址需要强制转换

	delete[] ps;
	return 0;
}
/*
输出
======================================
animal address: 010FF9C8
ps: bear
ps address: 010FF9C8
After new address:
ps: bear
ps address: 01310410

*/

int main()
{
	char food[20] = "carrots";
	strcpy(food,"a picnic basket filled with many goodies"); //要复制的字节大于数组长度，其余字符会复制到数组后面的字节中，覆盖其他内存数据
	strncpy(food, "a picnic basket filled with many goodies",19);//指定长度
	food[19] = '\0'; //strncpy默认没有空字符，要自己加上
	return 0;
}