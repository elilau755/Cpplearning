#include <iostream>
using namespace std;
int main()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  // 两个正数相除，结果依然是整数，将小数部分去除

	int b2 = 20;
	cout << a1 / b2 << endl;  // 得到输出0，小数部分5去除
	cout << a1 % b2 << endl;
	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.2;   // 其实和变量的类型有关，输出的类型也是和变量类型一样
	int a3 = 1;
	
	cout << d1 / d2 << endl;
	// cout << a3 % d2 << endl;  必须整型变量
	system("pause");
	return 0;
}