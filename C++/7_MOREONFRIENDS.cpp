/*
// Example->1
#include<iostream>
using namespace std;

class Y; // We need to declare it first bcz not declaring initially will give an error because friend void add(X,Y); in class X will not recognise what is Y.
// whereas in class Y friend void add(X,Y); will be able to recognise it bcz class X is already defined and class Y is also declared.

class X{
    int data;
    public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X,Y);   
};

class Y{
    int num;
    public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2)
{
    cout<<"Summing data of X and Y objects gives me ::  "<<o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
    add(a1,b1);
    return 0;
}
*/

#include <iostream>
using namespace std;

class c2; // Forward declaration of class c2

class c1
{
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &x, c2 &y); // Friend function declaration
};

class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &x, c2 &y); // Friend function declaration
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 obj1;
    c2 obj2;

    obj1.indata(5);
    obj2.indata(10);

    cout << "Values before exchange:" << endl;
    obj1.display();
    obj2.display();

    exchange(obj1, obj2);

    cout << "Values after exchange:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
