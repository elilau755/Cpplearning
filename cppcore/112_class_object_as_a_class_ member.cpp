#include <iostream>
using namespace std;
#include <string>
class Phone
{
public:
	Phone(string name)
	{
		P_name = name; // ��������ֻ����ָ�P_name
		cout << "Phone���죡" << endl;
	}
	~Phone()
	{
		cout << "Phone������" << endl;
	}

public:
	string P_name;
};

class Person
{
public:
	// Phone m_Phone = pName ��ʽת����
	Person(string name, string Pname) : m_Name(name), m_Phone(Pname) 
	{
		cout << "Person���캯�����ã�" << endl;
	}
	~Person()
	{
		cout << "Person�����������ã�" << endl;
	}
public:
	string m_Name;
	Phone m_Phone;
};
// �������������Ϊ�����Ա���ȹ���������ٹ�������
void test()
{

	Person p("����", "IPhone15ProMax");
	cout << p.m_Name << "����" << p.m_Phone.P_name << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}