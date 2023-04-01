#include <iostream>
using namespace std;
#include <stdlib.h>

// 全局变量 global
int g_a = 10;
int g_b = 10;

// const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{

	// 全局区
	// 全局变量、静态变量、常量

	// 局部变量：函数体内  local
	int a = 10; int b = 10;

	// 静态变量 "static 类型 变量名"
	static int s_a = 10;
	static int s_b = 10;
	
	// 常量
	// 字符串常量
	"hello world";
	// const修饰的变量 	分为 const修饰的全局变量，const修饰的局部变量
	// const修饰的局部变量  local
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部变量a的地址： " << (unsigned int) & a << endl;
	cout << "局部变量b的地址： " << (unsigned int) & b << endl;
	cout << "局部常量c_l_a的地址为： " << (unsigned int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为： " << (unsigned int)&c_l_b << endl;
	cout << "全局变量g_a的地址： " << (unsigned int) & g_a << endl;
	cout << "全局变量g_b的地址： " << (unsigned int) & g_b << endl;
	cout << "静态变量s_a的地址： " << (unsigned int)&s_a << endl;
	cout << "静态变量s_b的地址： " << (unsigned int)&s_b << endl;
	cout << "字符串常量的地址为： " << (unsigned int)&"hello world" << endl;
	cout << "全局常量c_g_a的地址为： " << (unsigned int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为： " << (unsigned int)&c_g_b << endl;
	system("pause");
	return 0;
}