#include <iostream>
using namespace std;
#include <string>
struct student
{
	string name; int age; int score;
}s;
void printStudent1(struct student s)
{
	s.age = 22;
	cout << "name = " << s.name << "age = " << s.age << "score = " << s.score << endl;
}

void printStudent2(struct student * p)
{
	s.age = 22;
	cout << "name = " << p->name << "age = " << p->age << "score = " << p->score << endl;
}
int main()
{
	s = { "zhangsan", 18, 100 };


	printStudent1(s);
	cout << "main" << "\t" << "name = " << s.name << "age = " << s.age << "score = " << s.score << endl;
	printStudent2(&s);
	cout << "main" << "\t" << "name = " << s.name << "age = " << s.age << "score = " << s.score << endl;
	system("pause");
	return 0;
}