#include <iostream>
using namespace std;
#include <string>

class Building; // 在GoodGay中用Building类，可以先不写Building类，但必须先声明一下Building类
class GoodGay
{
public:
	GoodGay();
	void visit(); // 参观函数 访问Building中的属性
	Building* building;

};

class Building
{
	// GoodGay类是本类的好朋友，可以访问本类中私有成员
	friend class GoodGay;
public:
	Building(); // 构造函数可以不用写返回值
public:
	string m_SittingRoom; // 客厅

private:
	string m_BedRoom; // 卧室

};

// 类外写成员函数,作用域
Building::Building()  // Building 构造函数
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()  // GoodGay 构造函数
{
	// 创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友类正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问： " << building->m_BedRoom << endl;
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