#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age " << endl;
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "Young";
    }
    else
    {
        cout << "Old";
    }
}