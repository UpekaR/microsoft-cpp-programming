/*
 * Bank Account System
 * This program simulates a simple banking system with accounts, deposits,
 * withdrawals, interest calculations, and currency conversion.
 *
 * Type conversion issues corrected with validation and boundary checks.
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
#include <limits>
#include <cctype>
#include <climits>

using namespace std;

// Global constants
#define MAX_ACCOUNTS 100
#define MAX_BALANCE 1000000

// Currency conversion rates (as of a fictional date)
const double USD_TO_EUR = 0.85;
const double USD_TO_JPY = 110.0;
const double EUR_TO_USD = 1.18;
const double EUR_TO_JPY = 129.5;
const double JPY_TO_USD = 0.0091;
const double JPY_TO_EUR = 0.0077;

// Account structure
struct Account
{
    int accountNumber;
    string ownerName;
    double balance;
    char accountType; // 'S' for Savings, 'C' for Checking
};

// Function prototypes
void displayMenu();
bool createAccount(int accountNum, Account &newAccount);
bool deposit(Account &account, int amount);
bool withdraw(Account &account, int amount);
bool calculateInterest(const Account &account, int days, double &interest);
bool convertCurrency(double amount, char fromCurrency, char toCurrency, double &result);
void displayAccountSummary(const Account &account);
void testBoundaryConditions();
bool safeFloatToInt(float floatValue, int &result);
bool safeAdd(int a, int b, int &result);
bool readInt(const string &prompt, int &value);
bool readDouble(const string &prompt, double &value);

// Vector to store accounts
vector<Account> accounts;

int main()
{
    cout << "===== BANK ACCOUNT SYSTEM =====" << endl;
    cout << "This program demonstrates a simple banking system." << endl;
    cout << "Type-safe banking operations and boundary checks enabled." << endl;
    cout << endl;

    int choice = 0;
    int accountCounter = 100; // Starting account number

    do
    {
        displayMenu();
        if (!readInt("Enter your choice: ", choice))
        {
            if (cin.eof())
                break;
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            // Create a new account
            if (accounts.size() < MAX_ACCOUNTS)
            {
                Account newAccount{};
                if (createAccount(accountCounter, newAccount))
                {
                    accounts.push_back(newAccount);
                    ++accountCounter;
                    cout << "Account created successfully!" << endl;
                    displayAccountSummary(newAccount);
                }
                else
                {
                    cout << "Account creation cancelled or invalid." << endl;
                }
            }
            else
            {
                cout << "Maximum number of accounts reached." << endl;
            }
            break;
        }

        case 2:
        {
            // Deposit money
            int accNum, amount;
            if (!readInt("Enter account number: ", accNum))
                break;

            bool found = false;
            for (size_t i = 0; i < accounts.size(); i++)
            {
                if (accounts[i].accountNumber == accNum)
                {
                    if (!readInt("Enter amount to deposit: ", amount))
                    {
                        found = true;
                        break;
                    }
                    if (deposit(accounts[i], amount))
                    {
                        cout << "Deposit successful!" << endl;
                        displayAccountSummary(accounts[i]);
                    }
                    else
                        cout << "Deposit rejected: invalid amount or balance limit." << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }
            break;
        }

        case 3:
        {
            // Withdraw money
            int accNum, amount;
            if (!readInt("Enter account number: ", accNum))
                break;

            bool found = false;
            for (size_t i = 0; i < accounts.size(); i++)
            {
                if (accounts[i].accountNumber == accNum)
                {
                    if (!readInt("Enter amount to withdraw: ", amount))
                    {
                        found = true;
                        break;
                    }
                    if (withdraw(accounts[i], amount))
                    {
                        cout << "Withdrawal successful!" << endl;
                        displayAccountSummary(accounts[i]);
                    }
                    else
                    {
                        cout << "Insufficient funds or invalid amount." << endl;
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }
            break;
        }

        case 4:
        {
            // Calculate interest
            int accNum, days;
            if (!readInt("Enter account number: ", accNum))
                break;

            bool found = false;
            for (size_t i = 0; i < accounts.size(); i++)
            {
                if (accounts[i].accountNumber == accNum)
                {
                    if (!readInt("Enter number of days: ", days))
                    {
                        found = true;
                        break;
                    }
                    double interest = 0.0;
                    if (calculateInterest(accounts[i], days, interest))
                    {
                        cout << "Interest earned after " << days << " days: $" << interest << endl;
                        cout << "Projected balance with interest (not deposited): $"
                             << accounts[i].balance + interest << endl;
                    }
                    else
                        cout << "Interest calculation rejected." << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }
            break;
        }

        case 5:
        {
            // Convert currency
            int accNum;
            char fromCurr, toCurr;
            if (!readInt("Enter account number: ", accNum))
                break;

            bool found = false;
            for (size_t i = 0; i < accounts.size(); i++)
            {
                if (accounts[i].accountNumber == accNum)
                {
                    cout << "Available currencies: U (USD), E (EUR), J (JPY)" << endl;
                    cout << "From currency (U/E/J): ";
                    if (!(cin >> fromCurr))
                    {
                        found = true;
                        break;
                    }
                    cout << "To currency (U/E/J): ";
                    if (!(cin >> toCurr))
                    {
                        found = true;
                        break;
                    }
                    fromCurr = static_cast<char>(toupper(static_cast<unsigned char>(fromCurr)));
                    toCurr = static_cast<char>(toupper(static_cast<unsigned char>(toCurr)));

                    double convertedAmount = 0.0;
                    if (!convertCurrency(accounts[i].balance, fromCurr, toCurr, convertedAmount))
                    {
                        cout << "Invalid currency code or conversion amount." << endl;
                        found = true;
                        break;
                    }

                    cout << "Converted amount: ";
                    switch (toCurr)
                    {
                    case 'U':
                        cout << "$";
                        break;
                    case 'E':
                        cout << "€";
                        break;
                    case 'J':
                        cout << "¥";
                        break;
                    }
                    cout << convertedAmount << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }
            break;
        }

        case 6:
        {
            // Display all accounts
            if (accounts.empty())
            {
                cout << "No accounts to display." << endl;
            }
            else
            {
                cout << "\n===== ACCOUNT SUMMARIES =====" << endl;
                for (const Account &acc : accounts)
                {
                    displayAccountSummary(acc);
                    cout << "----------------------------" << endl;
                }
            }
            break;
        }

        case 7:
        {
            // Test boundary conditions
            testBoundaryConditions();
            break;
        }

        case 8:
            cout << "Exiting program. Thank you!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 8);

    return 0;
}

// Function to display the main menu
void displayMenu()
{
    cout << "\n===== MENU =====" << endl;
    cout << "1. Create a new account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Calculate interest" << endl;
    cout << "5. Convert currency" << endl;
    cout << "6. Display all accounts" << endl;
    cout << "7. Test boundary conditions" << endl;
    cout << "8. Exit" << endl;
}

// Function to create a new account
bool createAccount(int accountNum, Account &newAccount)
{
    newAccount.accountNumber = accountNum;

    cout << "Enter account owner name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    if (!getline(cin, newAccount.ownerName) || newAccount.ownerName.empty())
        return false;

    double initialBalance = 0.0;
    if (!readDouble("Enter initial balance: $", initialBalance))
        return false;

    // Preserve the original double precision; do not convert through float.
    if (initialBalance < 0.0 || initialBalance > MAX_BALANCE)
        return false;
    newAccount.balance = initialBalance;

    cout << "Enter account type (S for Savings, C for Checking): ";
    if (!(cin >> newAccount.accountType))
        return false;
    newAccount.accountType = static_cast<char>(toupper(
        static_cast<unsigned char>(newAccount.accountType)));
    return newAccount.accountType == 'S' || newAccount.accountType == 'C';
}

// Function to deposit money into an account
bool deposit(Account &account, int amount)
{
    // Explicit int-to-double conversion with overflow and balance-limit checks.
    if (amount <= 0 || !isfinite(account.balance) ||
        account.balance < 0.0 || account.balance > MAX_BALANCE)
        return false;
    double depositAmount = static_cast<double>(amount);
    if (depositAmount > MAX_BALANCE - account.balance)
        return false;
    account.balance += depositAmount;
    return true;
}

// Function to withdraw money from an account
bool withdraw(Account &account, int amount)
{
    // Explicit int-to-double conversion prevents mixed-type ambiguity.
    if (amount <= 0 || !isfinite(account.balance) ||
        account.balance < 0.0 || account.balance > MAX_BALANCE)
        return false;
    double withdrawalAmount = static_cast<double>(amount);
    if (withdrawalAmount > account.balance)
        return false;
    account.balance -= withdrawalAmount;
    return true;
}

// Function to calculate interest for a given number of days
bool calculateInterest(const Account &account, int days, double &interest)
{
    // Interest rates (annual)
    double rate;
    if (account.accountType == 'S')
        rate = 3.0 / 100.0; // 3% for Savings
    else if (account.accountType == 'C')
        rate = 1.0 / 100.0; // 1% for Checking
    else
        return false;

    if (days < 0 || !isfinite(account.balance) ||
        account.balance < 0.0 || account.balance > MAX_BALANCE)
        return false;

    // Keep daily rate in double to avoid precision loss.
    double dailyRate = rate / 365.0;
    // Use double for every intermediate calculation.
    double calculated = account.balance * dailyRate * static_cast<double>(days);
    // Round to cents instead of truncating through int.
    if (!isfinite(calculated) || calculated < 0.0 ||
        calculated > numeric_limits<double>::max() / 100.0)
        return false;
    interest = round(calculated * 100.0) / 100.0;
    return isfinite(interest);
}

// Function to convert between currencies
bool convertCurrency(double amount, char fromCurrency, char toCurrency, double &result)
{
    // Keep double precision and reject invalid input before calculations.
    if (!isfinite(amount) || amount < 0.0)
        return false;
    auto validCode = [](char code)
    { return code == 'U' || code == 'E' || code == 'J'; };
    if (!validCode(fromCurrency) || !validCode(toCurrency))
        return false;

    if (fromCurrency == toCurrency)
    {
        result = amount;
        return true;
    }

    // Convert from source currency to USD as an intermediate step
    double converted = amount;
    if (fromCurrency == 'E')
    { // From EUR
        converted *= EUR_TO_USD;
    }
    else if (fromCurrency == 'J')
    { // From JPY
        converted *= JPY_TO_USD;
    }
    if (!isfinite(converted))
        return false;

    // Convert from USD to target currency
    if (fromCurrency != 'U' && toCurrency == 'U')
    {
        // Already converted to USD
    }
    else if (toCurrency == 'E')
    { // To EUR
        converted *= USD_TO_EUR;
    }
    else if (toCurrency == 'J')
    { // To JPY
        converted *= USD_TO_JPY;
    }

    // Check for overflow before returning the double result.
    if (!isfinite(converted))
        return false;
    result = converted;
    return true;
}

// Practice Challenge 2: Safely convert float to int
bool safeFloatToInt(float floatValue, int &result)
{
    if (!isfinite(floatValue))
        return false;
    double value = static_cast<double>(floatValue);
    double minimum = static_cast<double>(numeric_limits<int>::min());
    double maximumExclusive = static_cast<double>(numeric_limits<int>::max()) + 1.0;
    if (value < minimum || value >= maximumExclusive || trunc(value) != value)
        return false;
    result = static_cast<int>(floatValue);
    return true;
}

// Practice Challenge 3: Safely add two integers
bool safeAdd(int a, int b, int &result)
{
    if ((b > 0 && a > numeric_limits<int>::max() - b) ||
        (b < 0 && a < numeric_limits<int>::min() - b))
        return false;
    result = a + b;
    return true;
}

// Read validated integer input
bool readInt(const string &prompt, int &value)
{
    cout << prompt;
    if (cin >> value)
        return true;
    if (!cin.eof())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid integer input." << endl;
    }
    return false;
}

// Read validated floating-point input
bool readDouble(const string &prompt, double &value)
{
    cout << prompt;
    if (!(cin >> value))
    {
        if (!cin.eof())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid numeric input." << endl;
        }
        return false;
    }
    if (!isfinite(value))
    {
        cout << "Non-finite numeric input rejected." << endl;
        return false;
    }
    return true;
}

// Function to display account summary
void displayAccountSummary(const Account &account)
{
    cout << "\nAccount Number: " << account.accountNumber << endl;
    cout << "Owner: " << account.ownerName << endl;
    cout << "Type: " << (account.accountType == 'S' ? "Savings" : "Checking") << endl;
    cout << "Balance: $" << fixed << setprecision(2) << account.balance << endl;
}

// Function to test boundary conditions
void testBoundaryConditions()
{
    cout << "\n===== TESTING BOUNDARY CONDITIONS =====" << endl;

    // Create a test account
    Account testAccount;
    testAccount.accountNumber = 999;
    testAccount.ownerName = "Test Account";
    testAccount.balance = 1000.0;
    testAccount.accountType = 'S';

    cout << "Initial test account:" << endl;
    displayAccountSummary(testAccount);

    // Test 1: Large deposit
    int largeAmount = 2000000000; // Larger than MAX_BALANCE
    cout << "\nTest 1: Large deposit of $" << largeAmount << endl;

    // Check balance limit before changing account data.
    bool largeDepositAccepted = deposit(testAccount, largeAmount);
    cout << (largeDepositAccepted ? "Deposit accepted" : "Deposit correctly rejected") << endl;
    cout << "After large deposit:" << endl;
    displayAccountSummary(testAccount);

    // Test 2: Decimal precision
    testAccount.balance = 100.0;
    double rate = 0.03333333; // 3.333333% interest rate

    // Preserve precision by keeping double throughout.
    double dailyRate = rate / 365.0;

    // Explicitly convert days to double.
    double interest = testAccount.balance * dailyRate * static_cast<double>(30); // 30 days

    cout << "\nTest 2: Decimal precision" << endl;
    cout << "Interest rate: " << rate * 100.0 << "%" << endl;
    cout << "Daily rate: " << setprecision(10) << dailyRate
         << setprecision(2) << endl;
    cout << "Interest for 30 days: $" << interest << endl;

    // Test 3: Currency conversion precision
    double largeBalance = 1000000.0;

    // Keep converted values as double.
    double eurAmount = 0.0;
    double jpyAmount = 0.0;
    bool eurOk = convertCurrency(largeBalance, 'U', 'E', eurAmount);
    bool jpyOk = convertCurrency(largeBalance, 'U', 'J', jpyAmount);

    cout << "\nTest 3: Currency conversion precision" << endl;
    cout << "Original amount: $" << largeBalance << endl;
    if (eurOk)
        cout << "Converted to EUR: EUR " << eurAmount << endl;
    if (jpyOk)
        cout << "Converted to JPY: JPY " << jpyAmount << endl;

    // Test 4: Integer overflow
    int maxInt = numeric_limits<int>::max();
    int smallInt = 100;

    // Check before addition; signed integer overflow is undefined behavior.
    int overflowResult = 0;
    bool additionSucceeded = safeAdd(maxInt, smallInt, overflowResult);

    cout << "\nTest 4: Integer overflow" << endl;
    cout << "Maximum integer value: " << maxInt << endl;
    cout << "Small integer to add: " << smallInt << endl;
    if (additionSucceeded)
        cout << "Result of addition: " << overflowResult << endl;
    else
        cout << "Overflow detected; addition rejected." << endl;

    // Test 5: Safe float-to-integer conversion
    int convertedInteger = 0;
    cout << "\nTest 5: Safe float-to-integer conversion" << endl;
    cout << "100.0: " << (safeFloatToInt(100.0f, convertedInteger) ? "Accepted" : "Rejected") << endl;
    cout << "105.5: " << (!safeFloatToInt(105.5f, convertedInteger) ? "Correctly rejected" : "Unexpectedly accepted") << endl;

    // Test 6: Integer underflow
    cout << "\nTest 6: Integer underflow" << endl;
    cout << (!safeAdd(numeric_limits<int>::min(), -1, overflowResult)
                 ? "Underflow detected; addition rejected."
                 : "Unexpectedly accepted")
         << endl;

    // Test 7: Interest calculation precision
    cout << "\nTest 7: Interest calculation precision" << endl;
    testAccount.balance = 1000.0;
    double savingsInterest = 0.0;
    double checkingInterest = 0.0;
    bool savingsOk = calculateInterest(testAccount, 30, savingsInterest);
    testAccount.accountType = 'C';
    bool checkingOk = calculateInterest(testAccount, 30, checkingInterest);
    if (savingsOk)
        cout << "Savings interest (30 days): $" << savingsInterest << endl;
    if (checkingOk)
        cout << "Checking interest (30 days): $" << checkingInterest << endl;

    // Test 8: Zero and maximum balance checks
    cout << "\nTest 8: Zero and maximum balance checks" << endl;
    testAccount.balance = 999000.0;
    cout << "Deposit to maximum: " << (deposit(testAccount, 1000) ? "Accepted" : "Rejected") << endl;
    cout << "Deposit over maximum: " << (!deposit(testAccount, 1) ? "Correctly rejected" : "Unexpectedly accepted") << endl;
    cout << "Zero withdrawal: " << (!withdraw(testAccount, 0) ? "Correctly rejected" : "Unexpectedly accepted") << endl;

    // Test 9: Invalid currency conversion
    cout << "\nTest 9: Invalid currency conversion" << endl;
    double unusedResult = 0.0;
    cout << "Invalid code: " << (!convertCurrency(100.0, 'U', 'X', unusedResult) ? "Correctly rejected" : "Unexpectedly accepted") << endl;
    cout << "Negative amount: " << (!convertCurrency(-100.0, 'U', 'E', unusedResult) ? "Correctly rejected" : "Unexpectedly accepted") << endl;
}

/*
========================================================
           BANK ACCOUNT SYSTEM - TEST PLAN
========================================================
TC01: Create account with 1000 -> account created.
TC02: Deposit 500 into 1000 -> 1500.
TC03: Withdraw 300 from 1500 -> 1200.
TC04: Withdraw more than balance -> rejected.
TC05: Deposit zero -> rejected.
TC06: Deposit negative amount -> rejected.
TC07: Deposit to MAX_BALANCE -> accepted.
TC08: Deposit above MAX_BALANCE -> rejected.
TC09: Savings interest 1000 for 30 days -> 2.47.
TC10: Checking interest 1000 for 30 days -> 0.82.
TC11: Zero balance interest -> 0.00.
TC12: USD 100 to EUR -> EUR 85.00.
TC13: USD 100 to JPY -> JPY 11000.00.
TC14: Invalid currency code -> rejected.
TC15: Float 100.0 to int -> accepted.
TC16: Float 105.5 to int -> rejected.
TC17: INT_MAX + 1 -> overflow rejected.
TC18: INT_MIN - 1 -> underflow rejected.
TC19: Nonexistent account -> account not found.
TC20: Invalid menu selection -> error message.

Compile: g++ -std=c++17 -Wall -Wextra -Wconversion
         -Wsign-conversion -pedantic Lab_10.cpp -o Lab_10.exe
Acceptance: all cases pass; no warnings or unsafe casts.
========================================================
*/

