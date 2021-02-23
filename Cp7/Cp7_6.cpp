/*
	7.6 函数和结构
	1.传递和返回结构
	2.传递结构的地址
*/

#include<iostream>
using namespace std;

struct travel_time
{
	int hours;
	int mins;
};
travel_time sum(travel_time t);
void show_time(travel_time t);

int main_()
{
	travel_time day1 = {5,45};
	travel_time day2 = {4,55};
	show_time(sum(day1));
	show_time(day2);
	return 0;
}

//实参内容被复制到形参
travel_time sum(travel_time t) {

	travel_time tt;
	tt.hours = t.hours;
	tt.mins = t.mins;
	return tt;
}

void show_time(travel_time t)
{
	cout << "show_time: " << endl;
	cout << t.hours << " hours,"
		<< t.mins <<" mins"<< endl;
}
/*
输出
===================================
show_time:
5 hours,45 mins
show_time:
4 hours,55 mins
*/

void show_time2(travel_time* t);

int main()
{
	travel_time day1 = { 5,45 };
	show_time2(&day1);
	//值可以被修改
	cout << "after day1.hours: " << day1.hours << endl;
	return 0;
}
/*
输出
========================================
show_time:
5 hours,45 mins
after day1.hours: 6
*/


void show_time2(travel_time* t)
{
	cout << "show_time: " << endl;
	cout << t->hours<< " hours,"
		<< t->mins << " mins" << endl;
	t->hours = 6;
}