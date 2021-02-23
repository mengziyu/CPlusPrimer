/*
	7.3.5 指针和const
	1.尽可能使用const
	使用const避免无意间修改数据导致错误
	使用const作为形参时，可以同时处理const实参和非const实参
*/

#include<iostream>
using namespace std;

int main()
{
	int age = 39;
	//指针常量，const 修饰的是int，说明pt指向的值不能修改，但pt可以指向其他地址
	const int* pt = &age;
	//*pt += 1; //invalid
	cout << "*pt: " << *pt << endl;
	age = 20; //不能通过pt修改，但能通过age修改，age没有被const修饰
	cout << "after *pt: " << *pt << endl;


	const float g_moon = 1.63;
	//float* pm = &g_moon; //禁止将const地址赋值给非const指针
	const float* pm = &g_moon; //valid

	
	int sloth = 3;
	const int* ps = &sloth;
	//常量指针,finger 指向的值可以修改，但不能指向其他地址了
	int* const finger = &sloth;
	//finger = &age; //invalid

	cout << "*finger: " << *finger << endl;
	*finger = age;
	cout << "after *finger: " << *finger << endl;

	return 0;
}
/*
输出
==================================
*pt: 39
after *pt: 20
*finger: 3
after *finger: 20
*/