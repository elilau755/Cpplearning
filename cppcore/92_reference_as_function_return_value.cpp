#include <iostream>
using namespace std;

// �����������ķ���ֵ
// 1����Ҫ���ؾֲ�����������
int &test01()   // & �����õķ�ʽ����,����˵ ����a��������int &������Ҫ��int & refȥ"����"����ref��a�ı���
{
	int a = 10; // �ֲ����������ջ��
	return a;   

}

// 2�������ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10; // ��̬����ȫ������������ϵͳ�ͷ�
	return a;
}

int main()
{
	/*int& ref = test01();
	cout << "�ֲ�ref = " << ref << endl;
	cout << "�ֲ�ref = " << ref << endl;*/
	int& ref2 = test02();
	cout << "��̬ref2 = " << ref2 << endl;
	cout << "��̬ref2 = " << ref2 << endl;
	// 3��������������ֵ������Ҫ��������
	test02() = 1000;
	cout << "��̬ref2 = " << ref2 << endl;
	cout << "��̬ref2 = " << ref2 << endl;
	system("pause");
	return 0;
}