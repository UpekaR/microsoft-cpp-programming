
# Module 1: Introduction to C++ Syntax and Structure

**Estimated Duration:** 9 Hours

## 1.1 What is Programming?

Imagine you are the ruler of a fantasy kingdom.

You have a loyal assistant who follows every instruction you give.

However, there is one problem.

Your assistant cannot guess what you mean.

You must provide instructions in a language the assistant understands.

That is exactly how programming works.

A computer follows instructions written by a programmer.

These instructions are called **code**.

A collection of instructions that performs a task is called a **program**.

### Important Definitions

| Term | Meaning |
|------|---------|
| Programming | Writing instructions for a computer |
| Program | A collection of instructions |
| Code | Instructions written in a programming language |
| Programmer | Someone who writes computer programs |
| Programming Language | A language used to communicate instructions to computers |
| Compiler | Software that translates source code into machine code |
| Syntax | Rules for writing valid code |

---

## 1.2 What is C++?

C++ is a general-purpose programming language.

It is used to develop:

- Operating systems
- Game engines
- Desktop applications
- Embedded systems
- High-performance software
- Financial applications
- Scientific simulations

C++ supports several programming styles, including:

1. Procedural programming
2. Object-oriented programming
3. Generic programming

### Why Learn C++?

C++ gives programmers considerable control over:

- Memory
- Program performance
- Data structures
- Hardware resources
- Software architecture

**Remember:**

C++ is a compiled programming language.

The source code normally needs to be compiled before the program can run.

---

## 1.3 Your First C++ Program

### Story: The Kingdom Says Hello

Before creating your fantasy kingdom, you need to make your computer speak.

Your first mission is to display a message.

### Example 1: Hello World

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

### Expected Output

```text
Hello, World!
```

### Explanation

**Line 1:**

```cpp
#include <iostream>
```

This includes the standard input/output stream library.

It provides tools such as:

- `std::cout` — Display output
- `std::cin` — Read input
- `std::cerr` — Display error messages

**Line 3:**

```cpp
int main()
```

This defines the main function.

The `main()` function is the entry point of a standard C++ program.

**Line 4:**

```cpp
{
```

The opening curly bracket marks the beginning of the function body.

**Line 5:**

```cpp
std::cout << "Hello, World!";
```

This displays text on the screen.

- `std` — Standard namespace
- `cout` — Standard output stream
- `<<` — Stream insertion operator
- `"Hello, World!"` — String literal
- `;` — Statement terminator

**Line 6:**

```cpp
return 0;
```

This indicates successful program termination.

**Line 7:**

```cpp
}
```

The closing curly bracket ends the function body.

---

## 1.4 Understanding C++ Syntax

Syntax refers to the rules for writing valid C++ code.

Imagine writing a letter.

If you ignore grammar, the reader may struggle to understand it.

Programming languages also have rules.

### Important Syntax Rules

1. Most statements end with a semicolon.
2. C++ is case-sensitive.
3. Curly brackets define blocks of code.
4. Strings use double quotation marks.
5. Character literals use single quotation marks.
6. Comments are ignored by the compiler.

### Example

```cpp
int age = 25;
```

Correct.

```cpp
int age = 25
```

Incorrect because the semicolon is missing.

### Case Sensitivity

```cpp
int health = 100;
int Health = 50;
```

These are two different variables.

C++ treats uppercase and lowercase letters differently.

---

## 1.5 Comments in C++

Comments are explanations written inside source code.

The compiler ignores comments.

### Single-Line Comment

```cpp
// This is a single-line comment
```

### Multi-Line Comment

```cpp
/*
This is a multi-line comment.

It can contain several lines.
*/
```

### Example

```cpp
#include <iostream>

int main() {
    // Display a welcome message
    std::cout << "Welcome to the Kingdom!";

    return 0;
}
```

### Why Use Comments?

Comments help explain:

- Why a decision was made
- Complex logic
- Important assumptions
- Non-obvious behavior

Avoid comments that merely repeat what obvious code already says.

---

## 1.6 Input and Output

### Story: Ask the Hero's Name

Your fantasy game needs a hero.

Instead of assigning the hero a fixed name, let the player enter one.

