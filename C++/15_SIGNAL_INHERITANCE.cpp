/*
#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class

// class derived_class_name : visibility-mode base_class_name
// {
//     class members/methods/etc.....
// }
// NOTE:
// 1. Default Visibility Mode is private.
// 2. Public Visibility Mode : Public members of the base class become public members of the derived class.
// 3. Private Visibility Mode : Public members of the base class become private members of the derived class.
// 4. Private members of the base class cannot be inherited into the derived class, either public or private.


// Creating a programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void GetData()
    {
        cout<<"Employee id :: "<<id<<endl;
        cout<<"language code :: "<<languageCode<<endl;
    }
};

int main()
{
    Employee harry(1001), rohan(1002);
    cout << "Harry's Salary: " << harry.salary << endl;
    cout << "Rohan's Salary: " << rohan.salary << endl;

    Programmer skillF(1003);
    skillF.GetData();

    return 0;
}
*/

// Single inheritance
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata(void)
{
    data1 = 100;
    data2 = 101;
}

int Base ::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
}

void Derived ::display()
{
    cout << "Value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setdata(); // we can not access setdata() bcz it is private for the Derived class.
    // we can call setdata() inside the public memebers of Derived class such as inside the void Derived :: process(){setdata();}

    der.process();
    der.display();
    return 0;
}