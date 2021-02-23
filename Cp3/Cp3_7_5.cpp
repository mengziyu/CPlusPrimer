/*
	输入世界人口，计算人口占百分比
*/
#include<iostream>
using namespace std;


int main()
{
	long long po;
	cout<<"Input all po:";
	cin>>po;
	long long po1;
	cout<<"Input A po:";
	cin>>po1;
	float percent=(po1 * 1.0f/po)*100;
	cout<<"percent:"<<percent<<"%"<<endl;
	return 0;
}