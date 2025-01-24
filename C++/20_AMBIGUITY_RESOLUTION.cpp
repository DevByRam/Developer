/*
Ambiguity -> 1

Ambiguity means the problem that occurs while inheriting classes.
The problem is that : when we have same name of the member inside the two different classes then there can be the problem while deriving the third class using the first and second class as on calling the same name member using the third class will give u error that is compiler get confused to call which class memeber that is of first class or second class.
*/

// SOLUTION ->
/*
#include<iostream>
using namespace std;

class Base1{
    public:
        void greet()
        {
            cout<<"Hello Guys! How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout<<"Hello Guys! Kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet()
        {
            Base1::greet();
        }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    // Till now we do not have any problem (on calling first and second class)
    Derived d;
    d.greet(); // now showing error as compiler gets confused to call which class
    // SOLUTION : solution is that define inside the derived class which class member u want to call that is Base1:greet(); or Base2:greet();
    return 0;
}
*/

/*
Ambiguity -> 2
When you are defining two classes (class1 and class2) and both the classes have same name member and also inheriting class1 into class2 then on calling class2 member it will call it's own member not the one which is in the class1 though inheriting the class1 into class2 ,This is what we call overriding.
*/

#include<iostream>
using namespace std;

class A{
    public:
        void say()
        {
            cout<<"Hello World!"<<endl;
        }
};

class D : public A{
    int a;
    public:
    // D's new say() method will override base class's say() method
        void say()
        {
            cout<<"Hello My Universe!"<<endl;
        }
};

int main()
{
    A a;
    a.say();

    D d;
    d.say();
    return 0;
}