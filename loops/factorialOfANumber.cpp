#include <iostream>
using namespace std;
int main()
{
    int n, sum = 1;
    cout << "enter Nth number of factorial";
    cin >> n;
    for (int i = n; n > 0; n--)
    {
        sum *= n;
    }
    cout << sum << endl;
}