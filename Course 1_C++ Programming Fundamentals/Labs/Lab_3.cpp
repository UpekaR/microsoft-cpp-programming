
// Task 1: Explore Data Type Memory Usage

/*You're developing a resource management system and need to understand how much memory different data types consume to optimize your program's efficiency.

🔍 Practice

Compile and run the program to see the memory usage of each data type

Add two more variables: Create a short variable and a long long variable with any values you choose

Use sizeof() to display their memory usage as well

Think about:

Why might double use more memory than float?

When would you choose short over int for memory efficiency?

How does the memory usage relate to the precision and range of each type?*/

/*#include <iostream>
#include <climits>  // For INT_MAX constant
int main() {
    // Declare variables of different data types
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRank = 'A';
    bool gameActive = true;
    
    // Display the memory usage of each data type
    std::cout << "Memory Usage Analysis:" << std::endl;
    std::cout << "int uses: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float uses: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double uses: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "char uses: " << sizeof(char) << " byte" << std::endl;
    std::cout << "bool uses: " << sizeof(bool) << " byte" << std::endl;
    
    return 0;
}*/

#include <iostream> // For cout and endl
#include <climits>  // For integer limits such as INT_MAX

int main()
{

    // Step 1: Declare variables of different data types
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRank = 'A';
    bool gameActive = true;

    // Step 2: Declare two additional variables
    // short stores relatively small whole numbers
    short playerLives = 3;

    // long long stores very large whole numbers
    // LL indicates a long long integer literal
    long long totalGameScore = 9876543210LL;

    // Step 3: Display the memory usage of each data type
    std::cout << "Memory Usage Analysis:" << std::endl;

    std::cout << "int uses: "
              << sizeof(int) << " bytes" << std::endl;

    std::cout << "float uses: "
              << sizeof(float) << " bytes" << std::endl;

    std::cout << "double uses: "
              << sizeof(double) << " bytes" << std::endl;

    std::cout << "char uses: "
              << sizeof(char) << " byte" << std::endl;

    std::cout << "bool uses: "
              << sizeof(bool) << " byte" << std::endl;

    // Step 4: Display the memory usage of the new variables
    std::cout << "short uses: "
              << sizeof(playerLives) << " bytes" << std::endl;

    std::cout << "long long uses: "
              << sizeof(totalGameScore) << " bytes" << std::endl;

    // Step 5: End the program successfully
    return 0;
}

/*Output:
Memory Usage Analysis:
int uses: 4 bytes
float uses: 4 bytes
double uses: 8 bytes
char uses: 1 byte
bool uses: 1 byte
short uses: 2 bytes
long long uses: 8 bytes
*/