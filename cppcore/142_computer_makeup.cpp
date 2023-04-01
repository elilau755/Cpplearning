#include<iostream>
using namespace std;

//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* gpu, Memory* memory)
	{
		this->m_Cpu = cpu;
		this->m_Gpu = gpu;
		this->m_Memory = memory;

	}
	// 实现工作函数
	void doWork()
	{
		m_Cpu->calculate();
		m_Gpu->display();
		m_Memory->storage();
	}

	~Computer()  // 写一个析构函数 释放派生类的各个零件
	{
		if (m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}
		if (m_Gpu != NULL)
		{
			delete m_Gpu;
			m_Gpu = NULL;
		}
		if (m_Memory != NULL)
		{
			delete m_Memory;
			m_Memory = NULL;
		}
		cout << "Computer 析构函数" << endl;
	}
private:
	CPU* m_Cpu;
	VideoCard* m_Gpu;
	Memory* m_Memory;
};

// Intel
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "IntelCPU is calculating..." << endl;
	}
};

class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "IntelVideoCard is displaying..." << endl;
	}
};

class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMemory is working..." << endl;
	}
};

// Lenovo
class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCPU is calculating..." << endl;
	}
};

class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "LenovoVideoCard is displaying..." << endl;
	}
};

class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory is working..." << endl;
	}
};

// 组装电脑
void test01()
{	
	// Intel电脑的零件
	CPU * intelcpu = new IntelCPU ;
	VideoCard * intelgpu = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	// 将零件开始组装
	Computer* comp1 = new Computer(intelcpu, intelgpu, intelmemory);
	cout << "Intelcomputer is working" << endl;
	comp1->doWork();
	if (comp1 != NULL)
	{
		delete comp1;
		comp1 = NULL;
	}
	cout << "--------------------" << endl;
	cout << "Lenovocomputer is working" << endl;

	// 将零件开始组装
	Computer* comp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory); // 直接通过new 类型  创建一个对象
	comp2->doWork();
	if (comp2 != NULL)
	{
		delete comp2;
		comp2 = NULL;
	}

}


int main()
{
	test01();
	system("pause");
	return 0;
}