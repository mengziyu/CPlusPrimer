#pragma once

//Remote提前声明了，而Remote有Tv的引用
//但Tv类还未定义，因此在这里提前声明
class Tv;
class Remote
{
private:
	enum { TV, DVD };
	int mode;
public:
	//因为Tv类只是提前声明，因此这些函数原型还不能访问Tv类的具体方法
	Remote(int m = TV) :mode(m) {}
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void set_chan(Tv& t, int c);
	void set_mode(Tv& t, int m);
};

class Tv
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	//要声明友元函数，则Remote要提前声明，保证Remote已存在
	friend void Remote::set_chan(Tv& t, int c);
	enum {Off,On};
	enum {TV,DVD};
	Tv(int s) :state(s){}
	bool volup();
	bool voldown();
	
};


//inline 才能编译通过？提示找不到？
//因为编译Remote时，还未编译到Tv，所以提示找不到
//使用内联编译可以找到函数定义的地方
inline bool Remote::volup(Tv& t)
{
	return t.volup();
}

//只有指定为友元的函数才能访问私有成员
inline void Remote::set_chan(Tv& t, int c)
{
	t.channel=c;
}