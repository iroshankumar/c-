#include <iostream>
using namespace std;
int main()
{
    float radius, height, result;
    cout << "insert radius and height" << endl;
    cin >> radius >> height;
    result = 3.14 * radius * radius * height;
    cout << "volume is " << result << endl;
    return 0;
}