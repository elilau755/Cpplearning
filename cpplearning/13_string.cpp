#include <iostream>
using namespace std;
//#include <string>     VS2017之前的版本需要加
int main() {
	char str1[] = "helloworld";   // c style
	cout << str1 << endl;

	string str2 = "helloworld";   // c++ style
	cout << str2 << endl;
	
	system("pause");

	return 0;
}