#include <iostream>
using namespace std;
// time系统时间头文件包含
#include <ctime>
int main()
{   // 添加随机数种子，作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	int val;
	int num = rand() % 100 + 1;
	while (1)
	{
		cout << "开始，请输入您猜的数字： " << endl;
		cin >> val;
		if (val > num) {
			cout << "过大" << endl;
		}
		else if (val < num) {
			cout << "过小" << endl;
		}
		else {
			cout << "恭喜猜对了!" << endl;
			break;  // 注意这里一定要写大括号
		}
	}

	system("pause");
	return 0;
}