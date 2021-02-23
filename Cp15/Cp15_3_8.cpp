/*
	15.3.8 exception 类
	可以通过what()获取异常信息
	异常类型：
	logic_error 派生于exception，又派生出以下几种异常：
	domain_error 数学函数定义域异常
	invalid_argument 无效参数异常
	lenght_error 没有足够空间来执行操作异常
	out_of_bounds 索引越界异常

	runtime_error 派生于exception，又派生出以下几种异常：
	range_error  
	overflow_error 数学上溢出异常
	underflow_error 数学下溢出异常

	bad_alloc异常和new
	C++最新处理：new分配内存出错了，会抛出bad_alloc异常
	旧版本会返回一个空指针
*/

#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

//继承exception自定义异常
class bad_hmean :public exception
{

};

int main()
{
	try {
		
	}
	catch (exception & e) {
		e.what();
	}
	return 0;
}