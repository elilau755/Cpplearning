#include <iostream>
using namespace std;

// ��ӡ��
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;
	myprint("helloworld"); // ����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
	MyPrint02("helloworld");

}

//  �ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return (num1 + num2);
	}

};

void test02()
{
	
	MyAdd myadd;
	int ret = myadd(100, 200);
	cout << "ret = " << ret << endl;
	cout << "MyAdd()(100, 300) = " << MyAdd()(100, 300) << endl; // ������������
}

int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}