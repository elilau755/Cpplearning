#include <iostream>
using namespace std;
#include <stdlib.h>


int* func()
{
	// ջ������ע�� ��Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�
	int a = 10;
	return &a;
}

int main() {

	int* p = func();

	cout << *p << endl;
	// ��һ�οɴ�ӡ�����֣�����Ϊ����������һ�α���
	cout << *p << endl;
	// �ڶ���������ݾͲ��ٱ����ˣ��ʲ�Ҫ��func�еķ���local��ַ
	system("pause");

	return 0;
}