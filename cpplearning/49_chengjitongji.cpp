//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[3][3] = {
//		{100, 100, 100},
//		{90, 50, 100},
//		{60, 70, 80}
//	};
//	int x = 0; int y = 0; int z = 0;
//	
//	for (int i = 0; i < 3; i++)
//	{
//		x += a[0][i];
//		y += a[1][i];
//		z += a[2][i];
//	}
//	cout << "�������ܳɼ��� " << x << endl;
//	cout << "���ĵ��ܳɼ��� " << y << endl;
//	cout << "������ܳɼ��� " << z << endl;
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	int a[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	// int sum = 0;
	string name[3] = { "����", "����", "����"};
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;  //
		for (int j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		cout << name[i] << "�ܳɼ�Ϊ�� " << sum << endl;
	}
	
	system("pause");
	return 0;
}