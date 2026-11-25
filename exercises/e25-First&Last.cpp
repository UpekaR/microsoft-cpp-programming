
// Print the first and last character of a word

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    // Get the first and last characters
    char first = word[0];
    char last = word[word.length() - 1];

    // Print results
    cout << "First: " << first << endl;
    cout << "Last: " << last << endl;

    return 0;
}
