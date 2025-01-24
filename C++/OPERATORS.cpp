/*
post increment
a++ -> first original value is used then it is increased by 1.
post decrement
a-- -> first orginal value is used then it is decreased by 1.

pre increment
++a -> first a is increased by 1 then the updated value is used.
pre decrement 
--a -> first a is decreased by 1 then the updated value is used.
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<a++<<endl;
    // this wil give output as a = 5 and now it is increased by +1 that will not be print bcz print is first then increment is there.
    cout<<a--<<endl;
    // now for this operator the value of a is considered as a=6 not 5 bcz before that the value of a is increased by +1 and this will give output as a = 6 not 5 as first output will print then -1 from a = 6.
    cout<<a<<endl;
    //this will give the value of a as 5 as we get the same value as before as value of a is decreased by 1 that is a becomes 5 from 6.
    cout<<++a<<endl;
    //here first a will increase by 1.so,will give output as a = 6.
    cout<<--a<<endl;
    //here the value of a before performing the code is 6 so on running the code the value of a will decrease by 1 and give output a = 5.
    cout<<a<<endl;
    // here the value remains same that is a = 5 as the value becomes a = 5 after performing the code cout<<--a<<endl.
    int b = 7;
    cout<<(a==b)<<endl;
    //output will be 0 as the statement is false.
    cout<<(a!=b)<<endl;
    //output will be 1 as the statement is true.
    cout<<(a>=b)<<endl;
    // && -> Logical AND
    // || -> Logicak OR
    // ! -> Logical NOT
    int n1,n2;
    cout<<"Enter the value of n1 : "<<endl;
    cout<<"Enter the value of n2 : "<<endl;
    cin>>n1;
    cin>>n2;
    if(n1!=0)
    {
        cout<<(n1/n2)<<endl;
    }
    else{
        cout<<"n2 should be infinity";
    }
    int score;
    cout<<"Enter the score : "<<endl;
    cin>>score;
    if(score>80)
    {
        cout<<"Well done"<<endl;
    }
    else if(score>50)
    {
        cout<<"Can Improve"<<endl;
    }
    else{
        cout<<"Poor Performance"<<endl;
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter 3 numbers : ";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
    {
        cout<<"Max is : "<<n1<<endl;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"Max is : "<<n2<<endl;
    }
    else
    {
        cout<<"Max is : "<<n3<<endl;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter the alphabet : ";
    cin>>alphabet;

    switch(alphabet)
    {
        case 'a':
         cout<<"It is a vowel"<<endl;
         break;
        case 'e':
         cout<<"It is a vowel"<<endl;
         break;
        case 'i':
         cout<<"It is a vowel"<<endl;
         break;
        case 'o':
         cout<<"It is a vowel"<<endl;
         break;
        case 'u':
         cout<<"It is a vowel"<<endl;
         break;
        default:
         cout<<"It is a constant"<<endl;
         break;
    }
    return 0;
}
*/


// TERNARY OPERATOR
#include<iostream> 
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x :: "<<endl;
    cin>>x;
    // Ternary operator 
    // (condition) ? if true : if false;
    (x%2==0) ? cout<<"EVEN" : cout<<"ODD";
    return 0;
}