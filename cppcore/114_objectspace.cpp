#include <iostream>
using namespace std;

// ��Ա���� �� ��Ա���� �ֿ��洢
class Person
{
	int m_A; // �Ǿ�̬��Ա����,��ֻ����ռ����ռ�

	static int m_B;

	void func() {}

	static void func2() {}
};

void test01()
{
	Person p;
	// *�ն���ռ�ڴ�ռ䣺1
	//class Person {}; Person p; ��ô����p����һ���ն���
	//C++���������ÿ���ն������һ���ֽڿռ䣬��Ϊ�����ֶ���ռ�ڴ��λ��
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}