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
	ofstream ofs("person.txt", ios::out | ios::binary); // Ҳ���ڴ�������ʱ��ȷ��mode
	// ofs.open("person.txt", ios::out | ios::binary)  // ����openȷ����mode��ʽ
	Person p = { "����", 98 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}