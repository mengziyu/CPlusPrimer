/*
	13.4 
	1.静态联编和动态联编
	将源代码中的各个函数解释为特定代码块，称为函数联编
	对于C而言，每个函数名称都不同，在编译阶段就知道调用哪个函数，能够生成确定的代码块，这个过程叫静态联编
	而C++有继承多态，在编译时不能确定，因此编译器要解释为能动态选择虚方法的代码块，这个过程称为动态联编

	2.指针和引用类型的兼容性
	C++不允许将一种类型的地址赋给另一种类型的指针，引用也一样
	double x=2.5;
	int * pi=&x;//invalid
	long & rl=x;//invalid

	但又继承关系的类是可以的

	3.虚成员函数和动态联编
	非虚方法使用静态联编
	虚方法使用动态联编，但有性能消耗，因此要看情况使用，如果在派生类中重新定义基类方法，则使用虚方法，否则，使用非虚方法

	4.虚函数注意事项
	构造函数不能是虚函数
	通常应给基类提供一个虚析构函数，即使该类不需要析构函数，如果该不是基类可以不提供
	友元不能是虚函数，因为友元不是类成员，而只有成员才能是虚函数
	覆写基类方法应保持与基类原型相同,否则基类方法被隐藏
	class Dwelling
	{
	public:
		virtual void showperks(int a) const;
	};

	class Hovel:public Dwelling
	{
	public:
		virtual void showperks() const;  //覆写与基类原型不一致，将导致基类方法无法调用
	};

	如果方法被重载，派生类也要覆写所有版本，否则基类方法被隐藏
	class Dwelling
	{
	public:
		virtual void showperks(int a) const;
		virtual void showperks(double a) const;
	};

	class Hovel:public Dwelling
	{
	public:
		virtual void showperks(int a) const;
		virtual void showperks(double a) const;
	};
*/