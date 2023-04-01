#include <iostream>
using namespace std;
// 在子类中有写属性开辟到堆区，需要用纯析构或纯虚析构来解决父类释放时无法调用子类析构
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//virtual~Animal()  // 虚析构    virtual~Animal() = 0 纯虚析构
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	// 有了纯虚析构之后， 这个类页属于抽象类，无法实例化对象
	virtual ~Animal() = 0; 
	virtual void Speak() = 0;

};

Animal :: ~Animal() { }     

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name); // m_Name is a point
	}
	~ Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void Speak()
	{
		cout << *m_Name << ": 喵喵猫条拿来！" << endl;
	}
	string* m_Name; // 猫的名字，并且放在堆区
};

void test01()
{
	Animal* cute = new Cat("Tom");
	cute->Speak();
	//父类指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏
	delete cute;
}

int main()
{

	test01();
	system("pause");
	return 0;
}