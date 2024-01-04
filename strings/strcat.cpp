#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[200], s1[200];
    cout << "what is your frist name" << endl;
    cin.getline(s, 20);
    cout << s << endl;
    cout << "what is your last name" << endl;
    cin.getline(s1, 20);
    cout << s1 << endl;
    strcat(s, s1);
    cout << s << " is new s" << endl;
    return 0;
}