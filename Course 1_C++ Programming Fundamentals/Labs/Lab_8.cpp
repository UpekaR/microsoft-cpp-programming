
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

// Activity 2: Constants for conversion formulas
const double FREEZING_POINT_C = 0.0;
const double FREEZING_POINT_F = 32.0;
const double ABSOLUTE_ZERO_C = -273.15;
const double F_TO_C_FACTOR = 5.0 / 9.0;
const double C_TO_F_FACTOR = 9.0 / 5.0;

// Activity 3: Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);
void displayTemperatureFacts(double celsius);

// Activity 4: Conversion functions

double celsiusToFahrenheit(double celsius)
{
    return celsius * C_TO_F_FACTOR + FREEZING_POINT_F;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - FREEZING_POINT_F) * F_TO_C_FACTOR;
}

double celsiusToKelvin(double celsius)
{
    return celsius - ABSOLUTE_ZERO_C;
}

double kelvinToCelsius(double kelvin)
{
    return kelvin + ABSOLUTE_ZERO_C;
}

double fahrenheitToKelvin(double fahrenheit)
{
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

double kelvinToFahrenheit(double kelvin)
{
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

// Activity 6: Display additional temperature information
void displayTemperatureFacts(double celsius)
{
    const double EPSILON = 0.000001;

    cout << "\nInteresting facts about this temperature:" << endl;

    if (abs(celsius - ABSOLUTE_ZERO_C) < EPSILON)
    {
        cout << "This is absolute zero, the lowest possible temperature!" << endl;
    }
    else if (abs(celsius - FREEZING_POINT_C) < EPSILON)
    {
        cout << "This is the freezing point of water at standard pressure." << endl;
    }
    else if (celsius < FREEZING_POINT_C)
    {
        cout << "This temperature is below the freezing point of water." << endl;
    }
    else if (abs(celsius - 100.0) < EPSILON)
    {
        cout << "This is the boiling point of water at standard pressure." << endl;
    }
    else if (celsius < 20.0)
    {
        cout << "This is a cool temperature." << endl;
    }
    else if (celsius <= 30.0)
    {
        cout << "This is a comfortable room temperature." << endl;
    }
    else if (celsius <= 40.0)
    {
        cout << "This is a hot temperature." << endl;
    }
    else if (celsius < 100.0)
    {
        cout << "This is a very hot temperature." << endl;
    }
    else
    {
        cout << "This is above the boiling point of water." << endl;
    }
}

// Activity 1: Main program
int main()
{
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl;

    // Activity 5: User interface menu
    bool keepRunning = true;

    while (keepRunning)
    {
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;
        cout << "\nEnter your choice (1-7): ";

        int choice;

        if (!(cin >> choice))
        {
            if (cin.eof())
                break;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if (choice == 7)
        {
            keepRunning = false;
            cout << "Thank you for using the Temperature Converter!" << endl;
            break;
        }

        if (choice < 1 || choice > 6)
        {
            cout << "Invalid choice! Please select a number between 1 and 7." << endl;
            continue;
        }

        double inputTemp;
        double result = 0.0;
        double celsius = 0.0;

        // Ask for temperature based on selected conversion
        switch (choice)
        {
        case 1:
        case 3:
            cout << "Enter temperature in Celsius: ";
            break;

        case 2:
        case 5:
            cout << "Enter temperature in Fahrenheit: ";
            break;

        case 4:
        case 6:
            cout << "Enter temperature in Kelvin: ";
            break;
        }

        if (!(cin >> inputTemp))
        {
            if (cin.eof())
                break;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid temperature input!" << endl;
            continue;
        }

        // Convert input to Celsius for validation
        if (choice == 1 || choice == 3)
        {
            celsius = inputTemp;
        }
        else if (choice == 2 || choice == 5)
        {
            celsius = fahrenheitToCelsius(inputTemp);
        }
        else
        {
            celsius = kelvinToCelsius(inputTemp);
        }

        // Check that temperature is physically valid
        if (!isfinite(inputTemp) || !isfinite(celsius) ||
            celsius < ABSOLUTE_ZERO_C - 0.000001)
        {
            cout << "Invalid temperature! Temperature cannot "
                 << "be below absolute zero or non-finite." << endl;
            continue;
        }

        cout << fixed << setprecision(2);

        // Perform selected conversion
        switch (choice)
        {
        case 1:
            result = celsiusToFahrenheit(inputTemp);
            cout << inputTemp << " C = " << result << " F" << endl;
            break;

        case 2:
            result = fahrenheitToCelsius(inputTemp);
            cout << inputTemp << " F = " << result << " C" << endl;
            break;

        case 3:
            result = celsiusToKelvin(inputTemp);
            cout << inputTemp << " C = " << result << " K" << endl;
            break;

        case 4:
            result = kelvinToCelsius(inputTemp);
            cout << inputTemp << " K = " << result << " C" << endl;
            break;

        case 5:
            result = fahrenheitToKelvin(inputTemp);
            cout << inputTemp << " F = " << result << " K" << endl;
            break;

        case 6:
            result = kelvinToFahrenheit(inputTemp);
            cout << inputTemp << " K = " << result << " F" << endl;
            break;
        }

        // Display interesting facts after conversion
        displayTemperatureFacts(celsius);
    }

    return 0;
}

/***Lessons Learned:**
- Define functions outside `main()`, not inside it.
- Declaring a function is not enough; it also needs a definition.
- Understand variable scope: constants must be accessible to the functions that use them.
- Check the order of `if-else` conditions to avoid unreachable code.
- Remember to call functions after defining them.
- Always validate user input to prevent unexpected errors.*/
