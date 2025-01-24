#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
};

typedef struct student
{
    int studentId;
    char House;
    float Income;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // struct employee Harry;
    // Harry.eId = 1;
    // Harry.favchar = 'c';
    // Harry.salary = 2500.50;
    // cout << "The value is " << Harry.salary << endl;
    // cout << "The value is " << Harry.favchar << endl;
    // cout << "The value is " << Harry.eId << endl;

    // cout << endl;

    // struct employee shubham;
    // shubham.eId = 2;
    // shubham.favchar = 'd';
    // shubham.salary = 1245.26;
    // cout << "The value of " << shubham.salary << endl;
    // cout << "The value of " << shubham.favchar << endl;
    // cout << "The value of " << shubham.eId << endl;

    // cout<<endl;

    // ep William;
    // William.studentId = 14525;
    // William.House = 'K';
    // William.Income = 150000;
    // cout<< "The value of "<<William.studentId<<endl;
    // cout<< "The value of "<<William.House<<endl;
    // cout<< "The value of "<<William.Income<<endl;


    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    // cout<<m1.rice;
    cout<<m1.car;
    
    cout<<endl;

    // enum ---> Enumeration
    enum Meal{ breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    cout<<endl;

    // Defining enum Gender 
    enum Gender { Male, Female }; 
  
    // Creating Gender type variable 
    Gender gender = Male; 
  
    switch (gender) { 
    case Male: 
        cout << "Gender is Male"; 
        break; 
    case Female: 
        cout << "Gender is Female"; 
        break; 
    default: 
        cout << "Value can be Male or Female"; 
    } 

    cout<<endl;
    // Defining enum Year 
enum year { 
    Jan, 
    Feb, 
    Mar, 
    Apr, 
    May, 
    Jun, 
    Jul, 
    Aug, 
    Sep, 
    Oct, 
    Nov, 
    Dec 
}; 

    int i; 
  
    // Traversing the year enum 
    for (i = Jan; i <= Dec; i++) 
        cout << i << " "; 
  
    return 0; 
}