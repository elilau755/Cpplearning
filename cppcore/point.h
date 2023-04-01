#pragma once   // 防止头文件 重复包含
#include <iostream>
using namespace std;
// 头文件一般只需要声明
// 点类
class Point
{
public:  // 对外
	// 设置x，y坐标
	void setX(int x);
	/*{
		m_X = x;
	}*/
	void setY(int y);
	/*{
		m_Y = y;
	}*/
	// 获取x，y坐标
	int getX();
	/*{
		return m_X;
	}*/
	int getY();
	/*{
		return m_Y;
	}*/
private:
	int m_X; int m_Y;
};