### Example 2: Reading User Input

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Welcome, " << name << "!";

    return 0;
}
```

### Example Output

```text
Enter your name: Merlin
Welcome, Merlin!
```

### Explanation

```cpp
std::string name;
```

Creates a string variable.

```cpp
std::cin >> name;
```

Reads input from the keyboard.

```cpp
std::cout << name;
```

Displays the stored value.

### Important Note

`std::cin >> name` reads one whitespace-separated word.

If the player enters:

```text
Merlin the Great
```

Only `Merlin` is stored.

To read the entire line:

```cpp
std::getline(std::cin, name);
```

---

## 1.7 Escape Sequences

Escape sequences represent special characters inside strings.

| Escape Sequence | Meaning |
|----------------|---------|
| `\n` | New line |
| `\t` | Horizontal tab |
| `\\` | Backslash |
| `\"` | Double quotation mark |
| `\'` | Single quotation mark |
| `\0` | Null character |

### Example

```cpp
#include <iostream>

int main() {
    std::cout << "Welcome!\n";
    std::cout << "Name:\tMerlin\n";
    std::cout << "\"The Great Wizard\"";

    return 0;
}
```

### Output

```text
Welcome!
Name:   Merlin
"The Great Wizard"
```

---

## 1.8 Functions in C++

### Story: Reusable Magic Spells

Imagine your wizard needs to cast the same spell many times.

Instead of writing the spell's instructions repeatedly, you create a reusable function.

A function is a named block of code that performs a task.

### Example 3: Creating a Function

```cpp
#include <iostream>

void greetHero() {
    std::cout << "Welcome, brave hero!\n";
}

int main() {
    greetHero();
    greetHero();

    return 0;
}
```

### Output

```text
Welcome, brave hero!
Welcome, brave hero!
```

### Function Structure

```cpp
returnType functionName(parameters) {
    // Function body
}
```

### Important Terms

| Term | Meaning |
|------|---------|
| Function | Reusable block of code |
| Function Name | Identifier used to call the function |
| Parameter | Variable declared in a function's parameter list |
| Argument | Value passed to a function |
| Return Type | Type of value returned |
| `void` | Indicates no return value |

### Function with Parameters

```cpp
#include <iostream>
#include <string>

void greetHero(std::string name) {
    std::cout << "Welcome, " << name << "!\n";
}

int main() {
    greetHero("Merlin");
    greetHero("Arthur");

    return 0;
}
```

### Output

```text
Welcome, Merlin!
Welcome, Arthur!
```

### Function with Return Value

```cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);

    std::cout << result;

    return 0;
}
```

### Output

```text
30
```

---

## Module 1 Practice

- [ ] Write a Hello World program.
- [ ] Print three messages on separate lines.
- [ ] Read a player's name.
- [ ] Read a complete name using `getline()`.
- [ ] Create a function that prints a welcome message.
- [ ] Create a function that adds two numbers.
- [ ] Explain what `main()` does.
- [ ] Explain the difference between `cin` and `cout`.

---

# Module 2: Data Types and Variables in C++

**Estimated Duration:** 8 Hours

## 2.1 What is a Variable?

### Story: The Hero's Backpack

Your hero enters the Kingdom of Code.

The hero needs to carry information:

- Name
- Health
- Gold
- Level
- Experience points
- Whether the hero is alive

Imagine each piece of information is stored in a labeled box.

In programming, these boxes are called **variables**.

A variable is a named storage location that holds a value.

### Example

```cpp
int health = 100;
```

Explanation:

- `int` — Data type
- `health` — Variable name
- `100` — Initial value
- `=` — Assignment operator

---

## 2.2 Data Types

A data type tells the compiler what kind of value a variable stores.

### Common C++ Data Types

| Data Type | Description | Example |
|-----------|-------------|---------|
| `int` | Integer | `100` |
| `float` | Single-precision floating-point | `3.14f` |
| `double` | Double-precision floating-point | `99.99` |
| `char` | Character | `'A'` |
| `bool` | Boolean | `true` |
| `std::string` | Text | `"Merlin"` |
| `long long` | Integer type with at least 64 bits | `9000000000LL` |

**Important:** Exact numeric ranges and sizes can depend on the platform and compiler.

