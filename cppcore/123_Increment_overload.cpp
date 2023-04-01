#include <iostream>
using namespace std;
#include <string>

// 重载递增运算符
// 自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& out, const MyInteger& p); // 这样在全局函数中，就能够通过p访问私有成员了
public:
	MyInteger()
	{
		m_Num = 0;
	}
	MyInteger& operator++()  // ++a
	{
		m_Num++;
		return *this; // return *this 返回对象的本身，这里就是myint本身
	}
	MyInteger operator++(int)  // 空降15:00 后置递增运算符的函数原型为MyInteger operator++(int)。这里的int是一个占位参数，它用来区分前置递增和后置递增。
	{
		// 先 记录当时结果
		MyInteger temp = *this;  // 本身 返回的是一个局部变量temp记录的值（常量）而不是对象myint。
		// 由于局部变量temp在函数执行完后就被释放，所以不能返回对它的引用。如果返回对它的引用，那么这个引用将指向一个已经被释放的内存空间，这是非法的。
		// 后 递增
		m_Num++;
		// 最后 将记录结果返回
		return temp;   // 如果这里写的是returun *this 那么返回结果是递增后的当前结果
	}
private:
	int m_Num;
};

void test01()
{   // ++ myint 相当于 operator++(myint) 即 ++myint
	MyInteger myint; // 自定义整型 创建一个变量myint
	cout << ++(++myint) << endl; // 没有与操作数匹配的 左移运算符（原因：cout的是myint，是一个自定义的对象，它哪知道类内m_Num
	MyInteger myint2;
	cout << (myint2++)++ << endl; // 当您尝试对后置递增运算符的返回值进行链式编程时，您实际上是在对一个临时变量进行操作，而不是对原始对象进行操作。
	// 由于临时变量在函数执行完后就被释放，所以链式编程中对临时变量的任何操作都不会影响原始对象。因此，后置递增运算符不能用于链式编程。
}

// 全局函数 写一个左移重载运算符
ostream& operator<<(ostream& out, const MyInteger& p)
{
	cout << p.m_Num << endl;
	return out;
}
int main()
{

	test01();
	system("pause");
	return 0;
}