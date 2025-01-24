#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream
    ofstream hout("sample07.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name.";
    hout.close();

    // Opening the file for reading
    ifstream hin("sample07.txt");
    string content;

    // Reading the entire content of the file
    getline(hin, content);
    cout << "The content of the file is: " << content << endl;

    hin.close();
    return 0;
}
