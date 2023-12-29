#include <iostream>
using namespace std;
int main()
{
    float a, u, v, result;
    cout << "enter 3 numbers" << endl;
    cin >> u >> v >> a;
    result = (v * v - u * u) / (2 * a);
    cout << "speed is " << result << endl;

    return 0;
}