#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "数组逆置前： " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	// 逆置
	// 双指针 start end
	// 要交换必须存在第三个元素来存储;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = arr[start];
	while (start < end)
	{   
		// 实现元素互换
		arr[start] = arr[end];
		arr[end] = temp;
		start++; end--;
	}
	// 打印逆置后的数组
	cout << "数组逆置后： " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}