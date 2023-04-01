#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << j * i << '\t';  // 等待一列全部计算完，即跳出for j 括号再换行
		}
		cout << endl; // 每列计算完后换行操作
	}
	system("pause");
	return 0;
}