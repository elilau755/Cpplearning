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
	// ���ļ�  �����ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ�ܣ�" << endl;
		return; // ���������¶�
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "������ " << p.m_Name << "\n" << "���䣺 " << p.m_Age << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}