#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1; //default constructor
    string s2("New");// creating using string constant
    string s3("Delhi");

    s1 = s2;
    cout << "S1 : " << s1 << endl;

    s1 = "New string data";
    cout << "S1 : " << s1 << endl;

    string s4(s1); //creating new string with another string object
    s1 = s2 + " " + s3;
    cout << "S1 : " << s1 << endl;

    return 0;
}