#include <iostream>
using namespace std;

class Student
{
public:
	string name, number;

	void Modify()
	{
		cout << "����ѧ�����֣� " << endl;
		cin >> name;
		cout << "����ѧ��ѧ�ţ� " << endl;
		cin >> number;
	}

	void Show()
	{
		cout << "������ " << name << "\t" << "ѧ�ţ� " << number << endl;
	}
};

int main()
{
	Student S1;
	S1.Modify();
	S1.Show();
	system("pause");
	return 0;
}