/*
	8.5.5 编译器选择使用哪个函数
	编译器查找函数流程：
	1.创建候选函数列表，包含名称相同的函数和模板函数
	2.查找参数个数相同，参数类型形同的函数，包括可以转换的参数类型
	3.查找最佳执行函数，若无或者存在二义性，则出错
*/

#include<iostream>
#include<string>
using namespace std;

void may(int);  //1
float may(float,float=3);//2
void may(char);//3
char* may(const char*);//4
//char may(const char &);//5
template<class T> void may(const T &);//6
template<class T> void may(const T *);//7

int main_()
{
	may('B');
	/*
		该调用哪个？
		1. 4 和 7不可选，字符以int存储，不能隐式的转换成指针类型
		2. 其他都可选，选哪个最佳
		3. 1优先于2，char到int是提升转换（整型提升），char到float是强制性的
		4. 3 、5、6都优先于1和2，因为它们是完全匹配
		5. 3和5优先于6，因为6是模板
		6. 有两个完全匹配，报错,需注释一个
	*/
	return 0;
}

struct blot
{
	int a;
	char b[10];
};

struct blot2
{
	int a;
	char b[10];
};

//以下是存在两个完全匹配函数也可以编译的例外情况
//1.非const和const参数
void recycle(blot &); //1
void recycle(const blot &); //2

void recycle2(blot2); //3
void recycle2(const blot2); //4
int main__()
{
	blot ink = {25,"spots"};
	//编译成功，const和非const可以区分，两个recycle都完全匹配，但ink不是const，所以选择1
	//但这只适用于引用和指针
	recycle(ink);

	blot ink2 = { 25,"spots" };
	//当参数是赋值操作时编译不通过，此时就不能区分了
	//recycle2(ink2);
	return 0;
}

//2.两个完全匹配模板函数，较具体的优先
template <class Type> void recycle3(Type& t);
//显示具体化更优先
template <> void recycle3<blot>(blot& t);

//传入地址时转换为recycle4<blot*>(blot* t)
template <class Type> void recycle4(Type t);
//传入地址时转换为recycle4<blot>(blot* t),指针更具体，因为转换较少
template <class Type> void recycle4(Type* t);

int main()
{
	blot ink2 = { 25,"spots" };
	recycle3(ink2);

	recycle4(&ink2);
	return 0;
}

