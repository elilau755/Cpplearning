#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << j * i << '\t';  // �ȴ�һ��ȫ�������꣬������for j �����ٻ���
		}
		cout << endl; // ÿ�м�������в���
	}
	system("pause");
	return 0;
}