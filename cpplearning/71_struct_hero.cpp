#include <iostream>
using namespace std;
#include <string>
struct hero
{
	string name;
	int age;
	string gender;
};
void bubbleSort(hero honor[], int len)
{	
	// ���ŵ�i��
	for (int i = 0; i < len - 1; i++)
	{
		// ��i�ֶԱȴ���j��
		for (int j = 0; j < len - i - 1; j++)
		{
			if (honor[j].age > honor[j + 1].age)
			{
				hero temp = honor[j];
				honor[j] = honor[j + 1];
				honor[j + 1] = temp;
			}
		}
	}
}
void printhonor(hero honor[], int len)
{
	cout << "����Ӣ����Ϣ��������������Ϊ�� " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << honor[i].name << honor[i].age <<
			honor[i].gender <<endl;
	}
}
int main()
{
	hero honor[5] =
	{
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};
	int len = sizeof(honor) / sizeof(honor[0]);
	bubbleSort(honor, len);
	printhonor(honor, len);
	system("pause");
	return 0;
}