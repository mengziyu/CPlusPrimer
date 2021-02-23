/*
	15.3.4 将对象用作异常类型
*/

#include<iostream>
#include<cmath>
using namespace std;

class bad_hmean
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :v1(a), v2(b) {}
	void mesg();
};

void bad_hmean::mesg()
{
	cout << "hmean:bad arguments: a=-b" << endl;
}

class bad_gmean
{
private:
	double v1;
	double v2;
public:
	bad_gmean(double a = 0, double b = 0) :v1(a), v2(b) {}
	const char* mesg();
};

const char* bad_gmean::mesg()
{
	return "gmean: arguments should be >=0";
}

double hmean(double a, double b);
double gmean(double a, double b);
//main
int main()
{
	try {
		hmean(2,-2);
	}
	catch(bad_hmean & h){
		h.mesg();
	}
	catch (bad_gmean & g) {
		cout << g.mesg() << endl;
	}

	try {
		gmean(2, -2);
	}
	catch (bad_gmean & g) {
		cout<<g.mesg()<<endl;
	}
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw bad_hmean(a,b);
	}
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a<0||b<0)
	{
		throw bad_gmean(a, b);
	}
	return sqrt(a*b);
}

/*
输出
===================================
hmean:bad arguments: a=-b
gmean: arguments should be >=0
*/