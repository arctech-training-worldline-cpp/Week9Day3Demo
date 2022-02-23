#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "sample for string demo";
	string str2 = "test string";

	char ch[80];
	str1.copy(ch, 13, 0);
	cout << "char array : " << ch << endl;

	cout << "Data before swap" << endl;
	cout << " str1 : " << str1 << endl;
	cout << " str2 : " << str2 << endl;
	str1.swap(str2);
	cout << "Data after swap" << endl;
	cout << " str1 : " << str1 << endl;
	cout << " str2 : " << str2 << endl;
	return 0;
}