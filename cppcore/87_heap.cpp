#include <iostream>
using namespace std;

int * func()
{
	// ����"new"�ؼ��� ���Խ����ݿ�����heap����
	// ָ�뱾��Ҳ�� �ֲ�����������ջ�ϣ�ָ�뱣������� ���� ����
	/*int a = 10;
	return &a;*/
	int * p = new int(10);
	return p;
}

int main()
{
	// ��heap��������
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}