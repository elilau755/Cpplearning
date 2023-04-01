#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#define MAX 1000  // ���������������
// ��ϵ�˽ṹ��
struct contacts
{
	string Name, Addr, Phone; int Age, Gender;
};
// ͨѶ��ṹ��Ƕ����ϵ�˽ṹ��
struct Addrbooks
{
	struct contacts contactsArray[MAX];  // ͨѶ¼�б�����ϵ������
	int size; // ͨѶ¼��Ա����
};
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳���ϵ��  *****" << endl;
	cout << "***************************" << endl;
}
void showModMenu()
{
	cout << "*******************" << endl;
	cout << "***** 1������ *****" << endl;
	cout << "***** 2���Ա� *****" << endl;
	cout << "***** 3������ *****" << endl;
	cout << "***** 4���绰 *****" << endl;
	cout << "***** 5����ַ *****" << endl;
	cout << "***** 0������ *****" << endl;
	cout << "*******************" << endl;
}
//1�� add contacts
void addPerson(Addrbooks * abs)
{
	// �ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼�������޷����!" << endl;
		return;
	}
	else
	{
		// �����ϵ�˵���Ϣ
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->contactsArray[abs->size].Name = name;   // abs->size ��ǰ��Ա������ÿ��size++,���������ô���ڼ�����

		cout << "�������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int gender;
		while (true)   // ����������1,2������
		{ 
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->contactsArray[abs->size].Gender = gender;
				break;
			}
			cout << "������������������" << endl;
		}
		int age;
		cout << "���������䣺 " << endl;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->contactsArray[abs->size].Age = age;
				break;
			}
			cout << "������������������" << endl;
		}
		string addr;
		cout << "�������ַ�� " << endl;
		cin >> addr;
		abs->contactsArray[abs->size].Addr = addr;
		
		string phone;
		cout << "��������ϵ�绰�� " << endl;
		cin >> phone;
		abs->contactsArray[abs->size].Phone = phone;

		// ����ͨѶ¼����
		abs->size++;
		cout << "��ӳɹ�" << endl;
		// ����
		system("pause");
		system("cls"); // clear screen
	}
}

//2�� display the whole contacts
void showPerson(Addrbooks * abs)
{
	if (abs->size > 0)
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "������ " << abs->contactsArray[i].Name << "\t";
			cout << "�Ա� " << (abs->contactsArray[i].Gender == 1 ? "��" : "Ů") << "\t"; // ��Ŀ����1��2ת��ֱ�۵���Ů
			cout << "���䣺 " << abs->contactsArray[i].Age << "\t";
			cout << "�绰�� " << abs->contactsArray[i].Phone << "\t";
			cout << "סַ�� " << abs->contactsArray[i].Addr << endl;
		}
	}
	else { cout << "��¼Ϊ��" << endl; }
	system("pause");
	system("cls");
}

//3�� delete some contacts
// �����ϵ���Ƿ���ڣ������ڷ�����ϵ���������о���λ�ã������ڷ���-1
int isExist(Addrbooks * abs, string name) // ͨѶ¼�� �Ա�����
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->contactsArray[i].Name == name)
		{
			return i; // ���ش��ڵ����������е�λ��
		}	
	}
	return -1; // ����д���⣬�������ͨ��forѭ�����������е���ϵ�˶�û���ҵ��ŷ���-1
				// ��֮ǰreturn -1 д��else ������ֻ���ҵ�i���˲�ƥ��name��������˵��û�����
}
void delPerson(Addrbooks * abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->size; i++)
		{
			abs->contactsArray[i] = abs->contactsArray[i + 1];
		}
		abs->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else { cout << "���޴���" << endl; }
	system("pause");
	system("cls");
}

//4�� lookup some contacts
void lookupPerson(Addrbooks * abs)
{
	cout << "��������ϵ�������� " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "����: " << abs->contactsArray[ret].Name << "\t";
		cout << "�Ա�: " << abs->contactsArray[ret].Gender << "\t";
		cout << "����: " << abs->contactsArray[ret].Age << "\t";
		cout << "�绰: " << abs->contactsArray[ret].Phone << "\t";
		cout << "סַ: " << abs->contactsArray[ret].Addr << endl;
	}
	else { cout << "���޴���" << endl; }
	system("pause");
	system("cls");
}

//5��modify some contacts
void modifyPerson(Addrbooks * abs)
{
	cout << "��������ϵ�������� " << endl;
	string name, addr, phone; int age, gender;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		showModMenu();
		int num;
		cin >> num;	
		switch (num)
		{	
			case 1: // name 
			{
				cout << "������" << endl;
				cin >> name;
				abs->contactsArray[ret].Name = name;
				break;
			}
			case 2: // gender
			{
				cout << "�Ա�" << endl;
				cin >> gender;
				abs->contactsArray[ret].Gender = gender;
				break;
			}
			case 3: // age
			{
				cout << "���䣺" << endl;
				cin >> age;
				abs->contactsArray[ret].Age = age;
				break;
			}
			case 4: // phone
			{
				cout << "�绰��" << endl;
				cin >> phone;
				abs->contactsArray[ret].Phone = phone;
				break;
			}
			case 5: // addr
			{
				cout << "��ַ��" << endl;
				cin >> addr;
				abs->contactsArray[ret].Addr = addr;
				break;
			}
			case 0:
				cout << "������һ��" << endl;
				// �������system �������ѭ��
				system("pause");
				break;

			default: break;
		}
	}

	else { cout << "���޴���" << endl; }
	system("pause");
	system("cls");
}

//6��clear the whole system
void clrSystem(Addrbooks* abs)
{
	abs->size = 0;    // ���ַ�����û���ͷ��ڴ棬ֻ���Ҳ���֮ǰ��Ϣ�ĵ�ַ��
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int num = 0;
	// ����ͨѶ¼�ṹ�����
	Addrbooks abs;
	abs.size = 0;  // ��ʼ��ͨѶ¼����
	while (true)
	{
		showMenu();
		cin >> num;
		switch (num)
		{
			case 1: // add
				addPerson(&abs); // &abs ��ַ����,����abs�������飬������ֱ��дabs���ǵ�ַ
				break;
			case 2: // display
				showPerson(&abs);
				break;
			case 3: // delete
				delPerson(&abs);
				break;
			case 4: // lookup
				lookupPerson(&abs);
				break;
			case 5: // modify
				modifyPerson(&abs);
				break;
			case 6: // clear
				clrSystem(&abs);
				break;
			case 0:
				cout << "��ӭ�´�ʹ��!" << endl;
				// �������system �������ѭ��
				system("pause");
				return 0;
				break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}