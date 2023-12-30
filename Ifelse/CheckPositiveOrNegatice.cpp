#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;

    if (a >= 0)
    {
        cout << a << "is positive";
    }
    else
    {
        cout << a << "is negative";
    }
}