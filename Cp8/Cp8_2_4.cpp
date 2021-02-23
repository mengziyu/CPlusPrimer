/*
	8.2.4 将引用用于结构
*/

#include<iostream>
#include<string>
using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main_()
{
	free_throws one = {"ifelsa brnch",13,14};
	free_throws two = {"andor knott",10,16};
	free_throws team = {"Throwgoods",0,0};

	set_pc(one);
	display(one);

	//accumulate 返回的是结构引用，相当于返回team，这样效率更高
	display(accumulate(team, two));

	return 0;
}

void display(const free_throws& ft)
{
	cout << "name: " << ft.name<<endl;
	cout << "made: " << ft.made<<endl;
	cout << "attempts: " << ft.attempts <<endl;
	cout << "percent: " << ft.percent<<endl;
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	}
	else
	{
		ft.percent = 0;
	}
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

/*
输出
================================
name: ifelsa brnch
made: 13
attempts: 14
percent: 92.8571
name: Throwgoods
made: 10
attempts: 16
percent: 62.5

*/


//返回引用时应该注意的问题

const free_throws& clone(free_throws& ft);
const free_throws& clone2(free_throws& ft);

int main()
{
	free_throws one = { "ifelsa brnch",13,14 };
	//避免返回临时变量的引用
	//clone 调用完后newguy会自动释放，也不确定什么时候会释放，若真的释放了，f1指向的就是空
	const free_throws& f1 = clone(one);
	//避免返回临时变量的指针
	//这样容易忘记delete指针
	const free_throws& f2 = clone2(one);
	return 0;
}

//返回临时变量的引用
const free_throws& clone(free_throws& ft)
{
	free_throws newguy;
	newguy = ft; //把数据拷贝给newguy
	return newguy;
}
const free_throws& clone2(free_throws& ft)
{
	free_throws* pt=new free_throws;
	*pt = ft;//把数据拷贝给pt
	return *pt;
}