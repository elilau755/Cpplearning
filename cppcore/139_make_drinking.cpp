#include <iostream>
using namespace std;
#include <string>

class AbstractDrinking
{
public:
	virtual void Boil() = 0; // ���
	virtual void Brew() = 0; // ����
	virtual void PourInCup() = 0; // �屭
	virtual void PutSomething() = 0; // ����
	
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee : public AbstractDrinking
{
public:
	virtual void Boil() // ���
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void Brew() // ����
	{
		cout << "���뿧�ȶ�����" << endl;
	}
	virtual void PourInCup() // �屭
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething() // ����
	{
		cout << "���Ǻ�ţ��" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	virtual void Boil() // ���
	{
		cout << "��������Ȫˮ" << endl;
	}
	virtual void Brew() // ����
	{
		cout << "������������" << endl;
	}
	virtual void PourInCup() // �屭
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething() // ����
	{
		cout << "�������" << endl;
	}
};

// ������Ʒ
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	doWork(new Coffee);
	cout << "---------------" << endl;
	doWork(new Tea);
	
}

int main()
{

	test01();
	system("pause");
	return 0;
}