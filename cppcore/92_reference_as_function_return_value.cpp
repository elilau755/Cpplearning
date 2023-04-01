#include <iostream>
using namespace std;

// 引用做函数的返回值
// 1、不要返回局部变量的引用
int &test01()   // & 用引用的方式返回,等于说 返回a的类型是int &，故需要用int & ref去"接收"，故ref是a的别名
{
	int a = 10; // 局部变量存放在栈区
	return a;   

}

// 2、函数的调用可以作为左值
int& test02()
{
	static int a = 10; // 静态变量全局区，数据由系统释放
	return a;
}

int main()
{
	/*int& ref = test01();
	cout << "局部ref = " << ref << endl;
	cout << "局部ref = " << ref << endl;*/
	int& ref2 = test02();
	cout << "静态ref2 = " << ref2 << endl;
	cout << "静态ref2 = " << ref2 << endl;
	// 3、函数引用做左值，必须要返回引用
	test02() = 1000;
	cout << "静态ref2 = " << ref2 << endl;
	cout << "静态ref2 = " << ref2 << endl;
	system("pause");
	return 0;
}