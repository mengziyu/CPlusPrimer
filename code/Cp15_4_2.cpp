/*
	15.4.2 typeid 和type_info
	获取类型信息
*/

#include<iostream>
#include<typeinfo> //for bad_cast
using namespace std;


class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) :hold(h) {}
	virtual void Speak() const
	{
		cout << "Grand class" << endl;
	}
	virtual int Value() const { return hold; }
};

class Superb :public Grand
{
public:
	Superb(int h = 0) :Grand(h) {}
	virtual void Speak() const
	{
		cout << "Superb class" << endl;
	}
	virtual void Say() const
	{
		cout << "Superb value: " << Value() << endl;
	}
};

class Magnificent :public Superb
{
public:
	Magnificent(int h = 0) :Superb(h) {}
	virtual void Speak() const
	{
		cout << "Magnificent class" << endl;
	}
	virtual void Say() const
	{
		cout << "Magnificent value: " << Value() << endl;
	}
};

int main()
{
	Grand* pg = new Grand;
	Grand* ps = new Superb;
	Magnificent* pm = new Magnificent;
	Magnificent pm2 = Magnificent();
	cout << "typeid(Grand): " <<typeid(Grand).name() << endl;
	cout << "typeid(ps): " <<typeid(ps).name() << endl;
	cout << "typeid(pm): " <<typeid(pm).name() << endl;
	cout << "typeid(pm2): " <<typeid(pm2).name() << endl;
	return 0;
}

/*
输出
==================================
typeid(Grand): class Grand
typeid(ps): class Grand *
typeid(pm): class Magnificent *
typeid(pm2): class Magnificent
*/