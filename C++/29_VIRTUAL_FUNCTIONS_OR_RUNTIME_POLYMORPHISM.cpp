#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 1;
        virtual void display() //by using virtual keyword,Run time polymorphism is achieved
        {
            cout<<"1 Displaying Base class variable var_base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived = 2;
        void display()
        {
            cout<<"2 Displaying Base classs variable var_base : "<<var_base<<endl;
            cout<<"2 Displaying Derived class Variable var_derived : "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj1;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}