### Example 4: Character Information

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name = "Merlin";
    int health = 100;
    int level = 5;
    double gold = 250.75;
    char rank = 'A';
    bool isAlive = true;

    std::cout << "Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Level: " << level << "\n";
    std::cout << "Gold: " << gold << "\n";
    std::cout << "Rank: " << rank << "\n";
    std::cout << "Alive: " << isAlive << "\n";

    return 0;
}
```

### Output

```text
Name: Merlin
Health: 100
Level: 5
Gold: 250.75
Rank: A
Alive: 1
```

By default, `std::cout` prints:

- `true` as `1`
- `false` as `0`

To display words:

```cpp
std::cout << std::boolalpha << isAlive;
```

Output:

```text
true
```

---

## 2.3 Declaring and Initializing Variables

### Declaration

```cpp
int health;
```

Creates a variable.

A local built-in variable declared this way has an indeterminate value until initialized.

Do not read it before assigning a value.

### Initialization

```cpp
int health = 100;
```

Creates the variable with an initial value.

### Assignment

```cpp
health = 80;
```

Changes the value.

### Recommended Modern C++ Initialization

```cpp
int health{100};
double gold{25.5};
```

Brace initialization helps prevent certain narrowing conversions.

---

## 2.4 Constants

### Story: The Kingdom's Unchangeable Rules

Some values should remain constant.

For example, the maximum level of your game might be 100.

You do not want accidental changes.

Use `const`.

```cpp
const int MAX_LEVEL = 100;
```

Trying to assign a new value later is invalid:

```cpp
MAX_LEVEL = 200; // Compilation error
```

### Example

```cpp
#include <iostream>

int main() {
    const double TAX_RATE = 0.15;

    double price = 100.0;
    double tax = price * TAX_RATE;

    std::cout << "Tax: " << tax;

    return 0;
}
```

### Output

```text
Tax: 15
```

---

## 2.5 Type Conversion

Type conversion changes a value from one data type to another.

### Implicit Conversion

```cpp
int number = 10;
double result = number;
```

The integer value is converted to `double`.

### Explicit Conversion

```cpp
double number = 9.8;
int result = static_cast<int>(number);
```

The result is:

```text
9
```

The fractional part is discarded.

### Integer Division

```cpp
int result = 5 / 2;
```

Result:

```text
2
```

Both operands are integers, so integer division occurs.

To obtain a floating-point result:

```cpp
double result = 5.0 / 2;
```

Result:

```text
2.5
```

---

## 2.6 Variable Scope

Scope determines where a variable can be accessed.

### Local Scope

```cpp
int main() {
    int health = 100;
}
```

`health` is local to `main()`.

### Block Scope

```cpp
int main() {
    int health = 100;

    if (health > 0) {
        int bonus = 10;
    }

    // bonus cannot be accessed here
}
```

### Global Scope

```cpp
int score = 0;

int main() {
    score = 10;
}
```

Global variables can be accessed from appropriate parts of the program.

However, excessive global state can make programs harder to maintain.

Prefer local variables when possible.

---

## 2.7 Arrays

### Story: The Hero's Inventory

Your hero collects five magical items.

Instead of creating five unrelated variables, you can store values in an array.

An array stores multiple elements of the same type.

### Example

```cpp
#include <iostream>

int main() {
    int scores[5] = {10, 20, 30, 40, 50};

    std::cout << scores[0] << "\n";
    std::cout << scores[4];

    return 0;
}
```

### Output

```text
10
50
```

### Important

Array indexing starts at zero.

For an array with five elements:

```text
Index:  0   1   2   3   4
Value: 10  20  30  40  50
```

Accessing outside the valid bounds of a built-in array causes undefined behavior.

---

## 2.8 Vectors

A `std::vector` is a dynamic sequence container.

Unlike a built-in array, a vector can grow or shrink.

### Example

```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> inventory;

    inventory.push_back("Sword");
    inventory.push_back("Shield");
    inventory.push_back("Potion");

    for (const std::string& item : inventory) {
        std::cout << item << "\n";
    }

    return 0;
}
```

### Output

```text
Sword
Shield
Potion
```

### Useful Vector Operations

| Operation | Purpose |
|-----------|---------|
| `push_back()` | Add an element |
| `pop_back()` | Remove the last element |
| `size()` | Number of elements |
| `empty()` | Check whether vector is empty |
| `at()` | Access an element with bounds checking |
| `clear()` | Remove all elements |

---

## Module 2 Practice

- [ ] Create variables for a game character.
- [ ] Use `int`, `double`, `char`, `bool`, and `string`.
- [ ] Create a constant.
- [ ] Explain declaration vs initialization.
- [ ] Perform explicit type conversion.
- [ ] Create an array.
- [ ] Create a vector.
- [ ] Explain variable scope.

---

# Module 3: Operators and Control Flow

**Estimated Duration:** 9 Hours

## 3.1 What are Operators?

### Story: The Battle Begins

Your hero meets a dragon.

The hero has:

```text
Health: 100
Dragon Damage: 25
```

After the dragon attacks, the hero loses health.

You need arithmetic to calculate the new value.

Operators are symbols used to perform operations on values.

---

## 3.2 Arithmetic Operators

| Operator | Meaning | Example |
|----------|---------|---------|
| `+` | Addition | `10 + 5` |
| `-` | Subtraction | `10 - 5` |
| `*` | Multiplication | `10 * 5` |
| `/` | Division | `10 / 5` |
| `%` | Remainder | `10 % 3` |

### Example 5: Damage Calculation

```cpp
#include <iostream>

