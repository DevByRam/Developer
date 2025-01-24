#include <iostream>
using namespace std;

/*
Syntax for Initialization list in constructor
Constructor (argument -list) : initialization-section
{
assignment + other code;
}

class Test{
int a;
int b;
public:
        Test(int i,int j) : a(i),b(j)
        {
        cout<<"Constructor executed"<<endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
        }
};
*/

class Test
{
    /*
    int a; // Declare first so will initialise first
    int b; // Declare second so will initialise second
    */

    int b;
    int a;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i + b) // This gives garbage value of a on running the code
    /* This is because we have declared a first then b above public:
     so declare in this way ->
     class Test{
        int b;
        int a;
     }
    */
    // Test(int i, int j) : b(j)
    Test(int i, int j)
    {
        // a = i + b; //we can declare arguments inside also.

        b = j;
        a = i + b;
        cout << "Constructor executed" << endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
    }
};

int main()
{
    Test t(4, 7);
    return 0;
}