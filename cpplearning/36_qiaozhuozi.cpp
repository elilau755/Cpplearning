#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	for (; i < 101; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "ÇÃ×À×Ó" << endl;
		}
		else { cout << i << endl; }
	}

	system("pause");
	return 0;
}