int main() {
    int health = 100;
    int damage = 25;

    health = health - damage;

    std::cout << "Remaining health: " << health;

    return 0;
}
```

### Output

```text
Remaining health: 75
```

### Shorter Version

```cpp
health -= damage;
```

Both forms subtract damage from health.

---

## 3.3 Assignment Operators

| Operator | Example | Equivalent |
|----------|---------|------------|
| `=` | `x = 10` | Assign 10 |
| `+=` | `x += 5` | `x = x + 5` |
| `-=` | `x -= 5` | `x = x - 5` |
| `*=` | `x *= 2` | `x = x * 2` |
| `/=` | `x /= 2` | `x = x / 2` |
| `%=` | `x %= 3` | `x = x % 3` |

---

## 3.4 Comparison Operators

Comparison operators compare values.

They produce Boolean results.

| Operator | Meaning |
|----------|---------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

### Example

```cpp
int health = 50;

std::cout << (health > 0);
```

Output:

```text
1
```

The comparison is true.

---

## 3.5 Logical Operators

Logical operators combine or modify conditions.

| Operator | Meaning |
|----------|---------|
| `&&` | Logical AND |
| `||` | Logical OR |
| `!` | Logical NOT |

### AND Example

```cpp
if (health > 0 && level >= 5) {
    std::cout << "You may enter the castle.";
}
```

Both conditions must be true.

### OR Example

```cpp
if (hasKey || isAdmin) {
    std::cout << "Access granted.";
}
```

At least one condition must be true.

### NOT Example

```cpp
if (!isAlive) {
    std::cout << "Game over.";
}
```

The condition is true when `isAlive` is false.

---

## 3.6 If Statements

### Story: The Castle Gate

Your hero approaches a castle.

The guard says:

"You may enter only if you are level 5 or higher."

The program must make a decision.

### Example 6: If Statement

```cpp
#include <iostream>

int main() {
    int level = 7;

    if (level >= 5) {
        std::cout << "You may enter the castle.";
    }

    return 0;
}
```

### Output

```text
You may enter the castle.
```

---

## 3.7 If-Else Statements

```cpp
#include <iostream>

int main() {
    int level = 3;

    if (level >= 5) {
        std::cout << "Access granted.";
    } else {
        std::cout << "Access denied.";
    }

    return 0;
}
```

### Output

```text
Access denied.
```

---

## 3.8 Else-If Statements

Use `else if` when there are multiple possible conditions.

### Example

```cpp
#include <iostream>

int main() {
    int score = 85;

    if (score >= 90) {
        std::cout << "Grade A";
    } else if (score >= 75) {
        std::cout << "Grade B";
    } else if (score >= 50) {
        std::cout << "Grade C";
    } else {
        std::cout << "Fail";
    }

    return 0;
}
```

### Output

```text
Grade B
```

---

## 3.9 Switch Statements

A `switch` statement selects between cases based on a value.

### Story: Choose Your Weapon

```cpp
#include <iostream>

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            std::cout << "Sword selected";
            break;

        case 2:
            std::cout << "Bow selected";
            break;

        case 3:
            std::cout << "Magic staff selected";
            break;

        default:
            std::cout << "Invalid choice";
    }

    return 0;
}
```

### Output

```text
Bow selected
```

### Important Keywords

- `case` — A possible matching value
- `break` — Exits the switch
- `default` — Runs if no case matches

Without `break`, execution can fall through to subsequent cases.

---

## 3.10 Loops

### Story: Training the Hero

Your hero needs to practice sword fighting five times.

Writing the same instruction five times would be repetitive.

Loops allow code to execute repeatedly.

### Types of Loops

1. `for`
2. `while`
3. `do-while`

---

## 3.11 For Loop

Use a `for` loop when the number of repetitions is known.

### Example 7: Training Sessions

```cpp
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        std::cout << "Training session " << i << "\n";
    }

    return 0;
}
```

### Output

```text
Training session 1
Training session 2
Training session 3
Training session 4
Training session 5
```

### Structure

```cpp
for (initialization; condition; update) {
    // Repeated code
}
```

Explanation:

- Initialization runs once.
- Condition is checked before each iteration.
- Update runs after each completed iteration.

---

## 3.12 While Loop

A `while` loop repeats as long as its condition is true.

### Example

```cpp
#include <iostream>

