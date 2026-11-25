# Object-Oriented Programming with C++ — Study Notes

**Course:** Microsoft — Object-Oriented Programming with C++  
**Platform:** Coursera  
**Total Duration:** 38 Hours

---

## Course Progress

- [ ] Module 1: Classes and Objects
- [ ] Module 2: References, Pointers, and Memory Management
- [ ] Module 3: Inheritance and Polymorphism
- [ ] Module 4: Error Handling, Debugging, and Code Review
- [ ] Module 5: Hands-on Course Project

---

# Module 1: Classes and Objects

## 1.1 What is Object-Oriented Programming?

Object-Oriented Programming (OOP) is a programming approach that organizes code using objects.

An object combines:
- Data (attributes)
- Functions (methods)

### Four Main Principles of OOP

1. Encapsulation — Protecting data inside a class.
2. Abstraction — Hiding unnecessary implementation details.
3. Inheritance — Creating new classes from existing classes.
4. Polymorphism — Allowing different objects to use a common interface.

## 1.2 Classes and Objects

**Class:** A blueprint for creating objects.

**Object:** An instance of a class.

### Example

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " is " << age << " years old.";
    }
};

int main() {
    Student s1;

    s1.name = "Alex";
    s1.age = 22;

    s1.display();

    return 0;
}
```

### Output

```text
Alex is 22 years old.
```

## 1.3 Access Specifiers

| Specifier | Description |
|-----------|-------------|
| public | Accessible outside the class |
| private | Accessible within the class and friends |
| protected | Accessible within the class, friends, and derived classes |

## 1.4 Constructors

A constructor is a special function called when an object is created.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car object created!";
    }
};

int main() {
    Car c1;
    return 0;
}
```

### Types of Constructors

- Default constructor
- Parameterized constructor
- Copy constructor

## 1.5 Encapsulation

Encapsulation protects internal data by controlling access.

```cpp
class BankAccount {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};
```

## Classes, Objects, and Constructors

### 1.1 Example: Fantasy Game Character System

**Concepts covered:**
- Classes and Objects
- Private and Public Access Specifiers
- Attributes (Data Members)
- Constructors
- Methods (Member Functions)
- Encapsulation
- Object Initialization

### 1.2 Complete C++ Code

```cpp
#include <iostream>  // Input and output operations
#include <string>    // String data type

// 1. CLASS DEFINITION
// A class is a blueprint for creating objects.

class Character {

    // 2. PRIVATE ATTRIBUTES
    // These variables cannot be accessed directly outside the class.

private:
    int health_;         // Character's health points
    std::string name_;   // Character's name
    int level_;          // Character's level

    // 3. PUBLIC MEMBERS
    // These can be accessed outside the class.

public:

    // 4. CONSTRUCTOR
    // Automatically called when a Character object is created.

    Character(int health, std::string name, int level) {
        health_ = health;
        name_ = name;
        level_ = level;
    }

    // 5. MEMBER FUNCTION (METHOD)
    // Displays the character's information.

    void displayInfo() {
        std::cout << name_ << " " << health_ << " " << level_;
    }
};

// 6. MAIN FUNCTION
// Program execution starts here.

int main() {

    // 7. OBJECT CREATION
    // Three objects created using the Character class.

    Character mage(60, "Merlin", 4);
    Character knight(120, "Arthur", 7);
    Character archer(80, "Robin", 5);

    // 8. CALLING METHODS
    // The dot (.) operator accesses public class members.

    knight.displayInfo();
    std::cout << " | ";

    mage.displayInfo();
    std::cout << " | ";

    archer.displayInfo();

    return 0;  // Program completed successfully
}
```

### 1.3 Expected Output

```text
Arthur 120 7 | Merlin 60 4 | Robin 80 5
```

---

### 1.4 Code Explanation

| Label | Concept | Explanation |
|-------|---------|-------------|
| 1 | Class | Blueprint used to create objects |
| 2 | Private Attributes | Store data that cannot be directly accessed outside the class |
| 3 | Public Members | Accessible from outside the class |
| 4 | Constructor | Initializes an object when it is created |
| 5 | Method | Function that belongs to a class |
| 6 | Main Function | Entry point of the program |
| 7 | Object Creation | Creates instances of the Character class |
| 8 | Method Calling | Executes a public method using an object |

---

### 1.5 Important Terminology

