/*
	3.1.4 无符号类型
	关于数据溢出

*/

#include<iostream>
#include<climits>
using namespace std;

int main()
{
	short max_shrt=SHRT_MAX;
	short min_shrt=SHRT_MIN;
	unsigned short umax_shrt=USHRT_MAX;
	unsigned short umin_shrt=0;
	
	cout<<"max short value="<<max_shrt<<endl;
	max_shrt+=1;
	cout<<"max short value +1="<<max_shrt<<endl;
	cout<<"min short value="<<min_shrt<<endl;
	min_shrt-=1;
	cout<<"min short value -1="<<min_shrt<<endl<<endl;
	
	cout<<"max unsigned short value="<<umax_shrt<<endl;
	umax_shrt+=1;
	cout<<"max unsigned short value +1="<<(umax_shrt)<<endl;
	cout<<"min unsigned short value="<<umin_shrt<<endl;
	umin_shrt-=1;
	cout<<"min unsigned short value -1="<<(umin_shrt)<<endl;
	
	return 0;
}

/*
输出
=================================

max short value=32767
max short value +1=-32768
min short value=-32768
min short value -1=32767

max unsigned short value=65535
max unsigned short value +1=0
min unsigned short value=0
min unsigned short value -1=65535

*/