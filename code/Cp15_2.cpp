/*
	15.2 嵌套类
*/

//内部类可以声明在私有、公有、保护位置
//包含类可以使用内部类的所有方法和属性
//其他类是否可以使用私有和公有数据取决于内部类声明的位置
class Team
{
private:
public:
	class Coach
	{

	};
};

int main()
{
	Team::Coach co;
	return 0;
}