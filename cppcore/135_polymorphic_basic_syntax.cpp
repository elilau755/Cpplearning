#include <iostream>
using namespace std;
// ��̬��̬����
// 1���м̳й�ϵ
// 2��������д�����麯��  ��д����������ͬ���β��б�Ҳ��ͬ

class Animal
{
public:

	virtual void Speak() //  ����virtual, �������ת�ʹ���doSpeak����ľ��Ǹ��� ������ú
	{
		cout << "������ú" << endl;
	}
};

class Ikun : public Animal
{
public:
	void Speak() // ������д�����麯��   ����ɼӿɲ��� virtual
	{
		cout << "��������������" << endl;
	}
};

class Jijiao : public Animal
{
public:
	void Speak() // ������д�����麯��
	{
		cout << "�������ϣ�" << endl;
	}
};
// ��̬��̬ʹ��
// �����ָ��������� ִ���������
// ִ��˵������
// void doSpeak(Animal& animal) // Animal & animal = cat; �������ý���������� ����ת��
void doSpeak(Animal& animal)
{
	animal.Speak();
}

void test01()
{
	Ikun niganma;
	doSpeak(niganma); 
	Jijiao xiaoheizi;
	doSpeak(xiaoheizi);
}

void test02()
{
	cout << "size of Animal: " << sizeof(Animal) << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}