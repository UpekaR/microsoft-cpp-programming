
// Count how many numbers are above the average

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, count = 0;
    double sum = 0, average;

    // Taking the number of elements
    cout << "Enter the count: ";
    cin >> N;

    vector<double> numbers(N);

    // Taking user input and calculating the sum
    cout << "Enter the numbers:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate the average
    average = sum / N;

    // Count numbers strictly above the average
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] > average)
        {
            count++;
        }
    }

    // Print the result
    cout << "Above average: " << count << endl;

    return 0;
}
