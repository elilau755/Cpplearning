#include "max.h"

void max(int a, int b)
{
	cout << "其中较大的一个是 " << (a > b ? "a = " : "b = ") << (a > b ? a : b) << endl;
}