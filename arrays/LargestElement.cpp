#include <iostream>
using namespace std;
int main()
{
    int A[10] = {10, 2, 6, 56, 36, 34, 34, 56, 78, 98};
    int max = 0;
    for (int x : A)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << max;
    return 0;
}