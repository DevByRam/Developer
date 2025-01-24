#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialise the objects of its class
    // It is automatically invoked whenever an object of its class
    Complex(void); // Constructor declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it does not take any parameter.
{
    a = 0;
    b = 0;
    cout << "Hello World!" << endl;
}

int main()
{
    Complex c1,c2;
    c1.printnumber();
    c2.printnumber();
    return 0;
}

// Properties of Constructor
/*
1.It must be declared in the public section of the class.
2.They are automatically invoked whenever the object is created.
3.They cannot return values and do not have return types.
4.It can have default arguments.
5.We can not refer to their address.
*/