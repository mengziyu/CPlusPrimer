#include "brass.h"
#include <iostream>
using namespace std;

Brass::Brass(const std::string& s, long an, double bal)
{
	cout<<"Brass construct"<<endl;
}

double Brass::Balance() const
{
	cout << "Brass Balance()" << endl;
	return 0;
}

void Brass::ViewAcct() const
{
	cout << "Brass ViewAcct()" << endl;
}



BrassPlus::BrassPlus(const std::string& s, long an, double bal, double ml, double r):Brass(s,an,bal)
{
	cout << "BrassPlus construct" << endl;
}

double BrassPlus::Balance() const
{
	cout << "BrassPlus Balance()" << endl;
	return 0;
}

void BrassPlus::ViewAcct() const
{
	cout << "BrassPlus ViewAcct()" << endl;
}