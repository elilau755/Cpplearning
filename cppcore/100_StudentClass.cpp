#include <iostream>
using namespace std;

class Student
{
public:
	string name, number;

	void Modify()
	{
		cout << "输入学生名字： " << endl;
		cin >> name;
		cout << "输入学生学号： " << endl;
		cin >> number;
	}

	void Show()
	{
		cout << "姓名： " << name << "\t" << "学号： " << number << endl;
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