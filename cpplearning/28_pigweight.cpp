#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	(A, B, C) = (0, 0, 0);
	cout << "A小猪的体重是： " << endl;
	cin >> A;
	cout << "B小猪的体重是： " << endl;
	cin >> B;
	cout << "C小猪的体重是： " << endl;
	cin >> C;
	cout << "A小猪的体重是： " << A << endl;
	cout << "B小猪的体重是： " << B << endl;
	cout << "C小猪的体重是： " << C << endl;
	if (A == B && B == C)
		cout << "无法判断，三只一样" << endl;
	else
	cout << (A > B ? (A > C ? "A小猪最重"  : "C小猪最重") : (B > C) ? "B小猪最重" : "C小猪最重") 
		<< "其体重为 " << (A > B ? (A > C ? A : C) : (B > C) ? B : C) << endl;
	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//	// 定义三只小猪的重量变量
//	int pig1, pig2, pig3;
//	// 输入三只小猪的重量
//	cout << "请输入第一只小猪的重量（单位：千克）：" << endl;
//	cin >> pig1;
//	cout << "请输入第二只小猪的重量（单位：千克）：" << endl;
//	cin >> pig2;
//	cout << "请输入第三只小猪的重量（单位：千克）：" << endl;
//	cin >> pig3;
//	// 判断谁最重，并输出结果
//	if (pig1 == pig2 && pig2 == pig3) // 如果三只都相等
//		cout << "无法确定谁最重，因为三只小	猪的重量都相等。" << endl;
//	else // 否则用三元运算符判断
//		cout << (pig1 > pig2 ? (pig1 > pig3 ? "第一只" : "第三只") : (pig2 > pig3 ? "第二只" : "第三只"))
//		<< "小猪最重，它有"
//		<< (pig1 > pig2 ? (pig1 > pig3 ? pig1 : pig3) : (pig2 > pig3 ? pig2 : pig3))
//		<< "千克。"
//		<< endl;
//
//	return 0;
//}