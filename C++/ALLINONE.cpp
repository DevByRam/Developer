#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ------------------ Base Class ------------------
class Base
{
public:
    // Function Overloading: Same function name, different parameters
    void display()
    {
        cout << "Display from Base class (no arguments)" << endl;
    }

    void display(string msg)
    {
        cout << "Display from Base class: " << msg << endl;
    }

    // Virtual function for Function Overriding
    virtual void show()
    {
        cout << "Show from Base class" << endl;
    }

    // Virtual Destructor (for good practice with virtual functions)
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};

// ------------------ Derived Class ------------------
class Derived : public Base
{
public:
    // Default Constructor
    Derived()
    {
        cout << "Derived class Default Constructor called" << endl;
    }

    // Copy Constructor
    Derived(const Derived &obj)
    {
        cout << "Derived class Copy Constructor called" << endl;
    }

    // Function Overriding: Redefining base class's virtual function
    void show() override
    {
        cout << "Show from Derived class (overriding Base class function)" << endl;
    }

    // Operator Overloading: Overload + operator for Derived class
    Derived operator+(const Derived &obj)
    {
        cout << "Operator + overloaded for Derived class" << endl;
        return *this; // Simply returning the current object for demonstration
    }

    // Destructor for Derived
    ~Derived()
    {
        cout << "Derived destructor called" << endl;
    }
};

// ------------------ Virtual Function Demonstration Class ------------------
class VirtualDemo
{
public:
    // Pure virtual function (makes VirtualDemo an abstract class)
    virtual void pureVirtualFunc() = 0;

    // Destructor
    virtual ~VirtualDemo()
    {
        cout << "VirtualDemo destructor called" << endl;
    }
};

// Class Inheriting VirtualDemo and implementing pure virtual function
class ConcreteClass : public VirtualDemo
{
public:
    void pureVirtualFunc() override
    {
        cout << "Pure virtual function implemented in ConcreteClass" << endl;
    }
};

// ------------------ File Handling Functions ------------------

// Function to demonstrate file writing
void writeToFile()
{
    ofstream outFile("file.txt", ios::out);
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    outFile << "This is a sample text written to the file.\n";
    outFile << "File handling example in C++.\n";
    outFile.close();
    cout << "Data written to file successfully." << endl;
}

// Function to demonstrate file reading
void readFromFile()
{
    ifstream inFile("file.txt", ios::in);
    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    string line;
    cout << "\nReading from file:" << endl;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();
}

// ------------------ Main Function ------------------
int main()
{
    // 1. Function Overloading
    cout << "\n--- Function Overloading ---" << endl;
    Base base;
    base.display();
    base.display("Hello from overloaded function!");

    // 2. Function Overriding
    cout << "\n--- Function Overriding ---" << endl;
    Derived derived;
    Base *basePtr = &derived;
    basePtr->show(); // Calls the overridden method in Derived class

    // 3. Operator Overloading
    cout << "\n--- Operator Overloading ---" << endl;
    Derived d1, d2;
    Derived d3 = d1 + d2; // Calls the overloaded + operator

    // 4. Copy Constructor
    cout << "\n--- Copy Constructor ---" << endl;
    Derived d4 = d1; // Copy constructor is called

    // 5. Virtual Function (Pure Virtual)
    cout << "\n--- Virtual Function ---" << endl;
    ConcreteClass concreteObj;
    concreteObj.pureVirtualFunc(); // Calls the implemented pure virtual function

    // 6. File Handling
    cout << "\n--- File Handling ---" << endl;
    writeToFile();  // Write to file
    readFromFile(); // Read from file

    return 0;
}
