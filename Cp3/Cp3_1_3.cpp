/*
	3.1.3
	1.整型short，int，long，long long
	2.C++初始化方式
	int a=0;
	int b(0);
	int c={};
	int d{};
*/

#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n_int=INT_MAX;
	short n_short=SHRT_MAX;
	long n_long=LONG_MAX;
	long long n_llong=LLONG_MAX;
	
	cout<<"占的字节数："<<endl;
	cout<<"int "<<sizeof(int)<<" 字节"<<endl;
	cout<<"short "<<sizeof(n_short)<<" 字节"<<endl;
	cout<<"long "<<sizeof(n_long)<<" 字节"<<endl;
	cout<<"long long "<<sizeof(n_llong)<<" 字节"<<endl<<endl;
	
	cout<<"能表示的最大值："<<endl;
	cout<<"int "<<n_int<<endl;
	cout<<"short "<<n_short<<endl;
	cout<<"long "<<n_long<<endl;
	cout<<"long long "<<n_llong<<endl<<endl;
	
	
	cout<<"能表示的最小值："<<endl;
	cout<<"int "<<INT_MIN<<endl;
	cout<<"short "<<SHRT_MIN<<endl;
	cout<<"long "<<LONG_MIN<<endl;
	cout<<"long long "<<LLONG_MIN<<endl<<endl;
	
	
	cout<<"无符号能表示的最大值："<<endl;
	cout<<"int "<<UINT_MAX<<endl;
	cout<<"short "<<USHRT_MAX<<endl;
	cout<<"long "<<ULONG_MAX<<endl;
	cout<<"long long "<<ULLONG_MAX<<endl<<endl;
	
	
	cout<<"无符号最小值都是0"<<endl;
	
	
	return 0;
}

/*
输出
=================================
占的字节数：
int 4 字节
short 2 字节
long 4 字节
long long 8 字节

能表示的最大值：
int 2147483647
short 32767
long 2147483647
long long 9223372036854775807

能表示的最小值：
int -2147483648
short -32768
long -2147483648
long long -9223372036854775808

无符号能表示的最大值：
int 4294967295
short 65535
long 4294967295
long long 18446744073709551615

无符号最小值都是0


*/