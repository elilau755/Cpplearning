#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base构造函数调用！" << endl;
	}
	~Base()
	{
		cout << "Base析构函数调用！" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son构造函数调用！" << endl;
	} 
	~Son()
	{
		cout << "Son析构函数调用！" << endl;
	}
};

void test01()
{
	Son s1;
}
int main()
{
	test01();
	/*Base构造函数调用！
	Son构造函数调用！
	Son析构函数调用！
	Base析构函数调用！*/
	system("pause");
	return 0;
}