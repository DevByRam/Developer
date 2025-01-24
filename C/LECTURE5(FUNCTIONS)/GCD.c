#include<Stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b)
{
    int gcd;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        gcd =i;
    }
    return gcd;
}
int main()
{
    int a;
    printf("enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("the gcd of %d and %d is : %d",a,b,hcf);
}
