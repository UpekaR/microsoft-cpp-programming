
// Calculate a discounted price from a price and discount percentage

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price, discountPercentage;

    // Taking user input
    cout << "Enter original price: ";
    cin >> price;

    cout << "Enter discount percentage: ";
    cin >> discountPercentage;

    // Calculate discount amount
    double discount = price * discountPercentage / 100;

    // Calculate final price
    double finalPrice = price - discount;

    // Print results with two decimal places
    cout << fixed << setprecision(2);

    cout << "Discount: " << discount << endl;
    cout << "Final price: " << finalPrice << endl;

    return 0;
}
