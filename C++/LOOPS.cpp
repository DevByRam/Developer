/*
#include<iostream>
using namespace std;
int main()
{
    // FOR loop
    for(int i=19;i<=190;i++)
    {
        if(i%19==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    // OR
    for(int i=18;i<=180;i=i+18)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // Arithmetic progression
    int n;
    cout<<"Enter the value of n :: "<<endl;
    cin>>n;
    // 1 3 5 7 9.......
    for(int i=1;i<=2*n-1;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // Geometric Progression
    int x;
    cout<<"Enter the value of x :: "<<endl;
    cin>>x;
    // 5 15 45......
    int a = 5;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a = a * 3;
    }
    return 0;
}
*/

// SUM OF DIGITS
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :: ";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int ld = n % 10;
        n /= 10;
        sum += ld;
    }
    cout << sum << endl;

    // PRODUCT OF DIGITS

    int x;
    cout << "Enter number(x) :: ";
    cin >> x;
    int product = 1;
    while (x != 0)
    {
        int ld = x % 10;
        x /= 10;
        product *= ld;
    }
    cout << product << endl;
}
*/

// SUM OF ALL EVEN DIGITS OF A NUMBER
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter the number(k) :: ";
    cin >> k;
    int s = 0;
    while (k != 0) {
        int digit = k % 10;
        if (digit % 2 == 0) {
            s += digit;
        }
        k /= 10;
    }
    cout << s << endl;
    return 0;
}