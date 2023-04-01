#include <iostream>
using namespace std;
#include <string>
class Phone
{
public:
	Phone(string name)
	{
		P_name = name; // 将传入的手机名字给P_name
		cout << "Phone构造！" << endl;
	}
	~Phone()
	{
		cout << "Phone析构！" << endl;
	}

public:
	string P_name;
};

class Person
{
public:
	// Phone m_Phone = pName 隐式转换法
	Person(string name, string Pname) : m_Name(name), m_Phone(Pname) 
	{
		cout << "Person构造函数调用！" << endl;
	}
	~Person()
	{
		cout << "Person析构函数调用！" << endl;
	}
public:
	string m_Name;
	Phone m_Phone;
};
// 当其他类对象作为本类成员，先构造类对象，再构造自身
void test()
{

	Person p("张三", "IPhone15ProMax");
	cout << p.m_Name << "拿着" << p.m_Phone.P_name << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}