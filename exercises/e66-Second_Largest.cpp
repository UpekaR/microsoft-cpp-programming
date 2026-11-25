
// Find the second largest number in a list

#include <iostream>
#include <vector>
#include <algorithm>
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

    // Sort numbers in ascending order
    sort(numbers.begin(), numbers.end());

    // Find the second largest number
    int secondLargest = numbers[N - 2];

    // Print the result
    cout << "Second largest: " << secondLargest << endl;

    return 0;
}