int main() {
    int health = 100;

    while (health > 0) {
        std::cout << "Health: " << health << "\n";
        health -= 25;
    }

    return 0;
}
```

### Output

```text
Health: 100
Health: 75
Health: 50
Health: 25
```

---

## 3.13 Do-While Loop

A `do-while` loop executes its body at least once.

### Example

```cpp
#include <iostream>

int main() {
    int number = 5;

    do {
        std::cout << number << "\n";
        number++;
    } while (number < 5);

    return 0;
}
```

### Output

```text
5
```

The body runs once even though the condition is false afterward.

---

## 3.14 Break and Continue

### Break

`break` immediately exits the nearest enclosing loop or switch.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;
    }

    std::cout << i << " ";
}
```

Output:

```text
1 2 3 4
```

### Continue

`continue` skips the remaining statements in the current loop iteration.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }

    std::cout << i << " ";
}
```

Output:

```text
1 2 4 5
```

---

## 3.15 Ternary Operator

The conditional operator provides a compact way to choose between two expressions.

### Syntax

```cpp
condition ? valueIfTrue : valueIfFalse;
```

### Example

```cpp
int health = 50;

std::string status = (health > 0) ? "Alive" : "Dead";
```

`status` becomes:

```text
Alive
```

---

## Module 3 Practice

- [ ] Write a calculator using arithmetic operators.
- [ ] Create an age verification program.
- [ ] Use `if`, `else if`, and `else`.
- [ ] Create a weapon selection menu using `switch`.
- [ ] Print numbers 1 to 100 using a loop.
- [ ] Calculate the sum of numbers 1 to 10.
- [ ] Create a health countdown.
- [ ] Explain `break` and `continue`.

---

# Module 4: Code Creation and Compilation

**Estimated Duration:** 9 Hours

## 4.1 How Does C++ Code Become a Program?

### Story: Translating the Kingdom's Instructions

You write instructions in C++.

However, the computer processor does not directly execute C++ source code.

The code must be translated into machine instructions.

This is the job of the compiler and related build tools.

### Simplified Compilation Process

```text
C++ Source Code
       |
       v
Preprocessing
       |
       v
Compilation
       |
       v
Object Code
       |
       v
Linking
       |
       v
Executable Program
       |
       v
Program Runs
```

### Important Terms

| Term | Meaning |
|------|---------|
| Source Code | Human-readable C++ instructions |
| Preprocessor | Processes directives such as `#include` |
| Compiler | Translates C++ code into lower-level code |
| Object File | Compiled code that may still require linking |
| Linker | Combines compiled code and required libraries |
| Executable | Program that can be run |
| Build | Process of producing a program from source files |

---

## 4.2 Creating a C++ File

A C++ source file commonly uses the extension:

```text
.cpp
```

Example:

```text
main.cpp
```

### Basic Project Structure

```text
FantasyGame/
│
├── main.cpp
├── README.md
└── notes.md
```

---

## 4.3 Compiling with G++

If a suitable GCC/G++ compiler is installed and available in your terminal:

```bash
g++ main.cpp -o game
```

Explanation:

- `g++` — C++ compiler driver
- `main.cpp` — Source file
- `-o game` — Output executable name

### Run on Windows PowerShell

```powershell
.\game.exe
```

### Run on Linux or macOS

```bash
./game
```

### Recommended Compiler Options

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o game
```

| Option | Purpose |
|--------|---------|
| `-std=c++17` | Use C++17 language mode |
| `-Wall` | Enable many useful warnings |
| `-Wextra` | Enable additional warnings |
| `-pedantic` | Diagnose certain non-standard language extensions |
| `-o` | Specify output filename |

**Note:** Visual Studio's MSVC compiler uses different commands and options.

---

## 4.4 Types of Programming Errors

### 1. Syntax or Compilation Error

Example:

```cpp
int age = 20
```

Problem: Missing semicolon.

### 2. Linker Error

A function is declared and called, but its definition is missing from the linked program.

### 3. Runtime Error

An error occurs while the program is running.

Examples:

- Unhandled exception
- Invalid memory access
- Failed file operation

### 4. Logical Error

The program runs but produces incorrect results.

Example:

```cpp
int total = 10 - 5;
```

If the intended operation was addition, the logic is incorrect.

---

## 4.5 Debugging

Debugging is the process of finding and fixing defects.

### Common Debugging Steps

1. Reproduce the problem.
2. Identify where the problem occurs.
3. Inspect variable values.
4. Use breakpoints.
5. Step through the program.
6. Correct the problem.
7. Test again.

### Debugging Tools

- Breakpoints
- Step Over
- Step Into
- Step Out
- Watch variables
- Call stack
- Debug console

### Example

```cpp
#include <iostream>

