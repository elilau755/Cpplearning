#include <iostream>
using namespace std;
int main()
{	
	//����ָ�������������е�Ԫ��
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int * p = arr; // arr���������׵�ַ
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++; // ָ�����ƫ��4���ֽ� int��������
	}
	system("pause");
	return 0;
}