#include <iostream>
using namespace std;
#include <string>

class AbstractDrinking
{
public:
	virtual void Boil() = 0; // ÷Û∑–
	virtual void Brew() = 0; // ≥Â≈›
	virtual void PourInCup() = 0; // ≥Â±≠
	virtual void PutSomething() = 0; // ÃÌ¡œ
	
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee : public AbstractDrinking
{
public:
	virtual void Boil() // ÷Û∑–
	{
		cout << "÷Û≈©∑Ú…Ω»™" << endl;
	}
	virtual void Brew() // ≥Â≈›
	{
		cout << "∑≈»Îøß∑»∂π≥Â≈›" << endl;
	}
	virtual void PourInCup() // ≥Â±≠
	{
		cout << "µπ»Î±≠÷–" << endl;
	}
	virtual void PutSomething() // ÃÌ¡œ
	{
		cout << "º”Ã«∫Õ≈£ƒÃ" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	virtual void Boil() // ÷Û∑–
	{
		cout << "÷Û‚˘±¶øÛ»™ÀÆ" << endl;
	}
	virtual void Brew() // ≥Â≈›
	{
		cout << "∑≈»Î¡˙æÆ≥Â≈›" << endl;
	}
	virtual void PourInCup() // ≥Â±≠
	{
		cout << "µπ»Î±≠÷–" << endl;
	}
	virtual void PutSomething() // ÃÌ¡œ
	{
		cout << "º”»ÎË€ËΩ" << endl;
	}
};

// ÷∆◊˜“˚∆∑
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	doWork(new Coffee);
	cout << "---------------" << endl;
	doWork(new Tea);
	
}

int main()
{

	test01();
	system("pause");
	return 0;
}