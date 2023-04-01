#include <iostream>
using namespace std;

void func(int& a)
{
	cout << "func (int &a)的调用！" << endl;
}

void func(const int& a)
{
	cout << "func (const int& a)的调用！" << endl;
}

int main()
{
	int a = 10;
	func(a);
	const int b = 10;
	func(b);
	func(10);

	system("pause");
	return 0;

}