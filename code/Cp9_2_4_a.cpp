#include<iostream>
using namespace std;

//extern 表示使用已定义的变量，不在重新分配内存
extern double warming;

void update(double dt)
{
	warming += dt;
	cout <<"Update global warming"<<endl;
}

void local()
{
	//没有使用extern，新定义一个变量
	double warming = 0.8;
	cout << "local warming:"<< warming << endl;
}