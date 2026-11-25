
// Find the character that appears most often in a string

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

    // Count each character
    for (char letter : word)
    {
        frequency[letter]++;
    }

    char mostCommon = ' ';
    int maxCount = 0;

    /*
    Find the character with the highest frequency.
    Since the map is sorted alphabetically, the first
    alphabetical character is kept when there is a tie.
    */
    for (const auto &entry : frequency)
    {
        if (entry.second > maxCount)
        {
            maxCount = entry.second;
            mostCommon = entry.first;
        }
    }

    // Print the most common character
    cout << mostCommon << endl;

    return 0;
}
