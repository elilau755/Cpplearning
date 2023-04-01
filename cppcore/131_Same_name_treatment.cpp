#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 10;
	}

	void func() // 无参
	{
		cout << "Base 下的func成员函数" << endl;
	}

	void func(int a) // 有参
	{
		cout << "Base 下的func(int a)成员函数" << endl;
	}
	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 20;
	}

	void func()
	{
		cout << "Son 下的func()成员函数" << endl;
	}
	int m_A;

};

void test01()
{
	Son s1;
	cout << "Son 下的 m_A = " << s1.m_A << endl;
	cout << "Base 下的 m_A = " << s1.Base::m_A << endl;
	s1.func();  // 子类
	s1.Base::func(); // 父类
	// s1.func(100); // 若子类有和父类同名的成员函数重载，那么子类会掩盖所有父类的成员函数
	s1.Base::func(100); // 加作用域就可以访问父类的 有参成员函数
}
int main()
{
	test01();
	system("pause");
	return 0;
}