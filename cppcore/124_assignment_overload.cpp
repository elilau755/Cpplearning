#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age); // 在堆区开辟一块新的内存
	}

	Person & operator=(const Person& p)
	{
		if (m_Age != NULL) // 如果该指针不为空
		{
			delete m_Age;  // 释放该指针
			m_Age = NULL; // 置空，防止野指针出现
		}
		m_Age = new int(*p.m_Age);
		return *this;
	}

	~Person()
	{
		if (m_Age != NULL) // 如果该指针不为空
		{
			delete m_Age;  // 释放该指针
			m_Age = NULL; // 置空，防止野指针出现
		}
		cout << "析构函数调用！" << endl;
	}

public:
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20); // 这样就可以给p1,p2先分配堆区内存空间，然后直接重载赋值
	p2 = p1;   // 赋值运算符重载
	cout << "p1的年龄为： " << *p1.m_Age << endl;
	cout << "p2的年龄为： " << *p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}