**Class:** A blueprint for creating objects.

**Object:** An instance of a class.

**Attribute:** A variable that belongs to a class.

**Method:** A function that belongs to a class.

**Constructor:** A special member function used to initialize objects.

**Encapsulation:** Bundling data and methods together while controlling access to internal data.

**Access Specifier:** A keyword that controls the accessibility of class members.

**Instance:** Another name for an object created from a class.

---

### 1.6 Understanding Object Initialization

```cpp
Character mage(60, "Merlin", 4);
```

| Parameter | Value | Attribute |
|-----------|-------|-----------|
| health | 60 | health_ |
| name | "Merlin" | name_ |
| level | 4 | level_ |

When the object is created:

1. The constructor is called automatically.
2. The values are passed as arguments.
3. The constructor assigns values to the object's attributes.
4. The object is ready to use.

---

### 1.7 Important C++ Syntax

| Syntax | Meaning |
|--------|---------|
| `class` | Declares a class |
| `private:` | Restricts access to class members |
| `public:` | Allows external access to class members |
| `Character(...)` | Constructor |
| `void` | Function does not return a value |
| `std::string` | String data type |
| `std::cout` | Prints output |
| `.` | Accesses an object's public members |
| `return 0;` | Indicates successful program completion |
| `};` | Ends a class definition |

---

### 1.8 Practice Questions

1. What is the difference between a class and an object?
2. Why are `health_`, `name_`, and `level_` private?
3. What happens when the constructor is called?
4. What is the purpose of `displayInfo()`?
5. Why do we use the dot (`.`) operator?
6. How many objects are created in this program?
7. What happens if we change Merlin's health to 100?
8. Can we access `mage.health_` directly from `main()`? Why?

---

### 1.9 Practice Tasks

- [ ] Create another character called `wizard`.
- [ ] Change the health and level of existing characters.
- [ ] Add a new private attribute called `attackPower_`.
- [ ] Create a method called `displayLevel()`.
- [ ] Modify `displayInfo()` to display labels such as Name, Health, and Level.
- [ ] Create a `takeDamage()` method that reduces health without allowing negative values.

---

### 1.10 Key Takeaways

- A class defines the structure and behavior of objects.
- Objects are created from classes.
- Constructors initialize objects automatically.
- Private attributes help protect internal data.
- Public methods provide controlled access to functionality.
- Multiple objects can be created from the same class.
- Each object maintains its own attribute values.

**Topic:** Classes, Objects, Constructors, and Encapsulation  
**Course:** Microsoft Object-Oriented Programming with C++  
**Module:** 1 — Classes and Objects

### Practice Questions

1. What is OOP?
2. What is the difference between a class and an object?
3. What is a constructor?
4. What are access specifiers?
5. Why is encapsulation important?

---

# Module 2: References, Pointers, and Memory Management

## 2.1 Pointers

A pointer is a variable that stores the memory address of another variable.

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int* ptr = &number;

    cout << number << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}
```

### Important Operators

| Operator | Meaning |
|----------|---------|
| & | Address-of operator |
| * | Pointer declaration or dereference |
| nullptr | Null pointer value |

## 2.2 References

A reference is another name for an existing variable.

```cpp
int number = 10;
int& ref = number;

ref = 20;

// number is now 20
```

## 2.3 Pointer vs Reference

| Pointer | Reference |
|---------|-----------|
| Stores an address | Acts as an alias |
| Can be null | Must normally refer to a valid object |
| Can be reassigned | Cannot be reseated |
| Requires dereferencing | Accessed directly |

## 2.4 Dynamic Memory Allocation

C++ supports dynamic memory allocation using `new` and `delete`.

```cpp
int* number = new int(50);

cout << *number;

delete number;
number = nullptr;
```

### Common Memory Problems

- Memory leaks
- Dangling pointers
- Double deletion
- Invalid memory access

## 2.5 Smart Pointers

Modern C++ provides smart pointers for safer memory management.

Types:
- unique_ptr
- shared_ptr
- weak_ptr

### Example

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> number = make_unique<int>(100);

    cout << *number;

    return 0;
}
```

### Practice Questions

1. What is a pointer?
2. What is a reference?
3. What does the `&` operator do?
4. What is a memory leak?
5. Why are smart pointers useful?

---

# Module 3: Inheritance and Polymorphism

## 3.1 Inheritance

