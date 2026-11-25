
// Print a specific row of Pascal's triangle

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;

    // Taking user input
    cout << "Enter row number: ";
    cin >> N;

    if (N < 1)
    {
        return 0;
    }

    // Start with row 1
    vector<long long> row = {1};

    // Calculate each row up to N
    for (int i = 2; i <= N; i++)
    {
        vector<long long> nextRow(i, 1);

        // Calculate middle elements
        for (int j = 1; j < i - 1; j++)
        {
            nextRow[j] = row[j - 1] + row[j];
        }

        row = nextRow;
    }

    // Print the requested row
    for (int i = 0; i < row.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << row[i];
    }

    cout << endl;

    return 0;
}
