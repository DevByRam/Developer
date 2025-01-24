/*
#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of employee" << endl;
        cin >> id;
        salary = 122; // Set a default salary or consider taking it as input
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }

    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary(void)
    {
        return salary;
    }
};

int main()
{
    employee harry, rohan, lovish, shruti;
    harry.setId();
    harry.getId();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}
