/*
	7.3 函数和数组
	1.指针与数组的关系

*/

#include<iostream>
using namespace std;
//arr 是一个指针
int sum_arr(int arr[],int n);
//指针表示法
int sum_arr2(int *arr,int n);

/*
指针与数组的关系恒等式
arr[i]==*(arr+i)
&arr[i]==arr+i

*/

int main()
{
	int cookies[8] = {1,2,4,8,16,32,64,128};
	cout << "total: " << sum_arr(cookies,8)<<endl;
	cout << "total2: " << sum_arr2(cookies,5)<<endl;
	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

int sum_arr2(int *arr, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
/*
输出
==================================
total: 255
total2: 31

*/