#include <iostream>
using namespace std;
#include <stdlib.h>

// ȫ�ֱ��� global
int g_a = 10;
int g_b = 10;

// const���ε�ȫ�ֱ���
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{

	// ȫ����
	// ȫ�ֱ�������̬����������

	// �ֲ���������������  local
	int a = 10; int b = 10;

	// ��̬���� "static ���� ������"
	static int s_a = 10;
	static int s_b = 10;
	
	// ����
	// �ַ�������
	"hello world";
	// const���εı��� 	��Ϊ const���ε�ȫ�ֱ�����const���εľֲ�����
	// const���εľֲ�����  local
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����a�ĵ�ַ�� " << (unsigned int) & a << endl;
	cout << "�ֲ�����b�ĵ�ַ�� " << (unsigned int) & b << endl;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ�� " << (unsigned int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ�� " << (unsigned int)&c_l_b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ�� " << (unsigned int) & g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ�� " << (unsigned int) & g_b << endl;
	cout << "��̬����s_a�ĵ�ַ�� " << (unsigned int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ�� " << (unsigned int)&s_b << endl;
	cout << "�ַ��������ĵ�ַΪ�� " << (unsigned int)&"hello world" << endl;
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ�� " << (unsigned int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ�� " << (unsigned int)&c_g_b << endl;
	system("pause");
	return 0;
}