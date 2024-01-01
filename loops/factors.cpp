#include <iostream>
using namespace std;
int main()
{
    int a, fact = 0;
    cout << "enter a ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            fact = fact + 1;
        }
    }
    cout << fact << " is total factors" << endl;
}