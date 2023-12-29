#include <iostream>
using namespace std;
int main()
{
    float x1, y1, x2, y2, distance;
    cout << "enter x1,y1,x2,y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << distance;
    return 0;
}