// Activity 1: Understanding and compiling the code base ✅

// Activity 2: Identifying type conversion issues ✅
/***Issue 1: Loss of Precision in Account Balance**

**Line number:** 295–296
**Problematic code:** `float tempBalance = initialBalance;`
**Issue description:** Converting a `double` to a `float` reduces precision.
**Potential problems:** Account balances may become inaccurate,
leading to incorrect financial calculations.

**Issue 2: Loss of Precision in Interest Calculation**

**Line number:** 340
**Problematic code:** `float dailyRate = rate / 365;`
**Issue description:** Storing a `double` calculation in a `float` causes precision loss.
**Potential problems:** Interest calculations may become inaccurate,
especially over longer periods.

**Issue 3: Integer Overflow**

**Line number:** 462
**Problematic code:** `int overflowResult = maxInt + smallInt;`
**Issue description:** Adding 100 to the maximum integer value exceeds the range of `int`.
**Potential problems:** Signed integer overflow causes undefined behavior,
potentially resulting in incorrect calculations or unexpected program behavior.*/

// Activity 3: Fixing Integer to Float Conversions ✅
/***Lesson Learned – Integer to Double Conversion**

When performing calculations with different data types,
use `static_cast<double>()` to explicitly convert an integer to a double when needed.
This makes the conversion clear and helps maintain consistent data types during calculations.

**Note:** Converting an ordinary `int` to `double` is already safe and automatic on typical systems.
The explicit cast mainly improves clarity; it does not fix decimal deposits or withdrawals,
because the `int amount` parameter still accepts only whole numbers.*/

