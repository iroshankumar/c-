#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "max is " << a;
    }
    else
    {
        cout << "max is " << b;
    }
}