Inheritance allows a derived class to reuse functionality from a base class.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking";
    }
};

int main() {
    Dog d;

    d.eat();
    d.bark();

    return 0;
}
```

### Types of Inheritance

1. Single inheritance
2. Multiple inheritance
3. Multilevel inheritance
4. Hierarchical inheritance
5. Hybrid inheritance

## 3.2 Polymorphism

Polymorphism means many forms.

It allows functions or objects to behave differently depending on their types.

### Types

- Compile-time polymorphism
- Runtime polymorphism

## 3.3 Function Overloading

Multiple functions can have the same name but different parameters.

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
```

## 3.4 Function Overriding

A derived class provides its own implementation of a virtual function.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};

int main() {
    Dog d;
    Animal& animal = d;

    animal.sound();

    return 0;
}
```

### Output

```text
Bark
```

## 3.5 Abstract Classes

An abstract class contains at least one pure virtual function.

```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};
```

### Practice Questions

1. What is inheritance?
2. What is a base class?
3. What is a derived class?
4. What is polymorphism?
5. What is the difference between overloading and overriding?

---

# Module 4: Error Handling, Debugging, and Code Review

## 4.1 Types of Programming Errors

### Syntax Errors
Errors caused by incorrect language syntax.

### Runtime Errors
Errors occurring during program execution.

### Logical Errors
The program runs but produces incorrect results.

## 4.2 Exception Handling

C++ uses:

- try
- throw
- catch

### Example

```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int age = -5;

        if (age < 0) {
            throw invalid_argument("Invalid age");
        }
    }
    catch (const exception& e) {
        cout << e.what();
    }

    return 0;
}
```

### Output

```text
Invalid age
```

## 4.3 Debugging

Debugging is the process of finding and fixing errors.

### Debugging Steps

1. Identify the error.
2. Reproduce the problem.
3. Use breakpoints.
4. Inspect variable values.
5. Fix the problem.
6. Test the program again.

## 4.4 Code Review

Code review examines code for quality, correctness, and maintainability.

### Checklist

- [ ] Code compiles successfully.
- [ ] Variable names are meaningful.
- [ ] Functions are organized.
- [ ] Errors are handled.
- [ ] Memory is managed safely.
- [ ] Code is readable.
- [ ] Important cases are tested.

### Practice Questions

1. What is debugging?
2. What is exception handling?
3. What is the purpose of `try`?
4. What does `catch` do?
5. Why is code review important?

---

# Module 5: Hands-on Course Project

## Personal Project: Mini SIEM Engine

**Project Goal:** Build a simple log analyzer using C++ and object-oriented programming.

### Main Features

- Read log files.
- Identify suspicious events.
- Detect failed login attempts.
- Generate alerts.
- Handle invalid files.
- Display detection results.

## Suggested Classes

| Class | Responsibility |
|-------|----------------|
| LogEntry | Store log information |
| LogParser | Read and parse logs |
| DetectionRule | Define detection behavior |
| DetectionEngine | Apply detection rules |
| Alert | Store security alerts |

## Starter Example

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class LogAnalyzer {
public:
    void analyze(const string& log) {
        if (log.find("FAILED_LOGIN") != string::npos) {
            cout << "[ALERT] Suspicious login detected!" << endl;
        }
    }
};

int main() {
    LogAnalyzer analyzer;

    analyzer.analyze("FAILED_LOGIN user=admin");

    return 0;
}
```

### Expected Output

```text
[ALERT] Suspicious login detected!
```

## Project Checklist

- [ ] Create project folder.
- [ ] Create main.cpp.
- [ ] Implement classes.
- [ ] Add file reading.
- [ ] Implement detection rules.
- [ ] Add error handling.
- [ ] Test with sample logs.
- [ ] Create README.md.
- [ ] Upload project to GitHub.

---

# Final Revision Checklist

- [ ] Understand classes and objects.
- [ ] Understand encapsulation.
- [ ] Understand constructors.
- [ ] Understand pointers.
- [ ] Understand references.
- [ ] Understand dynamic memory.
- [ ] Understand inheritance.
- [ ] Understand polymorphism.
- [ ] Understand exception handling.
- [ ] Understand debugging.
- [ ] Complete a C++ OOP project.

---

# My Personal Notes

## Concepts I Need to Revise

-

## Questions I Have

-

## Coding Mistakes I Made

-

## Things I Learned

-

---

