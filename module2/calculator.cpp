#include <iostream>
#include <string>

using namespace std;

int main() {
    //inputs
    double x;
    double y;
    //to hold the results
    int sum;
    int difference;
    int product;
    double quotient;

    //ask user to enter the 2 numbers
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;
    
    //add the #s
    sum = x + y;
    difference = x-y;
    product = x*y;
    quotient = x/y;

    //print the result
    cout << "Result of addition: " << sum << endl;
    cout << "Result of subtraction: " << difference << endl;
    cout << "Result of multiplication: " << product << endl;
    cout << "Result of division: " << quotient << endl;

    
    return 0;
}
