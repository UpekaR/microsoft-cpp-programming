
// Calculate a currency exchange from an amount and rate.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount, rate;

    // Taking user input
    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter exchange rate: ";
    cin >> rate;

    // Calculate and print result
    double result = amount * rate;

    cout << fixed << setprecision(2);
    cout << "Result: " << result << endl;

    return 0;
}
