#include <iostream>
using namespace std;
int main()
{
    float radius, p = 3.14f, result;
    cout << "enter radius of circle" << endl;
    cin >> radius;
    result = p * radius * radius;
    cout << "area is " << result;
    return 0;
}