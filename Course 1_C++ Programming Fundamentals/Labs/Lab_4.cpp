
// Task 2: Test Data Type Limits & Type Casting

/*Now explore what happens when you push data types to their limits and convert between different types.

🔍 Practice

Run the code below and observe what happens with integer overflow

Experiment with different values: Try casting other decimal numbers to integers

Test character conversions: Try different letters and see their ASCII values

Add a boolean test: Create a bool variable and cast it to int to see what values true and false become

Experiment with:

What happens when you cast a negative double to an int?

What ASCII values do lowercase letters have compared to uppercase?

Try casting the boolean value false to an integer - what do you get?*/

/*#include <iostream>
#include <climits>
int main() {
    // Test integer limits
    std::cout << "Integer Limits and Overflow:" << std::endl;
    int maxValue = INT_MAX;
    std::cout << "Maximum int value: " << maxValue << std::endl;
    std::cout << "What happens when we add 1: " << maxValue + 1 << std::endl;    
    // Test type casting between different types
    std::cout << "\nType Casting Examples:" << std::endl;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);
    std::cout << "Original price (double): " << precisePrice << std::endl;
    std::cout << "After casting to int: " << roundedPrice << std::endl;    
    // Test character to integer conversion
    char letter = 'C';
    int letterValue = static_cast<int>(letter);
    std::cout << "Character '" << letter << "' has ASCII value: " << letterValue << std::endl;    
    return 0;
}*/

#include <iostream> // For cout and endl
#include <climits>  // For INT_MAX

int main()
{

    // Step 1: Test integer limits
    std::cout << "Integer Limits and Overflow:" << std::endl;

    // Store the maximum value of an int
    int maxValue = INT_MAX;

    std::cout << "Maximum int value: "
              << maxValue << std::endl;

    // Signed integer overflow is undefined behavior in C++.
    // Use a larger type to calculate the mathematical result safely.
    long long nextValue = static_cast<long long>(maxValue) + 1;

    std::cout << "Maximum int value plus 1: "
              << nextValue << std::endl;

    // Step 2: Test casting a positive double to int
    std::cout << "\nType Casting Examples:" << std::endl;

    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);

    std::cout << "Original price (double): "
              << precisePrice << std::endl;

    std::cout << "After casting to int: "
              << roundedPrice << std::endl;

    // Step 3: Test casting a negative double to int
    double negativePrice = -19.85;
    int convertedNegative = static_cast<int>(negativePrice);

    std::cout << "Original negative value: "
              << negativePrice << std::endl;

    std::cout << "After casting to int: "
              << convertedNegative << std::endl;

    // Step 4: Test character to integer conversion
    // On ASCII-compatible systems, 'C' is 67.
    char letter = 'C';
    int letterValue = static_cast<int>(letter);

    std::cout << "\nCharacter Conversion:" << std::endl;

    std::cout << "Character '" << letter
              << "' has ASCII value: "
              << letterValue << std::endl;

    // Compare uppercase and lowercase letters
    char uppercaseLetter = 'A';
    char lowercaseLetter = 'a';

    std::cout << "Uppercase A: "
              << static_cast<int>(uppercaseLetter) << std::endl;

    std::cout << "Lowercase a: "
              << static_cast<int>(lowercaseLetter) << std::endl;

    // Step 5: Test boolean to integer conversion
    std::cout << "\nBoolean Conversion:" << std::endl;

    bool gameActive = true;
    bool gameOver = false;

    std::cout << "true as int: "
              << static_cast<int>(gameActive) << std::endl;

    std::cout << "false as int: "
              << static_cast<int>(gameOver) << std::endl;

    // Step 6: End the program successfully
    return 0;
}

/*## Task 2: Data Type Limits and Type Casting — Explanation

### Purpose
The purpose of this program is to understand the limits of different C++ data types and learn how type casting converts values from one data type to another.

### 1. Integer Limits and Overflow
The `<climits>` header provides constants such as `INT_MAX`, which represents the maximum value an integer can store.

When we try to add 1 to `INT_MAX`, the result exceeds the maximum range of the `int` data type. This is called **integer overflow**. In C++, signed integer overflow causes
undefined behavior.

To avoid this problem, we can convert the value to `long long` before performing the addition.

### 2. Type Casting (`double` to `int`)
Type casting allows us to convert a value from one data type to another.

The `static_cast<int>()` function converts a decimal number into an integer by removing its fractional part.

**Examples:**
- `29.95` becomes `29`
- `15.75` becomes `15`
- `-19.85` becomes `-19`

This conversion does not round the number. It truncates the decimal part toward zero.

### 3. Character to Integer Conversion
Characters are represented internally using numeric character codes.

Using `static_cast<int>()`, we can convert a character into its numeric value.

On ASCII-compatible systems:

- `'A'` = 65
- `'C'` = 67
- `'a'` = 97
- `'c'` = 99

Lowercase English letters have ASCII values 32 greater than their corresponding uppercase letters.

### 4. Boolean to Integer Conversion
The `bool` data type stores two possible values: `true` and `false`.

When converted to an integer:

- `true` becomes `1`
- `false` becomes `0`

This demonstrates how C++ represents logical values during integer conversion.

💡 Key Points

Memory Efficiency: Different data types use different amounts of memory - choose the smallest type that can safely hold your data

Type Limits: Every data type has a maximum and minimum value; exceeding these limits causes overflow or underflow

Type Casting: Converting between types can result in data loss (like losing decimal places when casting double to int)

Practical Applications: Understanding these concepts helps you choose appropriate data types for real-world applications like financial software or game development

❗ Common Mistakes to Avoid

Using float for financial calculations where precision matters (use double instead)

Not considering overflow when working with large numbers (consider long long for big values)

Forgetting that type casting from larger to smaller types can lose information

Using int for values that might exceed its range (like timestamps or large counts)  */