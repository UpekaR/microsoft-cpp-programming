/*Identify at least 6 style issues in this code.

Look for:

Spacing problems around operators and after keywords

Inconsistent or missing indentation

Poor variable and class names

Missing comments explaining the code's purpose

Inconsistent brace placement

Compile and run the code to confirm it works (functionality should remain unchanged)*/

/*#include<iostream>
using namespace std;
class calc{
public:
int x,y;
void domath(){
x=10;y=20;
int res=x+y;
cout<<"result is "<<res<<endl;
if(res>25){
cout<<"big number"<<endl;}
else{cout<<"small number"<<endl;
}
}
};
int main(){
calc c;
c.domath();
return 0;
}*/

#include <iostream> // For cout and endl

using namespace std;

// Calculator class performs a simple addition
// and checks whether the result is greater than 25.
class Calculator
{
public:
    // Perform the calculation and display the result
    void performCalculation()
    {

        // Declare and initialize two numbers
        int firstNumber = 10;
        int secondNumber = 20;

        // Calculate their sum
        int result = firstNumber + secondNumber;

        // Display the result
        cout << "result is " << result << endl;

        // Check whether the result is greater than 25
        if (result > 25)
        {
            cout << "big number" << endl;
        }
        else
        {
            cout << "small number" << endl;
        }
    }
};

int main()
{
    // Create an object of the Calculator class
    Calculator calculator;

    // Call the method to perform the calculation
    calculator.performCalculation();

    // End the program successfully
    return 0;
}

/*There are several style issues in the original code, including poor variable and class names, missing spaces, inconsistent indentation, inconsistent brace placement,
multiple statements on the same line, and missing comments.

I improved the code by using meaningful names, consistent formatting, proper spacing, and explanatory comments.

I compiled and executed the improved program successfully. The output remained unchanged:

These improvements make the program easier to read, understand, debug, and maintain without changing its functionality.*/