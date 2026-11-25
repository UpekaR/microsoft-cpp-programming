# C++ Standard Library Headers

## 1. What Are Headers in C++?

Headers are files that provide declarations of functions, classes, and other features we can use in C++ programs.

We include headers using the `#include` directive.

### Syntax

```cpp
#include <header_name>
```

### Example

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Merlin";
    cout << "Hello, " << name << endl;

    return 0;
}
```

**Output:**
```text
Hello, Merlin
```

---

## 2. Common C++ Standard Library Headers

```cpp
// ========================================
// INPUT, OUTPUT & FORMATTING
// ========================================

#include <iostream>     // Input and output: cin, cout, cerr
#include <iomanip>      // Output formatting: setw, setprecision
#include <fstream>      // File reading and writing
#include <sstream>      // String stream operations

// ========================================
// STRINGS & CHARACTERS
// ========================================

#include <string>       // String manipulation
#include <cctype>       // Character functions: toupper, tolower

// ========================================
// MATHEMATICS & NUMBERS
// ========================================

#include <cmath>        // Mathematical functions: sqrt, pow
#include <cstdlib>      // General utilities: rand, abs
#include <numeric>      // Numeric operations: accumulate
#include <random>       // Random number generation
#include <limits>       // Numeric limits

// ========================================
// ALGORITHMS
// ========================================

#include <algorithm>    // Sorting, searching, reversing
#include <functional>   // Function objects
#include <iterator>     // Iterator utilities

// ========================================
// DATA STRUCTURES
// ========================================

#include <vector>       // Dynamic arrays
#include <array>        // Fixed-size arrays
#include <map>          // Key-value pairs
#include <set>          // Collections of unique values
#include <queue>        // Queue and priority queue
#include <stack>        // Stack data structure
#include <deque>        // Double-ended queue
#include <list>         // Doubly linked list
#include <tuple>        // Store multiple values together
#include <utility>      // Pairs, move, swap

// ========================================
// MEMORY & ERROR HANDLING
// ========================================

#include <memory>       // Smart pointers and memory management
#include <stdexcept>    // Exception handling

// ========================================
// TIME & MULTITHREADING
// ========================================

#include <ctime>        // C-style date and time utilities
#include <chrono>       // Time measurement
#include <thread>       // Multithreading
#include <mutex>        // Thread synchronization

// ========================================
// FILESYSTEM
// ========================================

#include <filesystem>   // File and directory operations (C++17)
```

---

## 3. Most Important Headers for Beginners

| Header | Purpose | Example |
|---|---|---|
| `<iostream>` | Input and output | `cin`, `cout` |
| `<iomanip>` | Format output | `setprecision(2)` |
| `<string>` | Store and manipulate text | `string name` |
| `<algorithm>` | Sort, search, reverse | `sort()`, `reverse()` |
| `<cmath>` | Mathematical calculations | `sqrt()`, `pow()` |
| `<cctype>` | Character manipulation | `toupper()`, `tolower()` |
| `<vector>` | Dynamic arrays | `vector<int>` |
| `<fstream>` | File handling | `ifstream`, `ofstream` |
| `<limits>` | Numeric limits | `numeric_limits<int>::max()` |
| `<random>` | Random number generation | `mt19937` |

---

## 4. Practical Examples

### Example 1: `<iostream>` — Input and Output

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is " << age << endl;

    return 0;
}
```

### Example 2: `<iomanip>` — Formatting Numbers

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 25.5678;

    cout << fixed << setprecision(2);
    cout << price << endl;

    return 0;
}
```

**Output:**
```text
25.57
```

### Example 3: `<string>` — Working with Text

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Kai";
    string lastName = "Tove";

    string fullName = firstName + " " + lastName;

    cout << fullName << endl;

    return 0;
}
```

**Output:**
```text
Kai Tove
```

### Example 4: `<algorithm>` — Reversing a String

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name = "Merlin";

    reverse(name.begin(), name.end());

    cout << name << endl;

    return 0;
}
```

**Output:**
```text
nilreM
```

### Example 5: `<cmath>` — Mathematical Functions

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << sqrt(25) << endl;
    cout << pow(2, 3) << endl;

    return 0;
}
```

**Output:**
```text
5
8
```

### Example 6: `<cctype>` — Uppercase and Lowercase

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letter = 'a';

    cout << char(toupper(letter)) << endl;
    cout << char(tolower('B')) << endl;

    return 0;
}
```

**Output:**
```text
A
b
```

### Example 7: `<vector>` — Dynamic Arrays

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores = {80, 90, 95};

    scores.push_back(100);

    for (int score : scores) {
        cout << score << " ";
    }

    return 0;
}
```

**Output:**
```text
80 90 95 100
```

### Example 8: `<fstream>` — Writing to a File

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");

    if (file.is_open()) {
        file << "Learning C++!";
        file.close();

        cout << "File created successfully!" << endl;
    }

    return 0;
}
```

This creates a file named `notes.txt` containing:

```text
Learning C++!
```

---

## 5. Important Things to Remember

1. `#include` tells the compiler to include a header.
2. Standard library headers are usually written inside angle brackets `< >`.
3. Each header provides different functions, classes, or utilities.
4. You do not need to include every header in every program.
5. Include only the headers required by your code.
6. Some headers require a specific C++ version, such as `<filesystem>` (C++17).
7. `using namespace std;` allows us to write `cout` instead of `std::cout`, but it is not required and is generally better avoided in large projects.

---

## 6. Recommended Learning Order

- [ ] `<iostream>` — Input and output
- [ ] `<string>` — Working with text
- [ ] `<iomanip>` — Output formatting
- [ ] `<cmath>` — Mathematical operations
- [ ] `<cctype>` — Character manipulation
- [ ] `<algorithm>` — Algorithms
- [ ] `<vector>` — Dynamic arrays
- [ ] `<fstream>` — File handling
- [ ] `<map>` — Key-value pairs
- [ ] `<memory>` — Memory management
- [ ] `<stdexcept>` — Exception handling

---

## 7. Quick Revision

**Q1. What is a header in C++?**

A header provides declarations of functions, classes, and other features that can be used in a program.

**Q2. Which header is used for input and output?**

`<iostream>`

**Q3. Which header provides `setprecision()`?**

`<iomanip>`

**Q4. Which header provides `sort()` and `reverse()`?**

`<algorithm>`

**Q5. Which header provides `toupper()` and `tolower()`?**

`<cctype>`

**Q6. Which header is used to read and write files?**

`<fstream>`

**Q7. What is the difference between `<array>` and `<vector>`?**

- `<array>` stores a fixed number of elements.
- `<vector>` can grow or shrink dynamically.

**Q8. Do we need to memorize every C++ header?**

No. Understand their purposes and learn to look up the headers needed for your programs.

---

**Summary:** C++ Standard Library headers provide reusable tools that help us write programs without implementing everything from scratch.