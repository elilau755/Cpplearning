#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{

	ifstream ifs("person.txt", ios::in | ios::binary);
	// 打开文件  条件判断是否打开成功
	if (!ifs.is_open())
	{
		cout << "打开文件失败！" << endl;
		return; // 不继续往下读
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名： " << p.m_Name << "\n" << "年龄： " << p.m_Age << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}