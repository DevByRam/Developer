/*
#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout << "enter m :: " << endl;
    cin >> m; // no of rows
    cout << "enter n :: " << endl;
    cin >> n; // no of columns
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n :: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout<<endl;
    }
    return 0;
}