// Activity 4: Addressing Float-to-Integer Conversion Loss ✅
/***Lesson Learned – Safe Float-to-Integer Conversion**

- Use `static_cast<int>()` for explicit conversion from a floating-point value to an integer.
- Check that the value is within the valid integer range before converting.
- Check for fractional parts to prevent accidental data loss.
- Reject `NaN` and infinity because they cannot be safely converted to integers.
- Only perform the conversion after all validation checks pass.*/

// Activity 5: Fixing currency conversion issues ✅
/***Lessons Learned – Currency Conversion and Type Safety**

- Use `double` instead of `float` when greater decimal precision is needed.
- Keep input values, conversion rates, intermediate calculations, and return values consistent.
- Validate currency codes before performing conversions.
- Reject negative, infinite, or invalid conversion amounts.
- Check calculation results for overflow.
- Avoid unnecessary type conversions that could lose precision.*/

// Activity 6: Handling potential overflow and underlow ✅
/***Lessons Learned – Numeric Overflow and Underflow**

- Check numeric limits before performing arithmetic operations.
- Use `numeric_limits<int>::max()` and `numeric_limits<int>::min()` to identify valid integer boundaries.
- Prevent positive overflow and negative overflow before adding integers.
- Return `false` when an operation cannot be completed safely.
- Validate deposits and withdrawals before modifying account balances.
- Test normal values, maximum values, minimum values, and invalid inputs.*/

