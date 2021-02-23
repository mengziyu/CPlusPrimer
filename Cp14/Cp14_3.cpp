/*
	14.3 多继承
*/
class A {
public:
	void func();
};
class B {
private:
	bool func() const;
};
class C : public A, public B {};


int main_()
{
	C c;
	//虽然B::func是私有的，但仍然会编译错。这是由C++的重载函数调用的解析规则决定的， 首先找到参数最匹配的函数，然后再检查可见性
	//c.func();
	c.A::func();
	return 0;
}

//多继承菱形

//使用虚基类继承，	则IOFile只保存基类一份数据拷贝
class File {};
class InputFile : virtual public File {};
class OutputFile : virtual public File {};
class IOFile : public InputFile, public OutputFile {};



//如果能不使用多继承，就不用他
//如果一定要多继承，尽量不在里面放数据，也就避免了虚基类初始化的问题


