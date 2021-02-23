#pragma once
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h,int m=0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h=0,int m=0);
	//运算符重载
	Time operator+(const Time & t) const;
	Time operator*(double t) const;
	friend Time operator*(double m,const Time & t);
	//返回输出引用，可以一直输出其他内容
	friend std::ostream& operator<<(std::ostream & os,const Time & t);
	void Show() const;
};