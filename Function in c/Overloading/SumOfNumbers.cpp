#include <iostream>
using namespace std;

// 1. write a sum() function here to add 2 integer
int sum(int a, int b)
{
    return a + b;
}
// 2. write a sum() function here to add 2 floats
float sum(float a, float b)
{
    return a + b;
}
// 3. write a sum() function here to add 3 integer
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(12.9f, 8.3f) << endl;
    cout << sum(10, 20, 30) << endl;
    return 0;
}