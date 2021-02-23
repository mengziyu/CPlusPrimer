/*
	10.6.1 作用域为类的常量
*/

class Barkey
{
	private:
		const int Months=12;
		//编译不通过，因为这只是类的声明，并没存储Months的内存空间
		//数组并不知道Months是啥
		//double costs[Months];
		//动态分配内存可以
		double *d=new double[Months];
};

//解决办法用枚举
class Barkey1
{
	private:
		enum{Months=12};
		double costs[Months];

};

//另一种解决办法 static
//所有对象共享这个变量
class Barkey2
{
	private:
		static const int Months=12;
		double costs[Months];

};
int main()
{
	
	return 0;
}