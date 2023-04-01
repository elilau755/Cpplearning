#include <iostream>
using namespace std;
// 动态多态条件
// 1、有继承关系
// 2、子类重写父类虚函数  重写：函数名相同，形参列表也相同

class Animal
{
public:

	virtual void Speak() //  不加virtual, 子类对象转型传入doSpeak输出的就是父类 基泥钛煤
	{
		cout << "基泥钛煤" << endl;
	}
};

class Ikun : public Animal
{
public:
	void Speak() // 子类重写父类虚函数   子类可加可不加 virtual
	{
		cout << "厉不厉害你坤哥" << endl;
	}
};

class Jijiao : public Animal
{
public:
	void Speak() // 子类重写父类虚函数
	{
		cout << "你干嘛！哎呦！" << endl;
	}
};
// 动态多态使用
// 父类的指针或者引用 执行子类对象
// 执行说话函数
// void doSpeak(Animal& animal) // Animal & animal = cat; 父类引用接受子类对象 向上转型
void doSpeak(Animal& animal)
{
	animal.Speak();
}

void test01()
{
	Ikun niganma;
	doSpeak(niganma); 
	Jijiao xiaoheizi;
	doSpeak(xiaoheizi);
}

void test02()
{
	cout << "size of Animal: " << sizeof(Animal) << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}