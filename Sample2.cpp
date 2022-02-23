//capacity, resize, shrink to fit
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "hello word to string demo";
	cout << "Length : " << str.length() << endl;
	cout << "Capacity : " << str.capacity() << endl;

	str.resize(20);
	cout << "After resize : " << str << endl;
	cout << "Capacity : " << str.capacity() << endl;

	str.shrink_to_fit();
	cout << "After shrink to fit" << endl;
	cout << "Capacity : " << str.capacity() << endl;
	return 0;
}