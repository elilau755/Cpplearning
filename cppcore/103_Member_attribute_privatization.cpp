#include <iostream>
using namespace std;
#include <string>
class Person
{
public:
	// ��������
	void setName(string name)
	{
		m_Name = name;
	}
	// ��ȡ����
	string getName()
	{
		return m_Name;
	}
	// ��ȡ����
	int getAge()
	{
		return m_Age;
	}
	// ��������
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}
	// ��������
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  // ����Ϊ�ɶ���д
	int m_Age;  // ��Ϊ�ɶ���д
	string m_Lover;  // ֻд

};

int main()
{
	Person p;
	p.setName("����");
	cout << "��ȡ����Ϊ�� " << p.getName() << endl;

	p.setAge(200);
	cout << "��ȡ����Ϊ�� " << p.getAge() << endl;

	p.setLover("����");
	system("pause");
	return 0;
}