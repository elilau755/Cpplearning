#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	// ���ã���ȡ�뾶
	void setR(int r);
	
	int getR();
	
	// ����Բ�ģ���ȡԲ��
	void setCenter(Point c);
	
	Point getCenter();
	
private:
	int m_R;
	Point m_Center; // Բ��  Ƕ��һ������
};
