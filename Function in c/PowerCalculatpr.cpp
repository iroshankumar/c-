#include <iostream>
using namespace std;

// write a pow() function here
int pow(int m, int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        r = r * m;
    }
    return r;
}

int main()
{
    cout << pow(2, 5);
}