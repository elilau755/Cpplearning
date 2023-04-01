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
//	cout << "张三的总成绩是 " << x << endl;
//	cout << "李四的总成绩是 " << y << endl;
//	cout << "王五的总成绩是 " << z << endl;
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
	string name[3] = { "张三", "李四", "王五"};
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;  //
		for (int j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		cout << name[i] << "总成绩为： " << sum << endl;
	}
	
	system("pause");
	return 0;
}