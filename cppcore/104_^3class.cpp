#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
// ������������
// ������Լ���Ϊ
// �����Ϊ ��ȡ��������������
// �ֱ�����ȫ�ֺͳ�Ա�����ж������������Ƿ����
class Cube
{
public:
	// ����,��ȡL,W,H
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
	// ��ȡ���������
	int calS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	// ��ȡ���������
	int calV()
	{
		return m_L * m_W * m_H;
	}
	// ��Ա����
	// ���ó�Ա������ֻ��һ���βΣ�����������д��ʱc1.isSameByClass����c1���������������ֻ��Ҫ����һ��������c1�Աȼ���
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
// ȫ�ֺ���
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
	cout << "c1�ߣ�" << c1.getH() << "\t" << "c2�ߣ�" << c2.getH() << endl;
	cout << "c1��" << c1.getW() << "\t" << "c2��" << c2.getH() << endl;
	cout << "c1����" << c1.getL() << "\t" << "c2����" << c2.getH() << endl;
	cout << "c1�����" << c1.calS() << "\t" << "c2�����" << c2.calS() << endl;
	cout << "c2�����" << c1.calV() << "\t" << "c2�����" << c2.calV() << endl;
	bool result = isSame(c1, c2);
	if (result)
	{
		cout << "c1,c2���" << endl;
	}
	else cout << "c1,c2�����" << endl;

	result = c1.isSameByClass(c2);
	if (result)
	{
		cout << "c1,c2���" << endl;
	}
	else cout << "c1,c2�����" << endl;

	system("pause");
	return 0;
}