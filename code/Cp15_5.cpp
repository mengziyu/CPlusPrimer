/*
	15.5 类型转换运算符
	static_cast	用于良性转换，一般不会导致意外发生，风险很低。
	const_cast	用于 const 与非 const、volatile 与非 volatile 之间的转换。
	reinterpret_cast	
	dynamic_cast 借助 RTTI，用于类型安全的向下转型（Downcasting）。
	
	//c风格强转
	double scores = 95.5;
	int n = (int)scores;
	
	//C++写法
	double scores = 95.5;
	int n = static_cast<int>(scores);
*/


#include <iostream>
#include <cstdlib>
using namespace std;

class Complex{
public:
    Complex(double real = 0.0, double imag = 0.0): m_real(real), m_imag(imag){ }
public:
    operator double() const { return m_real; }  //类型转换函数
private:
    double m_real;
    double m_imag;
};

/*
	static_cast用法：
	1.用于自动类型的转换，如short 转 int , int 转 double，向上转型
	2.用于void指针和具体类型指针之间的转换，如void* 转 int* 
	3.有转换函数类型之间的转换
	
*/
int main_(){
    //下面是正确的用法
    int m = 100;
    Complex c(12.5, 23.8);
    long n = static_cast<long>(m);  //宽转换，没有信息丢失
    char ch = static_cast<char>(m);  //窄转换，可能会丢失信息
    int *p1 = static_cast<int*>( malloc(10 * sizeof(int)) );  //将void指针转换为具体类型指针
    void *p2 = static_cast<void*>(p1);  //将具体类型指针，转换为void指针
    double real= static_cast<double>(c);  //调用类型转换函数
   
    //需要注意的是，static_cast 不能用于无关类型之间的转换，因为这些转换都是有风险的
    //下面的用法是错误的
    //float *p3 = static_cast<float*>(p1);  //不能在两个具体类型的指针之间进行转换，不同的指针类型存储格式不同，长度不同
    //p3 = static_cast<float*>(0X2DF9);  //不能将整数转换为指针类型
    return 0;
}



/*
	const_cast 用法：
	const_cast 比较好理解，它用来去掉表达式的 const 修饰或 volatile 修饰。换句话说，const_cast 就是用来将 const/volatile 类型转换为非 const/volatile 类型。
*/

int main(){
    const int n = 100;
    int *p = const_cast<int*>(&n);
    *p = 234;
	//这里为何还是打印100，是因为在编译期就决定的，直接把n替换成100了
    cout<<"n = "<<n<<endl;
	//这里输出就对了
    cout<<"n = "<<*(&n)<<endl;
    cout<<"*p = "<<*p<<endl;
    return 0;
}

/*
输出
=================
n = 100
n = 234
*p = 234

*/


/*
	dynamic_cast 用法：
	用于在类的继承层次之间进行类型转换，它既允许向上转型（Upcasting），也允许向下转型（Downcasting）。向上转型是无条件的，不会进行任何检测，所以都能成功；向下转型的前提必须是安全的，要借助 RTTI 进行检测，所有只有一部分能成功
*/