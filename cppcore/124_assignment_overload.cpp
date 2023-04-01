#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age); // �ڶ�������һ���µ��ڴ�
	}

	Person & operator=(const Person& p)
	{
		if (m_Age != NULL) // �����ָ�벻Ϊ��
		{
			delete m_Age;  // �ͷŸ�ָ��
			m_Age = NULL; // �ÿգ���ֹҰָ�����
		}
		m_Age = new int(*p.m_Age);
		return *this;
	}

	~Person()
	{
		if (m_Age != NULL) // �����ָ�벻Ϊ��
		{
			delete m_Age;  // �ͷŸ�ָ��
			m_Age = NULL; // �ÿգ���ֹҰָ�����
		}
		cout << "�����������ã�" << endl;
	}

public:
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20); // �����Ϳ��Ը�p1,p2�ȷ�������ڴ�ռ䣬Ȼ��ֱ�����ظ�ֵ
	p2 = p1;   // ��ֵ���������
	cout << "p1������Ϊ�� " << *p1.m_Age << endl;
	cout << "p2������Ϊ�� " << *p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}