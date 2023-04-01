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
	// 创建结构体数组
	struct Student stuArr[3] =
	{
		{"LeBron", 38, 38383},
		{"Kobe", 41, 33000},
		{"Wade", 39, 22000}
	};
	// 给结构体数组中元素赋值
	stuArr[2] = { "Russel", 35, 20000};
	// 遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "name = " << stuArr[i].name << "\t" << "age = " << stuArr[i].age << "\t" << "score = " << stuArr[i].score << endl;
	}


	system("pause");
	return 0;
}