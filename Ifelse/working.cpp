#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter hour between 1-24 ";
    cin >> a;

    if (a >= 9 && a <= 19)
    {
        cout << "working" << endl;
    }
    else
    {
        cout << "Not working";
    }
}