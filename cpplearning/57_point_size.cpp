#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int* p = &a;
	cout << "sizeof (int*)" << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(float*) << endl;
	cout << *p << endl; // ������ �����ָ����ڴ� ��10 

}