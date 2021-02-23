/*
	12.2.5 String 类的使用
*/

#include<iostream>
#include<cstring>
#include "String.h"
using namespace std;


int main()
{
	String s1;
	cout<<"s1: "<<s1<<",length:"<<s1.length()<<endl;
	String s2("abcs2");
	cout<<"s2: "<<s2<<",length:"<<s2.length()<<endl;
	String s3="defs3s3";
	cout<<"s3: "<<s3<<",length:"<<s3.length()<<endl;
	String s4=String("ghis4s4s4");
	cout<<"s4: "<<s4<<",length:"<<s4.length()<<endl;
	//s5初始化，调用复制构造函数
	String s5=s4;
	cout<<"s5: "<<s5<<",length:"<<s5.length()<<endl;
	
	//赋值时把s5的数据拷贝到s1， s1对象已创建，所以不调用构造函数了
	s1=s5;
	cout<<"s1: "<<s1<<",length:"<<s1.length()<<endl;
	
	cout<<"s1[0]: "<<s1[0]<<endl;
	cout<<"s5[1]: "<<s5[1]<<endl;
	
	cout<<endl;
	cout<<"Please input:"<<endl;
	String s6;
	cin>>s6;
	cout<<"s6: "<<s6<<",length:"<<s6.length()<<endl;
	return 0;
}

/*
输出
==============================
default construct
s1: ,length:0
copy char construct
s2: abcs2,length:5
copy char construct
s3: defs3s3,length:7
copy char construct
s4: ghis4s4s4,length:9
copy String construct
s5: ghis4s4s4,length:9
operator= String
s1: ghis4s4s4,length:9
s1[0]: g
s5[1]: h

Please input:
default construct
jkls6
operator= char
s6: jkls6,length:5

*/