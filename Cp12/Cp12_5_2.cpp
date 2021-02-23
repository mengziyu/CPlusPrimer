/*
	12.5.2 指针和对象
	
	String *pveg=new String("Cabbage Heads Home");
	创建指针对象时，内存发生了什么？
	
	1.为String对象分配内存，用来存放str和len，num静态成员独立存储在静态内存区
	2.为Cabbage Heads Home分配空间，将Cabbage Heads Home复制到内存
	3.将Cabbage Heads Home 的地址赋值给str，计算长度赋值给len
	4.创建pveg变量，为pveg分配空间
	5.把String对象的地址赋值给pveg
*/

#include<iostream>
#include<cstring>
#include "String.h"
using namespace std;

int main()
{

	String *pveg=new String("Cabbage Heads Home");
	cout<<*pveg<<endl;
	
	return 0;
}
/*
输出
===========================
copy char construct
Cabbage Heads Home

*/