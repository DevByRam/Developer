#include<stdio.h>
int sum(int n)
{
    if(n==0 || n==1)return n;
    int recAns = n+sum(n-1);
    return recAns;
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));
    return 0;
}