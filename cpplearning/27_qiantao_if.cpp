#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请输入分数： " << endl;
	cin >> score;

	if (score > 600)
	{
		cout << "恭喜考上一本" << endl;
		if (score > 700)
		{
			cout << "能够考入北大" << endl;
		}
		else if (score > 650)
		{
			cout << "能够考入清华" << endl;
		}
		else cout << "能够考入人大" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜考上二本" << endl;
	}
	else if (score > 400)
		cout << "恭喜考上三本" << endl;
	else cout << "很遗憾没有考上大学" << endl;
	system("pause");
	return 0;
}