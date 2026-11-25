
// Calculate the circumference and area of a cicle

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double radius;
    const double PI = 3.141592653589793;

    // Taking user input
    cout << "Enter the radius: ";
    cin >> radius;

    // Calculate area and circumference
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    // Print results with two decimal places
    cout << fixed << setprecision(2);

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
