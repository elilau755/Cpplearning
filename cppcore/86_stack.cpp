#include <iostream>
using namespace std;
#include <stdlib.h>


int* func()
{
	// 栈区数据注意 不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
	int a = 10;
	return &a;
}

int main() {

	int* p = func();

	cout << *p << endl;
	// 第一次可打印出数字，是因为编译器做了一次保留
	cout << *p << endl;
	// 第二次这个数据就不再保留了，故不要用func中的返回local地址
	system("pause");

	return 0;
}