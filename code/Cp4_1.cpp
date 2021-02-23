
/*
	4.1数组
	1.数组初始化规则

*/
#include<iostream>
using namespace std;

int main()
{
	int cards[4] = { 3,6,8,10 };
	int hand[4];   
	//hand[4] = {5,6,7,9}; //不允许，不能先声明在初始化
	hand[0] = 4;   //可以使用这种方式赋值
	//hand = cards; //不允许

	float hotelTips[5] = {5.0,2.5}; //其他元素为0
	float totals[500] = {0}; //所有元素都为0
	float totals2[500] = {1}; //第一个元素为1，其他元素都为0
	short thins[] = {1,5,3,8}; //可以不写元素个数

	//c++11 初始化方法
	double earn[4]{1.2e4,1.6e4,1.1e4,1.7e4}; //不写等号
	unsigned int counts[10] = {};
	float balances[100]{};
	//初始化禁止缩窄,vs2019能编译通过
	long plifs[] = {25,92,3.0};  //警告：数据丢失
	char slifs[4]{ 'h','i',1122011,'\0'}; //警告：数据丢失
	char tlifs[4]{ 'h','i',112,'\0'}; 
	return 0;
}