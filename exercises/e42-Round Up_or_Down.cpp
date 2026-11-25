
// Round a decimal number to the nearest whole number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number;

    // Taking user input
    cout << "Enter a decimal number: ";
    cin >> number;

    // Round to the nearest whole number
    long long rounded = llround(number);

    // Print result
    cout << "Rounded: " << rounded << endl;

    return 0;
}
