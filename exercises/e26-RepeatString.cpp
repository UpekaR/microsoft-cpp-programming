
// Read a string and a number, then print the string repeated that many times

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int N;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter number of repetitions: ";
    cin >> N;

    // Repeat the word N times
    for (int i = 0; i < N; i++)
    {
        cout << word;
    }

    // Move to the next line
    cout << endl;

    return 0;
}
