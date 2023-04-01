#include <iostream>
using namespace std;
// ����������д���Կ��ٵ���������Ҫ�ô�����������������������ͷ�ʱ�޷�������������
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//virtual~Animal()  // ������    virtual~Animal() = 0 ��������
	//{
	//	cout << "Animal������������" << endl;
	//}
	// ���˴�������֮�� �����ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0; 
	virtual void Speak() = 0;

};

Animal :: ~Animal() { }     

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name); // m_Name is a point
	}
	~ Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void Speak()
	{
		cout << *m_Name << ": ����è��������" << endl;
	}
	string* m_Name; // è�����֣����ҷ��ڶ���
};

void test01()
{
	Animal* cute = new Cat("Tom");
	cute->Speak();
	//����ָ����������ʱ�򣬲�����������е�����������������������ж������ԣ������ڴ�й©
	delete cute;
}

int main()
{

	test01();
	system("pause");
	return 0;
}