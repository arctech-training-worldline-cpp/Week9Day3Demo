#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("one two three four");
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i); 
        // cout << s[i];
    }
    cout << endl;
    cout << "two found at the location :" << s.find("two") << endl;
    
    cout << "Find first of t" << s.find_first_of('t') << endl;
    cout << "Find last of r : " << s.find_last_of('r') << endl;

    cout << "Substring from 4 , get three characters : " << s.substr(4, 3);

    return 0;
}