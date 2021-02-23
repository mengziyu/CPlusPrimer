/*
	10.2.2 C++中的类
	1.在头文件声明类
*/


#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock
{
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot()
		{
			total_val=shares*share_val;
		}
	public:
		//默认构造函数
		Stock();
		//构造函数，主要用来初始化数据成员
		Stock(const std::string & co,long n,double pr);
		//参数名称不能与成员名称相同
		//Stock(const std::string & company,long shares,double share_val);
		
		//析构函数，用来释放内存
		//如果是自动变量，在代码块执行完成时，自动调用析构函数
		//如果变量时new动态存储，则调用delete时自动调用析构函数
		~Stock();

		void aquire(const std::string & co,long n,double pr);
		void buy(long num,double price);
		void sell(long num,double price);
		void update(double price);
		//静态函数，show不会修改调用对象的内容
		void show() const;
		const Stock& topval(const Stock& s) const;
		
};

#endif