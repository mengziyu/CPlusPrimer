/*
	7.4 函数和二维数组

*/

#include<iostream>
using namespace std;

//传递二维数组
int sum(int (*ar2)[4],int size);
//更直观
int sum(int ar2[][4],int size);

int main()
{

	return 0;
}

int sum(int ar2[][4], int size)
{
	int total;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; i++)
		{
			total += ar2[i][j];
		}
	}
	return total;
}