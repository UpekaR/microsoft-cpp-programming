
// Write  a function that doubles every number in a list

#include <iostream>
#include <vector>
using namespace std;

// Function to double every number
vector<int> doubleNumbers(const vector<int> &numbers)
{
    vector<int> result;

    for (int number : numbers)
    {
        result.push_back(number * 2);
    }

    return result;
}

int main()
{
    int N;

    // Taking the number of elements
    cout << "Enter the count: ";
    cin >> N;

    vector<int> numbers(N);

    // Taking user input
    cout << "Enter the numbers:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    // Call the function
    vector<int> doubled = doubleNumbers(numbers);

    // Print the doubled numbers
    for (int i = 0; i < N; i++)
    {
        cout << doubled[i];

        if (i < N - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
