#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9,int c = 12) // b and c are default arguments
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

// We can define function outside the class also but first we have to declare it inside the class.
void Simple :: printData()
{
    cout<<"The value of data is "<<data1<<","<<data2<<" and "<<data3<<endl;
}

int main()
{
    Simple s(1,4);
    s.printData();

    Simple s1(1,3,9);
    s1.printData();

    Simple s2(1);
    s2.printData();
    return 0;
}