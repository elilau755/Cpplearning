#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base���캯�����ã�" << endl;
	}
	~Base()
	{
		cout << "Base�����������ã�" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son���캯�����ã�" << endl;
	} 
	~Son()
	{
		cout << "Son�����������ã�" << endl;
	}
};

void test01()
{
	Son s1;
}
int main()
{
	test01();
	/*Base���캯�����ã�
	Son���캯�����ã�
	Son�����������ã�
	Base�����������ã�*/
	system("pause");
	return 0;
}