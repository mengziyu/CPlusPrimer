#pragma once
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
	//不需要提前声明，语句本身已说明Remote是一个类
	friend class Remote;
	enum {Off,On};
	enum {TV,DVD};
	Tv(int s) :state(s){}
	bool volup();
	bool voldown();
	
};

class Remote
{
private:
	int mode;
public:
	Remote(int m=Tv::TV):mode(m) {}
	bool volup(Tv& t) { t.volup(); }
	bool voldown(Tv& t) { t.voldown(); }
	//可以直接访问私有成员
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t, int m) { t.mode = m; }
};