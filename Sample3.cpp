//iterators
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "string sample demo";
	std::string::iterator it;
	cout << "Displaying the string " << endl;
	for (it = str.begin() ; it != str.end() ; it++)
	{
		cout << *it;
	}

	cout << endl;
	cout << "Reverse iterator" << endl;

	std::string::reverse_iterator itr;
	for (itr = str.rbegin(); itr != str.rend(); itr++)
	{
		cout << *itr;
	}
	

	
	return 0;
}