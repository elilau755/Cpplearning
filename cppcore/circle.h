#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	// 设置，获取半径
	void setR(int r);
	
	int getR();
	
	// 设置圆心，获取圆心
	void setCenter(Point c);
	
	Point getCenter();
	
private:
	int m_R;
	Point m_Center; // 圆心  嵌套一个点类
};
