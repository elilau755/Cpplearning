#include <iostream>
using namespace std;

class Person
{
public:
	void ShowClassName()
	{
		cout << "ÎÒÊÇPersonÀà£¡" << endl;
	}
	
	void ShowPerson()
	{
		if (this == NULL)
		{
			return;
		}
		cout << mAge << endl;
	}
public:
	int mAge;
};

void test01()
{
	Person *p = NULL;
	//p->ShowClassName();
	p->ShowPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;

}