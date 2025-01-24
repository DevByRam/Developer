#include <iostream>
using namespace std;
int main()
{
    cout << "Hello,Welcome to the cpp Tutorial";
    cout << endl; // For changing the line or we can use cout<<"\n";,
    cout << "Hello Guys!" << endl;
    cout << "Today we are going to learn cpp.Are You ready Guys!" << endl;
    // whatever is written in inverted commas compiler reads it as a text suppose we write cout<<"4*3"; so this will give the output as 4*3 not 12 whereas cout<<4*3; will give the output as 12.lets execute this
    cout << "4*3" << endl;
    cout << 4 * 3 << endl;
    int x; // x is a variable which will take only integer values.
    x = 7;
    cout << "x" << endl; // This will give output as x because x is in inverted commas.
    cout << x << endl;
    int y = 9;
    cout << x + y << endl;
    // Updation
    int z = 45;
    cout << z <<endl;
    z = 90; // z is updated.
    cout << z <<endl;
    std::cout << "lets learn more deeply in cpp";
    return 0;
}