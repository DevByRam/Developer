#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        int a = n/2 + 1;//5/2+1=3 in computer
        if(j==a || i==a)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}