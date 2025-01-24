/*
#include <iostream>
#include <string>
using namespace std;

// Objects -> Objects are entities in the real world.
// Class -> Class is like a blueprint of these entities

// Access Modifiers
// Private -> data and methods accessible inside class
// Public -> data and methods accessible to everyone
// Protected -> data and methods accessible inside class and to its derived class

class Teacher
{
private:
    double salary;

public:
    // Properties/attributes
    string name;
    string dept;
    string subject;
    // non-parameterized constructor
    Teacher()
    {
        dept = "Computer Science";
    }
    // parameterized constructor
    // Teacher(string n, string d, string s, double sal)
    // {
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }

    // this is a special pointer in c++ that points to the current object.
    // this -> prop is same as *(this).prop
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // this helps to identify that it is the property of the object(when two same property name is there such in above)

    // Copy Construtor
    Teacher(Teacher &orgObj)
    {
        // Pass by reference
        cout<<"I am custom copy constructor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    // Methods/Member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // // setter
    // void setSalary(double s)
    // {
    //     salary = s;
    // }

    // // getter
    // double getSalary()
    // {
    //     return salary;
    // }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student
{
public:
    string name;
    int rollno;
    int age;
};

//  OOPs Pillar
// 1.Encapsulation -> It is wrapping up of data and member functions in a single unit called class.Encapsulation helps in hiding the data that is sensitive data.This is done by using private access specifier.example: Bank system
// 2.Abstraction
// 3.Inheritance
// 4.Polymorphism

class Account
{
private:
    double balance;
    string password;

public:
    string accountId;
    string username;

    // Constructor
    Account(string accId, string user, double bal, string pass)
    {
        accountId = accId;
        username = user;
        balance = bal;
        password = pass;
    }

    // Methods to access and modify private members can be added here
};

int main()
{
    // Using parameterized constructor
    Teacher t1("Shradha", "Computer Science", "C++", 250000);
    // t1.getInfo();

    Teacher t2(t1);//custom copy constructor -invoke

    t2.getInfo();
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    double *cgpaPtr;

public:
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double(cgpa);
    }

    // Destructor
    // Destructor automatically get calls same as that of constructor.
    ~student()
    {
        cout << "Hi,I delete everything\n";
        delete cgpaPtr;
        // Pointer dynamically memory need to free by using delete_name of the Pointer cgpaPointer;
    }

    void getinfo() const
    {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Rahul Sharma", 8.9);
    s1.getinfo();

    return 0;
}
