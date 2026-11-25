
// Print a right triangle made of stars

#include <iostream>
using namespace std;

int main()
{
    int N;

    // Taking user input
    cout << "Enter number of rows: ";
    cin >> N;

    // Outer loop controls the rows
    for (int i = 1; i <= N; i++)
    {

        // Inner loop prints stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}
