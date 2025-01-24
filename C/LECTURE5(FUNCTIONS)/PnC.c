/*#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int r;
    printf("enter the value of r : ");
    scanf("%d",&r);
    int nfac = 1;
    int rfac = 1;
    int nrfac = 1;
    for(int i=1;i<=n;i++)
    {
        nfac = nfac*i;
    }
    for(int i=1;i<=r;i++)
    {
        rfac = rfac*i;
    }
    for(int i=1;i<=(n-r);i++)
    {
        nrfac = nrfac*i;
    }
    int ncr=nfac/(rfac*nrfac);
    printf("value of ncr is %d",ncr);
    return 0;
    }
*/


//use of function
#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r :");
    scanf("%d",&r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}