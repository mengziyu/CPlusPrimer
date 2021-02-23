/*
	13.6 抽象基类
*/
#include<iostream>
using namespace std;

//纯虚函数(抽象类)
//1.当一个类具有一个纯虚函数，这个类就是抽象类
//2.抽象类不能实例化对象
//3.子类继承抽象类，必须要实现纯虚函数，如果没有，子类也是抽象类
//抽象类的作用：为了继承约束，根本不知道未来的实现

class Shape {
public:
	//纯虚函数，后面要有 =0
	virtual void sayArea() = 0;
	void print() {
		cout << "hi" << endl;
	}
};


class Circle : public Shape {
public:
	Circle(int r) {
		this->r = r;
	}
	void sayArea() {
		cout << "圆的面积：" << (3.14 * r * r) << endl;
	}
private:
	int r;
};

void main() {
	//Shape s;
	Circle c(10);
	c.sayArea();
}

/*
输出
===========================
圆的面积：314
*/