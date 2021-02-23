/*
	4.6 枚举
*/

#include<iostream>
using namespace std;


int main()
{
	enum spectrum {red,orange,yellow,green};//默认第一个元素值为0，后面的+1
	enum bits {one=1,two=2,four=4,eight=8};//直接给定值
	enum bigstep { first, second = 100, third };//third=101

	cout<<"red: "<<red<<endl;
	cout<<"third: "<<third<<endl;
	return 0;
}
/*
输出
====================================
red: 0
third: 101

*/