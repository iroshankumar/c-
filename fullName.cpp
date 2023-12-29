#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "tell me your name " << endl;
    getline(cin, name);
    cout << "welcome " << name;
}