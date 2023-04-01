#include <iostream>
using namespace std;

int main()
{
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}
	delete[] arr;

	system("pause");
	return 0;

}