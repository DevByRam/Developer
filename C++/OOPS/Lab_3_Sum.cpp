#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    friend int sum(A, B);

    A(int x) : a(x) {}

    void display() const
    {
        cout << a << endl;
    }
};

class B
{
private:
    int b;

public:
    B(int y) : b(y) {}

    void display() const
    {
        cout << b << endl;
    }

    friend int sum(A, B);
};

int sum(A num1, B num2)
{
    return (num1.a + num2.b);
}

int main()
{
    A a(125);
    B b(136);
    cout << "Value of a: ";
    a.display();
    cout << "Value of b: ";
    b.display();

    cout << "Sum of a and b: " << sum(a, b) << endl;

    return 0;
}