
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // =========================================
    // Task 1: Explore Implicit Conversions
    // =========================================

    cout << "Task 1: Implicit Conversions" << endl;

    // Integer division example
    int totalPoints = 95;
    int numTests = 3;

    double average1 = totalPoints / numTests;

    cout << "Average (implicit): " << average1 << endl;

    // Character to integer conversion
    char grade = 'A';
    int gradeValue = grade;

    cout << "ASCII value of 'A': " << gradeValue << endl;

    // =========================================
    // Task 2: Apply Explicit Conversions
    // =========================================

    cout << "\nTask 2: Explicit Conversions" << endl;

    // Fix integer division using explicit casting
    double average2 = static_cast<double>(totalPoints) / numTests;

    cout << "Average (explicit): " << average2 << endl;

    // Demonstrate precision loss
    double preciseValue = 99.99;
    int truncated = static_cast<int>(preciseValue);

    cout << "Original value: " << preciseValue << endl;
    cout << "Truncated value: " << truncated << endl;

    // =========================================
    // Task 3: Debug Conversion Issues
    // =========================================

    cout << "\nTask 3: Debug Conversion Issues" << endl;

    // Problem 1: Preserve decimal precision
    int dollars = 1000;
    double interestRate = 0.05;

    double interest = dollars * interestRate;

    cout << fixed << setprecision(2);
    cout << "Interest earned: $" << interest << endl;

    // Problem 2: Avoid unintended truncation
    double price = 19.99;

    cout << "Original price: $" << price << endl;

    // Explicit conversion when whole dollars are needed
    int wholeDollars = static_cast<int>(price);

    cout << "Price in whole dollars: $"
         << wholeDollars << endl;

    return 0;
}

/*Lessons Learned – Type Conversions in C++

Implicit conversion: C++ automatically converts values between compatible data types.

Integer division: Dividing two integers removes the decimal part, even if the result is stored in a double.

Explicit conversion: Use static_cast<double>() to perform decimal division when needed.

Precision loss: Converting double to int removes the fractional part instead of rounding.

Character conversion: A char can be converted to its integer character-code value.

Best practice: Choose data types carefully and use explicit casting when a conversion could lose information.*/