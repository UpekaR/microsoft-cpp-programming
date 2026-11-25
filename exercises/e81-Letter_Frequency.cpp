
// Count how many times each letter appears in a word

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string word;
    map<char, int> frequency;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    /*
    Count each letter using a map, which stores
    letters as keys and their frequencies as values.
    The map automatically sorts letters alphabetically.
    */

    for (char letter : word)
    {
        frequency[letter]++;
    }

    // Print each letter and its frequency
    for (const auto &entry : frequency)
    {
        cout << entry.first << ":" << entry.second << endl;
    }

    return 0;
}
