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
	ofstream ofs("person.txt", ios::out | ios::binary); // 也可在创建对象时，确定mode
	// ofs.open("person.txt", ios::out | ios::binary)  // 可在open确定好mode方式
	Person p = { "张三", 98 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}