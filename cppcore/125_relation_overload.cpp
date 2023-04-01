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
	// ���� == ��ϵ�����
	bool operator== (const Person &p) // ��Ա���� һ����
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
			return false; // false !=  �ȼ�  ==
		}
		return true;
	}

	string m_Name;
	int m_Age;
	
};

void test01()
{
	Person p1("����", 19);
	Person p2("��", 19);
	if (p1 == p2)
	{
		cout << "������ͬ��" << endl;
	}
	else { cout << "���˲���ͬ��" << endl; }
	if (p1 != p2)
	{
		cout << "���˲���ͬ��" << endl;
	}
	else { cout << "������ͬ��" << endl; }
}

int main()
{
	
	test01();
	system("pause");
	return 0;
}