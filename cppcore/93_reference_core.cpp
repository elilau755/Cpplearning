#include <iostream>
using namespace std;

void func(int &ref)
{
	ref = 100; // ת��Ϊ *ref = 100;
}

int main()
{
	int a = 10;
	int& ref = a;  // ת��Ϊ int * const ref = &a;
	ref = 20;   // ת��Ϊ *ref = 20;
	cout << "a:" << a << endl;
	cout << "ref: " << ref << endl;
	func(a);  
	cout << "a:" << a << endl;
	cout << "ref: " << ref << endl;

	system("pause");
	return 0;
}