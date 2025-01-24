/*
Create 2 classes :
    1. SimpleCalculator - takes input of 2 numbers using a utility function and performs +,-,*,/ and displays the results using another function.
    2.Scientific calculator - takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

    Create another Class HybridCalculator and inherit it using these 2 classes :
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    double num1, num2;

public:
    void input()
    {
        cout << "Enter the value of num1: ";
        cin >> num1;
        cout << "Enter the value of num2: ";
        cin >> num2;
    }

    void display()
    {
        cout << "Addition of num1 and num2: " << num1 + num2 << endl;
        cout << "Subtraction of num1 and num2: " << num1 - num2 << endl;
        cout << "Multiplication of num1 and num2: " << num1 * num2 << endl;
        if (num2 != 0)
        {
            cout << "Division of num1 and num2: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Division is not possible (denominator cannot be zero)" << endl;
        }
    }
};

class ScientificCalculator
{
protected:
    double num1, num2;

public:
    void input()
    {
        cout << "Enter the value of num1: ";
        cin >> num1;
        cout << "Enter the value of num2: ";
        cin >> num2;
    }

    void display_scientific()
    {
        cout << "num1 to the power of num2 (num1^num2): " << pow(num1, num2) << endl;
        cout << "Logarithm of num1: " << log(num1) << endl;
        cout << "Logarithm of num2: " << log(num2) << endl;
        cout << "Sine of num1: " << sin(num1) << endl;
        cout << "Sine of num2: " << sin(num2) << endl;
        cout << "Cosine of num1: " << cos(num1) << endl;
        cout << "Cosine of num2: " << cos(num2) << endl;
        cout << "Tangent of num1: " << tan(num1) << endl;
        cout << "Tangent of num2: " << tan(num2) << endl;
        cout << "Square root of num1: " << sqrt(num1) << endl;
        cout << "Square root of num2: " << sqrt(num2) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void input_Numbers()
    {
        SimpleCalculator::input();
    }

    void display_Calculations()
    {
        SimpleCalculator::display();
        ScientificCalculator::display_scientific();
    }
};

int main()
{
    HybridCalculator calculator;
    calculator.input_Numbers();
    calculator.display_Calculations();
    return 0;
}
