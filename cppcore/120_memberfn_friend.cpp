#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
	void visit2();

private:
	Building *building;

};

class Building
{
	// ���߱����� GoodGay���е�visit��Ա���� �� Building�����ѣ����Է���˽������
	friend void GoodGay::visit();
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	// cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl; // visit2()û�и��߱����� GoodGay���е�visit2��Building�����ѣ����ɷ���˽������
}

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

void test01()
{
	GoodGay gigi;
	gigi.visit();
	gigi.visit2();
}

int main()
{	
	test01();
	system("pause");
	return 0;
}