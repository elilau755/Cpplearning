#include <iostream>
#include <fstream>
#include <cstring> // ǰ������c���Է��
#include <string>
using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return; // ����������¶�����
	}
	// ���ַ�ʽ��ȡ
	// ��һ��
	//char buf[1024] = { 0 };  // ����Ԫ�س�ʼ��Ϊ0
	//while (ifs >> buf)     // ifs�򿪵��ļ��������뵽buf����
	//{
	//	cout << buf << endl;
	//}

	// �ڶ��� �ַ�����
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))  // buf����һ���׵�ַ����ָ��
	//{
	//	cout << buf << endl;
	//}

	// ������ �ַ�����ʽ
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	// ������ ���Ƽ� һ�����ַ�����
	char c;
	while ( (c = ifs.get()) != EOF )  // EOF End Of File
	{
		cout << c;
	}

	ifs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}