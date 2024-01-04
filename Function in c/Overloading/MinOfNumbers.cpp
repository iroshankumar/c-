#include <iostream>
using namespace std;

// 1 write a Min() function here to Min of 2 integers
int Min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
// 2 write a Min() function here to Min of 3 integers
int Min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a)
        return b;
    else
        return c;
}
// 3 write a Min() function here to Min of 2 floats
float Min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    cout << Min(10, 5) << endl;
    cout << Min(12, 7, 9) << endl;
    cout << Min(18.0f, 9.0f) << endl;
    return 0;
}