/*
	8.3 默认参数
	
*/

#include<iostream>
#include<string>
using namespace std;

int harpo(int n, int m = 4,int j=5);
//int chico(int n,int m=6,int j); //不合法，为某个参数设置默认值，必须为它右边的所有参数设置默认值
int groucho(int k=1,int m=2,int n=3);


int main()
{
	//harpo(3,,8);//调用也要按顺序调用，不能跳

	return 0;
}