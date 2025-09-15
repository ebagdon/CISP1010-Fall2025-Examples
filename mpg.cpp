#include <iostream>

using namespace std;

int main()
{
    double miles;
    double gallons;
    double mpg;

    cout << "Enter miles: ";
    cin >> miles;

    if (miles < 0)
    {
        cout << "You can't drive negative miles. What's wrong with you?\n";
        return 0;
    }
    else
    {
        cout << "Enter gallons: ";
        cin >> gallons;

        if (gallons <= 0)
        {
            cout << "Gallons should be greater than 0.\n";
        }
        else
        {
            mpg = miles / gallons;
            cout << "Miles per gallon: " << mpg << endl;
            cout.precision(2);
            cout << mpg << endl;
        }
    }
}