#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
	
public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	// ���ó�Ա�������� ����������� p.operator<<(cout) �ȼ� p << cout
	// �������ó�Ա��������<<���������Ϊ�޷�ʵ�� cout�����
	// void operator<< (Person &p) { }
private:
	int m_A;
	int m_B;
};
// ʵ�� cout << p  cout p����������
// ֻ������ȫ�ֺ�����ʵ�� �������������
ostream& operator<<(ostream &out, Person & p)  // cout ��һ������ostream��Ķ������������ȫ��ֻ����һ�����������õķ�ʽ
// outҲֻ�����ã�һ���������� 
{
	out << "m_A = " << p.m_A << "\t" << "m_B = " << p.m_B << endl;
	return out;
}

void test01()
{
	Person p(10,20);
	cout << p << "helloworld" << endl; // target
}
int main()
{
	test01();
	system("pause");
	return 0;
}