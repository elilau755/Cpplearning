#include <iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	// 重载 == 关系运算符
	bool operator== (const Person &p) // 成员函数 一个参
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	
	// !=
	bool operator!= (const Person& p)
	{
		if (this->m_Name != p.m_Name && this->m_Age != p.m_Age)
		{
			return false; // false !=  等价  ==
		}
		return true;
	}

	string m_Name;
	int m_Age;
	
};

void test01()
{
	Person p1("张三", 19);
	Person p2("张", 19);
	if (p1 == p2)
	{
		cout << "两人相同！" << endl;
	}
	else { cout << "两人不相同！" << endl; }
	if (p1 != p2)
	{
		cout << "两人不相同！" << endl;
	}
	else { cout << "两人相同！" << endl; }
}

int main()
{
	
	test01();
	system("pause");
	return 0;
}