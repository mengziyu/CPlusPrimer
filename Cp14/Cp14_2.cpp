/*
	14.2 私有继承
	派生类只能访问基类的公有成员
	基类的成员只能由直接派生类访问，而无法再往下继承，也不提供外部访问接口
*/
#include<iostream>
#include<string>
using namespace std;

class People
{
private:
	string name;
	int score;
public:
	string Name() { return name; };
	int Score() { return score; };
};

class Student :private People
{
public:
	string getName() { return Name(); };
};

class Student2 :private People
{
public:
	//使用using声明就可以提供外界接口
	using People::Name;
};


int main()
{
	Student stu;
	//stu.Name(); //不能访问
	stu.getName(); //自定义一个公有方法来使用

	//还有另一种方法，using声明后就可以访问
	Student2 stu2;
	stu2.Name();
	return 0;
}