
// Create a tip calculator function for a resturant bill

#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate tip and total
void calculateTip(double bill, int percentage)
{
    double tip = bill * percentage / 100.0;
    double total = bill + tip;

    // Print results with two decimal places
    cout << fixed << setprecision(2);

    cout << "Bill: $" << bill << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;
}

int main()
{
    double bill;
    int percentage;

    // Taking user input
    cout << "Enter bill amount: ";
    cin >> bill;

    cout << "Enter tip percentage: ";
    cin >> percentage;

    // Call the function
    calculateTip(bill, percentage);

    return 0;
}
