#include <iostream>
using namespace std;

//��ӡ���ݺ���
void showValue(const int& val) // ����const����ֹ�ں���������������βθı䣬�Ӷ����ı�ʵ��
{
	// val = 1000; // ��ʱ �ᱨ�� ���ʽ��ֵ�����ǿ��޸ĵ�
	cout << "val = " << val << endl;
}

int main()
{
	// ��������  const int & ref
	// ʹ�ó��������������βΣ���ֹ����������ƽṹ���const student * p
	// int a = 10;
	// int &ref = 10; �Ƿ�����
	// const int& ref = 10; �ʼ���const֮���Զ�ת�� int temp = 10;const int& ref = temp;

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}