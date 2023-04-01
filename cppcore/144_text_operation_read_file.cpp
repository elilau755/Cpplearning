#include <iostream>
#include <fstream>
#include <cstring> // 前两种是c语言风格
#include <string>
using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return; // 不会继续往下读数据
	}
	// 四种方式读取
	// 第一种
	//char buf[1024] = { 0 };  // 所有元素初始化为0
	//while (ifs >> buf)     // ifs打开的文件内容输入到buf数组
	//{
	//	cout << buf << endl;
	//}

	// 第二种 字符数组
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))  // buf就是一个首地址，即指针
	//{
	//	cout << buf << endl;
	//}

	// 第三种 字符串形式
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	// 第四种 不推荐 一个个字符传入
	char c;
	while ( (c = ifs.get()) != EOF )  // EOF End Of File
	{
		cout << c;
	}

	ifs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}