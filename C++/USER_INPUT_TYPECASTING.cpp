/*
#include<iostream>

using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius r of the circle : "<<endl;
    cin>>r;
    float A = 3.14156*r*r;
    cout<<"Area of the circle whose radius is r is :: "<<A<<endl;
    return 0;
}
*/


// TYPECASTING

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    float y = (float)x; // TYPECASTING
    cout<<y/2;
}