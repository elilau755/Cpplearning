#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age) // 有参构造
	{
		this->age = age;  // this指针指向的是被调用的成员函数所属的对象
		// 故这个this所指的是p这个对象
	}

	Person & PersonAddAge(Person &p)
	{
		this->age += p.age; // this指向p2
		return  *this;  // *this就是p2的内存
	}

	int age;

};

// 1、解决名称冲突  Person(int age){ age = age;} int age;
void test01()
{
	Person p(18);
	cout << "p的年龄为： " << p.age << endl;
}

// 2、 返回对象本身用 *this
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为： " << p2.age << endl;
	
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}