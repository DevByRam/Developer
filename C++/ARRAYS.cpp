<<<<<<< HEAD
#include <iostream>
=======
#include<iostream>
>>>>>>> 84cfbae (New Files)
using namespace std;

int main()
{
    int marks[] = {24, 45, 58, 90};
    int mathmarks[4];
    mathmarks[0] = 100;
    mathmarks[1] = 98;
    mathmarks[2] = 84;
    mathmarks[3] = 91;
    cout << "These are math marks :: " << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << endl;
    marks[2] = 60;
    cout << "These are marks :: " << endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // Pointers and arrays
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
        return 0;
}