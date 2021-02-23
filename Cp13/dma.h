#pragma once
#include<iostream>
class baseDMA
{
private:
	char* lable;
	int rating;
public:
	baseDMA(const char * l="null",int r=0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream & os,const baseDMA & rs);
};

class hasDMA :public baseDMA
{
private:
	char* style;
public:
	hasDMA(const char* l = "null", int r = 0,const char* s="none");
	hasDMA(const char * s,const baseDMA & rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};
