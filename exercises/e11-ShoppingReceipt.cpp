
// Read item details from the user and print a formatted shopping receipt

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string item;
    double price;
    int quantity;

    // Taking user input
    cout << "Enter item name: ";
    getline(cin, item);

    cout << "Enter item price: $";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total
    double total = price * quantity;

    // Print receipt
    cout << fixed << setprecision(2);

    cout << "\n----- Shopping Receipt -----" << endl;
    cout << "Item: " << item << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
