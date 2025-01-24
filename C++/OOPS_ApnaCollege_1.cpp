// Inheritance -> Code Reusability
// When properties and member functions of base class are passed on the derived class.
// Example : class A -> This is Parent class or Base class
// class B -> This is child class or derived class
// properties of class A sre inherit to the class B means the properties are being copied from class A to class B or ehat we call in hindi is viraasat.
// Types of inheritance : 1.Single inheritance
// 2.Multi-level inheritance
// 3.Multiple inheritance
/*
#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;

    // Default constructor for person
    person() {
        cout<<"Parent constructor....\n";
    }

    // Parameterized constructor for person
    person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class student : public person   // student is our child class and person is our parent class and we use access specifier as it is a type of mode that is in which way we want to acces that is public or private or protected
 {
      // name,age,rollno
    // Now,we do not need to define name and age as it is already defined in the parent class.
    // We need to define rollno only.
public:
    int rollno;

    // Default constructor for student
    student() {
        cout<<"Child constructor....\n";
    }

    // Parameterized constructor for student
    student(string name, int age, int rollno) : person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << rollno << endl;
    }
};

class Gradstudent :  public student
{
    public :
    string ReasearchArea;
};

int main() {
   Gradstudent s1;
   s1.name = "Tony stark";
   s1.ReasearchArea = "quantum physics";
   cout<<s1.name<<endl;
   cout<<s1.ReasearchArea<<endl;

    return 0;
}
*/

// Multiple inheritance -> Properties of both parent1 and parent2 are inheriteance by the child.
/*
#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    string name;
    int rollNo;
};

class teacher
{
public:
    string subject;
    double salary;
};

class TA : public student, public teacher
{
};

int main()
{
    TA t1;
    t1.name = "Ram Krishna";
    t1.subject = "Engineering";

    cout<<"Name of the child t1 : "<<t1.name<<endl;
    cout<<"Subject of the child t1 : "<<t1.subject<<endl;
    return 0;
}
*/

// Hierachial Inheritance -> Properties of parent is inheritance by the multiple child
/*
#include <iostream>
#include <string.h>
using namespace std;

class person
{
public:
    string name;
    int age;
};

class student : public person
{
public:
    int rollno;
};

class teacher : public person
{
public:
    string subject;
};

int main()
{
    teacher t;
    t.name = "Shraddha";
    t.age = 28;
    t.subject = "Maths";

    cout<<t.name<<" is "<<t.age<<"years old"<<endl;
    return 0;
}
*/

// Polymorphism -> Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
// 1.Compile Time Polymorphism -> example : constructor overloading,Function overloading
//  Function overloading -> when we are defining two  or more functions with same names but they only differ in parameters.there is no matter whether returntype is same or not.
// Operator overloading ->

// Overloading me ek hi class me do ya do se jyada function bna rhe the

// 2.Run Time Polymorphism > example : Function overriding
// Overriding is dependent on inheritance

// Example of Function overloading :
/*
#include<iostream>
#include<string.h>
using namespace std;

class Print{
    public:
    void show(int x)
    {
        cout<<"x is "<<x<<endl;
    }

    void show(char x)
    {
        cout<<"x is "<<x<<endl;
    }
};

int main()
{
    Print p1;
    p1.show(15);
    p1.show('H');
    return 0;
}
*/

// exmaple of function overriding
/*
#include <iostream>
using namespace std;

class parent
{
public:
    virtual void getInfo()
    {
        cout << "Parent class\n";
    }
};

class child : public parent
{
public:
    void getInfo() override
    {
        cout << "Child class\n";
    }
};

int main()
{
    child c1;
    c1.getInfo();
    cout << "Child Class\n";
    return 0;
}
*/

// Abstraction -> Hiding all the unnecessary details and showing important parts.this can be mplemented with the help of access specifiers.
// Other way to implement abstraction is with the help of usong abstract before the class that is abstract classes
// 1.Abstarct classes  are used to provide a base class drom ehich other classes can be derived.
// 2.Thry can not be instantiated and are meant to be inherited.
// 3.Abstarct classes are typically used to define an interface for derived classes.

/*
#include<iostream>
#include<string.h>
using namespace std;

class shape //abstract class
{
    virtual void draw() = 0; //Pure virtual function
};

// Whenever in the class virtual function is implemented then the class automatically becomes the abstract class.We can not make objects with the abstract class,ths will show u an error.means shape s; is not possible.But shape ko dusri class se inherit kr sakte he.

// Virtual function -> Virtual functions cannot be static.
// A virtual function can be a friend function of another class.
// Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
// The prototype of virtual functions should be the same in the base as well as the derived class.

class Circle : public shape
{
    public:
    void draw()
    {
        cout<<"drawing a circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}
*/

// STATIC Keyword

// Static Variables ->
//  Variables declared as static in a function are created and initialised once for the lifetime of the program. -> This is what in function.
// Static Variables in a class are created and initialised once.They are shared by all the objects of the class. -> This is what in class.

// Static Objects ->

#include <iostream>
#include <string.h>
using namespace std;

void fun()
{
    int x = 0;
    cout << "value of x is " << x << endl;
    x++;
}

void fun_static()
{
    static int x = 0; // init statement one time only when the function fun_static is called for the first time.afterwards,on calling the fun_static it will not take x as 0 ,means it will now initiaise with the value of x++.
    cout << "value of x is " << x << endl;
    x++;
}

class A
{
public:
    int y;
    void incX()
    {
        y = y + 1;
    }
};

class ABC
{
public:
    ABC()
    {
        cout << "Constructor " << endl;
    }

    ~ABC()
    {
        cout << "Destructor " << endl;
    }
};

int main()
{
    // I am calling function fun three times,lets see what output will get
    fun(); // x = 0
    fun(); // x = 0
    fun(); // x = 0
    cout << endl;
    // On running the code we get 0 as a value of x three times.
    // I am calling function fun_static three times,lets see what output will get
    fun_static(); // x = 0
    fun_static(); // x = 1
    fun_static(); // x = 2
    cout << endl;
    A obj1;
    A obj2;
    obj1.y = 100;
    obj2.y = 200;
    cout << "output of obj1.y is " << obj1.y << endl;
    cout << "output of obj2.y is " << obj2.y << endl;
    obj1.incX();
    cout << "output of obj1.y is " << obj1.y << endl;
    obj2.incX();
    obj2.incX();
    cout << "output of obj2.y is " << obj2.y << endl;
    cout << endl;

    if (true)
    {
        ABC obj;
    }

    cout << "End of main fnx \n";
    cout<<endl;

    if(true)
    {
        static ABC Obj;
    }
    cout<<"End of main fnx \n";
    return 0;
}
