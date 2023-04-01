#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float f1 = 3.1415926f;
	cout << "f1 = " << setprecision(7) << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1 = " << setprecision(8) << d1 << endl;

	system("pause");
	return 0;
}
