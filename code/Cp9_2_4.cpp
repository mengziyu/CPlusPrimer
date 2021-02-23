/*
	9.2.4 静态持续性、外部链接性
	1.单定义规则
		extern 关键字的用法
*/

#include<iostream>
using namespace std;
//全局变量，其他文件可以使用
double warming = 0.3;

void update(double dt);
void local();
int main()
{
	cout << "Global warming: " << warming << endl;
	update(0.1);
	cout << "Global warming: " << warming << endl;
	local();
	cout << "Global warming: " << warming << endl;
	return 0;
}
/*
输出
================================
Global warming: 0.3
Update global warming
Global warming: 0.4
local warming:0.8
Global warming: 0.4

*/
