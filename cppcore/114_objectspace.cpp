#include <iostream>
using namespace std;

// 成员变量 和 成员函数 分开存储
class Person
{
	int m_A; // 非静态成员变量,且只有它占对象空间

	static int m_B;

	void func() {}

	static void func2() {}
};

void test01()
{
	Person p;
	// *空对象占内存空间：1
	//class Person {}; Person p; 那么这里p就是一个空对象
	//C++编译器会给每个空对象分配一个字节空间，是为了区分对象占内存的位置
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}