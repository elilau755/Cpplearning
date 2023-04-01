#include "circle.h"

	void Circle::setR(int r)
	{
		m_R = r;
	}
	int Circle::getR()
	{
		return m_R;
	}
	// 设置圆心，获取圆心
	void Circle::setCenter(Point c)
	{
		m_Center = c;
	}
	Point Circle::getCenter()
	{
		return m_Center;
	}
