#include <iostream>

using namespace std;

int main ()
{
    float x1, y1;
    float x2, y2;
    float midX, midY;

    cout << "Enter X1 and Y1: \n";
    cin >> x1 >> y1;
    cout << "Enter X2 and Y2: \n";
    cin >> x2 >> y2;

    // testing
    //cout << "X1: " << x1 << " " << "Y1: " << y1 << " " << "X2: " << x2 << " " << "Y2: " << y2 << endl;

    midX = (x2 + x1) / 2;
    midY = (y2 + y1) / 2;
    cout << "Result: (" << midX << ", " << midY << ")" << endl;
    return 0;
}