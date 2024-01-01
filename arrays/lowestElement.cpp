#include <iostream>
using namespace std;
int main()
{
    int a[10] = {98, 76, 54, 53, 35, 67, 87, 11, 45, 66}, min = a[0];
    for (auto x : a)
    {
        if (x < min)
        {
            min = x;
        }
    }
    cout << min;
}