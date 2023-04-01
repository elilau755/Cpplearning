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
// 给老师和学生赋值的函数
void allocateSpace(Teacher TArray[], int len)  // 一般来说对数组操作，最好再加一个形参len
{
	string nameSeed = "ABCDE";   // 方便写名字，五个字母涵盖5学生，3老师
	// 给老师赋值
	for (int i = 0; i < len; i++)
	{
		TArray[i].Tname = "Teacher_";
		TArray[i].Tname += nameSeed[i];
		// 通过内层循环，给每个老师带的5个学生赋值
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
		cout << "老师姓名： " << TArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名： " << TArray[i].SArray[j].Sname <<
				" 毕设成绩： " << TArray[i].SArray[j].score << endl;
		}
	}
}






int main()
{
	srand((unsigned int)time(NULL));
	// 1、创建三名老师的数组
	Teacher TArray[3];
	// 2、通过函数给三名老师的信息赋值，并给老师带的学生赋值
	int len = sizeof(TArray) / sizeof(TArray[0]);
	allocateSpace(TArray, len);     // 地址传递
	// 3、打印所有老师及所带学生的信息
	printInfo(TArray, len);




	system("pause");
	return 0;
}