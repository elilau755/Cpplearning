#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1、创建一个类，C++编译器会给每个类都添加至少3个函数
// 默认构造 （空实现）
// 析构函数 （空实现）
// 拷贝构造 （值拷贝）

class Person
{
public:
	// 无参（默认）构造函数
	Person()
	{
		cout << "无参构造函数!" << endl;
	}
	// 有参构造函数
	Person(int age)
	{
		cout << "有参构造函数!" << endl;
		m_Age = age;
	}
	// 拷贝构造函数
	/*Person(const Person & p)
	{
		cout << "拷贝构造函数!" << endl;
		m_Age = p.m_Age;
	}*/
	// 析构函数
	~Person()
	{
		cout << "析构函数!" << endl;
	}

public:
	int m_Age;
};

void test01()
{
	Person p1;
	p1.m_Age = 18;
	Person p2(p1);
	cout << "p2的年龄： " << p2.m_Age << endl;

}

void test02()
{
	Person p3;
	Person p4(10); // 如果写了有参构造，编译器就不再提供默认构造，但依然提供拷贝构造
	Person p5(p4);
}
 
int main()
{
	/*test01();*/
	test02();

	system("pause");
	return 0;
}