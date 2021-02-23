/*
	输入秒，转换成日时分秒
*/
#include<iostream>
using namespace std;


int main()
{
	long long sec;
	cout<<"Input seconds:";
	cin>>sec;
	int d=sec/86400;
	sec = sec % 86400;
	int h=sec/3600;
	sec = sec % 3600;
	int m=sec/60;
	sec = sec % 60;
	cout << "day:" << d << ",hour:" << h << ",min:" << m << ",sec:" << sec << endl;
	return 0;
}