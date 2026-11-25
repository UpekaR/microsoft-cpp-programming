
// Read a list of words and print them sorted

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    // Taking user input
    cout << "How many words? ";
    cin >> n;

    vector<string> words(n);

    // Read words
    for (int i = 0; i < n; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }

    /*
    Sort the words alphabetically using the sort()
    function, then print each word on a separate line.
    */
    sort(words.begin(), words.end());

    // Print sorted words
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}
