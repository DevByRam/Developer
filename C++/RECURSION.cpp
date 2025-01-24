#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3) 


int fibonacci(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    int a;
    cout<<"Enter the value of a :: "<<endl;
    cin>>a;
    cout<<"The factorial of a is :: "<<factorial(a)<<endl;
    cout<<"The term in fabonacci sequence at position "<<a<<" is "<<fibonacci(a)<<endl;
    return 0;
}