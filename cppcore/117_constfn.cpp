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
		// this->m_A = 100; const���εĳ�Ա������const Person * const this 
		// ��ʾָ��ָ���ָ���ڴ����ݲ����޸ģ�����mutable���εı���
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

// const���ζ��� ������
void test01()
{
	const Person person; // ��������
	Person p2;
	cout << person.m_A << endl;
	// person.m_A = 1000; ���������޸ĳ�Ա������ֵ�����ǿ��Է���
	person.m_B = 1000; // ����������޸�mutable���γ�Ա����
	p2.m_A = 1000;
	cout << person.m_B << endl;
	cout << p2.m_A << endl;
	// �������ܵ�����ͨ��Ա����
	// person.MyFunc(); 
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}