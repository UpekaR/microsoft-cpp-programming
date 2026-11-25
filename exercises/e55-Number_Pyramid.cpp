
// Print a number pyramid


#include <iostream>
using namespace std;

int main() {
    int N;

    // Taking user input
    cout << "Enter a number: ";
    cin >> N;

    // Print the number pyramid
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;

            // Add spaces between numbers
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

/*
This program uses nested for loops, meaning one loop runs inside another loop.
*/