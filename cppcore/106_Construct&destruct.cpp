#include <iostream>
using namespace std;

class Person
{
public:
	// �޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲ι��캯����" << endl;
	}
	// �вι��캯��
	Person(int a)
	{
		age = a;
		cout << "�вι��캯����" << endl;
	}
	// �������캯��
	Person(const Person& p)  // �൱��Ҫ��һ���˵�������Ϊȫ�����Ƶ���һ��������
		// �����ֲ��ܽ�����˵ı���ı䣬���Լ���const����ο�����ͬʱ�������õķ�ʽ������
	{
		age = p.age;
		cout << "�������캯����" << endl;
	}
	// ��������
	~Person()
	{
		cout << "����������" << endl;
	}
public:
	int age;
};

// ����
void test01()
{
	//1�����ŷ�
	Person p1; // Ĭ�Ϲ��캯������
	Person p2(10); // �вι��캯��
	Person p3(p2);// �������캯�� p2ԭ������Person���ͣ����ÿ������캯��ʱ��p2������p3
	
	// ע������1
	// ����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	// Person p1(); // �ᱻ����������һ������������
	/*cout << "p2������Ϊ�� " << p2.age << endl;
	cout << "p3������Ϊ�� " << p3.age << endl;*/
	
	//2����ʾ��
	Person p4; // Ĭ��
	Person p5 = Person(10); // �в�
	Person p6 = Person(p5); // ����

	Person(10); // �������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	cout << "aaaaa" << endl;
	// ע������2
	// ��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson(p6); === Person p6; ��������
	// Person(p6); �ȼ��� Person p6; ��������

	//3����ʽת����
	Person p4 = 10; // === Person p4 = Person(10);
	Person p5 = p4; // ��������
	

}

int main()
{

	test01();

	system("pause");
	return 0;
}