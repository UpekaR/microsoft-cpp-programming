
// Merge two sorted lists into one sorted list

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    // Read the first list
    cout << "Enter the size of the first list: ";
    cin >> n;

    vector<int> first(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> first[i];
    }

    // Read the second list
    cout << "Enter the size of the second list: ";
    cin >> m;

    vector<int> second(m);

    for (int i = 0; i < m; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> second[i];
    }

    // Create a vector for the merged list
    vector<int> merged;

    int i = 0, j = 0;

    // Compare and merge both lists
    while (i < n && j < m)
    {
        if (first[i] <= second[j])
        {
            merged.push_back(first[i]);
            i++;
        }
        else
        {
            merged.push_back(second[j]);
            j++;
        }
    }

    // Add remaining elements from the first list
    while (i < n)
    {
        merged.push_back(first[i]);
        i++;
    }

    // Add remaining elements from the second list
    while (j < m)
    {
        merged.push_back(second[j]);
        j++;
    }

    // Print the merged list
    for (int k = 0; k < merged.size(); k++)
    {
        if (k > 0)
        {
            cout << " ";
        }

        cout << merged[k];
    }

    cout << endl;

    return 0;
}

/*
How merging works
The program uses two index variables, i and j, 
to compare elements from both lists. The smaller element is added to the merged list first.
*/