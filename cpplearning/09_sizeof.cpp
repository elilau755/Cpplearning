#include <iostream>
using namespace std;
int main() {
	// short 2 int 4  long 4 long long 8
	// 利用sizeof求出数据类型占用内存大小 sizeof(类型/变量)
	short num5 = 10;
	cout << "short size is" << sizeof(short) << endl;

	long long num6 = 10;
	cout << "short size is" << sizeof(num6) << endl;

	system("pause");
	return 0;

}