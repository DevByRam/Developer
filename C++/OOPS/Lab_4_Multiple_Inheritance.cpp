#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    float cgpa;

public:
    Student(int r, float c) : roll(r), cgpa(c) {}

    void displayStudent() const {
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

class Teacher {
protected:
    string subject;
    int semester;

public:
    Teacher(const string &sub, int sem) : subject(sub), semester(sem) {}

    void displayTeacher() const {
        cout << "Subject: " << subject << endl;
        cout << "Semester: " << semester << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    TeachingAssistant(int r, float c, const string &sub, int sem)
        : Student(r, c), Teacher(sub, sem) {}

    void display() const {
        cout << "Teaching Assistant Details:" << endl;
        displayStudent();
        displayTeacher();
    }
};

int main() {
    TeachingAssistant ta(101, 3.8, "Mathematics", 2);

    ta.display();

    return 0;
}