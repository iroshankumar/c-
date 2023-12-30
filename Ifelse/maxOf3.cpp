#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three different numbers" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is grater";
    }
    else if (b > a && b > c)
    {
        cout << b << " is grater";
    }
    else
    {
        cout << c << " is grater";
    }
    return 0;
}