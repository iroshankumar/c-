#include <iostream>
using namespace std;
int main()
{
    int n, sum = 1;
    cout << "Nth value" << endl;
    cin >> n;
    while (n > 1)
    {
        sum = sum + n;
        n = n - 1;
        cout << n << endl;
    }
    cout << "sum of Nth number is " << sum;

    return 0;
}