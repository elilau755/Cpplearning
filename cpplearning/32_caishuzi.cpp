#include <iostream>
using namespace std;
// timeϵͳʱ��ͷ�ļ�����
#include <ctime>
int main()
{   // �����������ӣ����ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	int val;
	int num = rand() % 100 + 1;
	while (1)
	{
		cout << "��ʼ�����������µ����֣� " << endl;
		cin >> val;
		if (val > num) {
			cout << "����" << endl;
		}
		else if (val < num) {
			cout << "��С" << endl;
		}
		else {
			cout << "��ϲ�¶���!" << endl;
			break;  // ע������һ��Ҫд������
		}
	}

	system("pause");
	return 0;
}