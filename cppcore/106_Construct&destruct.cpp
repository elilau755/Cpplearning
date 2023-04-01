#include <iostream>
using namespace std;

class Person
{
public:
	// 无参（默认）构造函数
	Person()
	{
		cout << "无参构造函数！" << endl;
	}
	// 有参构造函数
	Person(int a)
	{
		age = a;
		cout << "有参构造函数！" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p)  // 相当于要把一个人的属性行为全部复制到另一个人身上
		// 但是又不能将这个人的本体改变，所以加上const，其次拷贝的同时按照引用的方式传进来
	{
		age = p.age;
		cout << "拷贝构造函数！" << endl;
	}
	// 析构函数
	~Person()
	{
		cout << "析构函数！" << endl;
	}
public:
	int age;
};

// 调用
void test01()
{
	//1、括号法
	Person p1; // 默认构造函数调用
	Person p2(10); // 有参构造函数
	Person p3(p2);// 拷贝构造函数 p2原来就是Person类型，调用拷贝构造函数时，p2拷贝给p3
	
	// 注意事项1
	// 调用默认构造函数时，不要加()
	// Person p1(); // 会被编译器认作一个函数的声明
	/*cout << "p2的年龄为： " << p2.age << endl;
	cout << "p3的年龄为： " << p3.age << endl;*/
	
	//2、显示法
	Person p4; // 默认
	Person p5 = Person(10); // 有参
	Person p6 = Person(p5); // 拷贝

	Person(10); // 匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	cout << "aaaaa" << endl;
	// 注意事项2
	// 不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person(p6); === Person p6; 对象声明
	// Person(p6); 等价于 Person p6; 对象声明

	//3、隐式转换法
	Person p4 = 10; // === Person p4 = Person(10);
	Person p5 = p4; // 拷贝构造
	

}

int main()
{

	test01();

	system("pause");
	return 0;
}