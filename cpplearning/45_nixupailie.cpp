#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "��������ǰ�� " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	// ����
	// ˫ָ�� start end
	// Ҫ����������ڵ�����Ԫ�����洢;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = arr[start];
	while (start < end)
	{   
		// ʵ��Ԫ�ػ���
		arr[start] = arr[end];
		arr[end] = temp;
		start++; end--;
	}
	// ��ӡ���ú������
	cout << "�������ú� " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}