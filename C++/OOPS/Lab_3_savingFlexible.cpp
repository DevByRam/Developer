#include <iostream>
using namespace std;

class Flexible_FD;

class Saving_Account {
private:
    static int accNoCounter;
    int accNo;
    float balance;
    static const float threshold;
    static const float roi;

public:
    Saving_Account(float initial_balance) {
        accNo = ++accNoCounter;
        balance = initial_balance;
        if (balance < threshold) {
            balance = threshold;
        }
    }

    void addInterest() {
        balance += balance * (roi / 100);
    }

    void viewInterest()  {
        cout << "Interest for Saving Account " << accNo << ": "<<balance * (roi / 100) << endl;
    }

    void displayBalance()  {
        cout << "Saving Account " << accNo << " Balance: " <<balance << endl;
    }
   
    friend void transferToFD(Saving_Account &SAcc, Flexible_FD &FdAcc, float amount);
    friend void transferToSaving(Flexible_FD &FdAcc, Saving_Account &SAcc, float amount);

    friend class Flexible_FD;
};

int Saving_Account::accNoCounter = 0;
const float Saving_Account::threshold = 1000.0f;
const float Saving_Account::roi = 4.0f; 

class Flexible_FD {
private:
    static int accNoCounter;
    int accNo;
    float balance;
    static const float threshold;
    static const float roi;

public:
    Flexible_FD(float initial_balance) {
        accNo = ++accNoCounter;
        balance = initial_balance;
        if (balance < threshold) {
            balance = threshold;
        }
    }

    void addInterest() {
        balance += balance * (roi / 100);
    }

    void viewInterest()  {
        cout << "Interest for Flexible FD " << accNo << ": "<< balance * (roi / 100) << endl;
    }

    void displayBalance()  {
        cout << "Flexible FD " << accNo << " Balance: " <<balance << endl;
    }
    
    friend void transferToFD(Saving_Account &SAcc, Flexible_FD &FdAcc, float amount);
    friend void transferToSaving(Flexible_FD &FdAcc, Saving_Account &SAcc, float amount);

    friend class Saving_Account;
};

int Flexible_FD::accNoCounter = 0;
const float Flexible_FD::threshold = 5000.0f;
const float Flexible_FD::roi = 6.0f; 

void transferToFD(Saving_Account &SAcc, Flexible_FD &FdAcc, float amount) {
    if (SAcc.balance - amount >= Saving_Account::threshold) {
        SAcc.balance -= amount;
        FdAcc.balance += amount;
        cout << "Transferred " << amount << " from Saving Account " << SAcc.accNo 
             << " to Flexible FD " << FdAcc.accNo << "." << endl;
    } else {
        cout << "Insufficient funds in Saving Account after threshold." << endl;
    }
}

void transferToSaving(Flexible_FD &FdAcc, Saving_Account &SAcc, float amount) {
    if (FdAcc.balance - amount >= Flexible_FD::threshold) {
        FdAcc.balance -= amount;
        SAcc.balance += amount;
        cout << "Transferred " << amount << " from Flexible FD " << FdAcc.accNo 
             << " to Saving Account " << SAcc.accNo << "." << endl;
    } else {
        cout << "Insufficient funds in Flexible FD after threshold." << endl;
    }
}

int main() {
    Saving_Account SAcc(2000);   
    Flexible_FD FdAcc(6000);     

    int choice;
    float amount;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Interest to Saving Account\n";
        cout << "2. Add Interest to Flexible FD\n";
        cout << "3. View Interest in Saving Account\n";
        cout << "4. View Interest in Flexible FD\n";
        cout << "5. Transfer from Saving Account to Flexible FD\n";
        cout << "6. Transfer from Flexible FD to Saving Account\n";
        cout << "7. Display Saving Account Balance\n";
        cout << "8. Display Flexible FD Balance\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                SAcc.addInterest();
                cout << "Interest added to Saving Account." << endl;
                break;
            case 2:
                FdAcc.addInterest();
                cout << "Interest added to Flexible FD." << endl;
                break;
            case 3:
                SAcc.viewInterest();
                break;
            case 4:
                FdAcc.viewInterest();
                break;
            case 5:
                cout << "Enter amount to transfer from Saving Account to Flexible FD: ";
                cin >> amount;
                transferToFD(SAcc, FdAcc, amount);
                break;
            case 6:
                cout << "Enter amount to transfer from Flexible FD to Saving Account: ";
                cin >> amount;
                transferToSaving(FdAcc, SAcc, amount);
                break;
            case 7:
                SAcc.displayBalance();
                break;
            case 8:
                FdAcc.displayBalance();
                break;
            case -1:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != -1);

    return 0;
}