int main() {
    int health = 100;
    int damage = 25;

    health -= damage;

    std::cout << "DEBUG: health = " << health << "\n";

    return 0;
}
```

Output:

```text
DEBUG: health = 75
```

Printing intermediate values is a simple debugging technique.

---

## 4.6 Header Files

Header files commonly contain declarations shared between source files.

Typical extension:

```text
.hpp
```

### Example Structure

```text
Project/
│
├── main.cpp
├── Calculator.hpp
└── Calculator.cpp
```

### Calculator.hpp

```cpp
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

int add(int a, int b);

#endif
```

### Calculator.cpp

```cpp
#include "Calculator.hpp"

int add(int a, int b) {
    return a + b;
}
```

### main.cpp

```cpp
#include <iostream>
#include "Calculator.hpp"

int main() {
    std::cout << add(5, 3);
    return 0;
}
```

### Compile All Source Files

```bash
g++ -std=c++17 main.cpp Calculator.cpp -o calculator
```

### Output

```text
8
```

### Why Separate Files?

- Better organization
- Easier maintenance
- Reusable components
- Clearer interfaces
- Improved collaboration

---

## 4.7 Error Handling and Input Validation

### Story: A Confused Player

Imagine your game asks for the hero's age.

The player enters:

```text
banana
```

A robust program should detect the invalid input.

### Example

```cpp
#include <iostream>

int main() {
    int age{};

    std::cout << "Enter your age: ";

    if (!(std::cin >> age)) {
        std::cout << "Error: Enter a whole number.";
        return 1;
    }

    if (age < 0 || age > 120) {
        std::cout << "Error: Invalid age.";
        return 1;
    }

    std::cout << "Valid age: " << age;

    return 0;
}
```

### Important Concept

**Robust code** handles invalid inputs and unexpected conditions safely.

However, this example does not reject every possible malformed input.

For example, a value such as `25abc` may allow the integer extraction to succeed while leaving extra characters unread.

Complete input validation may require reading an entire line and parsing it.

---

## Module 4 Practice

- [ ] Create a `.cpp` file in VS Code.
- [ ] Compile a program.
- [ ] Run an executable.
- [ ] Enable compiler warnings.
- [ ] Fix a syntax error.
- [ ] Debug a logical error.
- [ ] Create a header file.
- [ ] Split a program into multiple source files.
- [ ] Validate user input.

---

# Module 5: Hands-on Course Project

**Estimated Duration:** 2 Hours

## 5.1 Project: The Kingdom of Code

### Project Description

You are developing a small fantasy adventure game.

The player creates a hero and battles a dragon.

The program must:

1. Ask for the hero's name.
2. Store the hero's health.
3. Store the dragon's health.
4. Allow the player to attack.
5. Allow the dragon to attack.
6. Repeat until the battle ends.
7. Display the winner.
8. Handle invalid menu choices.

### Concepts Used

- Variables
- Data types
- Input and output
- Functions
- Arithmetic operators
- Comparison operators
- Conditional statements
- Loops
- Input validation

---

## 5.2 Complete Project Code

```cpp
#include <iostream>
#include <string>
#include <limits>

// Display game introduction
void showIntroduction() {
    std::cout << "========================\n";
    std::cout << "   KINGDOM OF CODE\n";
    std::cout << "========================\n";
}

// Display current health values
void showStatus(int heroHealth, int dragonHealth) {
    std::cout << "\nHero Health: " << heroHealth << "\n";
    std::cout << "Dragon Health: " << dragonHealth << "\n";
}

// Read and validate a menu choice
int getChoice() {
    int choice{};

    while (true) {
        std::cout << "\n1. Attack\n";
        std::cout << "2. Heal\n";
        std::cout << "Choose an action: ";

        if (std::cin >> choice) {
            // Discard remaining characters on the input line
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            if (choice == 1 || choice == 2) {
                return choice;
            }
        } else {
            if (std::cin.eof()) {
                return 0;
            }

            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );
        }

        std::cout << "Invalid choice. Try again.\n";
    }
}

