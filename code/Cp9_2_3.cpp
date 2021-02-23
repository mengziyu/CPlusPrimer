/*
	9.2.2 静态存储变量
	静态变量在程序运行期间都不变且一直存在，因此分配固定的内存区来存储静态变量
*/

#include<iostream>
using namespace std;	

//全局变量，其他文件也可以访问
int global = 1000;
//静态变量，只能该文件访问
static int one_file = 50;

int main()
{
	return 0;
}

void func1(int n)
{
	//静态变量，只能这个函数访问
	//即使没有调用这个方法，count也会存在静态内存区
	static int count = 0;
	int llama = 0;
}