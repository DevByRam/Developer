#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);         // Constructor declaration for default constructor
    Complex(int x, int y); // Constructor declaration for parameterized constructor

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void)
{ // Default constructor
    a = 0;
    b = 0;
}

Complex::Complex(int x, int y)
{ // Parameterized constructor
    a = x;
    b = y;
}

int main()
{
    Complex c; // Calls the default constructor
    c.printnumber();

    Complex c2(4, 5); // Calls the parameterized constructor
    c2.printnumber();

    // Implicit call
    Complex a(4, 6);
    a.printnumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printnumber();

    return 0;
}
