/*
	7.3.2 将数组作为参数意味着什么
	1.arr作为参数实际上是一个指针，这种方式是引用传递而不是值传递
	2.sizeof 指针 与 sizeof 数组不同
*/

#include<iostream>
using namespace std;
//arr 是一个指针
int sum_arr(int arr[], int n);
//指针表示法
int sum_arr2(int* arr, int n);

void sum_arr3(int arr[]);
void sum_arr4(const int arr[]);

int main()
{
	int cookies[8] = { 1,2,4,8,16,32,64,128 };
	cout << "sizeof cookies: " << sizeof(cookies)<<endl;
	sum_arr(cookies,8);
	sum_arr(cookies,5);

	cout << "cookies[1]: " << cookies[1] << endl;
	sum_arr3(cookies);
	cout << "modified cookies[1]: " << cookies[1] << endl;
	return 0;
}

int sum_arr(int arr[], int n)
{
	cout << "sizeof arr1: " << sizeof(arr) << endl;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

int sum_arr2(int* arr, int n)
{
	cout << "sizeof arr2: " << sizeof(arr) << endl;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

//修改数组
void sum_arr3(int arr[])
{
	arr[1] = 66;
}
//保护数组
void sum_arr4(const int arr[])
{
	//arr[1] = 66; 编译不通过
}
/*
输出
=========================================
sizeof cookies: 32
sizeof arr1: 4
sizeof arr1: 4

*/


