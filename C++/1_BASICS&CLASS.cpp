/*
Classes -> Basic template for creating objects.
Objects -> Basic run time entities
Data Abstraction & Encapsulation -> Wrapping data and functions into single unit
Inheritance -> Properties of one class can be inherited into others
Polymorphism -> ability to take more than one forms
Dynamic Binding -> code which will execute is not known until the program runs
Message Passing -> Object.message(information)call format
:: -> Scope Operator
*/

// CLasses -> Public,Private and Protected.

#include <iostream>
using namespace std;

class Employee
{
private:
    // Private -> Variables inside this are accessible to function inside this class only.
    int a, b, c;

public:
    // Public -> Variables inside this are accessible globally means outside class also.
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 152; ---> This will throw error as a is private
    harry.d = 25;
    harry.e = 81;
    harry.setData(2, 4, 6);
    harry.getData();
    return 0;
}

/*

Structures had limitations
              -Members are public
              -No Methods
we can declare objects along with the class declare like this:
class Employee{
    Class definition
}harry,rohan,mohit;
*/