#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

// Template definition for display
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

// Non-templated function with a specific type
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

// Templated function
template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    Harry<int> h(5);        // Integer object
    cout << h.data << endl; // Outputs 5
    h.display();            // Displays 5

    Harry<float> h1(5.7858); // Float object
    cout << h1.data << endl; // Outputs 5.7858
    h1.display();            // Displays 5.7858

    Harry<char> h2('d');     // Char object
    cout << h2.data << endl; // Outputs 'd'
    h2.display();            // Displays 'd'

    // Function calls
    func(4);   // Calls the non-templated func()
    func(4.5); // Calls the templated func()

    return 0;
}
