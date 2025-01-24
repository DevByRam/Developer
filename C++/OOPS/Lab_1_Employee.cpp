#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int eid;
    string ename;
    int no_of_hours[7];

public:
    void input()
    {
        cout << "Enter employee id: ";
        cin >> eid;
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, ename);
        cout << "Enter number of hours worked on each day of the week: ";
        for (int i = 0; i < 7; i++)
        {
            cin >> no_of_hours[i];
        }
    }

    void display() const
    {
        cout << "Employee id: " << eid << endl;
        cout << "Employee name: " << ename << endl;
        cout << "Number of hours worked on each day of the week: ";
        for (int i = 0; i < 7; i++)
        {
            cout << no_of_hours[i] << " ";
        }
        cout << endl;
        cout << "Total hours worked: " << calculate() << endl;
    }

    int calculate() const
    {
        int total = 0;
        for (int i = 0; i < 7; i++)
        {
            total += no_of_hours[i];
        }
        return total;
    }
};

int main()
{
    const int numEmployees = 3;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        employees[i].input();
    }

    cout << endl;
    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Details of employee " << i + 1 << ":" << endl;
        employees[i].display();
        cout << endl;
    }

    return 0;
}
