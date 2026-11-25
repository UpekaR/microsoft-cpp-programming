
// Read a list of numbers and find the largest one

#include <iostream>
#include <vector>
using namespace std;

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

    // Assume the first number is the largest
    int largest = numbers[0];

    // Find the largest number
    for (int i = 1; i < N; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    // Print the result
    cout << "Largest: " << largest << endl;

    return 0;
}
