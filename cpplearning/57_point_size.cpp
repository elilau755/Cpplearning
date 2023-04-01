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
	cout << *p << endl; // 解引用 即输出指向的内存 即10 

}