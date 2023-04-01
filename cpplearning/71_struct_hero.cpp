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
	// 重排第i轮
	for (int i = 0; i < len - 1; i++)
	{
		// 第i轮对比次数j次
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
	cout << "五名英雄信息按年龄升序依次为： " << endl;
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
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"}
	};
	int len = sizeof(honor) / sizeof(honor[0]);
	bubbleSort(honor, len);
	printhonor(honor, len);
	system("pause");
	return 0;
}