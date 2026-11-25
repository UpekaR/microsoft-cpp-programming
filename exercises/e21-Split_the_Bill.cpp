
// Split a total amount equally among a group of people

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double totalAmount;
    int numberOfPeople;

    cout << "Enter the total bill amount: ";
    cin >> totalAmount;

    cout << "Enter the number of people: ";
    cin >> numberOfPeople;

    if (numberOfPeople <= 0)
    {
        cout << "Invalid number of people!" << endl;
        return 1;
    }

    double eachPays = totalAmount / numberOfPeople;

    cout << fixed << setprecision(2);
    cout << "Each pays: " << eachPays << endl;

    return 0;
}