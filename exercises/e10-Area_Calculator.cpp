
// Calculate the area of a rectangle, triangle or circle

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string shape;
    double area = 0.0;
    double width, height, base, radius;

    // Ask user to enter a shape
    cout << "Enter shape (rectangle, triangle, circle): ";
    cin >> shape;

    // Calculate area based on shape
    if (shape == "rectangle")
    {
        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;

        area = width * height;
    }
    else if (shape == "triangle")
    {
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;

        area = (base * height) / 2.0;
    }
    else if (shape == "circle")
    {
        cout << "Enter radius: ";
        cin >> radius;

        const double PI = 3.141592653589793;
        area = PI * radius * radius;
    }
    else
    {
        cout << "Invalid shape!" << endl;
        return 1;
    }

    // Print area with two decimal places
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;

    return 0;
}
