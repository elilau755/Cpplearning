#include <fstream>
using namespace std;

void test01()
{
	ofstream ofs; // ���������� ofstream д�ļ�  ifstream���ļ� fstream��д
	ofs.open("test.txt", ios::out); // ofs.open("�ļ�·��",�򿪷�ʽ)
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺25" << endl;
	ofs.close();   // �ر��ļ�
}

int main()
{
	test01();
	system("pause");
	return 0;
}