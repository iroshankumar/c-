#include <iostream>
using namespace std;
int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    float result;
    cout << "enter your 5 subject markes" << endl;
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
    result = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;
    if (result >= 60)
    {
        cout << endl
             << "your grade is a";
    }
    else if (result <= 60 && result >= 33)
    {
        cout << endl
             << "Your grade is c";
    }
    else
    {
        cout << "your grade is c" << endl;
    }
}