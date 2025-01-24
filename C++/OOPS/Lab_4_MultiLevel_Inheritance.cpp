#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string name) : name(name) {}
    void setName(string n)
    {
        name = name;
    }

    void displayPersonDetails() const
    {
        cout << "Name of the Person: " << name << endl;
    }
};

class Employee : public Person
{
private:
    string department;
    int salary;
    int eID;

public:
    Employee(string name, string dept, int sal, int id)
        : Person(name), 
        department(dept), 
        salary(sal), 
        eID(id) {}

    void displayEmployeeDetails() 
    {
        displayPersonDetails();
        cout << "Department of the Employee: " << department << endl;
        cout << "Salary of the Employee: " << salary << endl;
        cout << "Employee ID: " << eID << endl;
    }
};

class Manager : public Employee
{
private:
    string title;

public:
    Manager(string name, string dept, int sal, int id, string title): Employee(name, dept, sal, id), 
        title(title) {}

    void displayManagerDetails() 
    {
        displayEmployeeDetails();
        cout << "Title of the Manager: " << title << endl;
    }
};

int main()
{
    Employee employee("Rahul", "IT", 250000, 101);
    employee.displayEmployeeDetails();
    cout << endl;

    Manager manager("Rohit", "HR", 700000, 312, "HR Manager");
    manager.displayManagerDetails();

    return 0;
}