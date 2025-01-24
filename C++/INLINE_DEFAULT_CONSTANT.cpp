#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
}

int main()
{
    int a, b;
    cout << "Enter the value of a :: " << endl;
    cin >> a;
    cout << "Enter the value of b :: " << endl;
    cin >> b;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    cout << "The product of a and b is :: " << product(a, b) << endl;
    return 0;
}