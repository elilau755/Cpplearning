#include <iostream>
using namespace std;
#include <stdlib.h>
#include "circle.h"
#include "point.h"
//// 点类
//class Point
//{
//public:  // 对外
//	// 设置x，y坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	// 获取x，y坐标
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
//	// 设置，获取半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	// 设置圆心，获取圆心
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
//	Point m_Center; // 圆心  嵌套一个点类
//};

// 判断点圆关系
void isInCircle(Circle &c1, Point &p1)
{
	// 计算两点之间距离 平方 
	int distance =
		(c1.getCenter().getX() - p1.getX()) * (c1.getCenter().getX() - p1.getX()) +
		(c1.getCenter().getY() - p1.getY()) * (c1.getCenter().getY() - p1.getY());
	// 计算半径的平方
	int Rsquare = c1.getR() * c1.getR();
	// 判断关系
	if (distance == Rsquare)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < Rsquare)
	{
		cout << "点在圆内" << endl;
	}
	else cout << "点在圆外" << endl;
}

int main()
{
	// 创建圆
	Circle c1;
	Point center;
	c1.setR(10);
	center.setX(10); center.setY(0);
	c1.setCenter(center);
	
	// 创建点
	Point p1;
	p1.setX(10); p1.setY(11);

	// 判断关系
	isInCircle(c1, p1);
	system("pause");
	return 0;
}