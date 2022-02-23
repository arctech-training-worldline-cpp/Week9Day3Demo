//insert, erase, replace
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("abcde");
    string s2("12345");

    cout << "Original data" << endl;
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    s1.insert(4, s2);

    cout << "Modified data" << endl;
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    
    s1.erase(2,5);
    cout << "After erase" << endl;
    cout << "s1 : " << s1 << endl;

    s2.replace(1, 3, s1);
    cout << "After replace" << endl;
    cout << "s2 : " << s2 << endl;

    return 0;
}