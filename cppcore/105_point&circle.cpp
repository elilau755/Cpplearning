#include <iostream>
using namespace std;
#include <stdlib.h>
#include "circle.h"
#include "point.h"
//// ����
//class Point
//{
//public:  // ����
//	// ����x��y����
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	// ��ȡx��y����
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X; int m_Y;
//};
//
//class Circle
//{
//public:
//	// ���ã���ȡ�뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	// ����Բ�ģ���ȡԲ��
//	void setCenter(Point c)
//	{
//		m_Center = c;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//	Point m_Center; // Բ��  Ƕ��һ������
//};

// �жϵ�Բ��ϵ
void isInCircle(Circle &c1, Point &p1)
{
	// ��������֮����� ƽ�� 
	int distance =
		(c1.getCenter().getX() - p1.getX()) * (c1.getCenter().getX() - p1.getX()) +
		(c1.getCenter().getY() - p1.getY()) * (c1.getCenter().getY() - p1.getY());
	// ����뾶��ƽ��
	int Rsquare = c1.getR() * c1.getR();
	// �жϹ�ϵ
	if (distance == Rsquare)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance < Rsquare)
	{
		cout << "����Բ��" << endl;
	}
	else cout << "����Բ��" << endl;
}

int main()
{
	// ����Բ
	Circle c1;
	Point center;
	c1.setR(10);
	center.setX(10); center.setY(0);
	c1.setCenter(center);
	
	// ������
	Point p1;
	p1.setX(10); p1.setY(11);

	// �жϹ�ϵ
	isInCircle(c1, p1);
	system("pause");
	return 0;
}