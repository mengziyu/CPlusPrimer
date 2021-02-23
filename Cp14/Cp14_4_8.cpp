/*
	14.4.8 将模板用作参数
*/
template <class T>
class Thing
{

};

//Thing 是模板类型
template <template <typename T> class Thing>
class Crab
{

};

int main()
{
	Crab<Thing> crab;
	return 0;
}