#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	(A, B, C) = (0, 0, 0);
	cout << "AС��������ǣ� " << endl;
	cin >> A;
	cout << "BС��������ǣ� " << endl;
	cin >> B;
	cout << "CС��������ǣ� " << endl;
	cin >> C;
	cout << "AС��������ǣ� " << A << endl;
	cout << "BС��������ǣ� " << B << endl;
	cout << "CС��������ǣ� " << C << endl;
	if (A == B && B == C)
		cout << "�޷��жϣ���ֻһ��" << endl;
	else
	cout << (A > B ? (A > C ? "AС������"  : "CС������") : (B > C) ? "BС������" : "CС������") 
		<< "������Ϊ " << (A > B ? (A > C ? A : C) : (B > C) ? B : C) << endl;
	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//	// ������ֻС�����������
//	int pig1, pig2, pig3;
//	// ������ֻС�������
//	cout << "�������һֻС�����������λ��ǧ�ˣ���" << endl;
//	cin >> pig1;
//	cout << "������ڶ�ֻС�����������λ��ǧ�ˣ���" << endl;
//	cin >> pig2;
//	cout << "���������ֻС�����������λ��ǧ�ˣ���" << endl;
//	cin >> pig3;
//	// �ж�˭���أ���������
//	if (pig1 == pig2 && pig2 == pig3) // �����ֻ�����
//		cout << "�޷�ȷ��˭���أ���Ϊ��ֻС	�����������ȡ�" << endl;
//	else // ��������Ԫ������ж�
//		cout << (pig1 > pig2 ? (pig1 > pig3 ? "��һֻ" : "����ֻ") : (pig2 > pig3 ? "�ڶ�ֻ" : "����ֻ"))
//		<< "С�����أ�����"
//		<< (pig1 > pig2 ? (pig1 > pig3 ? pig1 : pig3) : (pig2 > pig3 ? pig2 : pig3))
//		<< "ǧ�ˡ�"
//		<< endl;
//
//	return 0;
//}