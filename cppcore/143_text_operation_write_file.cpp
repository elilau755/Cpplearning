#include <fstream>
using namespace std;

void test01()
{
	ofstream ofs; // 创建流对象 ofstream 写文件  ifstream读文件 fstream读写
	ofs.open("test.txt", ios::out); // ofs.open("文件路径",打开方式)
	ofs << "姓名：李四" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：25" << endl;
	ofs.close();   // 关闭文件
}

int main()
{
	test01();
	system("pause");
	return 0;
}