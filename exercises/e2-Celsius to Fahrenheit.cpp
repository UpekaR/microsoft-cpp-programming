// C++ Standard Library = A collection of ready - made tools.

#include <iostream> //input-output stream: Used to read and display information.
#include <iomanip>  //innput-output manipulation: Used to control how information is formatted.
using namespace std;

int main()
{
    double celsius;

    // Ask the user for input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Calculate fahrenheit
    double fahrenheit = celsius * 9.0 / 5.0 + 32;

    // Print the results
    cout
        << celsius << "Celsius = "
        << fixed << setprecision(1) << fahrenheit
        << "Fahrenheit" << endl;

    return 0;
}