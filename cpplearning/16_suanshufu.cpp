#include <iostream>
using namespace std;
int main()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  // ������������������Ȼ����������С������ȥ��

	int b2 = 20;
	cout << a1 / b2 << endl;  // �õ����0��С������5ȥ��
	cout << a1 % b2 << endl;
	//����С���������
	double d1 = 0.5;
	double d2 = 0.2;   // ��ʵ�ͱ����������йأ����������Ҳ�Ǻͱ�������һ��
	int a3 = 1;
	
	cout << d1 / d2 << endl;
	// cout << a3 % d2 << endl;  �������ͱ���
	system("pause");
	return 0;
}