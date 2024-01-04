#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[30], s2[40];
    cout << "enter your name" << endl;
    cin.getline(s1, 30);
    cout << s1 << endl;

    strcpy(s2, s1);
    cout << "copyed from s1 to s2 and s2 is = " << s2 << endl;
    return 0;
}