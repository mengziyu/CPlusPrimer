#include "tabtenn0.h"
#include <iostream>
using namespace std;

//类实现
TableTennisPlayer::TableTennisPlayer(const std::string & fn, const std::string & ln, bool ht):
	firstname(fn),lastname(ln),hasTable(ht) 
{
	cout << "TableTennisPlayer construct" << endl;
}

void TableTennisPlayer::Name() const
{
	cout << lastname << "," << firstname << endl;
}



RatedPlayer::RatedPlayer(unsigned int r, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer(fn, ln, ht)
{
	cout << "RatedPlayer construct 1" << endl;
	rating = r;
}

//这些构造方法都类似

//RatedPlayer::RatedPlayer(unsigned int r, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer(fn, ln, ht),rating(r)
//{
//	cout << "RatedPlayer construct 2" << endl;
//}

//RatedPlayer::RatedPlayer(unsigned int r = 0, const std::string& fn, const std::string& ln, bool ht)
//{
//	cout << "RatedPlayer construct 3" << endl;
//	rating = r;
//}

//与上一个构造方法等价
//RatedPlayer::RatedPlayer(unsigned int r = 0, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer()
//{
//	cout << "RatedPlayer construct 4" << endl;
//	rating = r;
//}

//调用基类默认复制构造函数
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) :TableTennisPlayer(tp)
{
	cout << "RatedPlayer construct 5" << endl;
	rating = r;
}