#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name;
	int age;
	int score;
};
int main()
{
	// �����ṹ������
	struct Student stuArr[3] =
	{
		{"LeBron", 38, 38383},
		{"Kobe", 41, 33000},
		{"Wade", 39, 22000}
	};
	// ���ṹ��������Ԫ�ظ�ֵ
	stuArr[2] = { "Russel", 35, 20000};
	// �����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "name = " << stuArr[i].name << "\t" << "age = " << stuArr[i].age << "\t" << "score = " << stuArr[i].score << endl;
	}


	system("pause");
	return 0;
}