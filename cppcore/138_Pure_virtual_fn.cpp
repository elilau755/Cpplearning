#include <iostream>
using namespace std;
#include <string>

class Calculator
{
public:
	virtual void getResult() = 0;  // ���麯��
	int m_Num1; int m_Num2;
};

class AddCal : public Calculator
{
public:
	virtual void getResult() {
		cout << "getResult()����" << endl;
	}
};

void test01()
{
	// Calculator cal; // �����������ʵ��������
	Calculator *cal = new AddCal;
	cal->getResult();
	delete cal;
}

int main()
{
	test01();
	system("pause");
	return 0;
}