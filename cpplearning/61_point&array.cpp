#include <iostream>
using namespace std;
int main()
{	
	//利用指针来访问数组中的元素
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int * p = arr; // arr就是数组首地址
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++; // 指针向后偏移4个字节 int整型数组
	}
	system("pause");
	return 0;
}