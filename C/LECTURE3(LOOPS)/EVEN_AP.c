#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    //for(int i=4;i<=3*n+1;i=i+3)
    int a=4;
    for(int i=1;i<=n;i++)
    {
    printf("%d ",a);
    a = a + 3;
    }
    return 0;
}