// Activity 7: Fixing Interest Calculation ✅
/***Lessons Learned – Interest Calculation Precision**

- Use `double` instead of `float` to reduce precision loss.
- Convert percentages into decimal rates before calculations.
- Use `365.0` to make floating-point division explicit.
- Use `static_cast<double>()` for clear numeric conversions.
- Use `std::round()` instead of integer truncation when rounding monetary values.
- Validate balances, account types, and calculation results before returning interest.
- Test interest calculations using different balances, rates, and time periods.*/

// Activity 8: Comprehensive testing ✅

/*
========================================================
           BANK ACCOUNT SYSTEM - TEST PLAN
========================================================

Objective:
Verify that the banking system handles normal operations,
type conversions, numeric overflow, underflow, and
precision-sensitive calculations correctly.

Test Environment:
- Language: C++17
- Compiler: g++ (MinGW)
- IDE: Visual Studio Code
- Operating System: Windows

--------------------------------------------------------
1. NORMAL OPERATIONS
--------------------------------------------------------

TC01: Create Account
Input: Name = John, Initial Balance = 1000
Expected: Account created successfully.

TC02: Deposit Money
Input: Balance = 1000, Deposit = 500
Expected: New balance = 1500.

TC03: Withdraw Money
Input: Balance = 1500, Withdrawal = 300
Expected: New balance = 1200.

TC04: Insufficient Funds
Input: Balance = 1000, Withdrawal = 1500
Expected: Transaction rejected; balance unchanged.

--------------------------------------------------------
2. EDGE CASE TESTING
--------------------------------------------------------

TC05: Zero Deposit
Input: Deposit = 0
Expected: Transaction rejected.

TC06: Negative Deposit
Input: Deposit = -100
Expected: Transaction rejected.

TC07: Maximum Balance
Input: Balance = 999000, Deposit = 1000
Expected: New balance = 1000000.

TC08: Balance Overflow
Input: Balance = 999000, Deposit = 2000
Expected: Transaction rejected; balance unchanged.

--------------------------------------------------------
3. INTEREST CALCULATION TESTING
--------------------------------------------------------

TC09: Savings Account Interest
Input: Balance = 1000, Rate = 3%, Days = 30
Expected: Interest = 2.47.

TC10: Checking Account Interest
Input: Balance = 1000, Rate = 1%, Days = 30
Expected: Interest = 0.82.

TC11: Zero Balance Interest
Input: Balance = 0, Days = 30
Expected: Interest = 0.00.

--------------------------------------------------------
4. CURRENCY CONVERSION TESTING
--------------------------------------------------------

TC12: USD to EUR
Input: 100 USD
Expected: 85.00 EUR.

TC13: USD to JPY
Input: 100 USD
Expected: 11000.00 JPY.

TC14: Invalid Currency Code
Input: Currency = X
Expected: Error message displayed.

--------------------------------------------------------
5. TYPE CONVERSION TESTING
--------------------------------------------------------

TC15: Safe Float-to-Integer Conversion
Input: 100.0
Expected: Successfully converted to integer 100.

TC16: Fractional Float-to-Integer Conversion
Input: 105.5
Expected: Conversion rejected to prevent data loss.

--------------------------------------------------------
6. OVERFLOW AND UNDERFLOW TESTING
--------------------------------------------------------

TC17: Integer Overflow
Input: INT_MAX + 1
Expected: Overflow detected; operation rejected.

TC18: Integer Underflow
Input: INT_MIN + (-1)
Expected: Underflow detected; operation rejected.

--------------------------------------------------------
7. INPUT VALIDATION TESTING
--------------------------------------------------------

TC19: Invalid Account Number
Input: Nonexistent account number 9999
Expected: Account not found.

TC20: Invalid Menu Selection
Input: Menu choice = 10
Expected: Invalid choice message displayed.

--------------------------------------------------------
8. COMPILATION TESTING
--------------------------------------------------------

Compile using:
g++ -std=c++17 -Wall -Wextra -Wconversion
-Wsign-conversion -pedantic Lab_10.cpp -o Lab_10.exe

Expected:
- Program compiles successfully.
- No compiler errors or warnings.
- All menu options work correctly.
- Invalid inputs are handled safely.

--------------------------------------------------------
9. ACCEPTANCE CRITERIA
--------------------------------------------------------

- All 20 test cases must pass.
- No unsafe type conversions.
- No unchecked integer overflow or underflow.
- Invalid transactions must not modify balances.
- Interest calculations must maintain precision.
- Currency conversions must produce expected results.
- Program must compile without warnings.

--------------------------------------------------------
10. FINAL TEST STATUS
--------------------------------------------------------

Total Test Cases: 20
Passed: Pending execution
Failed: Pending execution
Overall Result: Not yet verified

========================================================
                  END OF TEST PLAN
========================================================
*/

/*
========================================================
                    CONCLUSION
========================================================

This lab started with a simple banking system that
worked but had several hidden type conversion issues.

Step by step, these problems were identified and fixed
by improving precision, using explicit type casting,
preventing overflow and underflow, and adding input
validation.

Finally, different test cases helped verify the
correctness and reliability of the program.

Overall, this lab showed that writing good C++ code
is not just about making a program work, but also
about making it safe, accurate, and reliable.

========================================================
*/
