/*#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
} 
*/


#include<stdio.h>
int factorial(int n)
{
    if (n==1 || n==0) return 1;
    return n*factorial(n-1);
    /*
    if (n==1 || n==0) return 1;
    int recans = n*factorial(n-1);
    return recans;
    */
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}