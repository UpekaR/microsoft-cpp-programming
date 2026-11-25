
// Read two values and print them in swapped order

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;

    // Taking user input
    cout << "Enter first word: ";
    getline(cin, a);

    cout << "Enter second word: ";
    getline(cin, b);

    // Print them swapped
    cout << b << endl;
    cout << a << endl;

    return 0;
}
