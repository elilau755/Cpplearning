#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
// 创建立方体类
// 设计属性及行为
// 设计行为 获取立方体面积和体积
// 分别利用全局和成员函数判断两个立方体是否相等
class Cube
{
public:
	// 设置,获取L,W,H
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}
	// 获取立方体面积
	int calS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	// 获取立方体体积
	int calV()
	{
		return m_L * m_W * m_H;
	}
	// 成员函数
	// 调用成员函数，只有一个形参，后面主函数写的时c1.isSameByClass，是c1调用这个函数，故只需要传入一个参数与c1对比即可
	bool isSameByClass(Cube& c)  
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}
private:
	int m_L; int m_W; int m_H;
};
// 全局函数
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
	{
		return true;
	}
	else return false;

}

int main()
{
	Cube c1, c2;
	c1.setH(10), c2.setH(20);
	c1.setW(10), c2.setW(20);
	c1.setL(10), c2.setL(20);
	cout << "c1高：" << c1.getH() << "\t" << "c2高：" << c2.getH() << endl;
	cout << "c1宽：" << c1.getW() << "\t" << "c2宽：" << c2.getH() << endl;
	cout << "c1长：" << c1.getL() << "\t" << "c2长：" << c2.getH() << endl;
	cout << "c1面积：" << c1.calS() << "\t" << "c2面积：" << c2.calS() << endl;
	cout << "c2体积：" << c1.calV() << "\t" << "c2体积：" << c2.calV() << endl;
	bool result = isSame(c1, c2);
	if (result)
	{
		cout << "c1,c2相等" << endl;
	}
	else cout << "c1,c2不相等" << endl;

	result = c1.isSameByClass(c2);
	if (result)
	{
		cout << "c1,c2相等" << endl;
	}
	else cout << "c1,c2不相等" << endl;

	system("pause");
	return 0;
}