#pragma once
class Stonewt
{
private:
	int stone;
	double pounds;
public:
	Stonewt();
	explicit Stonewt(double d);
	Stonewt(double d,int s);
};