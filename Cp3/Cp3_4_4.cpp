/*
	3.4.4 类型转换
	
	1.初始化和赋值进行的转换
	不同的类型的变量在赋值时会产生类型转换
	较大浮点类型转较小浮点类型精度降低
	浮点类型转换整型，小数点丢失
	较大整型转较小整型，只复制低位字节
	0赋给bool被转成false，非0赋给bool被转成true
	
	2.使用C++11{}进行转换时要求严格，列表初始化不允许缩窄
	
	3.表达式中的转换
	当同一个表达式中包含两种不同类型时，将会被转换
	一种方式是，一些类型会自动转换，如bool,char,unsigned char,signed char,short会自动转换成int，这叫整型提升
	short sh1=20;
	short sh2=35;
	short sh3=sh1+sh2;
	执行第3行时，先把sh1和sh2转成int，计算完成后再赋值给sh3，通常int是计算机最自然的类型，这样计算更快
	
	另一种方式是，其他类型组合出现时被转换，如long double，double，float 
	
	C++11有个转换规则表，比较复杂，总结如下：
	只存在第一种方式的类型，就整型提升
	存在第二种方式时，较小类型转较大类型，有无符号也是一样
	
	
	4.传递参数时的转换
	
	5.强制类型转换
	(long)thorn
	long(thorn)
	
*/



#include<iostream>
#include<climits>
using namespace std;

int main_()
{
	cout.setf(ios_base::fixed,ios_base::floatfield);
	float tree=3;   //int 转 float
	int guess(3.9832); //double 转 int
	//溢出
	int debt=7.2E12;  
	
	cout<<"tree="<<tree<<endl;
	cout<<"guess="<<guess<<endl;
	cout<<"debt="<<debt<<endl;
	
	return 0;
}

/*
输出
=================================
tree=3.000000
guess=3
debt=2147483647

*/




//使用C++11{}
int main__()
{
	const int code=66;
	int x=66;
	//char c1{31325};   //编译不通过，数值过大
	char c2{66};
	char c3{code};
	char c4{x};   //编译通过,但有警告，x是变量，可能范围比char大，{}要求严格
	x=31325;
	char c5=x; 
	
	return 0;
}





int main()
{
	int auks,bats,coots;
	auks = 19.99+11.99;  //31.98 > 31
	bats=(int)19.99+(int)11.99;  //19+11 > 30
	coots=int(19.99)+int(11.99);
	cout<<"auks="<<auks<<endl;
	cout<<"bats="<<bats<<endl;
	cout<<"coots="<<coots<<endl;
	
	char ch='Z';
	cout<<ch<<" code is "<<int(ch)<<endl;
	return 0;
}
/*
输出
======================================
auks=31
bats=30
coots=30
Z code is 90

*/










