#include <iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	int m_A;
	int m_B;
	// ��Ա�������� +��
	// Person PersonAddPerson(Person& p)
	//Person operator+ (Person& p)  // ����������һ��ͨ�üӷ�����(ͨ�üӷ���Ա������)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
	
};

// ȫ�ֺ������� +��
// Person PersonAddPerson(Person& p1, Person& p2)
Person operator+ (Person& p1, int val)
{
	Person temp;
	temp.m_A = p1.m_A + val;
	temp.m_B = p1.m_B + val;
	return temp;
}

int main()
{
	Person p1;
	p1.m_A = 10; p1.m_B = 10;
	Person p2;
	p2.m_A = 10; p2.m_B = 10;
	// Person p3 =  p1.PersonAddPerson(p2);
	//Person p3 = p1 + p2;
	// Person p3 = PersonAddPerson(p1, p2);
	Person p3 = p1 + 10;
	cout << p3.m_A << "\t" << p3.m_B << endl;
	system("pause");
	return 0;
}