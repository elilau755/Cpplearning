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
	// 告诉编译器 GoodGay类中的visit成员函数 是 Building好朋友，可以访问私有内容
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
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	// cout << "好基友正在访问： " << building->m_BedRoom << endl; // visit2()没有告诉编译器 GoodGay类中的visit2是Building好朋友，不可访问私有内容
}

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
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