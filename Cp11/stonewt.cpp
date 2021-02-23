#include<iostream>
#include "stonewt.h"
using namespace std;

Stonewt::Stonewt()
{
	cout << "default construct" << endl;
}
explicit Stonewt::Stonewt(double d)
{
	cout << "construct 1" << endl;
	pounds = d;
}

Stonewt::Stonewt(double d,int s)
{
	cout << "construct 2" << endl;
	pounds = d;
	stone = s;
}