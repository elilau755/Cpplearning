#include <iostream>
using namespace std;

class Base
{
public:
	static void func() // 无参
	{
		cout << "Base 下的func成员函数" << endl;
	}

	static void func(int a) // 有参
	{
		cout << "Base 下的func(int a)成员函数" << endl;
	}
	static int m_A;
};

int Base::m_A = 20;

class Son : public Base
{
public:
	static void func()
	{
		cout << "Son 下的func()成员函数" << endl;
	}
	static int m_A;
};

int Son::m_A = 10;

void test01()
{
	Son s1;
	cout << "通过对象访问" << endl;
	cout << "Son 下的 m_A = " << s1.m_A << endl;
	cout << "Base 下的 m_A = " << s1.Base::m_A << endl;

	cout << "通过类名访问" << endl;
	cout << "Son 下的 m_A = " << Son::m_A << endl;
	// 第一个::代表通过类名方式访问   第二个:: 代表访问父类作用域下
	cout << "Base 下的 m_A = " << Son::Base::m_A << endl;
	
	//1、通过对象访问
	cout << "通过对象访问" << endl;
	s1.func();  // 子类
	s1.Base::func(); // 父类
	// s1.func(100); // 若子类有和父类同名的成员函数重载，那么子类会掩盖所有父类的成员函数

	//2、通过类名访问
	cout << "通过类名访问" << endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100); // 加作用域就可以访问父类的 有参成员函数
}
int main()
{
	test01();
	system("pause");
	return 0;
}