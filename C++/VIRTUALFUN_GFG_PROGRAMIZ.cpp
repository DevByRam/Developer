// C++ program to illustrate
// concept of Virtual Functions
/*
// GFG
#include <iostream>
using namespace std;

class base
{
public:
    virtual void print() { cout << "print base class\n"; }

    void show() { cout << "show base class\n"; }
};

class derived : public base
{
public:
    void print() { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}
*/

// PROGRAMIZ

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;

    // pointer of Base type that points to derived1
    Base *base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}