
// Print a rectangle border made of stars

#include <iostream>
using namespace std;

int main()
{
    int width, height;

    // Taking user input
    cout << "Enter rectangle width: ";
    cin >> width;

    cout << "Enter rectangle height: ";
    cin >> height;

    // Print the rectangle border
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 ||
                j == 0 || j == width - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
