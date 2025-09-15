#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char choice;

    cout << "Pick a direction (N, S, E, W): ";
    cin >> choice;

    switch (choice)
    {
        case 'N':
            cout << "Snow and polar bears" << endl;
            break;
        case 'S':
            cout << "Sunny beach and some sunburn" << endl;
            break;
        case 'E':
            cout << "New York City" << endl;
            break;
        case 'W':
            cout << "The old wild west" << endl;
            break;
    }

    return 0;
}