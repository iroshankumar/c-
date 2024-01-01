#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, n = 10, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout << sum;
    return 0;
}