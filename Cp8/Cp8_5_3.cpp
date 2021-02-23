/*
	8.5.3 
	1.显示具体化
	2.实例化和具体化
	实例化：
	具体化：
*/

#include<iostream>
#include<string>
using namespace std;

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <typename T>
void Swap(T& a,T& b);
//显示具体化
//这样的好处是可以选择其中某些数据进行交换，而不是全部
//编译器在选择原型时，非模板函数 > 显示具体化函数 > 常规模板函数
//Swap<job> job是可选的，因为函数的参数类型已表明
template<> 
void Swap<job>(job& j1, job& j2);
//函数原型
void Show(job& j);

int main_()
{

	job sue = {"Susan Yaffe",73000.60,7};
	job sidney = {"Sidney Taffe",78060.72,9};

	Swap(sue,sidney);
	Show(sue);
	Show(sidney);
	return 0;
}


template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = a;
}
template<>
void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
//函数定义
void Show(job& j)
{
	cout << "name:" << j.name <<endl;
	cout << "salary:" << j.salary <<endl;
	cout << "floor:" << j.floor <<endl;
}

/*
输出
========================================
name:Susan Yaffe
salary:78060.7
floor:9
name:Sidney Taffe
salary:73000.6
floor:7
*/

//实例化：模板函数并不是一个函数的定义，它只是一个函数定义的规则
//当真正使用的时候，才根据具体类型生成函数定义，有了函数定义才能编译生成实例并执行

//如int类型Swap2(a,b),double 类型Swap2(i,j)
//这种方式叫隐式实例化
template <typename T>
void Swap2(T& a, T& b);

//注意：不知道为啥，要声明显示实例化和显示具体化，要先声明隐式实例化，要是我把上面两句注释掉，显示实例化和显示具体化
//将提示异常,说未找到函数定义

//显示实例化，使用前就使用具体类型生成函数定义
//但这玩意儿有啥用
//template 
//void Swap2<job>(job& j1, job& j2);

//显示具体化，比显示实例化多一个 <>
//显示具体化不能与显示实例化一起编译
template<>
void Swap2<job>(job& j1, job& j2);


//隐式实例化,显示实例化,显示具体化 都称为显示具体化

int main()
{
	
	return 0;
}
