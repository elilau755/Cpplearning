#include <iostream>
using namespace std;
#include <string>

class Building; // ��GoodGay����Building�࣬�����Ȳ�дBuilding�࣬������������һ��Building��
class GoodGay
{
public:
	GoodGay();
	void visit(); // �ιۺ��� ����Building�е�����
	Building* building;

};

class Building
{
	// GoodGay���Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay;
public:
	Building(); // ���캯�����Բ���д����ֵ
public:
	string m_SittingRoom; // ����

private:
	string m_BedRoom; // ����

};

// ����д��Ա����,������
Building::Building()  // Building ���캯��
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()  // GoodGay ���캯��
{
	// �������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{

	test01();
	system("pause");
	return 0;
}