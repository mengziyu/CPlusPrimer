/*
	9.2.2 自动存储持续性
	
*/

#include<iostream>
using namespace std;


int main()
{
	int teledeli=5;
	//代码块
	{
		cout<<"Hello:"<<endl;
		//仅在代码块内有效
		int websight=-2;
		cout<<websight<<" "<<teledeli<<endl;
	}
	cout<<"teledeli:"<<teledeli<<endl;
	
	return 0;
}
/*
输出
========================================
Hello:
-2 5
teledeli:5

*/