#include "point.h"

// 点类
//class Point
//{
/*public:*/  // 对外
	// 设置x，y坐标
	void Point::setX(int x) // 类名::成员函数 ::作用域
	{
		m_X = x;
	}
	void Point::setY(int y)
	{
		m_Y = y;
	}
	// 获取x，y坐标
	int Point::getX()
	{
		return m_X;
	}
	int Point::getY()
	{
		return m_Y;
	}
//private:
//	int m_X; int m_Y;
//};

