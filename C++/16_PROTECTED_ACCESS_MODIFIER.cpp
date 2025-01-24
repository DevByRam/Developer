#include<iostream>
using namespace std;

class Base
{
    protected :
     int a;
    private:
     int b;
};

/*
For a protected member:
                         Public derivation         Private derivation             Protected derivation
 1.Private members       Not Inherited             Not Inherited                  Not Inherited
 2.Protected members     Protected                 Private                        Protected
 3.Public members        Public                    Private                        Protected
*/

class Derived : Base{

};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a; // showing error bcz it is inside protected member
    // cout<<d.a;
    return 0;
}

/*
#include <iostream>
using namespace std;

class Base {
public:
    int publicVar = 1;        // Public member
private:
    int privateVar = 2;       // Private member
protected:
    int protectedVar = 3;     // Protected member
};

class Derived : public Base {
public:
    void show() {
        cout << "Public Var: " << publicVar << endl;         // Accessible
        // cout << "Private Var: " << privateVar << endl;    // Not accessible
        cout << "Protected Var: " << protectedVar << endl;   // Accessible
    }
};

int main() {
    Derived obj;
    obj.show();
    cout << "Accessing Public Var: " << obj.publicVar << endl;  // Accessible
    // cout << "Accessing Private Var: " << obj.privateVar << endl;  // Not accessible
    // cout << "Accessing Protected Var: " << obj.protectedVar << endl; // Not accessible
    return 0;
}


// publicVar: Accessible everywhere.
// privateVar: Not accessible outside Base, even in Derived.
// protectedVar: Accessible in Derived, but not outside Base or Derived
*/