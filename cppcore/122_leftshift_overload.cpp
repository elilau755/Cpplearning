#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
	
public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	// 利用成员函数重载 左移运算符， p.operator<<(cout) 等价 p << cout
	// 不会利用成员函数重载<<运算符，因为无法实现 cout在左侧
	// void operator<< (Person &p) { }
private:
	int m_A;
	int m_B;
};
// 实现 cout << p  cout p的所有属性
// 只能利用全局函数来实现 左移运算符重载
ostream& operator<<(ostream &out, Person & p)  // cout 是一个属于ostream类的对象，且这个对象全局只能有一个，故用引用的方式
// out也只是引用，一个别名而已 
{
	out << "m_A = " << p.m_A << "\t" << "m_B = " << p.m_B << endl;
	return out;
}

void test01()
{
	Person p(10,20);
	cout << p << "helloworld" << endl; // target
}
int main()
{
	test01();
	system("pause");
	return 0;
}