#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#define MAX 1000  // 方便更改人数上限
// 联系人结构体
struct contacts
{
	string Name, Addr, Phone; int Age, Gender;
};
// 通讯里结构体嵌套联系人结构体
struct Addrbooks
{
	struct contacts contactsArray[MAX];  // 通讯录中保存联系人数组
	int size; // 通讯录人员个数
};
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出联系人  *****" << endl;
	cout << "***************************" << endl;
}
void showModMenu()
{
	cout << "*******************" << endl;
	cout << "***** 1、姓名 *****" << endl;
	cout << "***** 2、性别 *****" << endl;
	cout << "***** 3、年龄 *****" << endl;
	cout << "***** 4、电话 *****" << endl;
	cout << "***** 5、地址 *****" << endl;
	cout << "***** 0、返回 *****" << endl;
	cout << "*******************" << endl;
}
//1、 add contacts
void addPerson(Addrbooks * abs)
{
	// 判断通讯录是否已满，如果满了就不再添加
	if (abs->size == MAX)
	{
		cout << "通讯录已满，无法添加!" << endl;
		return;
	}
	else
	{
		// 添加联系人的信息
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->contactsArray[abs->size].Name = name;   // abs->size 当前人员个数，每次size++,在数组正好代表第几个人

		cout << "请输入性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int gender;
		while (true)   // 如果输入除了1,2，重输
		{ 
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->contactsArray[abs->size].Gender = gender;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		int age;
		cout << "请输入年龄： " << endl;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->contactsArray[abs->size].Age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		string addr;
		cout << "请输入地址： " << endl;
		cin >> addr;
		abs->contactsArray[abs->size].Addr = addr;
		
		string phone;
		cout << "请输入联系电话： " << endl;
		cin >> phone;
		abs->contactsArray[abs->size].Phone = phone;

		// 更新通讯录人数
		abs->size++;
		cout << "添加成功" << endl;
		// 清屏
		system("pause");
		system("cls"); // clear screen
	}
}

//2、 display the whole contacts
void showPerson(Addrbooks * abs)
{
	if (abs->size > 0)
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名： " << abs->contactsArray[i].Name << "\t";
			cout << "性别： " << (abs->contactsArray[i].Gender == 1 ? "男" : "女") << "\t"; // 三目，将1，2转成直观的男女
			cout << "年龄： " << abs->contactsArray[i].Age << "\t";
			cout << "电话： " << abs->contactsArray[i].Phone << "\t";
			cout << "住址： " << abs->contactsArray[i].Addr << endl;
		}
	}
	else { cout << "记录为空" << endl; }
	system("pause");
	system("cls");
}

//3、 delete some contacts
// 检测联系人是否存在，若存在返回联系人在数组中具体位置，不存在返回-1
int isExist(Addrbooks * abs, string name) // 通讯录， 对比姓名
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->contactsArray[i].Name == name)
		{
			return i; // 返回存在的人在数组中的位置
		}	
	}
	return -1; // 必须写在这，含义就是通过for循环，找了所有的联系人都没有找到才返回-1
				// 像之前return -1 写在else 里面那只是找第i个人不匹配name，并不能说明没这个人
}
void delPerson(Addrbooks * abs)
{
	cout << "请输入您要删除的联系人" << endl;
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
		cout << "删除成功" << endl;
	}
	else { cout << "查无此人" << endl; }
	system("pause");
	system("cls");
}

//4、 lookup some contacts
void lookupPerson(Addrbooks * abs)
{
	cout << "请输入联系人姓名： " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名: " << abs->contactsArray[ret].Name << "\t";
		cout << "性别: " << abs->contactsArray[ret].Gender << "\t";
		cout << "年龄: " << abs->contactsArray[ret].Age << "\t";
		cout << "电话: " << abs->contactsArray[ret].Phone << "\t";
		cout << "住址: " << abs->contactsArray[ret].Addr << endl;
	}
	else { cout << "查无此人" << endl; }
	system("pause");
	system("cls");
}

//5、modify some contacts
void modifyPerson(Addrbooks * abs)
{
	cout << "请输入联系人姓名： " << endl;
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
				cout << "姓名：" << endl;
				cin >> name;
				abs->contactsArray[ret].Name = name;
				break;
			}
			case 2: // gender
			{
				cout << "性别：" << endl;
				cin >> gender;
				abs->contactsArray[ret].Gender = gender;
				break;
			}
			case 3: // age
			{
				cout << "年龄：" << endl;
				cin >> age;
				abs->contactsArray[ret].Age = age;
				break;
			}
			case 4: // phone
			{
				cout << "电话：" << endl;
				cin >> phone;
				abs->contactsArray[ret].Phone = phone;
				break;
			}
			case 5: // addr
			{
				cout << "地址：" << endl;
				cin >> addr;
				abs->contactsArray[ret].Addr = addr;
				break;
			}
			case 0:
				cout << "返回上一级" << endl;
				// 若不添加system 会继续死循环
				system("pause");
				break;

			default: break;
		}
	}

	else { cout << "查无此人" << endl; }
	system("pause");
	system("cls");
}

//6、clear the whole system
void clrSystem(Addrbooks* abs)
{
	abs->size = 0;    // 这种方法并没有释放内存，只是找不到之前信息的地址了
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int num = 0;
	// 创建通讯录结构体变量
	Addrbooks abs;
	abs.size = 0;  // 初始化通讯录人数
	while (true)
	{
		showMenu();
		cin >> num;
		switch (num)
		{
			case 1: // add
				addPerson(&abs); // &abs 地址传递,这里abs不是数组，是数组直接写abs就是地址
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
				cout << "欢迎下次使用!" << endl;
				// 若不添加system 会继续死循环
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