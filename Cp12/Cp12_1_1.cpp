#include<iostream>
#include "stringbad.h"
using namespace std;

void callme1(StringBad & sb);
void callme2(StringBad sb);

int main_()
{
	StringBad headline1("headline1");
	StringBad headline2("headline2");
	StringBad sports("sports");
	cout<<headline1<<endl;
	cout<<headline2<<endl;
	
	callme2(headline2);
	callme1(headline1);
	
	return 0;
}

//引用传递
void callme1(StringBad & sb)
{
	cout<<"callme1,sb:"<<sb<<endl;
}
//值传递，参数sb会自动释放
//sb被赋值，但从输出来看，并没有调用构造函数，有调用析构函数，同时也影响num的计数
//那调用的是哪个构造？
//是复制构造函数，我们没有定义，就使用了默认复制构造函数
//默认构造函数没有正确深拷贝数据，导致headline2 数据损坏
//delete sports后，delete headline2 乱码，报错
void callme2(StringBad sb)
{
	cout<<"callme2,sb:"<<sb<<endl;
}


/*
输出
=====================================
construct,headline1,address:0x28cc60
num:1
construct,headline2,address:0x28cc58
num:2
construct,sports,address:0x28cc50
num:3
headline1
headline2
callme2,sb:headline2
delete headline2,address:0x28cc68
num:2
callme1,sb:headline1
delete sports,address:0x28cc50
num:1
delete ▒        +a▒     +a,address:0x28cc58
Aborted (core dumped)

*/


int main__()
{
	StringBad sports("sports");
	StringBad headline1("headline1");
	
	//这样赋值初始化相当于StringBad sb=StringBad(sports) ,调用的是复制构造函数,产生临时对象
	StringBad sb=sports;
	cout<<"sb:"<<sb<<endl;
	cout<<headline1<<endl;
	
	
	return 0;
}
/*
输出
=====================================
construct,sports,address:0x28cc68
num:1
construct,headline1,address:0x28cc60
num:2
sb:sports
headline1
delete sports,address:0x28cc58
num:1
delete headline1,address:0x28cc60
num:0
delete ▒        +a▒     +a,address:0x28cc68
Aborted (core dumped)


*/

int main()
{
	StringBad sports("sports");
	
	StringBad sb;
	//赋值
	sb=sports;
	
	StringBad headline1("headline1");
	
	cout<<"sb:"<<sb<<endl;
	cout<<headline1<<endl;
	
	
	return 0;
}

/*
输出
=====================================
construct,sports,address:0x28cc68
num:1
default construct,C++,address:0x28cc60
num:2
construct,headline1,address:0x28cc58
num:3
sb:sports
headline1
delete headline1,address:0x28cc58
num:2
delete sports,address:0x28cc60
num:1
delete ▒        +a▒     +a,address:0x28cc68
Aborted (core dumped)

*/