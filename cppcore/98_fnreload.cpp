#include <iostream>
using namespace std;

void func(int& a)
{
	cout << "func (int &a)�ĵ��ã�" << endl;
}

void func(const int& a)
{
	cout << "func (const int& a)�ĵ��ã�" << endl;
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