#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class Derived : visibility-mode base1,visibility-mode base2
// {
//     class body of class "Derived class"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The sum of Base1 and Base2 is : " << base1int + base2int << endl;
    }
};

/*
The inherited derived class will look something like this
base1int -> protected
base2int -> protected

Member functions : 
set_baase1int() --> public
set_baase2int() --> public
set_show() --> public
*/
int main()
{
    Derived boys;
    boys.set_base1int(23);
    boys.set_base2int(26);
    boys.show();
    return 0;
}