#include <iostream>
using namespace std;
int main()
{
    int p, t, r, finalAmount;
    cout << "enter principle amount, time and rate of intrest" << endl;
    cin >> p >> t >> r;
    finalAmount = (p * r * t) / 100.0;
    cout << "the result is " << finalAmount;
}