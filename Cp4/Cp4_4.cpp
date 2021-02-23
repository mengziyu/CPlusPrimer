/*
	4.4 结构
	1.结构的使用
	2.结构占用内存大小
*/
#include<iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

//声明时定义变量
struct perks
{
	int key_number;
	char car[12];
}mr_smith,ms_jones;

//声明时初始化
struct perks1
{
	int key_number;
	char car[12];
}mr_glitz = 
{
	7,
	"Packard"
};

//没有结构名称，只能定义一个变量，相当于单例
struct
{
	int x;
	int y;
}position;

int main_()
{
	inflatable guest =
	{
		"Glorious",
		1.88,
		29.99
	};

	inflatable g1 = guest;
	cout << "guest.name: " << guest.name << endl;
	cout << "g1.name: " << g1.name << endl;

	return 0;
}
/*
输出
========================
guest.name: Glorious
g1.name: Glorious

*/

/*
	计算结构内存大小
	结构的内存大小计算并不直接等于各个类型字节大小相加
	而是采用“对齐”的方式计算，这也是为了提高内存访问效率
	对齐规则：
	1.起始地址为该变量类型所占内存的整数倍,空余部分用填充字节填充，最后算出占用字节总数
	2.经过第一步计算过后，检查计算出的结果是否为所有元素中最宽的元素的长度的整数倍，如果是，则结束；若不是，则补齐为它的整数倍

*/

struct M
{
	char a;
	int b;
	double c;
}m;

int main__()
{
	cout << "sizeof m: " << sizeof(m) << endl;
	cout << "sizeof m.a: " << sizeof(m.a) << endl;
	cout << "sizeof m.b: " << sizeof(m.b) << endl;
	cout << "sizeof m.c: " << sizeof(m.c) << endl;
	return 0;
}
/*
输出
===============================
sizeof m: 16
sizeof m.a: 1
sizeof m.b: 4
sizeof m.c: 8
*/

/*
0  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  
----------------------------------------------------------------------
|a | * | * | * | b | b | b | b | c | c | c | c | c | c | c | c ||||||||||||||||||||||
--------------------------------------------------------------------
总共占用16
*/


struct N
{
	char a;
	double b;
	int c;
}n;

int main()
{
	cout << "sizeof n: " << sizeof(n) << endl;
	cout << "sizeof n.a: " << sizeof(n.a) << endl;
	cout << "sizeof n.b: " << sizeof(n.b) << endl;
	cout << "sizeof n.c: " << sizeof(n.c) << endl;
	return 0;
}

/*
输出
==================================
sizeof n: 24
sizeof n.a: 1
sizeof n.b: 8
sizeof n.c: 4

*/

/*


0  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  
-------------------------------------------------------------------------------------
|a | * | * | * | * | * | * | * | b | b | b | b | b | b | b | b | c | c | c | c ||||||||||||||||||
-------------------------------------------------------------------------------------
计算出来是20，但不是最宽类型的整数倍，对齐为24
*/


/*
其他类型
1.指针，指针是个地址，占4个字节
2.结构包含结构，不是以某个结构对象对齐，而是以所有结构中最宽的基本类型
如：
struct X {
	char a;
	int b;
	double c;
};

struct Y {
	char a; [0]   //是以double对齐的
	X b; [8, 23]
}S8;

int main() {
	cout << sizeof(S8) << endl;   // 24
}

*/

