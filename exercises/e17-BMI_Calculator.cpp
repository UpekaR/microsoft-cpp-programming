
// Calculate body mass index (BMI) from weight and height

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight, height;

    // Taking user input
    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (meters): ";
    cin >> height;

    // Validate input
    if (weight <= 0 || height <= 0)
    {
        cout << "Invalid weight or height!" << endl;
        return 1;
    }

    // Calculate and print BMI
    double bmi = weight / (height * height);

    cout << fixed << setprecision(1);
    cout << "BMI: " << bmi << endl;

    return 0;
}
