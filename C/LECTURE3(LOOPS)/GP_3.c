//100,50,25,12.5,.....
#include<stdio.h>
int main()
{
    int a=100;
    for(int i = 1;a>0;i++)
    {
        printf("%d ",a);
        a = a/2;
    }
    return 0;
}