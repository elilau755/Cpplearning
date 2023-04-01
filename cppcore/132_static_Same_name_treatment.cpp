#include <iostream>
using namespace std;

class Base
{
public:
	static void func() // �޲�
	{
		cout << "Base �µ�func��Ա����" << endl;
	}

	static void func(int a) // �в�
	{
		cout << "Base �µ�func(int a)��Ա����" << endl;
	}
	static int m_A;
};

int Base::m_A = 20;

class Son : public Base
{
public:
	static void func()
	{
		cout << "Son �µ�func()��Ա����" << endl;
	}
	static int m_A;
};

int Son::m_A = 10;

void test01()
{
	Son s1;
	cout << "ͨ���������" << endl;
	cout << "Son �µ� m_A = " << s1.m_A << endl;
	cout << "Base �µ� m_A = " << s1.Base::m_A << endl;

	cout << "ͨ����������" << endl;
	cout << "Son �µ� m_A = " << Son::m_A << endl;
	// ��һ��::����ͨ��������ʽ����   �ڶ���:: ������ʸ�����������
	cout << "Base �µ� m_A = " << Son::Base::m_A << endl;
	
	//1��ͨ���������
	cout << "ͨ���������" << endl;
	s1.func();  // ����
	s1.Base::func(); // ����
	// s1.func(100); // �������к͸���ͬ���ĳ�Ա�������أ���ô������ڸ����и���ĳ�Ա����

	//2��ͨ����������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100); // ��������Ϳ��Է��ʸ���� �вγ�Ա����
}
int main()
{
	test01();
	system("pause");
	return 0;
}