#include <iostream>
using namespace std;
void swap(int num1, int num2)
{
	cout << "第一个数： " << num1 << endl;
	cout << "第二个数： " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1 = " << num1 << "\t" << "num2 = " << num2 << endl;
	// >>> num1 = 3, num2 = 2, 体现了实参到形参的传递
	return;
}


int main() 
{
	int a = 2; int b = 3;
	swap(a, b);
	cout << "a = " << a << "\t" << "b = " << b << endl; 
	// >>> a = 2, b = 3 体现了形参发生变化，不影响实参（实参到形参的单向传递）
	system("pause");
	return 0;
}