int main() {
    showIntroduction();

    std::string heroName;

    std::cout << "Enter your hero's name: ";
    std::getline(std::cin, heroName);

    if (heroName.empty()) {
        heroName = "Unknown Hero";
    }

    int heroHealth = 100;
    int dragonHealth = 100;

    const int ATTACK_DAMAGE = 25;
    const int DRAGON_DAMAGE = 15;
    const int HEAL_AMOUNT = 20;
    const int MAX_HEALTH = 100;

    std::cout << "\nWelcome, " << heroName << "!\n";
    std::cout << "A dragon appears!\n";

    while (heroHealth > 0 && dragonHealth > 0) {
        showStatus(heroHealth, dragonHealth);

        int choice = getChoice();

        if (choice == 0) {
            std::cout << "\nInput ended. Game cancelled.\n";
            return 1;
        }

        if (choice == 1) {
            dragonHealth -= ATTACK_DAMAGE;

            if (dragonHealth < 0) {
                dragonHealth = 0;
            }

            std::cout << "\nYou attacked the dragon!\n";
        } else {
            heroHealth += HEAL_AMOUNT;

            if (heroHealth > MAX_HEALTH) {
                heroHealth = MAX_HEALTH;
            }

            std::cout << "\nYou restored health!\n";
        }

        // The dragon attacks only if still alive
        if (dragonHealth > 0) {
            heroHealth -= DRAGON_DAMAGE;

            if (heroHealth < 0) {
                heroHealth = 0;
            }

            std::cout << "The dragon attacks!\n";
        }
    }

    std::cout << "\n========================\n";

    if (heroHealth > 0) {
        std::cout << "VICTORY! " << heroName
                  << " defeated the dragon!\n";
    } else {
        std::cout << "GAME OVER! The dragon wins.\n";
    }

    std::cout << "========================\n";

    return 0;
}
```

---

## 5.3 Example Gameplay

```text
========================
   KINGDOM OF CODE
========================

Enter your hero's name: Merlin

Welcome, Merlin!
A dragon appears!

Hero Health: 100
Dragon Health: 100

1. Attack
2. Heal
Choose an action: 1

You attacked the dragon!
The dragon attacks!

Hero Health: 85
Dragon Health: 75
```

The game continues until either the hero or dragon reaches zero health.

---

## 5.4 Project Explanation

### Variables

```cpp
int heroHealth = 100;
int dragonHealth = 100;
```

Store the health values.

### Constants

```cpp
const int ATTACK_DAMAGE = 25;
```

Stores a value that should not change during execution.

### Functions

```cpp
void showIntroduction()
```

Displays the game title.

```cpp
void showStatus(int heroHealth, int dragonHealth)
```

Displays current health values.

```cpp
int getChoice()
```

Reads and validates the player's action.

### Loop

```cpp
while (heroHealth > 0 && dragonHealth > 0)
```

Continues the battle while both characters are alive.

### Conditional Statements

```cpp
if (choice == 1)
```

Determines whether the player attacks or heals.

### Health Validation

```cpp
if (heroHealth < 0) {
    heroHealth = 0;
}
```

Prevents negative health values.

---

## 5.5 Project Improvement Challenges

### Beginner

- [ ] Add a third menu option to view character statistics.
- [ ] Add a quit option.
- [ ] Allow the player to choose a character name.
- [ ] Add a shield action.
- [ ] Add a victory counter.

### Intermediate

- [ ] Add random dragon damage.
- [ ] Add critical attacks.
- [ ] Add multiple enemies.
- [ ] Add an experience system.
- [ ] Add character levels.
- [ ] Add an inventory using `std::vector`.

### Advanced

- [ ] Save game progress to a file.
- [ ] Load saved progress.
- [ ] Separate code into multiple files.
- [ ] Add classes and objects.
- [ ] Create an enemy hierarchy using inheritance.

**Note:** The advanced tasks introduce concepts beyond the basic fundamentals covered here.

---

# Final Revision Guide

## Essential C++ Concepts

| Concept | What You Should Know |
|---------|----------------------|
| C++ | General-purpose compiled programming language |
| Syntax | Rules for writing valid programs |
| `main()` | Program entry point |
| `iostream` | Standard input/output stream facilities |
| `cout` | Display output |
| `cin` | Read input |
| Variable | Named storage for a value |
| Data Type | Defines the type of value |
| Constant | Value that cannot be modified after initialization |
| Operator | Performs an operation |
| `if` | Conditional execution |
| `switch` | Multi-way selection |
| `for` | Loop with initialization, condition, and update |
| `while` | Condition-controlled loop |
| `do-while` | Loop that executes at least once |
| Function | Reusable block of code |
| Array | Fixed-size sequence of same-type elements |
| Vector | Resizable sequence container |
| Compiler | Translates source code |
| Debugger | Helps inspect program execution |
| Robust Code | Code that safely handles unexpected conditions |

---

# Practice Questions

## Module 1

1. What is C++?
2. What is the purpose of `main()`?
3. What does `#include <iostream>` do?
4. What is the difference between `cin` and `cout`?
5. Why do C++ statements often end with semicolons?
6. What is a function?
7. What is the difference between a parameter and an argument?

