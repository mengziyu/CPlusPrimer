/*
	10.2.3 实现类成员函数
*/

#include <iostream>
#include "Cp10_2_2.h"

//默认构造函数
Stock::Stock()
{
	using namespace std;
	cout<<"call default construct"<<endl;
	company="default";
	shares=0L;
	share_val=0.0;
	total_val=0.0;
	set_tot();
}

//构造函数
Stock::Stock(const std::string & co,long n,double pr)
{
	using namespace std;
	company = co;
	cout<<"call construct "<<company<<endl;
	if(n<0)
	{
		shares=0;
	}
	else
	{
		shares=n;
	}
	share_val=pr;
	set_tot();
}

//析构函数
Stock::~Stock()
{
	using namespace std;
	cout << "bye " << company <<endl;
}

void Stock::aquire(const std::string & co,long n,double pr)
{
	company = co;
	if(n<0)
	{
		shares=0;
	}
	else
	{
		shares=n;
	}
	share_val=pr;
	set_tot();
}
void Stock::buy(long num,double price)
{
	using namespace std;
	cout<<"buy"<<endl;
	if(num<0)
	{
	}
	else
	{
		shares+=num;
		share_val=price;
	}
}
void Stock::sell(long num,double price)
{
	using namespace std;
	cout<<"sell"<<endl;
	if(num<0)
	{
	}
	else if(num>shares)
	{
	}
	else
	{
		shares-=num;
		share_val=price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val=price;
	set_tot();
}
void Stock::show() const
{
	using namespace std;
	cout<<"Company: "<<company<<endl;
	cout<<"Shares: "<<shares<<endl;
	cout<<"Price: "<<share_val<<endl;
	cout<<"Total: "<<total_val<<endl;
}

const Stock& Stock::topval(const Stock& s) const 
{
	return *this;
}