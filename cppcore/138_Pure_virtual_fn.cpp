#include <iostream>
using namespace std;
#include <string>

class Calculator
{
public:
	virtual void getResult() = 0;  // 纯虚函数
	int m_Num1; int m_Num2;
};

class AddCal : public Calculator
{
public:
	virtual void getResult() {
		cout << "getResult()调用" << endl;
	}
};

void test01()
{
	// Calculator cal; // 不允许抽象类实例化对象
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