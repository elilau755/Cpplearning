#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Ĭ���޲ι��캯�����ã�" << endl;
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height); // new int() ���ص���ָ�����ͣ�����������Ҫ����Ա�����ͷ�
		cout << "�вι��캯�����ã�" << endl;
	}

	Person(const Person& p)
	{
		cout << "�������캯�����ã�" << endl;
		m_Age = p.m_Age;
		// m_Height = p.m_Height; ������Ĭ��ʵ�����д���

		//�������    ��һ��һ�е�ǰ�ᶼ���ڿ������캯����ȥ����new int()һ���ڴ棬���һ����p1,p2�����Լ�����������
		m_Height = new int(*p.m_Height); // �����ã�Ȼ���ڴ����ݿ��ٵ������������ڶ�������һ���ڴ棬�õ�ַ��������m_Height���ָ����160
	}
	// �������룬���������ٵ��������ͷŲ���
	~Person()
	{
		if (m_Height != NULL) // �����ָ�벻Ϊ��
		{
			delete m_Height;  // �ͷŸ�ָ��
			m_Height = NULL; // �ÿգ���ֹҰָ�����
		}
		cout << "�����������ã�" << endl;
	}

public:
	int m_Age;
	int *m_Height;
};

void test01()
{
	Person p1(18, 160);
	cout << "p1������Ϊ�� " << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl; // m_Height is point
	Person p2(p1);    //ǳ���������������캯��û��new int()���ٶ����µ�ַ������ʱ�� p1,p2ִ�н�����Ҫִ�����������ͷ��ڴ�
				// ����ջ��ջ����һ��"�Ƚ����",��������������p2��m_Heightָ�� != NULL,��ô���ͷ�p2��m_Heightָ�룬
			// �����ָ��ָ������Ƕ�����160����ô����ڴ潫�ͷŸɾ���
		// ��p1ִ�н�����p1��m_Heightָ��Ҳ��Ϊ�գ�ҲҪȥ�ͷ�ָ��Ķ�����160����ڴ�,��������ڴ��Ѿ��ͷŹ��ˣ���ȥ�ͷž��ǷǷ�����
	cout << "p2������Ϊ�� " << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}