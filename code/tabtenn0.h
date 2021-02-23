#pragma once
#include<string>
#include<iostream>
using namespace std;

//基类
class TableTennisPlayer 
{

private:
	std::string firstname;
	std::string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const std::string & fn="none",const std::string & ln="none",bool ht=false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
	~TableTennisPlayer()
	{
		cout << "TableTennisPlayer delete" << endl;
	}
};


/*
	派生类
	派生类存储了基类的数据成员
	派生类可以使用基类的方法
	派生类可以添加自己的构造函数
	派生类可以更具需要添加额外的数据成员和成员函数
	派生类不能访问基类私有成员，而必须通过方法访问
*/
class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const std::string& fn = "none", const std::string& ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Reating() { return rating; };
	void Reset(unsigned int r) { rating = r; };
	~RatedPlayer()
	{
		cout << "RatedPlayer delete" << endl;
	}
};