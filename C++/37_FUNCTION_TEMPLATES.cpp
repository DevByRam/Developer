#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5, 2.8); // Works with two different types: int and float
    printf("The average of these numbers is %f\n", a);

    int x = 5, y = 7;
    swapp(x, y); // Swapping two integers
    cout << "After swapping: " << endl;
    cout << x << endl
         << y << endl;

    return 0;
}
