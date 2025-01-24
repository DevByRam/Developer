#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    // implement of default constructor
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // Number(Number &obj)
    // {
    //     cout<<"Copy constructor called"<<endl;
    //     a = obj.a;
    // }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(43), z2; // showing error because no default constructor is there.let's implement default constructor.
    x.display();
    y.display();
    z.display();

    Number z1(x); // copy constructor
    // VERY IMPORTANT :: suppose we do not defined copy constructor and we are calling Number z1(x)(which calls copy constructor) then there will not be any error because compiler have default constructor in every class which will be called by this Number z1(x);
    // if copy constructor is there then it will call copy constructor otherwise it will call default constructor.
    z1.display();

    z2 = z;//copy constructor not invoked bcz z2 is alredy created object and u are assigning it here only.

    Number z3 = z; // copy constructor invoked.
    // here we have assigned the object,it is not already created one.
    z3.display();
    
}