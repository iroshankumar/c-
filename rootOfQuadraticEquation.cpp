#include <iostream>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    cout << "enter c" << endl;
    cin >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}