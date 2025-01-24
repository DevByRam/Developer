/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number(n) :: " << endl;
    cin >> n;
    int r = 0;
    int original_number = n;
    while (n != 0)
    {
        int ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout << r << endl;
    int sum = 0;
    sum = original_number + r;
    cout <<"The sum of the original number and it's reverse number is :: "<<sum<<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number n :: "<<endl;
    cin>>n;
    int factorial = 1;
    for(int i=1;i<=n;i++)
    {
        factorial *= i;
    }
    cout<<factorial;
}