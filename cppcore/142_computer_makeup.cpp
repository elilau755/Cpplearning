#include<iostream>
using namespace std;

//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
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
	// ʵ�ֹ�������
	void doWork()
	{
		m_Cpu->calculate();
		m_Gpu->display();
		m_Memory->storage();
	}

	~Computer()  // дһ���������� �ͷ�������ĸ������
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
		cout << "Computer ��������" << endl;
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

// ��װ����
void test01()
{	
	// Intel���Ե����
	CPU * intelcpu = new IntelCPU ;
	VideoCard * intelgpu = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	// �������ʼ��װ
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

	// �������ʼ��װ
	Computer* comp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory); // ֱ��ͨ��new ����  ����һ������
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