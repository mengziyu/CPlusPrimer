/*
	11.6 类的自动转换和强制类型转换
*/

#include<iostream>
#include "stonewt.h";
using namespace std;

int main()
{
	Stonewt mycat;
	//隐式的把double数据转换成对象，将调用构造函数Stonewt(double d)来创建对象
	//这种只针对一个参数的，若有多个参数，其他参数提供默认值也可以转换，如Stonewt(double d,int s=0)
	//这可能很牛逼吗，但很茫然，想要关闭这种特性吗，加上关键字explicit
	//mycat = 19.6; //加上之后就报错了
	return 0;
}
/*
输出
============================
default construct
construct 1
*/