#include <iostream>
using namespace std;
#include <string>

// 继承实现页面
// 公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
};

// Java 类
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学习视频" << endl;
	}
};

// Python 类
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学习视频" << endl;
	}
};

// Cpp 类
class Cpp : public BasePage
{
public:
	void content()
	{
		cout << "Cpp学习视频" << endl;
	}
};

void test01()
{
	//Java页面
	cout << "Java下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;

	//Python页面
	cout << "Python下载视频页面如下： " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;

	//C++页面
	cout << "C++下载视频页面如下： " << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();

}

int main()
{
	test01();
	system("pause");
	return 0;
}