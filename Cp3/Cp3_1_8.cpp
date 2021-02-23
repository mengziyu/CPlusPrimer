/*
	3.1.8 char 类型
	1.char一个字节，表示范围-128~127
	2.字符是以ASCII码值存储的
	'A' ASCII码 65
	'a' ASCII码 97
	'5' ASCII码 53
	''  ASCII码 32
	'!' ASCII码 33
	3.为了表示更多字符，出现Unicode和ISO 10646字符集，ASCII码是它们的子集
	4.char 1个字节无法表示日文汉字系统，需要使用wchar_t,支持2个字节(不同系统表示字节不同)
	5.C++11新增char16_t(16位2字节)和char32_t(32位4字节)

*/

#include<iostream>
#include<climits>
using namespace std;

int main_()
{
	char ch='M';
	//char 转成ASCII码
	int i=ch; 
	cout<<"ASCII code for "<<ch<<" is "<<i<<endl;
	
	ch=ch+1;
	i=ch;
	cout<<"ASCII code for "<<ch<<" is "<<i<<endl; //cout 能自动判断类型，输出不同的值
	
	
	cout<<"Display char using cin.put:"<<endl;
	cout.put(ch);
	cout.put('!');
	
	return 0;
}

/*
输出
===========================
ASCII code for M is 77
ASCII code for N is 78
Display char using cin.put:
N!

*/


locale loc("chs");
int main()
{
	wchar_t bob=L'P';
	//使用wcout才能输出长字节
	wcout<<bob<< ","<<sizeof(bob) << " byte" <<endl;
	
	wchar_t h=L'汉';
	wcout << h << "," << sizeof(h) << " byte" << endl;
	wcout.imbue(loc); 
	wcout<<h<<endl;
	return 0;
}

/*
输出
========================
P,2 byte

*/
//汉字不能输出？？


int main__()
{
	char16_t ch1=u'q';
	char32_t ch2=U'Q';
	char16_t ch3=u'汉';
	char32_t ch4=U'字';
	
	cout<<"ch1: "<<ch1<<",size: "<<sizeof(ch1)<<endl;
	cout<<"ch2: "<<ch2<<",size: "<<sizeof(ch2)<<endl;
	cout<<"ch3: "<<ch3<<",size: "<<sizeof(ch3)<<endl;
	cout<<"ch4: "<<ch4<<",size: "<<sizeof(ch4)<<endl;
	return 0;
}

/*
输出
============================
ch1: 113,size: 2
ch2: 81,size: 4
ch3: 27721,size: 2
ch4: 23383,size: 4

*/

