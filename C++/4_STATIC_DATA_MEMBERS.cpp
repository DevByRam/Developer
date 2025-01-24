#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // static variable of 0 se initialise karne ki jarrurat nhi he by default 0 se initialise ho jaata he.

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << "and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class employee
int employee::count; // default value is 0
int main()
{
    employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // can not do this as id and count are private

    harry.setData();
    harry.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    lovish.setData();
    lovish.getData();
    employee::getCount();
    return 0;
}