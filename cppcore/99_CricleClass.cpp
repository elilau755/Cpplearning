#include <iostream>
using namespace std;
#define PI 3.14159

class Circle
{
public:
	int m_r;//�뾶

	//��Ϊ
	//��ȡ��Բ���ܳ�
	double calculateZC()
	{
		//2 * pi  * r
		//��ȡԲ���ܳ�
		return  2 * PI * m_r;
	}

};

int main()
{
	//ͨ��Բ�࣬����Բ�Ķ���
	Circle C1;
	C1.m_r = 3;

	cout << "ԲC1���ܳ�Ϊ�� " << C1.calculateZC() << endl;

	system("pause");
	return 0;
}