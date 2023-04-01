#include <iostream>
using namespace std;

// 静态成员变量
class Person
{
public:
	//1、 所有对象都共享同一份数据
	//2、 编译阶段就分配内存
	//3、 类内声明，类外初始化操作
	static int m_A;
private:
	static int m_B;  // private
};

int Person::m_A = 100; // Person作用域下的变量m_A,类外初始化操作
int Person::m_B = 150;
void test01()
{
	Person p1;
	cout << p1.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;
}

void test02()
{
	//静态成员变量 不属于某个对象，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1、通过对象进行访问
	Person p;
	cout << p.m_A << endl;
	//2、通过类名进行访问  类名::静态成员变量名
	cout << Person::m_A << endl;
	// cout << p.m_B << endl;  私有作用域下的静态成员变量类外也是访问不了的
}

int main()
{
	// test01();
	test02();
	system("pause");
	return 0;
}