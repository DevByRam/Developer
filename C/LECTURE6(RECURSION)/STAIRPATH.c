#include<stdio.h>
int stairs(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    //if(n<=2) return n;
    int totalways = stairs(n-1)+stairs(n-2);
    return totalways;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}