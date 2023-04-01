#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& out, const MyInteger& p);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	MyInteger& operator--() // ǰ�� --a
	{
		m_Num--; // �ȵݼ�
		return *this; // ���ص�ǰ������
	}
	MyInteger operator--(int)
	{
		MyInteger temp = *this; // ��¼��ǰ
		m_Num--;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream &out, const MyInteger &p)
{
	out << p.m_Num;
	return out;
}

void test01()
{
	MyInteger myInt;
	cout << --(--myInt) << endl;
}

void test02()
{
	MyInteger myInt;
	cout << (myInt--)-- << endl; 
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}