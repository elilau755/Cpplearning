#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 10;
	}

	void func() // �޲�
	{
		cout << "Base �µ�func��Ա����" << endl;
	}

	void func(int a) // �в�
	{
		cout << "Base �µ�func(int a)��Ա����" << endl;
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
		cout << "Son �µ�func()��Ա����" << endl;
	}
	int m_A;

};

void test01()
{
	Son s1;
	cout << "Son �µ� m_A = " << s1.m_A << endl;
	cout << "Base �µ� m_A = " << s1.Base::m_A << endl;
	s1.func();  // ����
	s1.Base::func(); // ����
	// s1.func(100); // �������к͸���ͬ���ĳ�Ա�������أ���ô������ڸ����и���ĳ�Ա����
	s1.Base::func(100); // ��������Ϳ��Է��ʸ���� �вγ�Ա����
}
int main()
{
	test01();
	system("pause");
	return 0;
}