#include <iostream>
using namespace std;

// ���캯���ĵ��ù���
// 1������һ���࣬C++���������ÿ���඼�������3������
// Ĭ�Ϲ��� ����ʵ�֣�
// �������� ����ʵ�֣�
// �������� ��ֵ������

class Person
{
public:
	// �޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲ι��캯��!" << endl;
	}
	// �вι��캯��
	Person(int age)
	{
		cout << "�вι��캯��!" << endl;
		m_Age = age;
	}
	// �������캯��
	/*Person(const Person & p)
	{
		cout << "�������캯��!" << endl;
		m_Age = p.m_Age;
	}*/
	// ��������
	~Person()
	{
		cout << "��������!" << endl;
	}

public:
	int m_Age;
};

void test01()
{
	Person p1;
	p1.m_Age = 18;
	Person p2(p1);
	cout << "p2�����䣺 " << p2.m_Age << endl;

}

void test02()
{
	Person p3;
	Person p4(10); // ���д���вι��죬�������Ͳ����ṩĬ�Ϲ��죬����Ȼ�ṩ��������
	Person p5(p4);
}
 
int main()
{
	/*test01();*/
	test02();

	system("pause");
	return 0;
}