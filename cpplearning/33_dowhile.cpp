#include <iostream>
using namespace std;
int main()
{   // ˮ�ɻ���
	int num = 100;
	do {
		int a, b, c; // ����ʮ����λ
		a = num % 10; b = num / 10 % 10; c = num / 100;
		if ((a*a*a + b*b*b + c*c*c) == num)  // ^��λ������ɻ����㣬���Ǵη�
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}