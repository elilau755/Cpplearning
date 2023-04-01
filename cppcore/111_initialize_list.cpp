#include <iostream>
using namespace std;

class Person 
{
public:
	Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{
	
	}
	void PrintPerson()
	{
		cout << "m_A: " << m_A << endl;
		cout << "m_B: " << m_B << endl;
		cout << "m_C: " << m_C << endl;
	}

public:
	int m_A; int m_B; int m_C;
};


int main()
{
	Person p(1, 2, 3);
	p.PrintPerson();
	system("pause");
	return 0;
}