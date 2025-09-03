#include <iostream>
#include <string>

using namespace std;

int main()
{
    double x, y;
    double sum, difference, multiplication, division;

    // ask user to enter two numbers
    cout << "Enter two numbers: \n";
    cin >> x >> y;

    // hold results
    sum = x + y;
    difference = x - y;
    multiplication = x * y;
    division = x / y;

    // add the numbers and print out the final result
    cout << "The sum of the two numbers is: " << sum << endl;
    cout << "The difference of the two numbers is: " << difference << endl;
    cout << "The multiplication of the two numbers is: " << multiplication << endl;
    cout << "The division of the two numbers is: " << division << endl;

    return 0;
}