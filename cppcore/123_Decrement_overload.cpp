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
	MyInteger& operator--() // 前置 --a
	{
		m_Num--; // 先递减
		return *this; // 返回当前对象本身
	}
	MyInteger operator--(int)
	{
		MyInteger temp = *this; // 记录当前
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