#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:

    Complex() // Default Constructor
    {
        a = 0;
        b = 0;
    }

    Complex(int x,int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    // We have two constructors defined,one having two parameters int x and int y and other having parameter int x only.So,this is what we called constructor overloading which have two constructors but with different parameters in the same class.
    // Constructor overloading is a concept similar to function overloading. Here, one class can have multiple constructors with different parameters. At the time of definition of an instance, the constructor, which will match the number and type of arguments, will get executed.
    void printNumber()
    {
        cout<<"Your number is "<< a <<" + "<< b <<"i"<<endl;
    }
};

int main()
{
    Complex c1(4,6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}