#include <iostream>
using namespace std;

class Bakery
{
public:
    string cakeFlavors[5] = {"choco", "vanilla", "pineapple", "red velvet", "carrot"};
    int cakePrices[5] = {250, 200, 240, 300, 220};

    string cookieFlavors[5] = {"chocolate chip", "oatmeal raisin", "sugar", "peanut butter", "snickerdoodle"};
    int cookiePrices[5] = {150, 160, 120, 140, 130};

    void displayCakeFlavors()
    {
        cout << "Available cake flavors:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "- " << cakeFlavors[i] << " (Price: " << cakePrices[i] << ")\n";
        }
    }

    void displayCookieFlavors()
    {
        cout << "Available cookie flavors:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "- " << cookieFlavors[i] << " (Price: " << cookiePrices[i] << ")\n";
        }
    }
};

class Cake : public Bakery
{
private:
    int basePrice = 300;

public:
    void calculateTotalPrice()
    {
        string fav;
        cout << "Enter your favorite cake flavor: ";
        cin >> fav;

        for (int i = 0; i < 5; i++)
        {
            if (cakeFlavors[i] == fav)
            {
                int totalPrice = basePrice + cakePrices[i];
                cout << "Total price of " << fav << " cake: " << totalPrice << endl;
                return;
            }
        }
        cout << "Cake flavor not available." << endl;
    }
};

class Cookies : public Bakery
{
private:
    int basePrice = 100;

public:
    void calculateTotalPrice()
    {
        string fav;
        cout << "Enter your favorite cookie flavor: ";
        cin >> fav;

        for (int i = 0; i < 5; i++)
        {
            if (cookieFlavors[i] == fav)
            {
                int totalPrice = basePrice + cookiePrices[i];
                cout << "Total price of " << fav << " cookies: " << totalPrice << endl;
                return;
            }
        }
        cout << "Cookie flavor not available." << endl;
    }
};

int main()
{
    Bakery bakery;
    bakery.displayCakeFlavors();
    bakery.displayCookieFlavors();

    int choice;
    cout << "Choose 1 for Cake or 2 for Cookies: ";
    cin >> choice;

    if (choice == 1)
    {
        Cake c;
        c.calculateTotalPrice();
    }
    else if (choice == 2)
    {
        Cookies ck;
        ck.calculateTotalPrice();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
