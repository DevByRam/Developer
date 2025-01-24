#include<stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0)
    {
    int x = power(a,b/2);
    int res = x*x;
    return res;
    }
    if(b%2==1)
    {
        int res = (power(a,b/2)*power(a,b/2))*a;
        return res;
    }
    /*
    if(b==0) return 1;
    if(b==1) return a;
    int x = powerlog(a,b/2);
    if(b%2==0)
    {
    int res = x*x;
    return res;
    }
    else
    {
        int res = x*x*a;
        return res;
    }
    */
}
int main()
{
    int a,b;
    printf("enter the base : ");
    scanf("%d",&a);
    printf("enter the power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d is raised to the power %d is %d",a,b,p);
    return 0;
}
