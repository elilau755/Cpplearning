#include <iostream>
using namespace std;
#include <string>
#include <ctime>
struct Student
{
	string Sname; int score;
};
struct Teacher
{
	string Tname;
	struct Student SArray[5];
};
// ����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(Teacher TArray[], int len)  // һ����˵���������������ټ�һ���β�len
{
	string nameSeed = "ABCDE";   // ����д���֣������ĸ����5ѧ����3��ʦ
	// ����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		TArray[i].Tname = "Teacher_";
		TArray[i].Tname += nameSeed[i];
		// ͨ���ڲ�ѭ������ÿ����ʦ����5��ѧ����ֵ
		for (int j = 0; j < 5; j++) 
		{
			TArray[i].SArray[j].Sname = "Student_";
			TArray[i].SArray[j].Sname += nameSeed[j];

			TArray[i].SArray[j].score = rand()%41 + 60;   // 60 ~ 100
		}
	}
}
void printInfo(Teacher TArray[], int len)
{
	for (int i = 0; i < len; i++)
	{	
		cout << "��ʦ������ " << TArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << TArray[i].SArray[j].Sname <<
				" ����ɼ��� " << TArray[i].SArray[j].score << endl;
		}
	}
}






int main()
{
	srand((unsigned int)time(NULL));
	// 1������������ʦ������
	Teacher TArray[3];
	// 2��ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	int len = sizeof(TArray) / sizeof(TArray[0]);
	allocateSpace(TArray, len);     // ��ַ����
	// 3����ӡ������ʦ������ѧ������Ϣ
	printInfo(TArray, len);




	system("pause");
	return 0;
}