/* ASCII VALUES 
a->97,b->98,c->99,...........,z->122
A->65,B->66,C->67,...........,Z->90
0->48,1->49,2->50,...........,9->57
*/
// For finding ASCII value use typecasting
// char to ACII value
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter ch :: "<<endl;
    cin>>ch;
    cout<<(int)ch;
}
*/

// ACII value to char
#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"Enter value of x :: "<<endl;
   cin>>x;
   char ch = (char)x;
   cout<<ch;
}