#include <iostream>
using namespace std;

int * func()
{
	// 利用"new"关键字 可以将数据开辟至heap堆区
	// 指针本质也是 局部变量，放在栈上，指针保存的数据 放在 堆区
	/*int a = 10;
	return &a;*/
	int * p = new int(10);
	return p;
}

int main()
{
	// 在heap开辟数据
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}