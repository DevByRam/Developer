//100,97,94,91,........ decreasing ap
#include<stdio.h>
int main()
{
    //int n;
    //printf("enter the value of n");
    //scanf("%d",&n);
    int a = 100;
    //for(int i=1;i<=34;i++)
    for(int i=1;a>0;i++)
    {
        printf("%d ",a);
        a = a - 3;
    }
    return 0;
}