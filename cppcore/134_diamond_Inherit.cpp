#include <iostream>
using namespace std;

// ������
class Animal
{
public:
	int m_Age;
};

// ����      ��̳�        ����ֻ��̳�һ��
class Sheep : virtual public Animal {};

// ����      ��̳�
class Tuo : virtual public Animal {};

// ������
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo s1;
	s1.Sheep::m_Age = 18;
	s1.Tuo::m_Age = 28;
	cout << s1.Sheep::m_Age << endl;
	cout << s1.Tuo::m_Age << endl;
	cout << s1.m_Age << endl;
	// �˷��ڴ濪������Animalһ��m_Age�͹���
}

int main()
{

	test01();
	system("pause");
	return 0;
}