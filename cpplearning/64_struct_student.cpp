#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name;
	int age;
	int score;
}s3; // 结构体变量创建方式3
int main()
{
	// 结构体变量创建方式1
	struct Student s1;
	s1.name = "LeBron";
	s1.age = 38;
	s1.score = 38383;
	cout << "name = " << s1.name << "\t" <<"age = " << s1.age << "\t" << "score = " << s1.score << endl;

	// 结构体变量创建方式2
	struct Student s2 = { "Kobe", 41, 33000 };
	cout << "name = " << s2.name << "\t" << "age = " << s2.age << "\t" << "score = " << s2.score << endl;

	s3.name = "Wade";
	s3.age = 39;
	s3.score = 22000;
	cout << "name = " << s3.name << "\t" << "age = " << s3.age << "\t" << "score = " << s3.score << endl;
	system("pause");
	return 0;
}