#include<iostream>
#include<fstream>
/*
The useful classes for working with files in c++ are:
1. fstreambase 
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

// In order work with files in c++,you will have to open it.Primilary,there are 2 ways to ope a file:
// 1. Using the constructor
// 2. USing the memeber function open() of the class
using namespace std;

int main()
{
    string st = "Ram Bhai";
    string std2;
    string st3;
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); //Write operation
    out<<st; //you can use another name instead of out.


    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); //Reading operation
    // ifstream ram("sample60b.txt"); //we can use another name instead of in.
    
    // in>>std2; //Read operation
    // cout<<std2<<endl;
    // on using cout we are able to get one word only,this is because of this do not print anythng after spaces and of the new line.

    // Solution for the above problem 
    getline(in,st3);
    cout<<st3<<endl;
    getline(in,st3);
    cout<<st3;
    return 0;
}