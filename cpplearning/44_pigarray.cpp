#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 300, 350, 200, 400, 250 };
	int max = 0;
	for (int j = 0; j < 5; j++)
	{
		max = (arr[j] > max ? arr[j] : max); // ��max��������������
	}
	cout << "���ص�С������Ϊ" << max << endl;
	system("pause");
	return 0;
}