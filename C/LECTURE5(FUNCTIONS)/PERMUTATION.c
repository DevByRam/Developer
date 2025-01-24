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
    printf("enter the value of r : ");
    scanf("%d",&r);
    int npr=factorial(n)/factorial(n-r);
    printf("%d",npr);
    return 0;
}