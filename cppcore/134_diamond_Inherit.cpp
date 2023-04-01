#include <iostream>
using namespace std;

// 动物类
class Animal
{
public:
	int m_Age;
};

// 羊类      虚继承        后面只会继承一份
class Sheep : virtual public Animal {};

// 驼类      虚继承
class Tuo : virtual public Animal {};

// 羊驼类
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo s1;
	s1.Sheep::m_Age = 18;
	s1.Tuo::m_Age = 28;
	cout << s1.Sheep::m_Age << endl;
	cout << s1.Tuo::m_Age << endl;
	cout << s1.m_Age << endl;
	// 浪费内存开销，有Animal一份m_Age就够了
}

int main()
{

	test01();
	system("pause");
	return 0;
}