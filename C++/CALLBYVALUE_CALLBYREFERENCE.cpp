#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Call by value
// This will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "The sum of 4 and 5 is " << sum(x, y) << endl;

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // This will not actually swap x and y
    swap(x, y);
    cout << "After calling swap (call by value), the value of x is " << x << " and the value of y is " << y << endl;

    // This will swap x and y
    swapPointer(&x, &y);
    cout << "After calling swapPointer (call by reference), the value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}

// "Call by value" passes a copy of the arguments to the function, so any changes made to the parameters within the function do not affect the original arguments.

// "Call by reference" using pointers allows the function to modify the original arguments by passing their memory addresses.