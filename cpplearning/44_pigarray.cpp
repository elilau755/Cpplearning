#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 300, 350, 200, 400, 250 };
	int max = 0;
	for (int j = 0; j < 5; j++)
	{
		max = (arr[j] > max ? arr[j] : max); // 用max变量将其存放起来
	}
	cout << "最重的小猪体重为" << max << endl;
	system("pause");
	return 0;
}