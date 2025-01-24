#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float m1, m2, m3;

public:
    void input()
    {
        cout << "Enter name: ";
        cin.ignore();  
        getline(cin, name); 
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Average: " << calculate() << endl;
    }

    float calculate() const
    {
        return (m1 + m2 + m3) / 3;
    }
};

int main()
{
    const int numStudents = 5;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }

    cout << endl;

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        students[i].display();
        cout << endl;
    }

    return 0;
}
