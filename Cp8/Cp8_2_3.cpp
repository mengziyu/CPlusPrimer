/*
	8.2.3 临时变量、引用参数和const
	1.什么时候创建临时变量
	当引用参数是const时，则编译器在下面两种情况生成临时变量
	-实参类型正确，但不是左值
	-实参类型不正确，但可以转换为正确的类型
	啥是左值？能写在=号左边的变量就是左值
*/

#include<iostream>
using namespace std;

double refcube(const double &ra)
{
	return ra * ra * ra;
}
int main()
{
	double side = 3.0;
	double* pd = &side;
	double& rd = side;
	long edge = 5L;
	double lens[4] = {2.0,5.0,10.0,12.0};
	double c1 = refcube(side);
	double c2 = refcube(lens[2]); //操作数组元素与操作同类型变量类似，不用创建临时变量
	double c3 = refcube(rd);
	double c4 = refcube(*pd);
	double c5 = refcube(edge); //edge类型不正确，要临时创建匿名变量转成double，在让ra指向它
	double c6 = refcube(7.0); //不是左值变量，需要创建临时变量
	double c7 = refcube(side+10.0);//不是左值变量，需要创建临时变量

	//注意：
	//临时变量自动创建，自动删除，
	//创建临时变量后原始数据并不会修改,因此想修改原始数据，要禁止创建临时变量
	return 0;
}
