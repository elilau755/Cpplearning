#include <iostream>
using namespace std;
#include <string>

// ���ص��������
// �Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& out, const MyInteger& p); // ������ȫ�ֺ����У����ܹ�ͨ��p����˽�г�Ա��
public:
	MyInteger()
	{
		m_Num = 0;
	}
	MyInteger& operator++()  // ++a
	{
		m_Num++;
		return *this; // return *this ���ض���ı����������myint����
	}
	MyInteger operator++(int)  // �ս�15:00 ���õ���������ĺ���ԭ��ΪMyInteger operator++(int)�������int��һ��ռλ����������������ǰ�õ����ͺ��õ�����
	{
		// �� ��¼��ʱ���
		MyInteger temp = *this;  // ���� ���ص���һ���ֲ�����temp��¼��ֵ�������������Ƕ���myint��
		// ���ھֲ�����temp�ں���ִ�����ͱ��ͷţ����Բ��ܷ��ض��������á�������ض��������ã���ô������ý�ָ��һ���Ѿ����ͷŵ��ڴ�ռ䣬���ǷǷ��ġ�
		// �� ����
		m_Num++;
		// ��� ����¼�������
		return temp;   // �������д����returun *this ��ô���ؽ���ǵ�����ĵ�ǰ���
	}
private:
	int m_Num;
};

void test01()
{   // ++ myint �൱�� operator++(myint) �� ++myint
	MyInteger myint; // �Զ������� ����һ������myint
	cout << ++(++myint) << endl; // û���������ƥ��� �����������ԭ��cout����myint����һ���Զ���Ķ�������֪������m_Num
	MyInteger myint2;
	cout << (myint2++)++ << endl; // �������ԶԺ��õ���������ķ���ֵ������ʽ���ʱ����ʵ�������ڶ�һ����ʱ�������в����������Ƕ�ԭʼ������в�����
	// ������ʱ�����ں���ִ�����ͱ��ͷţ�������ʽ����ж���ʱ�������κβ���������Ӱ��ԭʼ������ˣ����õ������������������ʽ��̡�
}

// ȫ�ֺ��� дһ���������������
ostream& operator<<(ostream& out, const MyInteger& p)
{
	cout << p.m_Num << endl;
	return out;
}
int main()
{

	test01();
	system("pause");
	return 0;
}