#include <iostream>
using namespace std;

// ��̬��Ա����
class Person
{
public:
	//1�� ���ж��󶼹���ͬһ������
	//2�� ����׶ξͷ����ڴ�
	//3�� ���������������ʼ������
	static int m_A;
private:
	static int m_B;  // private
};

int Person::m_A = 100; // Person�������µı���m_A,�����ʼ������
int Person::m_B = 150;
void test01()
{
	Person p1;
	cout << p1.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;
}

void test02()
{
	//��̬��Ա���� ������ĳ���������ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	//2��ͨ���������з���  ����::��̬��Ա������
	cout << Person::m_A << endl;
	// cout << p.m_B << endl;  ˽���������µľ�̬��Ա��������Ҳ�Ƿ��ʲ��˵�
}

int main()
{
	// test01();
	test02();
	system("pause");
	return 0;
}