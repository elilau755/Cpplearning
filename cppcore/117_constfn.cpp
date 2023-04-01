#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	void ShowPerson() const 
	{
		// this->m_A = 100; const修饰的成员函数，const Person * const this 
		// 表示指针指向的指针内存数据不能修改，除了mutable修饰的变量
		this->m_B = 100;
	}

	void MyFunc()
	{
		m_A = 10000;
		m_B = 1000;
	}

public:
	int m_A;
	mutable	int m_B;
};

// const修饰对象 常对象
void test01()
{
	const Person person; // 常量对象
	Person p2;
	cout << person.m_A << endl;
	// person.m_A = 1000; 常对象不能修改成员变量的值，但是可以访问
	person.m_B = 1000; // 常对象可以修改mutable修饰成员变量
	p2.m_A = 1000;
	cout << person.m_B << endl;
	cout << p2.m_A << endl;
	// 常对象不能调用普通成员函数
	// person.MyFunc(); 
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}