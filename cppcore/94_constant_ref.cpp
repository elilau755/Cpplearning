#include <iostream>
using namespace std;

//打印数据函数
void showValue(const int& val) // 加上const，防止在函数体内误操作将形参改变，从而不改变实参
{
	// val = 1000; // 此时 会报错 表达式左值必须是可修改的
	cout << "val = " << val << endl;
}

int main()
{
	// 常量引用  const int & ref
	// 使用场景：用来修饰形参，防止误操作，类似结构体的const student * p
	// int a = 10;
	// int &ref = 10; 非法操作
	// const int& ref = 10; 故加上const之后，自动转换 int temp = 10;const int& ref = temp;

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}