#include <iostream>
using namespace std;

// 打印类
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;
	myprint("helloworld"); // 由于使用起来非常类似于函数调用，因此称为仿函数
	MyPrint02("helloworld");

}

//  加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return (num1 + num2);
	}

};

void test02()
{
	
	MyAdd myadd;
	int ret = myadd(100, 200);
	cout << "ret = " << ret << endl;
	cout << "MyAdd()(100, 300) = " << MyAdd()(100, 300) << endl; // 匿名函数对象
}

int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}