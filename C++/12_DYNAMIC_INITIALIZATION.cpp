#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}                    // Default constructor
    BankDeposit(int p, int y, float r); // r can be a value like 0.04 which means 4% = 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 4 which is in percent, i.e. 4%.
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // Corrected to use interestRate instead of r
    }
}

void BankDeposit::show()
{
    cout << "Principal amount was " << principal;
    cout << ". Return value after " << years << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2,bd3;
    int p, y, R;
    float r;
    cout << "Enter the value of p, y and r (as a float for interest rate):" << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);

    cout << "Enter the value of p, y and R (as an int for interest rate in %):" << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R);

    bd1.show();
    bd2.show();
    bd3.show();
    return 0;
}
