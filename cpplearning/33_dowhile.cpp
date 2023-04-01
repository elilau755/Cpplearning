#include <iostream>
using namespace std;
int main()
{   // 水仙花数
	int num = 100;
	do {
		int a, b, c; // 个、十、百位
		a = num % 10; b = num / 10 % 10; c = num / 100;
		if ((a*a*a + b*b*b + c*c*c) == num)  // ^是位运算的疑惑运算，不是次方
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}