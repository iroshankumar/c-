#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[] = {10, 23, 43, 42, 25, 54, 56, 78};
    max = INT_MIN;
    for (auto x : a)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << max;

    return 0;
}