#include <iostream>
using namespace std;
#define PI 3.14159

class Circle
{
public:
	int m_r;//半径

	//行为
	//获取到圆的周长
	double calculateZC()
	{
		//2 * pi  * r
		//获取圆的周长
		return  2 * PI * m_r;
	}

};

int main()
{
	//通过圆类，创建圆的对象
	Circle C1;
	C1.m_r = 3;

	cout << "圆C1的周长为： " << C1.calculateZC() << endl;

	system("pause");
	return 0;
}