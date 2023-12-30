#include <iostream>
using namespace std;
int main()
{
    float amount;
    cout << "amount" << endl;
    cin >> amount;
    if (amount >= 5000)
    {
        cout << endl
             << "You will get 10 percentage  discount";
    }
    else if (amount < 5000 && amount >= 2000)
    {
        cout << "you will get 5 percentage discount" << endl;
    }
    else
    {
        cout << "sorry you will not get any discount" << endl;
    }
}