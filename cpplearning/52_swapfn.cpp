#include <iostream>
using namespace std;
void swap(int num1, int num2)
{
	cout << "��һ������ " << num1 << endl;
	cout << "�ڶ������� " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1 = " << num1 << "\t" << "num2 = " << num2 << endl;
	// >>> num1 = 3, num2 = 2, ������ʵ�ε��βεĴ���
	return;
}


int main() 
{
	int a = 2; int b = 3;
	swap(a, b);
	cout << "a = " << a << "\t" << "b = " << b << endl; 
	// >>> a = 2, b = 3 �������βη����仯����Ӱ��ʵ�Σ�ʵ�ε��βεĵ��򴫵ݣ�
	system("pause");
	return 0;
}