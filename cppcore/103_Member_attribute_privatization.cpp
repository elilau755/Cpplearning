#include <iostream>
using namespace std;
#include <string>
class Person
{
public:
	// 设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	// 获取姓名
	string getName()
	{
		return m_Name;
	}
	// 获取年龄
	int getAge()
	{
		return m_Age;
	}
	// 设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "你个老妖精！" << endl;
			return;
		}
		m_Age = age;
	}
	// 设置情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  // 设置为可读可写
	int m_Age;  // 设为可读可写
	string m_Lover;  // 只写

};

int main()
{
	Person p;
	p.setName("李四");
	cout << "获取姓名为： " << p.getName() << endl;

	p.setAge(200);
	cout << "获取年龄为： " << p.getAge() << endl;

	p.setLover("松下");
	system("pause");
	return 0;
}