#include <iostream>
using namespace std;

class Object
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Object
{
public:
	int m_D;
};

void test01()
{
	cout << "Sonռ���ڴ��ǣ� " << sizeof(Son) << endl;
}

int main()
{

	test01();
	system("pause");
	return 0;
}