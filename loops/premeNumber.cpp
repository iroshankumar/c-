#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter the number to check " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
    }
    if (count <= 2)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
}