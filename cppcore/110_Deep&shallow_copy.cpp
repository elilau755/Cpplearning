#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "默认无参构造函数调用！" << endl;
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height); // new int() 返回的是指针类型，堆区数据需要程序员自行释放
		cout << "有参构造函数调用！" << endl;
	}

	Person(const Person& p)
	{
		cout << "拷贝构造函数调用！" << endl;
		m_Age = p.m_Age;
		// m_Height = p.m_Height; 编译器默认实现这行代码

		//深拷贝操作    这一切一切的前提都是在拷贝构造函数中去重新new int()一块内存，如此一来，p1,p2都有自己的析构函数
		m_Height = new int(*p.m_Height); // 解引用，然后将内存数据开辟到堆区，重新在堆区申请一块内存，让地址变量就是m_Height这个指针存放160
	}
	// 析构代码，将堆区开辟的数据做释放操作
	~Person()
	{
		if (m_Height != NULL) // 如果该指针不为空
		{
			delete m_Height;  // 释放该指针
			m_Height = NULL; // 置空，防止野指针出现
		}
		cout << "析构函数调用！" << endl;
	}

public:
	int m_Age;
	int *m_Height;
};

void test01()
{
	Person p1(18, 160);
	cout << "p1的年龄为： " << p1.m_Age << "身高为：" << *p1.m_Height << endl; // m_Height is point
	Person p2(p1);    //浅拷贝（当拷贝构造函数没有new int()开辟堆区新地址存放身高时） p1,p2执行结束后都要执行析构函数释放内存
				// 而入栈出栈讲究一个"先进后出",调用析构函数，p2的m_Height指针 != NULL,那么先释放p2的m_Height指针，
			// 而这个指针指向的又是堆区的160，那么这块内存将释放干净。
		// 当p1执行结束后，p1的m_Height指针也不为空，也要去释放指向的堆区的160这块内存,但是这块内存已经释放过了，再去释放就是非法操作
	cout << "p2的年龄为： " << p2.m_Age << "身高为：" << *p2.m_Height << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}