#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("aaa"); //AAA
    string s2("AAA");

    string s3 = s1 + s2;

    int x = s1.compare(s2);
    if ( x == 0)
        cout << "s1 = s2";
    else if(x > 0)
        cout << "s1 > s2";
    else
        cout << "s1 < s2";

    return 0;
}