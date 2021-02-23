/*
	3.3.4 浮点数的优缺点
	可以表示整数之间的值
	由于有缩放因子，可以表示的范围大得多
	但浮点数运算比整数慢，且精度降低

*/

#include<iostream>
#include<climits>
using namespace std;

int main()
{
	float a = 2.34E+22F;
	float b = a+1.0F;
	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"b-a="<<(b-a)<<endl;
	return 0;
}
/*
输出
===========================
a=2.34e+22,b=2.34e+22
b-a=0

*/

/*
	由于精度有限，b=a+1 对b没有任何影响
*/