
// Read a list of numbers from the user and calculate their sum

# include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    // Read numbers and calculate sum
    int total = 0;
    int number;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;

        total += number;
    }

    // Print the sum
    cout << "Sum: " << total << endl;

    return 0;
}