## Module 2

1. What is a variable?
2. What is a data type?
3. What is the difference between `int` and `double`?
4. What does `const` mean?
5. What is type conversion?
6. What is variable scope?
7. What is an array?
8. What is a vector?

## Module 3

1. What is an arithmetic operator?
2. What is the difference between `=` and `==`?
3. What does `&&` mean?
4. What does `||` mean?
5. What is an `if` statement?
6. What is a `switch` statement?
7. What is the difference between `for` and `while`?
8. What is the purpose of `break`?
9. What is the purpose of `continue`?

## Module 4

1. What is a compiler?
2. What is compilation?
3. What is linking?
4. What is an executable?
5. What is a syntax error?
6. What is a logical error?
7. What is debugging?
8. What is a breakpoint?
9. Why are header files useful?
10. What makes code robust?

## Module 5

1. How do functions improve a project?
2. Why should user input be validated?
3. How do loops control gameplay?
4. How can constants prevent accidental changes?
5. How can a program avoid negative health values?
6. How would you extend the project using OOP?

---

# Common Beginner Mistakes

## Mistake 1: Missing Semicolon

Incorrect:

```cpp
int age = 25
```

Correct:

```cpp
int age = 25;
```

## Mistake 2: Using Assignment Instead of Comparison

Incorrect:

```cpp
if (age = 18)
```

Correct:

```cpp
if (age == 18)
```

## Mistake 3: Integer Division

```cpp
int result = 5 / 2;
```

Result:

```text
2
```

Use floating-point division when needed:

```cpp
double result = 5.0 / 2;
```

## Mistake 4: Uninitialized Variables

Avoid:

```cpp
int health;
std::cout << health;
```

Prefer:

```cpp
int health{100};
```

## Mistake 5: Infinite Loops

```cpp
int i = 0;

while (i < 5) {
    std::cout << i;
}
```

The condition never changes.

Correct:

```cpp
int i = 0;

while (i < 5) {
    std::cout << i;
    i++;
}
```

---

# Final Learning Checklist

## Module 1

- [ ] I understand basic C++ syntax.
- [ ] I can write a Hello World program.
- [ ] I understand `main()`.
- [ ] I can use `cin` and `cout`.
- [ ] I can create simple functions.

## Module 2

- [ ] I understand variables.
- [ ] I can choose appropriate data types.
- [ ] I understand constants.
- [ ] I understand type conversion.
- [ ] I can use arrays and vectors.

## Module 3

- [ ] I understand arithmetic operators.
- [ ] I can write conditional statements.
- [ ] I understand logical operators.
- [ ] I can use `switch`.
- [ ] I can write `for` loops.
- [ ] I can write `while` loops.
- [ ] I understand `break` and `continue`.

## Module 4

- [ ] I can create a C++ source file.
- [ ] I can compile and run C++ programs.
- [ ] I understand compilation and linking.
- [ ] I can identify common errors.
- [ ] I can use debugging tools.
- [ ] I understand basic input validation.

## Module 5

- [ ] I completed the fantasy game.
- [ ] I understand the code.
- [ ] I tested different user inputs.
- [ ] I fixed errors independently.
- [ ] I added at least one new feature.
- [ ] I can explain the program to someone else.

---

# My Personal Learning Journal

## Concepts I Understand

-

## Concepts I Need to Revise

-

## Questions I Have

-

## Errors I Encountered

-

## New Things I Learned

-

## Practice Programs I Completed

- [ ] Hello World
- [ ] User Greeting
- [ ] Simple Calculator
- [ ] Age Verification
- [ ] Grade Calculator
- [ ] Number Guessing Game
- [ ] Character Statistics
- [ ] Fantasy Battle Game

---

# Final Thoughts

Learning C++ is like building a kingdom.

- **Variables** store your kingdom's resources.
- **Data types** define what those resources are.
- **Operators** perform calculations.
- **Conditions** make decisions.
- **Loops** repeat actions.
- **Functions** organize reusable instructions.
- **Compilation** transforms your code into a runnable program.
- **Debugging** helps find and fix problems.

The goal is not simply to memorize syntax.

The goal is to understand how individual concepts work together to solve real problems.
