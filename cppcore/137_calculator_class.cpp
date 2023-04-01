#include <iostream>
using namespace std;
#include <string>

class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
	// ���������Ҫ��� �������˷������㣬��Ҫ��Դ�������޸ģ��ڿ����в��ᳫ�޸�Դ�룬һ�㶼����չ
	int m_Num1; int m_Num2;
};

void test01()
{
	Calculator cal;
	cal.m_Num1 = 10; cal.m_Num2 = 20;
	cout << cal.m_Num1 << "+" << cal.m_Num2 << " = " <<cal.getResult("+") << endl;
}

// ��̬ʵ��
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;   // ����ʲô����д
	}
	int m_Num1; int m_Num2;
};

class AddCal : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCal : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MultiplexCal : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

class DivisionCal : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 / m_Num2;
	}
};

void test02()
{
	AbstractCalculator* AbsCal = new AddCal;
	AbsCal->m_Num1 = 10;
	AbsCal->m_Num2 = 10;
	cout << AbsCal->m_Num1 << " + " << AbsCal->m_Num2 << " = " << AbsCal->getResult() << endl;
	delete AbsCal;  // new�Ķ����ڶ����������������

	AbsCal = new SubCal;
	AbsCal->m_Num1 = 10;
	AbsCal->m_Num2 = 10;
	cout << AbsCal->m_Num1 << " - " << AbsCal->m_Num2 << " = " << AbsCal->getResult() << endl;
	delete AbsCal;

	AbsCal = new MultiplexCal;
	AbsCal->m_Num1 = 10;
	AbsCal->m_Num2 = 10;
	cout << AbsCal->m_Num1 << " * " << AbsCal->m_Num2 << " = " << AbsCal->getResult() << endl;
	delete AbsCal;

	AbsCal = new DivisionCal;
	AbsCal->m_Num1 = 10;
	AbsCal->m_Num2 = 10;
	cout << AbsCal->m_Num1 << " / " << AbsCal->m_Num2 << " = " << AbsCal->getResult() << endl;
	delete AbsCal;
}

int main()
{
	test02();
	system("pause");
	return 0;
}