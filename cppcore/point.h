#pragma once   // ��ֹͷ�ļ� �ظ�����
#include <iostream>
using namespace std;
// ͷ�ļ�һ��ֻ��Ҫ����
// ����
class Point
{
public:  // ����
	// ����x��y����
	void setX(int x);
	/*{
		m_X = x;
	}*/
	void setY(int y);
	/*{
		m_Y = y;
	}*/
	// ��ȡx��y����
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